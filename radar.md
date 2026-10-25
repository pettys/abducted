# 3D radar

The cockpit radar represents nearby objects around the currently controlled ship. Flattened range rings establish a reference plane; a contact's blip is displaced vertically from its footprint on that plane. A vertical stem connects the two positions, conveying altitude without needing a freely rotating 3D display.

This description comes from static code analysis. Routine addresses and drawing operations are recovered; descriptive variable names and geometric meanings below are interpretations. Exact projection constants have not been validated against a running DOS capture.

## Modern Radar

The radar should display in the projection part of the cockpit as it did in the legacy game, with R cycling through the ranges.

The reference-plane ellipses are faint and color-coded. Each color always represents a fixed distance in world coordinate units; zoom changes its displayed size, never its distance. These distances are modern design choices, separate from the decoded legacy detection cutoffs.

| Ring color | Fixed distance (units) |
| --- | --- |
| Red | 1,000 |
| Yellow | 3,000 |
| Green | 6,000 |
| Gray | 12,000 |

Horizontal radius is `distance / (2 ** setting)`; vertical radius is one quarter of that, retaining the flattened legacy reference plane. Hide rings beyond the selected detection cutoff or outside the projection pad (horizontal radius greater than 64 display units). Also hide rings smaller than 5 display units to avoid clutter at the center.

| Radar cutoff / setting | Visible rings |
| --- | --- |
| 3,800 / 6 (near) | Red, yellow |
| 6,400 / 7 (default) | Red, yellow, green |
| 16,384 / 8 (far) | Yellow, green, gray |

Range changes animate over 450 ms with smooth easing. Ring radii and contact positions share the interpolated zoom; the detection cutoff interpolates with it. Rings and contacts fade near visibility boundaries. Repeated R presses retarget from the current zoom, including the far-to-near wrap. Explicit radar range changes always animate, including when the browser reports a reduced-motion preference. Radar zoom continues while flight is paused.

Rings are coordinate-distance guides on the reference plane. Detection still uses the legacy approximate distance helper; its cutoff does not exactly match a geometric circle.

## Legacy Radar

### Code locations

All main drawing routines are in [analysis/mapped/resident.c](analysis/mapped/resident.c). Search for the address or function name:

| Address / function | Responsibility |
| --- | --- |
| `1505:068a` / `FUN_1505_068a` | Draw radar background, rings, and center; iterate contacts |
| `1505:0886` / `FUN_1505_0886` | Range check, position projection, stem, blip, selected-target bracket |
| `1505:0c52` / `FUN_1505_0c52` | Integer ellipse drawing |
| `1505:0ecc` / `FUN_1505_0ecc` | Plot symmetric ellipse points |
| `1897:0502` / `FUN_1897_0502` | Construct orientation matrix |
| `1eea:0b5a` / `FUN_1eea_0b5a` | Draw line |
| `1eea:0b9f` / `FUN_1eea_0b9f` | Plot pixel |

[analysis/mapped/ovl_14.c](analysis/mapped/ovl_14.c) calls the radar renderer and handles range changes. For uncertain arithmetic, consult [disassembly.asm](analysis/mapped/disassembly.asm), especially `1505:0886` through `1505:0c52`; the decompiler's split 32-bit values and register-based math helpers are imperfect.

### Frame and rings

`FUN_1505_068a` centers the display using half its width and height, draws the rings and center pixel, and builds an orientation matrix from the controlled object's angles. It walks an object array with a `0x3c`-byte stride, excluding the controlled object and inactive/excluded object types.

Range is controlled by `DAT_3000_ab29`, clamped to 6â€“8 by the input code; the initial value is 7. It affects both contact scaling and the distance cutoff. The ellipse calls use these radii and small vertical center offsets, relative to the radar center:

| Setting | Ellipses: horizontal radius, vertical radius, center Y offset |
| --- | --- |
| 6 | `(48, 12, +4)`, `(24, 6, +2)` |
| 7 | `(44, 11, +4)`, `(20, 5, +2)`, `(8, 2, +1)` |
| 8 | `(40, 10, +4)`, `(16, 4, +1)` |

The 4:1 flattening gives the impression of circles on a tilted plane. They are approximately concentric visually, with deliberately offset screen centers.

### Decoded range cutoffs

The three table words used by `FUN_1505_0886` are decoded, not guessed:

| Setting | Cutoff in original coordinate units | Lateral scale |
| --- | --- | --- |
| 6 | 3,800 | 1 pixel / 64 units |
| 7 (initial) | 6,400 | 1 pixel / 128 units |
| 8 | 16,384 | 1 pixel / 256 units |

The comparison is `distance <= DS:[0x7fe + 2 * setting]` (`1505:08c0`–`1505:08cc`). DS is `2e67`; relative to `game_data.bin` at `2a22:0000`, DS begins at byte `0x4450`. Table offsets `0x4c5a`, `0x4c5c`, `0x4c5e` contain `d8 0e`, `00 19`, `00 40`. Original `LIGHTSPD.EXE` file offsets are `0x18eca`–`0x18ecf`.

These are thresholds for the legacy approximate distance helper, not exact spherical radii. `FUN_1edc_000e` takes absolute integer components, sorts high/low, adds `low >> 2` and (when positive) `3 * (2*low - high) >> 4`, then subtracts `result >> 6`. Radar nests that helper as `length(x, length(z, y))`, using its zero-threshold fast path. Contacts exactly at the threshold remain included.

`game.html` uses those cutoffs and lateral scales, starts at setting 7, and cycles 7 → 8 → 6 with R or the range button. Fixed-distance, color-coded ellipses replace the legacy setting-dependent ring geometry; distances and visibility rules are specified under Modern Radar above. Both contact positions and ring radii scale by `1 / (2 ** setting)`. Observer-relative projection, vertical stems, the decoded `0x1000` (22.5°) tilt, and signed vertical compression are retained in a floating-point reconstruction. Exact DOS fixed-point orientation/rounding remains unverified. All current contacts are ships, drawn with a neutral blip; the prototype has no target-selection system or other legacy object types.

Six added ships straddle the three cutoffs at reset. Visible radar counts are 8 / 10 / 12 at settings 6 / 7 / 8, out of 13 total ships. The last ship lies beyond maximum radar range. Rotating changes projection, not range membership; moving changes both.

### Contact projection

For each eligible object, `FUN_1505_0886`:

1. Receives its world position minus the controlled object's position.
2. Rejects contacts beyond a range-dependent cutoff, using the game's distance helper.
3. Applies the orientation matrix, then another trigonometric transform involving `DAT_2a22_4c3c`.
4. Computes a shared screen X and two screen Y values: the blip and its reference-plane footprint.
5. Applies integer shifts and vertical compression, then draws the contact.

Conceptually, rather than as an exact translation of the original arithmetic:

```text
relative = contact.position - observer.position
(lateral, height, depth) = rotate_into_observer_frame(relative)

x      = centerX + scaled(lateral)
planeY = centerY + flattened(depth)
blipY  = planeY - projected(height)

drawLine(x, planeY, x, blipY)
drawBlip(x, blipY)
```

The actual code stores X in `DAT_2a22_da16`, blip Y in `DAT_2a22_da1e`, and footprint Y in `DAT_2a22_da22`. Its explicit line call uses the same X at both ends. Thus the stem is intentionally vertical; it is not an edge of a rendered ship model. The reference plane follows the observer's orientation rather than a universal galaxy plane.

### Symbols and selection

- Object type comes from byte `+0x32` in the object record.
- Type 1 draws a palette-index-9 point without a stem.
- Other displayed types draw stems; types 2â€“6 use different colors or small pixel patterns. Do not assign ship/projectile names to these numeric types without tracing their producers.
- A contact matching `DAT_3000_aad1` gets a four-line rectangular bracket around its blip.
- Stem colors use palette indices 2 or 10 based on an intermediate projection sign. That test is not established as a simple above/below-plane flag.

### Porting boundary

The subsystem can be separated into object filtering, relative-coordinate projection, and 2D drawing. The conceptual display is clear enough to recreate now. A faithful port still requires resolving fixed-point math, angle conventions, range-table values, palette context, and exact rounding, then comparing representative contacts above/below and ahead/behind the ship against DOS output.
