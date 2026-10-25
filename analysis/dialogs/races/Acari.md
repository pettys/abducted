# Acari

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 2: ACARI2.BIN

Animation: `acaric.pan`. [Raw records](../ACARI2.json); [encounter pseudocode](../../mapped/ovl_22.c).

### Record 0

> Are you the female of your species?

- `0`: YES
- `1`: NO
- `2`: LEAVE
- `3`: FIGHT

### Record 1

> Friendliest greetings, warm one. We the Acari are
> more than pleased to see your shapely form again

- `0`: I HAVE IMPORTANT BUSINESS
- `1`: REFUEL AND LEAVE
- `2`: LEAVE
- `3`: FIGHT

### Record 2

> Friendliest greetings, warm one. We the Acari are
> more than pleased to see your shapely form again

- `0`: I HAVE IMPORTANT BUSINESS
- `1`: REFUEL AND LEAVE
- `2`: LEAVE

### Record 3

> Earth monster, you frighten us. Why have you come
> here?

- `0`: YOU MUST EVACUATE THIS PLANET
- `1`: REFUEL AND LEAVE
- `2`: LEAVE
- `3`: FIGHT

### Record 4

> Earth monster, you frighten us. Why have you come
> here?

- `0`: YOU MUST EVACUATE THIS PLANET
- `1`: REFUEL AND LEAVE
- `2`: LEAVE

### Record 5

> Heu! I am the handsome male of my species. Please,
> open your space capsule and let us engage in
> discussion. 

- `0`: OPEN CAPSULE
- `1`: NO THANKS
- `2`: LEAVE
- `3`: FIGHT

### Record 6

> Greetings, Earth-creature. I, too, am the male of my
> species.  What brotherhood, what camaraderie shall
> we share! Let us seek closer contact immediately.
> Open your capsule, that we may penetrate its
> recesses. 

- `0`: OPEN CAPSULE
- `1`: NO THANKS
- `2`: LEAVE
- `3`: FIGHT

### Record 7

> Warrg, I am saddened. What joy we could have shared.

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 8

> Ho, ho. We know what business you wish for. But
> strangely, our respect in you has diminished since
> last we met. 

- `0`: TRADE
- `1`: INFORMATION
- `2`: PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT

### Record 9

> Ho, ho. We know what business you wish for. But
> strangely, our respect in you has diminished since
> last we met. 

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE

### Record 10

> Ho, ho. How can you expect us to take you
> seriously?

- `0`: EXIT

### Record 11

> We leave with alacrity. May we never meet again.

- `0`: LEAVE

### Record 12

> Very good. What joy we feel upon accomplishing our
> heartfelt desires. 

- `0`: TRADE
- `1`: INFORMATION
- `2`: PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT

### Record 13

> Very good. What joy we feel upon accomplishing our
> heartfelt desires. 

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE

### Record 14

> In the joy of the moment, there can be no objections
> to such a simple request. Do you agree to this:
> "The Earth people concur that the company of the
> Acari people is pleasant. Therefore, we agree that
> the Earth people and the Acari people should not
> make war, but the alternative."

- `0`: SIGN TREATY
- `1`: DO NOT SIGN
- `2`: LEAVE
- `3`: FIGHT

### Record 15

> We are reliably informed by the Cicisbeo that you
> humans have a genetic and mental capacity for
> violence unsurpassed by other species. Pardon our
> caution. 

- `0`: INFORMATION
- `1`: LEAVE
- `2`: FIGHT

### Record 16

> We are reliably informed by the Cicisbeo that you
> humans have a genetic and mental capacity for
> violence unsurpassed by other species. Pardon our
> caution. 

- `0`: INFORMATION
- `1`: LEAVE

### Record 17

> Now that is done, what else would your heart
> desire?

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE

### Record 18

> Well, treaties are not for everyone. Is there
> anything else I can supply you with?

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 19

> What would you like to know, Earth-human?

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DACIANS
- `3`: DIGNEE
- `4`: HALICOT
- `5`: EXIT

### Record 20

> How many Broodmasters does it take to change a
> lighting circuit?  Two. One changes the circuit,
> and the other shoots him and takes the credit. 

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DACIANS
- `3`: DIGNEE
- `4`: HALICOT
- `5`: EXIT

### Record 21

> Those Cicisbeo are certainly pulchritudinous. Heu!
> We'd love to get into their philibegs! In fact,
> they're the primary reason we joined the Peace
> Alliance in the first place. 

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DACIANS
- `3`: DIGNEE
- `4`: HALICOT
- `5`: EXIT

### Record 22

> The Dacians are muscular and handsome. We're
> impressed. 

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DACIANS
- `3`: DIGNEE
- `4`: HALICOT
- `5`: EXIT

### Record 23

> Pronounce Dignee with the accent on the second
> syllable. 

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DACIANS
- `3`: DIGNEE
- `4`: HALICOT
- `5`: EXIT

### Record 24

> These little Halicot buggers appeal to us even more
> than those luscious Cicisbeo. 

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: DACIANS
- `3`: DIGNEE
- `4`: HALICOT
- `5`: EXIT
