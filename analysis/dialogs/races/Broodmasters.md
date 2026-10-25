# Broodmasters

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 1: BROOD1.BIN

Animation: `brooc.pan`. [Raw records](../BROOD1.json); [encounter pseudocode](../../mapped/ovl_16.c).

### Record 0

> I welcome you, friend Earthman. Let us plot together, and this
> star cluster shall be ours to share between our two species.

- `0`: TELL ME MORE.
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 1

> I welcome you, friend Earthman. Let us plot together, and this
> star cluster shall be ours to share between our two species.

- `0`: PEACE TREATY
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 2

> I welcome you powerful Earthman. I am Broodmaster, humble
> governor of this poor worldlet. How may I best serve your
> honorable self ?

- `0`: REQUEST PEACE TREATY
- `1`: TRADE
- `2`: INFORMATION
- `3`: LEAVE
- `4`: FIGHT

### Record 3

> I welcome you powerful Earthling. I am a Broodmaster, humble
> governor of this poor worldlet. Have mercy upon me and I will
> be your slave.

- `0`: REQUEST PEACE TREATY
- `1`: REQUEST TRADE
- `2`: INFORMATION
- `3`: LEAVE
- `4`: FIGHT

### Record 4

> I welcome you powerful Earthling. I am a Broodmaster, humble
> governor of this poor worldlet. Have mercy upon me and I will
> be your slave.

- `0`: EXTORT GOODS
- `1`: LEAVE
- `2`: FIGHT

### Record 5

> WARNING! The item just taken on board contained a concealed TDX
> bomb.  Its detonation has caused extensive damage,

- `0`: LEAVE

### Record 6

> Clearly, there are too many lesser species cluttering up this
> area.  Unfortunately, I lack the physical courage necessary to
> exterminate other races except when I possess overwhelming
> force.  However, you Earthlings lack this disability, so you
> could destroy them with relative ease.  With our assistance.
> The plan is simple : we shall destroy the starbases of the
> Cicisbeo, the Fel, and the Lutin.  To perform this feat, I can
> provide ample supplies and support.

- `0`: REQUEST PEACE TREATY
- `1`: INFORMATION
- `2`: TRADE
- `3`: REFUEL AND LEAVE
- `4`: LEAVE
- `5`: FIGHT

### Record 7

> After careful consideration, I have determined that a treaty
> at this time would be counterproductive. The threats and the
> machinations of the Cicisbeo, Fel, and Lutin are such that we
> cannot currently agree to a treaty.  However, if you could
> destroy the starbases of these enemies, we could agree to
> certain mutually beneficial arrangements.

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 8

> Clearly such an agreement would be premature.  If you could
> demonstrate your benign nature by assisting us in a few simple
> tasks and dealings with our neighbors within this cluster ... ?

- `0`: WHICH NEIGHBORS ?
- `1`: REQUEST TRADE INSTEAD
- `2`: INFORMATION
- `3`: LEAVE
- `4`: FIGHT

### Record 9

> We are as yet unsure of you and your motives. Hence we
> hesitate to deal with you. If you could demonstrate your
> benign nature by assisting us in a few simple tasks and
> dealings with our neighbors within this cluster ... ?

- `0`: WHICH NEIGHBORS ?
- `1`: REQUEST PEACE TREATY INSTEAD
- `2`: INFORMATION
- `3`: LEAVE
- `4`: FIGHT

### Record 10

> The Cicisbeo, Fel, and Lutin are all species that this cluster
> can do without. Destroy their ships and starbases, and our
> gratitude would be heartfelt.

- `0`: REQUEST TRADE
- `1`: REQUEST PEACE TREATY
- `2`: INFORMATION
- `3`: LEAVE
- `4`: FIGHT

### Record 11

> We now dominate this cluster to the near-exclusion of other
> beings. You have served us well, and we choose to reward
> you by agreeing to such a treaty, thus permitting your species
> to establish a colony in this our cluster.

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 12

> Greetings, Friend Earthling.

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 13

> The Didinium and Stentor are pragmatic entities. Cicisbeo, Fel,
> and Lutin encumber certain planetary surfaces, which could be
> put to much better use.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 14

> Self-centered beings whose brains are consumed by fripperies.
> Their combat craft are light-weight and destroyed with ease.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 15

> Beings of great worth. They are not easy to trade with, but we
> have the secret - simply give them the coordinates of an
> undefended world, and they will cheerfully provide you with
> goods.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 16

> Unimportant weaklings. Someday we will have overwhelming
> military superiority. Then we shall eliminate them.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 17

> Pesky raiders that are impossible to deal intelligently with.
> Their ships are armed with a devastating weapon that you must
> take care to avoid.  It only fires straight forwards.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 18

> An enigmatic being. His ships are to be feared, since they
> evince extreme cooperation and have no fear of destruction.
> He is rumored to be capable of time travel.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 19

> We Broodmasters are an adaptable species, which can function 
> in almost any environment. I would be glad to reserve planets
> suitable for Earthling life, signalling my fellow Broodmasters
> that they must not colonize such worlds.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 20

> The Universe is a wide and dangerous place. Listen carefully
> to my advice, and you will be safer, however, I cannot
> guarantee success.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 21

> A pirate race that makes its living by preying on the weak and
> helpless. Your destruction of their evil base will make the
> universe safer.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 22

> Dangerous beings, with a unique secret weapon. Their weapon
> works by superceding your own ship's engine flux, and turning
> your own engines against yourself.  The best way to foil them
> is to completely turn off your engines.  Then you can just
> float in space and blast them with your cannons.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 23

> Galactic fodder. These beings are cowardly and flee at the
> first sign of combat. In an attempt to distract you, they'll
> drop small packets of cargo behind their ship as they flee.
> Steer your ship into these packets to collect them. If you
> destroy their starbase, we will favor you.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 24

> A fast and dangerous foe. They respect only force and strength.
> If you impress them with a show of force, or act aggressively
> when talking to them, they'll calm down and become much easier
> to manipulate. The destruction of their bases will ease travel
> in the cluster, and we will be most grateful.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 25

> Merchants. If you can talk them into trading with you, they
> have some great stuff available.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 26

> We Broodmasters are an adaptable species, which can function in
> almost any environment. I would be glad to reserve planets suit-
> able for Earthling life, signalling my fellow Broodmasters that
> they must not colonize such worlds.

- `0`: CICISBEO
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

## Cluster 2: BROOD2.BIN

Animation: `brooc.pan`. [Raw records](../BROOD2.json); [encounter pseudocode](../../mapped/ovl_26.c).

### Record 0

> I Welcome you, friend Earthman. Let us plot together, and
> this star cluster shall be ours to share between our two
> species.

- `0`: TELL ME MORE.
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 1

> I Welcome you powerful Earthman. I am Broodmaster, humble
> governor of this poor worldlet. How may I best serve your
> honorable self?

- `0`: REQUEST PEACE TREATY
- `1`: TRADE
- `2`: INFORMATION
- `3`: LEAVE
- `4`: FIGHT

### Record 2

> I Welcome you powerful Earthling. I am a Broodmaster,
> humble governor of this poor worldlet. Have mercy upon me
> and I will be your slave.

- `0`: REQUEST PEACE TREATY
- `1`: REQUEST TRADE
- `2`: INFORMATION
- `3`: LEAVE
- `4`: FIGHT

### Record 3

> I Welcome you powerful Earthling. I am a Broodmaster,
> humble governor of this poor worldlet. Have mercy upon me
> and I will be your slave.

- `0`: EXTORT GOODS
- `1`: LEAVE
- `2`: FIGHT

### Record 4

> Clearly, there are too many lesser species cluttering up
> this area.  Unfortunately, I lack the physical courage
> necessary to exterminate other races except when I possess
> overwhelming force.  However, you Earthlings lack this
> disability, so you could destroy them with relative ease. 
> With our assistance.  The plan is simple: we shall destroy
> the starbases of the Peace and Love alliances.  To perform
> this feat, I can provide ample supplies and support.

- `0`: PEACE TREATY
- `1`: INFORMATION
- `2`: GET SUPPLIES
- `3`: LEAVE
- `4`: FIGHT

### Record 5

> After careful consideration, I have determined that a
> treaty at this time would be counterproductive. The threats
> and the machinations of the Peace and Love alliances are
> such that we cannot currently agree to a treaty.  However,
> if you could destroy the starbases of these enemies, we
> could agree to certain mutually beneficial arrangements.

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 6

> Clearly such an agreement would be premature.  If you could
> demonstrate your benign nature by assisting us in a few
> simple tasks and dealings with our neighbors within this
> cluster ...?

- `0`: WHICH NEIGHBORS ?
- `1`: REQUEST TRADE INSTEAD
- `2`: LEAVE
- `3`: FIGHT

### Record 7

> We are as yet unsure of you and your motives. Hence we
> hesitate to deal with you. If you could demonstrate your
> benign nature by assisting us in a few simple tasks and
> dealings with our neighbors within this cluster ...?

- `0`: WHICH NEIGHBORS ?
- `1`: REQUEST PEACE TREATY INSTEAD
- `2`: LEAVE
- `3`: FIGHT

### Record 8

> The Peace and Love alliances are species that this cluster
> can do without. Destroy their ships and starbases, and our
> gratitude would be heartfelt.

- `0`: REQUEST TRADE
- `1`: REQUEST PEACE TREATY
- `2`: LEAVE
- `3`: FIGHT

### Record 9

> With the end of the %s alliance, we are now in a position
> to begin extermination of competing species in this
> cluster. You have served us well, and we choose to reward
> you by reserving a planet for your species.  When our
> policy of extermination has been accomplished, we can talk
> again about peace treaties.

- `0`: LEAVE
- `1`: FIGHT

### Record 10

> We now dominate this cluster to the near-exclusion of other
> beings. You have served us well, and we choose to reward
> you by agreeing to such a treaty, thus permitting your
> species to establish a colony in this our cluster.

- `0`: LEAVE
- `1`: FIGHT

### Record 11

> The Peace and Love alliances are not only a threat to our
> preeminence, but encumber certain planetary surfaces, which
> could be put to much better use.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 12

> The Peace and Love alliances are not only a threat to our
> preeminence, but encumber certain planetary surfaces, which
> could be put to much better use.

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 13

> Misguided minions of the Dignee, and members of the
> besotted Peace Alliance.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 14

> Scavengers on a cosmic scale. They seek out weak worlds and
> squeeze them like fruit rinds. Sometimes they have good raw
> materials for sale. 

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 15

> Feeble hirelings of the Jot, members of the Love Alliance.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 16

> Misguided minions of the Dignee, and members of the
> besotted Peace Alliance. Self-centered beings whose brains
> are consumed by fripperies. Their combat craft are mostly
> light-weight and destroyed easily.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 17

> Our closest allies. Do not attack them, for they are your
> friends, too. 

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 18

> Tyrannical masters of the Peace Alliance. Talking with them
> is dangerous, for they have some type of emotional
> influence over your decisions. Shoot on sight or avoid
> completely. 

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 19

> An unimportant species. The universe teems with such dross.

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 20

> Hateful dictators which oppress the deprived members of the
> Love Alliance.

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 21

> We advise you to avoid his planet at all costs. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 22

> Feeble hirelings of the Jot, members of the Love Alliance.
> Do not antagonize them, for they never forget an injury. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 23

> Practical entities perfectly willing to engage in mutually-
> beneficial trade. However, do not visit them unless your
> ship is quite well-armed. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 24

> We Broodmasters are an adaptable species, which can function
> in almost any environment. I would be glad to reserve
> planets suitable for Earthling life, signalling my fellow
> Broodmasters that they must not colonize such worlds. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 25

> Misguided minions of the Dignee, and members of the
> besotted Peace Alliance.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 26

> Strange beings which we do not understand. They appear to
> be under the impression that they are a sort of galactic
> philanthropist, whose job is to help out damaged planets by
> refurbishing their civilization.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 27

> Feeble hirelings of the Jot, members of the Love Alliance.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 28

> Misguided minions of the Dignee, and members of the
> besotted Peace Alliance. A pirate race that makes its
> living by preying on the weak and helpless. Your
> destruction of their evil base will make the universe a
> better place. 

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 29

> Noble defenders of self-determination and liberty for all
> peoples everywhere. 

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 30

> Tyrannical masters of the Peace Alliance. Any contact with
> them is likely to contaminate your brain with their
> pestilential philosophy.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE AUTOMATA
- `3`: THE CICISBEO
- `4`: THE DACIANS
- `5`: THE DIGNEE
- `6`: NEXT...
- `7`: EXIT

### Record 31

> They are not familiar to us. However, should they need our
> aid, we would be willing to assist them against all
> potential threats to their democratic rights. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 32

> Hateful dictators which oppress the deprived members of the
> Love Alliance.

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 33

> He is a myth, a legend. No educated individual believes in
> such frippery.

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 34

> Feeble hirelings of the Jot, members of the Love Alliance.
> Their ships are slow and poorly-armed. Draw near to them to
> fight most efficiently.

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 35

> Practical entities perfectly willing to engage in mutually-
> beneficial trade.

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT

### Record 36

> We Broodmasters are an adaptable species, which can function
> in almost any environment. I would be glad to reserve
> planets suitable for Earthling life, signalling my fellow
> Broodmasters that they must not colonize such worlds. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELF
- `6`: PREV...
- `7`: EXIT
