# Cicisbeo

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 1: CICIS1.BIN

Animation: `cicisc.pan`. [Raw records](../CICIS1.json); [encounter pseudocode](../../mapped/ovl_17.c).

### Record 0

> Felicitations, fortunate one. The glory you behold is named Gold
> Moon Rising of the Cicisbeo. Our gratification at your wonderful
> acts is intense and our condescension most great. What reward
> do you desire?

- `0`: PERPETUAL PEACE BETWEEN OUR NATIONS.
- `1`: INFORMATION
- `2`: TRADE
- `3`: LEAVE
- `4`: FIGHT

### Record 1

> Felicitations, fortunate one. The glory you behold is named Gold
> Moon Rising of the Cicisbeo. Our gratification at your wonderful
> acts is intense and our condescension most great. What reward
> do you desire?

- `0`: INFORMATION
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 2

> You are welcome. Your wondering eyes behold Jade Flowerbud. We
> of the Cicisbeo consider you a friend. In what manner can we
> interact?

- `0`: INFORMATION
- `1`: I'D LIKE TO OPEN TRADING
- `2`: LEAVE
- `3`: FIGHT

### Record 3

> You now descry the glorious form of Summer Breeze. I belong to
> the Cicisbeo, who grace the cosmos with our presence. How have
> you chosen to serve us?

- `0`: I SERVE BEST WHEN PROPERLY INFORMED.
- `1`: I'D LIKE TO OPEN TRADING
- `2`: LEAVE
- `3`: FIGHT

### Record 4

> No doubt unwittingly, you have offended our calm existence. The
> entity of wondrous color whom you now witness is titled Silver
> Whip. Go, and do not return until you have redeemed yourself.

- `0`: LEAVE
- `1`: FIGHT

### Record 5

> Granted. We of the Cicisbeo happily concede the slight abrid-
> gement of our personal liberty necessary to ensure peace and
> prosperity between yourselves and us. The peace agreement is
> now considered to be in effect. Are there other humble wishes
> of yours which we can grant?

- `0`: INFORMATION
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 6

> We of the Cicisbeo value our treasures highly, and are careful
> only to deal in sordid mercantile matters with those that have
> demonstrated their faithfulness and fortitude.  Were you to
> serve us by destroying our foes or bringing us useful data, your
> status might improve.

- `0`: WHICH FOES DO YOU REFER TO ?
- `1`: WHAT TYPE OF DATA ?
- `2`: HOW ABOUT SOME INFORMATION INSTEAD ?
- `3`: LEAVE
- `4`: FIGHT

### Record 7

> We of the Cicisbeo value our treasures highly, and are careful
> only to deal in sordid mercantile matters with those that have
> demonstrated their faithfulness and fortitude. Were you to
> serve us by bringing us useful data, your status might improve.

- `0`: WHAT TYPE OF DATA ?
- `1`: HOW ABOUT SOME INFORMATION INSTEAD ?
- `2`: LEAVE
- `3`: FIGHT

### Record 8

> We of the Cicisbeo value our treasures highly, and are careful
> only to deal in sordid mercantile matters with those that have
> demonstrated their faithfulness and fortitude.

- `0`: HOW ABOUT SOME INFORMATION INSTEAD ?
- `1`: LEAVE
- `2`: FIGHT

### Record 9

> We of the Cicisbeo value our treasures highly, and are careful
> only to deal in sordid mercantile matters with those that have
> demonstrated their faithfulness and fortitude. Were you to serve
> us by destroying our foes, your status might improve.

- `0`: WHICH FOES DO YOU REFER TO ?
- `1`: HOW ABOUT SOME INFORMATION INSTEAD ?
- `2`: LEAVE
- `3`: FIGHT

### Record 10

> The Didinium are abhorred by all civilized worlds. In addition,
> the Stentor are dangerous pirates.

- `0`: INFORMATION
- `1`: YOU MENTIONED DATA EARLIER. WHAT TYPE OF DATA ?
- `2`: LEAVE
- `3`: FIGHT

### Record 11

> The Didinium are abhorred by all civilized worlds. In addition,
> the Stentor are dangerous pirates.

- `0`: INFORMATION
- `1`: LEAVE
- `2`: FIGHT

### Record 12

> We know little about the Fel species. More information on these
> entities would certainly be beneficial to our lovely brains.

- `0`: INFORMATION
- `1`: YOU MENTIONED FOES EARLIER. WHO ARE THEY ?
- `2`: LEAVE
- `3`: FIGHT

### Record 13

> We know little about the Fel species. More information on these
> entities would certainly be beneficial to our lovely brains.

- `0`: INFORMATION
- `1`: LEAVE
- `2`: FIGHT

### Record 14

> This information is most fascinating. It will take some time to
> digest. Please leave and return at a more opportune time. If you
> require equipment before your departure, you may purchase it.

- `0`: TRADE FOR EQUIPMENT
- `1`: WAIT! BEFORE I GO, I'D LIKE SOME INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 15

> We comprehend that you have been in touch with the Fel. Inform
> us at once of their nature and appearance.

- `0`: INFORM CICISBEO OF FEL DATA
- `1`: LEAVE
- `2`: FIGHT

### Record 16

> In what manner can we best enlighten your benighted mind? There
> are many species that inhabit our cluster.

- `0`: BROODMASTERS
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 17

> The Broodmasters are loathsome in both appearance and psyche.
> Their minds are filled with lust for ascendancy rather than
> adornment. We feel sorrow for their appalling condition.

- `0`: BROODMASTERS
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 18

> The Didinium are scabrous monstrosities which devote their lives
> towards ruining the pleasures of others. We would applaud and
> reward any brave captain who could extirpate the Didinium plague.

- `0`: BROODMASTERS
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 19

> We know little of the Fel. But the rumors that come to us are
> disturbing. If you come across them in your travels, please
> tell us of their nature.

- `0`: BROODMASTERS
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 20

> What we know of the Fel we have learned from you. They seem
> innocuous enough. Our earlier fears were baseless.

- `0`: BROODMASTERS
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 21

> Bizarre beings, the Lutin, but not unpleasing to the eye. They
> are quick and their ships very agile. However, they have no free
> will, so always respond identically to a given approach in
> conversation. Additionally, they have no memory of previous
> encounters, whether fair or foul.

- `0`: BROODMASTERS
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 22

> The Stentor is a nauseating predator creature, deadly to the
> weak or crippled. We Cicisbeo, being strong, have little to
> fear. The Stentor, in fact, are a single being, which has 
> foolishly multiplicated itself through time travel.

- `0`: BROODMASTERS
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

### Record 23

> We the Cicisbeo are Deity's perfect creation, the gift of
> Nature to the universe. Behold our glory.

- `0`: BROODMASTERS
- `1`: DIDINIUM
- `2`: FEL
- `3`: LUTIN
- `4`: STENTOR
- `5`: YOURSELF
- `6`: EXIT

## Cluster 2: CICIS2.BIN

Animation: `cicisc.pan`. [Raw records](../CICIS2.json); [encounter pseudocode](../../mapped/ovl_27.c).

### Record 0

> Felicitations, fortunate one. The glory you behold is named
> Gold Moon Rising of the Cicisbeo. Our gratification at your
> wonderful acts is intense and our condescension most great.
> What reward do you desire?

- `0`: PERPETUAL PEACE BETWEEN OUR NATIONS.
- `1`: INFORMATION
- `2`: TRADE
- `3`: LEAVE
- `4`: FIGHT

### Record 1

> Felicitations, fortunate one. The glory you behold is named
> Gold Moon Rising of the Cicisbeo. Our gratification at your
> wonderful acts is intense and our condescension most great.
> What reward do you desire?

- `0`: INFORMATION
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 2

> You are welcome. Your wondering eyes behold Jade Flowerbud.
> We of the Cicisbeo consider you a friend. In what manner
> can we interact?

- `0`: INFORMATION
- `1`: I'D LIKE TO OPEN TRADING
- `2`: LEAVE
- `3`: FIGHT

### Record 3

> You are welcome. Your wondering eyes behold Jade Flowerbud
> Avenger. We of the Cicisbeo consider you a friend, and
> command you to destroy the starbase of the Halicot, whose
> presence befouls the universe.

- `0`: I HEAR AND OBEY.
- `1`: LEAVE
- `2`: FIGHT

### Record 4

> You now descry the glorious form of Summer Breeze. I belong
> to the Cicisbeo, who grace the cosmos with our presence.
> How have you chosen to serve us?

- `0`: I SERVE BEST WHEN PROPERLY INFORMED.
- `1`: I'D LIKE TO OPEN TRADING
- `2`: LEAVE
- `3`: FIGHT

### Record 5

> You now descry the glorious form of Summer Breeze Avenger.
> I belong to the Cicisbeo, who grace the cosmos with our
> presence.  If you wish to further experience our
> loveliness, you must go to and destroy the starbase of the
> Halicot, which have disgusting personal habits, and dare to
> be more lovely than ourselves. 

- `0`: I'LL GO AT ONCE TO DESTROY THE HALICOT BASE
- `1`: LEAVE
- `2`: FIGHT

### Record 6

> No doubt unwittingly, you have offended our calm existence.
> The entity of wondrous color whom you now witness is titled
> Silver Whip. Go, and do not return until you have redeemed
> yourself.

- `0`: LEAVE
- `1`: FIGHT

### Record 7

> You have deeply violated our contentment. The entity of
> wondrous color whom you now witness is named Silver Whip
> Avenger. If you desire to make amends for your crimes, you
> must destroy the starbase of our rivals, the Halicot. Their
> sin is great, for they aspire to greater gorgeousness than
> our own.

- `0`: LEAVE
- `1`: FIGHT

### Record 8

> Granted. We of the Cicisbeo happily concede the slight 
> abridgement of our personal liberty necessary to ensure
> peace and prosperity between yourselves and us. The peace
> agreement is now considered to be in effect. Are there
> other humble wishes of yours which we can grant?

- `0`: INFORMATION
- `1`: TRADE
- `2`: LEAVE
- `3`: FIGHT

### Record 9

> We of the Cicisbeo value our treasures highly, and are
> careful only to deal in sordid mercantile matters with
> those that have demonstrated their faithfulness and
> fortitude.  Were you to serve us by destroying our foes or
> bringing us useful data, your status might improve.

- `0`: WHICH FOES DO YOU REFER TO ?
- `1`: WHAT TYPE OF DATA ?
- `2`: HOW ABOUT SOME INFORMATION INSTEAD ?
- `3`: LEAVE
- `4`: FIGHT

### Record 10

> We of the Cicisbeo value our treasures highly, and are
> careful only to deal in sordid mercantile matters with
> those that have demonstrated their faithfulness and
> fortitude.  Were you to serve us by destroying our foes or
> bringing us useful data, your status might improve.

- `0`: WHICH FOES DO YOU REFER TO ?
- `1`: HOW ABOUT SOME INFORMATION INSTEAD ?
- `2`: LEAVE
- `3`: FIGHT

### Record 11

> The Athdalde are abhorred by all civilized worlds. In
> addition, it is possible that the Freedom and Love alliance
> members are dangerous. At least, such word has reached our
> delicate, shell-like ears.

- `0`: INFORMATION
- `1`: YOU MENTIONED DATA EARLIER. WHAT TYPE OF DATA ?
- `2`: LEAVE
- `3`: FIGHT

### Record 12

> We know little about the Halicot and Monad species. More
> information on these entities would certainly be beneficial
> to our lovely brains.

- `0`: INFORMATION
- `1`: YOU MENTIONED FOES EARLIER. WHO ARE THEY ?
- `2`: LEAVE
- `3`: FIGHT

### Record 13

> This information is most fascinating. It will take some time
> to digest. Please leave and return at a more opportune
> time. If you require equipment before your departure, you
> may purchase it.

- `0`: TRADE FOR EQUIPMENT
- `1`: WAIT! BEFORE I GO, I'D LIKE SOME INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 14

> Our beneficent wishes go with you.

- `0`: LEAVE
- `1`: FIGHT

### Record 15

> We comprehend that you have been in touch with the %s.
> Inform us at once of their nature and appearance.

- `0`: INFORM CICISBEO ABOUT ALIEN SPECIES
- `1`: LEAVE
- `2`: FIGHT

### Record 16

> Your courageous action in destroying the vulgar Halicot is 
> well-appreciated. You have served us well.

- `0`: YOU'RE WELCOME
- `1`: LEAVE
- `2`: FIGHT

### Record 17

> In what manner can we best enlighten your benighted mind?
> There are many species that inhabit our cluster.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BROODMASTERS
- `3`: THE DACIANS
- `4`: THE DIGNEE
- `5`: THE AUTOMATA
- `6`: NEXT...
- `7`: EXIT

### Record 18

> In what manner can we best enlighten your benighted mind?
> There are many species that inhabit our cluster.

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELVES
- `6`: PREV...
- `7`: EXIT

### Record 19

> An unimpressive race. They are suitably humble about their
> condition, however, and seem appropriately grateful for our
> aid to them. 

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BROODMASTERS
- `3`: THE DACIANS
- `4`: THE DIGNEE
- `5`: THE AUTOMATA
- `6`: NEXT...
- `7`: EXIT

### Record 20

> Barbarous individuals whose own world was long ago
> destroyed through greed. Their forms are scabrous, and
> their actions completely devoid of etiquette. Destroying
> their revolting ships is an act of kindness to the
> Universe, and earns our thanks.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BROODMASTERS
- `3`: THE DACIANS
- `4`: THE DIGNEE
- `5`: THE AUTOMATA
- `6`: NEXT...
- `7`: EXIT

### Record 21

> Their minds are filled with lust for ascendancy rather than
> adornment. We feel sorrow for their appalling condition,
> not anger. The Dacians are their comrades. 

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BROODMASTERS
- `3`: THE DACIANS
- `4`: THE DIGNEE
- `5`: THE AUTOMATA
- `6`: NEXT...
- `7`: EXIT

### Record 22

> Unimportant beings. It is very peculiar that they are not
> dominant politically over the Broodmasters. After all, the
> Dacians are certainly physically more perfect. Perhaps they
> are afflicted with a malformation of the brain.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BROODMASTERS
- `3`: THE DACIANS
- `4`: THE DIGNEE
- `5`: THE AUTOMATA
- `6`: NEXT...
- `7`: EXIT

### Record 23

> Fine beings, and quite comely for non-Cicisbeo. They have
> agreed to serve us by undergoing the tedium of operating
> and governing the Peace Alliance.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BROODMASTERS
- `3`: THE DACIANS
- `4`: THE DIGNEE
- `5`: THE AUTOMATA
- `6`: NEXT...
- `7`: EXIT

### Record 24

> Androids which are not truly alive, so have little esthetic
> sense. They are allies of that terminally dull race, the
> Jot.

- `0`: THE ACARI
- `1`: THE ATHDALDE
- `2`: THE BROODMASTERS
- `3`: THE DACIANS
- `4`: THE DIGNEE
- `5`: THE AUTOMATA
- `6`: NEXT...
- `7`: EXIT

### Record 25

> We know little of the Halicot. But the rumors that come to
> us are disturbing. If you come across them in your travels,
> please tell us of their nature. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELVES
- `6`: PREV...
- `7`: EXIT

### Record 26

> Horrible, horrible entities who have the audacity to be
> more beautiful than our perfect selves. We adjure you to
> seek them out, destroy their star station, and earn our
> thanks.

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELVES
- `6`: PREV...
- `7`: EXIT

### Record 27

> As you know, vile entities who attempted to compete with
> ourselves. Fortunately, their star station is now blotted
> from memory, and our ships patrol their system,
> quarantining their venom and preventing any other species
> from discovering the Halicot's despicable nature. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELVES
- `6`: PREV...
- `7`: EXIT

### Record 28

> Similar to the Dignee in personality, but cruder in morals
> and manners. The hapless Automata and Venge can do no
> better than to ally with these fulsome entities in an
> attempt to protect themselves from the Broodmasters. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELVES
- `6`: PREV...
- `7`: EXIT

### Record 29

> We know little of the Monad. But the rumors that come to us
> are disturbing. If you come across it in your travels,
> please tell us of its nature. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELVES
- `6`: PREV...
- `7`: EXIT

### Record 30

> What we know of the Monad we have learned from you. They
> seem content to lurk in their corner of the universe, and
> should not interfere with other species' ambitions. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELVES
- `6`: PREV...
- `7`: EXIT

### Record 31

> Ugliforms whose deformed bodies have poisoned their
> philosophy.  You would be wise never to deal with them. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELVES
- `6`: PREV...
- `7`: EXIT

### Record 32

> Raiders who wisely have never chosen to assault our perfect
> forms. Lesser beings fear them. 

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELVES
- `6`: PREV...
- `7`: EXIT

### Record 33

> We are Deity's perfect creation, the gift of Nature to the
> universe. Behold our beauty.

- `0`: THE HALICOT
- `1`: THE JOT
- `2`: THE MONAD
- `3`: THE VENGE
- `4`: THE VORTICELLA
- `5`: YOURSELVES
- `6`: PREV...
- `7`: EXIT
