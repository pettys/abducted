# Automata

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 2: AUTO2.BIN

Animation: `autoc.pan`. [Raw records](../AUTO2.json); [encounter pseudocode](../../mapped/ovl_24.c).

### Record 0

> A) Information
> B) Combat
> C) Depart
> D) Join the Love Alliance

- `0`: A
- `1`: B
- `2`: C
- `3`: D

### Record 1

> A) Information
> B) Combat
> C) Depart
> D) Join the Love Alliance
> E) Install Philanthropy Circuit

- `0`: A
- `1`: B
- `2`: C
- `3`: D
- `4`: E

### Record 2

> A) Information
> B) Altruism
> C) Combat *
> D) Depart
> E) Join the Love Alliance
> * NOTE: Disables altruism function

- `0`: A
- `1`: B
- `2`: C
- `3`: D
- `4`: E

### Record 3

> A) Information
> B) Combat
> C) Depart

- `0`: A
- `1`: B
- `2`: C

### Record 4

> A) Information
> B) Combat
> C) Depart
> D) Install Philanthropy Circuit

- `0`: A
- `1`: B
- `2`: C
- `3`: D

### Record 5

> A) Information
> B) Altruism
> C) Combat *
> D) Depart
> * NOTE: Disables altruism function

- `0`: A
- `1`: B
- `2`: C
- `3`: D

### Record 6

> 1. The act of permitting an entry into the Love Alliance. 
> 2. Consent required, especially formal consent. 
> 3. Authorization via Jot essential to success. 

- `0`: DONE

### Record 7

> Select a subject:
> A) The Freedom Alliance
> B) The Love Alliance
> C) The Peace Alliance
> D) Done

- `0`: A
- `1`: B
- `2`: C
- `3`: D

### Record 8

> 1. A personal foe, opposed to the Love Alliance. 2. An 
> enemy in war *. 3. An antagonist; opponent. 4. Entities
> that serve to harm, oppose, or impede. 
> * note: a state of peace currently exists between the Love
> and Freedom Alliances.

- `0`: DONE

### Record 9

> 1. (a) A formal pact of confederation between alien species
> in common cause. (b) The species so conjoined, i.e., 
> Automata, Jot, and Venge. 2. A union or connection 
> stimulated by shared interest. 3. A congruence of quality;
> affinity. 4. The state of being allied with this group. 

- `0`: DONE

### Record 10

> 1. A group wishing to equal or surpass the Love Alliance,
> and which desires many of the same goals as the Love 
> Alliance. 2. A rival.

- `0`: DONE

### Record 11

> 1. (a) A formal pact of confederation between alien species
> in common cause.  This pact is no longer extant.

- `0`: DONE
