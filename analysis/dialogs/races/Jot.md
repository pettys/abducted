# Jot

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 2: JOT2.BIN

Animation: `jotc.pan`. [Raw records](../JOT2.json); [encounter pseudocode](../../mapped/ovl_31.c).

### Record 0

> choose

- `0`: I WISH TO JOIN THE LOVE ALLIANCE
- `1`: I WISH TO JOIN THE PEACE ALLIANCE
- `2`: I WISH TO JOIN THE FREEDOM ALLIANCE
- `3`: LEAVE

### Record 1

> ask

- `0`: INFORMATION
- `1`: LEAVE

### Record 2

> sell

- `0`: TRADE
- `1`: LEAVE

### Record 3

> begone

- `0`: LEAVE

### Record 4

> die

- `0`: FIGHT

### Record 5

> obey

- `0`: AGREE TO JOIN LOVE ALLIANCE
- `1`: REFUSE TO JOIN LOVE ALLIANCE
- `2`: LEAVE

### Record 6

> praise

- `0`: ALL HAIL THE LOVE ALLIANCE!
- `1`: LEAVE

### Record 7

> peace

- `0`: SIGN PEACE TREATY
- `1`: LEAVE

### Record 8

> boon

- `0`: INFORMATION
- `1`: TRADE
- `2`: LEAVE

### Record 9

> praise

- `0`: ALL HAIL THE LOVE ALLIANCE!
- `1`: LEAVE

### Record 10

> know

- `0`: THE FREEDOM ALLIANCE
- `1`: THE LOVE ALLIANCE
- `2`: THE PEACE ALLIANCE
- `3`: EXIT

### Record 11

> done

- `0`: EXIT
