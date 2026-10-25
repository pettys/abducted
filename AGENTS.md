# Lightspeed project guide

Original DOS assets: `exe/Lightspe/`; preserve these. Commands run from this folder; Python scripts find bundled dependencies under `tools/`.

- **3D:** `ship-viewer/model-catalog.json` contains 127 models from 20 `.ZDT` packs, including geometry, palettes, parts, and LOD metadata. Highest-detail geometry; articulated parts in neutral pose. Polygon loops reconstructed from edges; normals point outward. Original shading and some conditional drawing remain unported. Viewer orientation lives in `geometry.js` / `viewer.js`. Preview: `ship-viewer/index.html`. Rebuild: `python analysis/scripts/build_model_catalog.py`.
- **Images:** `analysis/images/`: all 56 `.PIC` images as PNG, indices, and JSON metadata. Palette fallback is `COCKSP2.PIC`; scene-specific colors and four-bit packing need runtime verification. Rebuild: `python analysis/scripts/export_readable_assets.py`.
- **Alien graphics:** `analysis/aliens/<PACK>/`: sprites, contact sheets, metadata, animation bytecode for 17 `.PAN` packs. Playback unported. Rebuild: `python analysis/scripts/extract_alien_visuals.py`.
- **Dialog:** `analysis/dialogs/races/`: one Markdown file per race; `analysis/dialogs/`: JSON/TXT datasets and catalog. Conditional records aren't conversation order. Rebuild: `python analysis/scripts/extract_dialogs.py`, then `python analysis/scripts/export_readable_assets.py`.
- **Outcomes/state:** `analysis/dialogs/interaction-map.json` documents findings and uncertainties. Race scripts: `analysis/mapped/ovl_16.c` through `ovl_34.c`; shared UI: `ovl_13.c`. Attitude, treaties, and history are separate fields.
- **Radar:** [radar.md](radar.md) describes rings, contact projection, altitude stems, range settings, and recovered drawing routines.
- **Code research:** `analysis/mapped/` has maps, pseudocode, disassembly, strings, references. Start with `code-map.html`. Pseudocode isn't rebuildable C; switches/indirect calls can be incomplete. `Open-Ghidra.bat` opens the mapped project. Helpers: `analysis/scripts/`.

Use CRLF. Distinguish decoded data from inferred behavior.
