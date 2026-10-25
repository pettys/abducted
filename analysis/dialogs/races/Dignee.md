# Dignee

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 2: DIGNEE2.BIN

Animation: `digneec.pan`. [Raw records](../DIGNEE2.json); [encounter pseudocode](../../mapped/ovl_29.c).

### Record 0

> * Felicitous * Auspicious *
> * %s * Cordial *
> * Auspicious * Amicable *

- `0`: I COME IN PEACE
- `1`: I NEED A PLANET
- `2`: TRADE
- `3`: INFORMATION
- `4`: LEAVE

### Record 1

> * Felicitous * Auspicious *
> * %s * Cordial *
> * Auspicious * Amicable *

- `0`: I NEED A PLANET
- `1`: TRADE
- `2`: INFORMATION
- `3`: LEAVE

### Record 2

> * Wary * Prudence *
> * %s self *
> * Circumspection *

- `0`: I COME IN PEACE
- `1`: I NEED A PLANET
- `2`: TRADE
- `3`: INFORMATION
- `4`: LEAVE

### Record 3

> * Wary * Prudence *
> * %s self *
> * Circumspection *

- `0`: I NEED A PLANET
- `1`: TRADE
- `2`: INFORMATION
- `3`: LEAVE

### Record 4

> * %s self *
> * Admonishment * Forewarn *
> * Counsel *

- `0`: I COME IN PEACE
- `1`: I NEED A PLANET
- `2`: TRADE
- `3`: INFORMATION
- `4`: LEAVE

### Record 5

> * %s self *
> * Admonishment * Forewarn *
> * Counsel *

- `0`: I NEED A PLANET
- `1`: TRADE
- `2`: INFORMATION
- `3`: LEAVE

### Record 6

> * Hostility * Enmity *
> * %s Earth-foe *
> * Bellicose * Inimical *

- `0`: I COME IN PEACE
- `1`: I NEED A PLANET
- `2`: LEAVE
- `3`: FIGHT

### Record 7

> * Hostility * Enmity *
> * %s Earth-foe *
> * Bellicose * Inimical *

- `0`: I NEED A PLANET
- `1`: LEAVE
- `2`: FIGHT

### Record 8

> * Credence * Reliability *
> * Confidence * Unsuspicious *
> * Treaty = Peace * Eternal *
> * Voluntary * Treaty? *

- `0`: YES, I AGREE TO A PEACE TREATY
- `1`: A PEACE TREATY BETWEEN US IS STILL PREMATURE
- `2`: LEAVE

### Record 9

> * Credence * Reliability *
> * Confidence * Unsuspicious *
> * Potentate Supreme = Treaty *
> * Self unauthorized *

- `0`: I SEE
- `1`: I DON'T UNDERSTAND
- `2`: LEAVE

### Record 10

> * Misgivings * Irresolution *
> * Suggestion * Suggestion *
> * Enemy * Freedom Alliance *
> * Earthman * Destroy *
> * Gratitude * %s *

- `0`: YOU WISH ME TO ATTACK THE FREEDOM ALLIANCE?
- `1`: LEAVE

### Record 11

> * Distrust * Suspicion * 
> * Hesitation *
> * Enemy * Freedom Alliance *
> * Aggression * Earthman * 
> * Destruction * Proof

- `0`: YOU WISH ME TO ATTACK THE FREEDOM ALLIANCE?
- `1`: LEAVE

### Record 12

> * Derision * Scorn *
> * Suggestion * Suggestion * 
> * Insertion * Trailblazer *
> * Cloaca *
> * Amusement * Ridicule *

- `0`: TAKE OFFENSE
- `1`: LEAVE
- `2`: FIGHT

### Record 13

> * Sympathy * Accord *
> * Suitable * Uninhabited *
> * %s * 

- `0`: Thank You.
- `1`: LEAVE

### Record 14

> * Destruction * Freedom Alliance * 
> * Desirable * Camaraderie *
> * Reciprocity * Interchange *
> * Habitable * Planet * 
> * Coordinates = Habitable *

- `0`: I GET A WORLD IF I FIGHT THE FREEDOM ALLIANCE?
- `1`: LEAVE

### Record 15

> * Destruction * Freedom Alliance * 
> * Desirable * Camaraderie *
> * Reciprocity * Interchange *
> * Habitable * Planet * 
> * Coordinates = Habitable *

- `0`: I GET A WORLD IF I FIGHT THE FREEDOM ALLIANCE?
- `1`: LEAVE

### Record 16

> * Vilify * Reproach * Abuse *
> * Suggestion * Suggestion * 
> * Colonize * Cloaca *
> * Suitable * Amusement *

- `0`: TAKE OFFENSE
- `1`: LEAVE

### Record 17

> * Affirmation * Positivity * 
> * Confirmation *

- `0`: I NEED SOME INFORMATION FIRST
- `1`: I NEED SOME EQUIPMENT FIRST
- `2`: LEAVE

### Record 18

> * Travel * Dignee Home *
> * Treaty * Unauthorized * 
> * Treaty * Absent * Here *

- `0`: I MUST GO TO THE HOMEWORLD FOR A TREATY?
- `1`: LEAVE

### Record 19

> * Suspicion * Distrust *
> * Information * Cicisbeo * 
> * Earthman = Evil *
> * Disproof? *

- `0`: I COME IN PEACE
- `1`: I NEED A PLANET
- `2`: INFORMATION
- `3`: LEAVE
- `4`: FIGHT

### Record 20

> * Wisdom * Species * Advice *

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BALATHIDE
- `3`: THE CICISBEO
- `4`: THE FREEDOM ALLIANCE
- `5`: HABITABLE PLANETS
- `6`: NEXT...
- `7`: EXIT

### Record 21

> * Wisdom * Species * Advice *

- `0`: THE HALICOT
- `1`: THE LOVE ALLIANCE
- `2`: THE MONAD
- `3`: THE VORTICELLA
- `4`: YOURSELVES
- `5`: PREV...
- `6`: EXIT

### Record 22

> * Comrades * Peace Alliance *
> * Weak * Benign * Protected *

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BALATHIDE
- `3`: THE CICISBEO
- `4`: THE FREEDOM ALLIANCE
- `5`: HABITABLE PLANETS
- `6`: NEXT...
- `7`: EXIT

### Record 23

> * Robbers * Criminals * 
> * Plunder *
> * Ruin * Worlds * Pillage *

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BALATHIDE
- `3`: THE CICISBEO
- `4`: THE FREEDOM ALLIANCE
- `5`: HABITABLE PLANETS
- `6`: NEXT...
- `7`: EXIT

### Record 24

> * Contamination * Parasites * 
> * Infestation *
> * Suggestion * Avoidance * 

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BALATHIDE
- `3`: THE CICISBEO
- `4`: THE FREEDOM ALLIANCE
- `5`: HABITABLE PLANETS
- `6`: NEXT...
- `7`: EXIT

### Record 25

> * Comrades * Peace Alliance *
> * Egocentric * Amusing * 
> * Harmless *

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BALATHIDE
- `3`: THE CICISBEO
- `4`: THE FREEDOM ALLIANCE
- `5`: HABITABLE PLANETS
- `6`: NEXT...
- `7`: EXIT

### Record 26

> * Reward * Reward * Reward *
> * Destruction * Starbases *
> * Broodmasters * Malign * 
> * Broodmasters * Greedy * 
> * Dacians * Stooges *

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BALATHIDE
- `3`: THE CICISBEO
- `4`: THE FREEDOM ALLIANCE
- `5`: HABITABLE PLANETS
- `6`: NEXT...
- `7`: EXIT

### Record 27

> * Planets = known *
> * Suggestion * Suggestion *
> * Reciprocity * Interchange *
> * Earthling * Befriend * Us *
> * Planets * Learn * Planets *

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BALATHIDE
- `3`: THE CICISBEO
- `4`: THE FREEDOM ALLIANCE
- `5`: HABITABLE PLANETS
- `6`: NEXT...
- `7`: EXIT

### Record 28

> * Obscure * Secluded * Remote *
> * Caution *
> * Advice * Advice *
> * Ignorance = Bliss * 

- `0`: THE HALICOT
- `1`: THE LOVE ALLIANCE
- `2`: THE MONAD
- `3`: THE VORTICELLA
- `4`: YOURSELVES
- `5`: PREV...
- `6`: EXIT

### Record 29

> * Rivals * Competition *
> * Automata * Manufactured *
> * Jot * Dogmatic *
> * Venge * Offended = Easily *

- `0`: THE HALICOT
- `1`: THE LOVE ALLIANCE
- `2`: THE MONAD
- `3`: THE VORTICELLA
- `4`: YOURSELVES
- `5`: PREV...
- `6`: EXIT

### Record 30

> * Secretive * Reclusive *
> * Questionable *
> * Powerful *

- `0`: THE HALICOT
- `1`: THE LOVE ALLIANCE
- `2`: THE MONAD
- `3`: THE VORTICELLA
- `4`: YOURSELVES
- `5`: PREV...
- `6`: EXIT

### Record 31

> * Terror * Violent * 
> * Unthinking * Uncaring *

- `0`: THE HALICOT
- `1`: THE LOVE ALLIANCE
- `2`: THE MONAD
- `3`: THE VORTICELLA
- `4`: YOURSELVES
- `5`: PREV...
- `6`: EXIT

### Record 32

> * Leaders * Peace Alliance * 
> * Dignee *

- `0`: THE HALICOT
- `1`: THE LOVE ALLIANCE
- `2`: THE MONAD
- `3`: THE VORTICELLA
- `4`: YOURSELVES
- `5`: PREV...
- `6`: EXIT

### Record 33

> THE DIGNEE DO NOT WISH TO DO BATTLE AT THIS TIME. THEIR MORAL
> INFLUENCE MAKES IT IMPOSSIBLE TO OBEY YOUR COMMAND. EXTREME
> CAUTION ADVISED.

- `0`: EXIT

### Record 34

> * Suspicion * Distrust *
> * Information * Cicisbeo * 
> * Earthman = Evil *
> * Disproof? *

- `0`: I NEED A PLANET
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT
