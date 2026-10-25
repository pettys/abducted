# Balathide

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 2: BALATH2.BIN

Animation: `bathc.pan`. [Raw records](../BALATH2.json); [encounter pseudocode](../../mapped/ovl_25.c).

### Record 0

> Welcome to our system, tasty Earthman. We are
> Balathide. We wish to help you. To receive
> our benefit, you must lower your shields.
> Please lower your shields. 

- `0`: LOWER SHIELDS
- `1`: TRADE
- `2`: INFORMATION
- `3`: PEACE TREATY
- `4`: LEAVE
- `5`: FIGHT

### Record 1

> Please lower your shields at once. We and our
> grubs cannot assist you until you do so.

- `0`: LOWER SHIELDS
- `1`: TRADE
- `2`: INFORMATION
- `3`: PEACE TREATY
- `4`: LEAVE
- `5`: FIGHT

### Record 2

> Now that you have cooperated, our grubs can
> greatly enhance your pleasure and security.
> We will make beautiful together. Our grubs
> signal that your energy systems are just
> fine. You are even tastier than we had
> imagined. 

- `0`: WHAT DID YOU DO?
- `1`: TRADE
- `2`: INFORMATION
- `3`: KNOW ANY SECRETS?
- `4`: PEACE TREATY
- `5`: LEAVE
- `6`: FIGHT

### Record 3

> We are Balathide. We are happy to serve you,
> and to have you serve our grubs. Our grubs
> appreciate the great service you and your
> starship are doing for us. 

- `0`: REMOVE YOUR GRUBS!
- `1`: TRADE
- `2`: INFORMATION
- `3`: KNOW ANY SECRETS?
- `4`: PEACE TREATY
- `5`: LEAVE
- `6`: FIGHT

### Record 4

> As per your request, we assisted you. Now you
> possess the great benefit of Balathide grubs
> in your engine room. When you return to your
> ship, you may bask in the pleasure of this
> joyful union. 

- `0`: REMOVE YOUR GRUBS!
- `1`: TRADE
- `2`: INFORMATION
- `3`: PEACE TREATY
- `4`: KNOW ANY SECRETS?
- `5`: LEAVE
- `6`: FIGHT

### Record 5

> We are a non-technological species and
> possess no components for trade. Also, the
> planets under our control have been sucked
> dry by the fecundity of our grubs, so we
> cannot even provide goods for commerce. All
> we can give is two things: birth and advice.

- `0`: REMOVE YOUR GRUBS!
- `1`: INFORMATION
- `2`: PEACE TREATY
- `3`: KNOW ANY SECRETS?
- `4`: LEAVE
- `5`: FIGHT

### Record 6

> We are a peaceful species and never engage in
> war. A treaty with us would be superfluous. 

- `0`: REMOVE YOUR GRUBS!
- `1`: TRADE
- `2`: INFORMATION
- `3`: KNOW ANY SECRETS?
- `4`: LEAVE
- `5`: FIGHT

### Record 7

> Vile human! What heartless monsters you must
> be to remove helpless grubs from their home.
> What audacity you possess to return devoid
> of the grubs with which we entrusted you.
> Depart in vileness!

- `0`: LEAVE

### Record 8

> We cannot comprehend such an attitude. How
> could one refuse a gift so grand as that of
> life itself! Thriving, teeming life, inside
> your very own engine room! What a tremendous
> benefit. No, we could not deprive you of the
> joys of watching your ship give birth to a
> mature Balathide.

- `0`: IT WILL GIVE BIRTH?
- `1`: TRADE
- `2`: INFORMATION
- `3`: PEACE TREATY
- `4`: KNOW ANY SECRETS?
- `5`: LEAVE
- `6`: FIGHT

### Record 9

> Do not worry, you are assured of the jolly
> companionship and pleasure of the grubs for
> many many years to come. The completion of
> the Balathide life cycle takes approximately
> 4.7 million years. At that time, they will
> be mature, and your vessel will become the
> center of a wondrous world composed of
> spawn-matter.  Endless spawning -- the stuff
> of legend!

- `0`: TRADE
- `1`: INFORMATION
- `2`: PEACE TREATY
- `3`: KNOW ANY SECRETS?
- `4`: LEAVE
- `5`: FIGHT

### Record 10

> We Balathide are a long-lived species, and
> have accumulated a great deal of
> information. Here is what we can tell you. 

- `0`: ACARI
- `1`: ATHDALDE
- `2`: AUTOMATA
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 11

> We Balathide are a long-lived species, and
> have accumulated a great deal of
> information. Here is what we can tell you. 

- `0`: DIGNEE
- `1`: HALICOT
- `2`: JOT
- `3`: MONAD
- `4`: VENGE
- `5`: VORTICELLA
- `6`: PREV...
- `7`: EXIT

### Record 12

> They are sex-crazed. If you give in to them,
> they will obey you.

- `0`: ACARI
- `1`: ATHDALDE
- `2`: AUTOMATA
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 13

> They are mad for profit. If you destroy the
> starbase they indicate, they will give you
> metal, organics, radioactives, and water. 

- `0`: ACARI
- `1`: ATHDALDE
- `2`: AUTOMATA
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 14

> They are robots. If you can obtain a
> philanthropy circuit and give it to them,
> they will henceforth be willing to trade. 

- `0`: ACARI
- `1`: ATHDALDE
- `2`: AUTOMATA
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 15

> They are power-hungry. Destroy their enemies
> to make them your friends. 

- `0`: ACARI
- `1`: ATHDALDE
- `2`: AUTOMATA
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 16

> They are vain and will make unreasonable
> requests on you. Obey them to gain their
> friendship. 

- `0`: ACARI
- `1`: ATHDALDE
- `2`: AUTOMATA
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 17

> They serve the Broodmasters. Destroy the
> Broodmasters' foes to please them. 

- `0`: ACARI
- `1`: ATHDALDE
- `2`: AUTOMATA
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 18

> They are aristocratic. You must visit their
> home planet to gain a peace treaty. 

- `0`: DIGNEE
- `1`: HALICOT
- `2`: JOT
- `3`: MONAD
- `4`: VENGE
- `5`: VORTICELLA
- `6`: PREV...
- `7`: EXIT

### Record 19

> They are innocuous but tasty. 

- `0`: DIGNEE
- `1`: HALICOT
- `2`: JOT
- `3`: MONAD
- `4`: VENGE
- `5`: VORTICELLA
- `6`: PREV...
- `7`: EXIT

### Record 20

> They have amazing mental powers. They can
> actually control your actions and responses.

- `0`: DIGNEE
- `1`: HALICOT
- `2`: JOT
- `3`: MONAD
- `4`: VENGE
- `5`: VORTICELLA
- `6`: PREV...
- `7`: EXIT

### Record 21

> He is annoyingly judgmental. Do not visit him
> if you have been destroying starbases, even
> if you were justified. 

- `0`: DIGNEE
- `1`: HALICOT
- `2`: JOT
- `3`: MONAD
- `4`: VENGE
- `5`: VORTICELLA
- `6`: PREV...
- `7`: EXIT

### Record 22

> They are vindictive. Once they are your
> friends, they will make continual demands.
> Obey these demands to maintain the
> friendship.  Once they are hostile to you,
> they will remain that way forever. 

- `0`: DIGNEE
- `1`: HALICOT
- `2`: JOT
- `3`: MONAD
- `4`: VENGE
- `5`: VORTICELLA
- `6`: PREV...
- `7`: EXIT

### Record 23

> They are impressionable. If you regularly run
> away from your enemies, they will scorn you.

- `0`: DIGNEE
- `1`: HALICOT
- `2`: JOT
- `3`: MONAD
- `4`: VENGE
- `5`: VORTICELLA
- `6`: PREV...
- `7`: EXIT

### Record 24

> The Dignee are pleased when you destroy bases
> of the Freedom Alliance. You may not attack
> the Dignee unless they permit it.  They know
> the location of a secret world. 

- `0`: THANKS

### Record 25

> The Venge are personified vindictiveness.
> Avoid them. Do not befriend them or visit
> them, as you value your life. 

- `0`: THANKS

### Record 26

> The Broodmasters have a secret enemy that
> they are not aware of.  If you cozen up to
> them and their allies, you may find this
> enemy, and use his envy to your advantage.

- `0`: THANKS

### Record 27

> Once you have signed a peace treaty with the
> Jot, you must refrain from attacking other
> Love Alliance ships, or they may break the
> treaty. 

- `0`: THANKS

### Record 28

> The Monad adjudges you on what destruction
> you have wreaked in the cluster. If you are
> harmless, he may even reward you. 

- `0`: THANKS
