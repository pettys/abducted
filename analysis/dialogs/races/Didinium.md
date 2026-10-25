# Didinium

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 1: DIDIN1.BIN

Animation: `didc.pan`. [Raw records](../DIDIN1.json); [encounter pseudocode](../../mapped/ovl_18.c).

### Record 0

> SECRET   FRIENDS  WE
> BASE     WE       REWARD
> HERE     WANT     YOU
> YOU      GIVE     CLEVER
> FIND     REWARD   YOU

- `0`: PEACE TREATY
- `1`: INFORMATION
- `2`: REWARD ?
- `3`: LEAVE
- `4`: FIGHT

### Record 1

> TREATIES WE       DIDINIUM
> NOT      NOT      FREE
> POSSIBLE ANSWER   VESSELS
> WE       FOR      WE
> GIVE     CAPTAINS NOT
> APOLOGY  DIDINIUM CONTROL

- `0`: INFORMATION
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 2

> NO       ALL      SORRY
> DATA     DATA     DATA
> HERE     INFO     LACKING
> NO       HELD     APOLOGY
> INFO     DIDINIUM NO
> HERE     CAPTAINS DATA

- `0`: PEACE TREATY
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 3

> YOU      WE       YOU
> DESTROY  DESIRE   DESTROY
> ANY      LOCATION ANY
> WORLD    GIVE     STATION
> PLANET   YOU      WE
> DEFENSE  GREAT    TRADE
> STATION  REWARD   MUCH

- `0`: PEACE TREATY
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 4

> YOU      WE       YOU
> TELL     GRATEFUL TELL
> LOCATION WE       LOCATION
> WORLD    TRADE    NOW
> LACKING  WE       WE
> STATION  REWARD   LISTEN

- `0`: PROVIDE LOCATION
- `1`: REFUSE TO PROVIDE SUCH COORDINATES
- `2`: LEAVE
- `3`: FIGHT

### Record 5

> WE       DIDINIUM YOU
> GRATEFUL VESSELS  GREAT
> MOST     VISIT    HELP
> GRATEFUL SOON     FRIEND

- `0`: ASK FOR REWARD
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 6

> KIND     MUST     WE
> EARTHMAN KNOW     SHOW
> HUMAN    LOCATION GOOD
> GREAT    YOU      FAITH
> NEED     TELL     WE
> KNOW     LOCATION TRADE

- `0`: PROVIDE LOCATION
- `1`: TRADE
- `2`: INFORMATION
- `3`: PEACE TREATY
- `4`: LEAVE
- `5`: FIGHT

### Record 7

> POWERFUL WE       FINE
> EARTHMAN PRAISE   GOODS
> HUMAN    WE       YOU
> YOU      GIVE     EXCEL
> GREAT    GOODS    YES

- `0`: CONTINUE

### Record 8

> MUCH     YOU      FIND
> GRATEFUL HELP     MORE
> THANK    US       SUCH
> YOU      AGAIN    WORLDS

- `0`: TRADE
- `1`: LEAVE
- `2`: FIGHT

### Record 9

> TREATIES WE       DIDINIUM
> NOT      NOT      FREE
> POSSIBLE ANSWER   VESSELS
> WE       FOR      WE
> GIVE     CAPTAINS NOT
> APOLOGY  DIDINIUM CONTROL

- `0`: CONTINUE

### Record 10

> NO       ALL      SORRY
> DATA     DATA     DATA
> HERE     INFO     LACKING
> NO       HELD     APOLOGY
> INFO     DIDINIUM NO
> HERE     CAPTAINS DATA

- `0`: CONTINUE
