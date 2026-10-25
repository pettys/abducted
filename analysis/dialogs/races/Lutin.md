# Lutin

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 1: LUTIN1.BIN

Animation: `lutinc.pan`. [Raw records](../LUTIN1.json); [encounter pseudocode](../../mapped/ovl_21.c).

### Record 0

> I am self Lutin hunter. You are human warship
> pilot. Query interchange is permissible?
> Query you are desirous of interchange?

- `0`: INTERCHANGE AFFIRMATIVE
- `1`: INTERCHANGE NEGATIVE
- `2`: WHAT DOES "INTERCHANGE" MEAN ?
- `3`: LEAVE
- `4`: FIGHT

### Record 1

> Query you seek what interchange pattern?
> Possibilities: aggressive, mutualistic,
> instructive.

- `0`: IMPRESS VIA SHOW OF FORCE
- `1`: OFFER TO EXCHANGE GOODS
- `2`: OFFER PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT

### Record 2

> Query you intend reaction aggressive?
> Or reaction cautious?

- `0`: REACTION AGGRESSIVE
- `1`: REACTION CAUTIOUS
- `2`: WHAT DO YOU MEAN BY "REACTION" ?
- `3`: LEAVE
- `4`: FIGHT

### Record 3

> Interchange means reciprocal activity. Query
> interchange is permissible and desirous by
> yourself?

- `0`: INTERCHANGE AFFIRMATIVE
- `1`: INTERCHANGE NEGATIVE
- `2`: LEAVE
- `3`: FIGHT

### Record 4

> "Peace" unrecognized vocable. Search initiated
> in human history banks for definition. Query
> you will await results of "Peace" vocable
> check?

- `0`: WAIT FOR COMPUTER CHECK
- `1`: COMPUTER CHECK UNNECESSARY. PLEASE CONTINUE.
- `2`: LEAVE
- `3`: FIGHT

### Record 5

> Responses exhausted. Query you are desirous
> of?

- `0`: OFFER PEACE TREATY
- `1`: ASK FOR INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 6

> Computer check unequivocal. "Peace" vocable
> used by human historians to indicate periods
> of preparation for warfare. Destruction
> interaction confirmed desirable by human
> warship pilot. Laser battery lock-on 100%.
> Spinal gun arming sequences initiated.
> Battle-sights operable. Begin combat.

- `0`: FIGHT

### Record 7

> Reaction: human warship pilot response. Query
> you intend aggression or you intend caution?

- `0`: REACTION AGGRESSIVE
- `1`: REACTION CAUTIOUS
- `2`: LEAVE
- `3`: FIGHT

### Record 8

> Inappropriate. Memory banks inaccessible and
> forbidden to human warship pilot. Departure
> now necessitated.

- `0`: LEAVE

### Record 9

> Destructive interaction confirmed desirable
> by human warship pilot. Laser battery lock-on
> 100%. Spinal gun arming sequence initiated.
> Battle-sights operable. Begin combat.

- `0`: FIGHT
