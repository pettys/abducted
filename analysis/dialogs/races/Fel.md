# Fel

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 1: FEL1.BIN

Animation: `felc.pan`. [Raw records](../FEL1.json); [encounter pseudocode](../../mapped/ovl_20.c).

### Record 0

> Greetings, friend. Our treaty guaran-
> tees perpetual peace. Your desires?

- `0`: INFORMATION
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 1

> We are the Fel. What do you wish?

- `0`: INFORMATION
- `1`: TRADE
- `2`: PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT

### Record 2

> We are suspicious. You may mean to
> harm the Fel. What have you come for?

- `0`: I COME IN PEACE
- `1`: "I JUST WANT SOME INFORMATION"
- `2`: "I MEAN NO HARM. I WANT TO TRADE"
- `3`: LEAVE
- `4`: FIGHT

### Record 3

> The Fel and you can never be friends.
> Begone.

- `0`: LEAVE

### Record 4

> We would value such a treaty highly.
> But we have not known you long enough.
> Perhaps later, after we have had a
> chance to observe your behavior.

- `0`: INFORMATION
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 5

> Please sign below :
> As representative of the human
> species, I decree mutual friendship
> and trust with the Fel. Should the
> Fel be baselessly attacked by a third
> party, the humans promise to come to
> the Fel's aid. Should the humans be
> baselessly attacked by a third party,
> the Fel promise to come to humanity's
> aid.

- `0`: SIGN
- `1`: REFUSE TO SIGN
- `2`: LEAVE
- `3`: FIGHT

### Record 6

> We are not sure you have indeed come
> in peace. We will watch you and your
> actions for a while before coming to
> any conclusions.

- `0`: INFORMATION
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 7

> We are now friends. You now possess
> the coordinates of habitable planet
> 1342. We are glad to welcome your
> species into this cluster.

- `0`: INFORMATION
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 8

> Nothing is wrong with our treaty. You
> must now leave.

- `0`: LEAVE

### Record 9

> We know little. But we can tell you
> what we know.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: HUMAN PLANETS
- `6`: EXIT

### Record 10

> Great cowards, and very treacherous.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: HUMAN PLANETS
- `6`: EXIT

### Record 11

> Who?

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: HUMAN PLANETS
- `6`: EXIT

### Record 12

> Bad pirates.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: HUMAN PLANETS
- `6`: EXIT

### Record 13

> We know little, but try to avoid them.
> They are dangerous to talk to.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: HUMAN PLANETS
- `6`: EXIT

### Record 14

> Bad pirates.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: HUMAN PLANETS
- `6`: EXIT

### Record 15

> We know one such planet. We refer to it
> as 1342. We have many foes in the
> cluster and dare not reveal this world's
> location to a stranger. When we know
> you better and have signed a peace
> treaty, we will give you the
> coordinates.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: HUMAN PLANETS
- `6`: EXIT

### Record 16

> Great cowards, and very treacherous.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: EXIT

### Record 17

> Who?

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: EXIT

### Record 18

> Bad pirates.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: EXIT

### Record 19

> We know little, but try to avoid them.
> They are dangerous to talk to.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: EXIT

### Record 20

> Bad pirates.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: EXIT

### Record 21

> We know little. But we can tell you
> what we know.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DIDINIUM
- `3`: LUTIN
- `4`: STENTOR
- `5`: EXIT
