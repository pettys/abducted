# Venge

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 2: VENGE2.BIN

Animation: `vengec.pan`. [Raw records](../VENGE2.json); [encounter pseudocode](../../mapped/ovl_33.c).

### Record 0

> Venge we are. Suspicious your
> motives we are. Why here have you
> come? What with us do you want?
> Careful lest us you anger.

- `0`: I WANT A PEACE TREATY
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 1

> Never we shall forgive. Never we
> shall forget. Never for you our
> hatred shall end. You the foe of
> our friend are. You our foe and
> the friend of our foe are.
> Retribution we bring. Beware. 

- `0`: LEAVE
- `1`: FIGHT

### Record 2

> Knave, our peaceful ship you
> destroyed. You our people have
> killed. Now we you kill. Never we
> shall forget. Never we shall
> forgive. Never from us you shall
> escape. Ship for ship from you we
> shall exact.

- `0`: FIGHT

### Record 3

> You our friend yourself have shown.
> We on you can rely. You our
> starbase welcomes. We to see you
> once more are pleased.  A friend
> another friend in need helps. We in
> need of your help are. You us will
> help?

- `0`: I'D BE GLAD TO HELP YOU
- `1`: IT DEPENDS ON WHAT YOU WANT

### Record 4

> To the Love Alliance we you
> welcome. We the Venge are. We the
> backbone of this fine Alliance
> proud are to be. You a fine
> addition to the Alliance we think.
> But membership responsibility
> implies. 

- `0`: PEACE TREATY
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 5

> You recklessly the vessels of our
> friend have attacked. You in any
> case we now must punish. Fair
> warning we to you gave. You die
> now. 

- `0`: FIGHT

### Record 6

> You ignorantly the vessels of our
> friends have attacked. You this
> must immediately cease. Never again
> our friends attack. We to you
> warning give. At your direst peril
> such attacks repeat. You lucky to
> get warning are. No warning if you
> us attack is given. 

- `0`: I SINCERELY APOLOGIZE
- `1`: IT WAS NECESSARY TO ATTACK THEM
- `2`: LEAVE
- `3`: FIGHT

### Record 7

> You the Peace and Freedom filth
> have attacked. You a good friend
> may become. We our gratitude offer.
> The bases of the Love Alliance do
> never attack. They to you as
> targets forbidden are.  This as a
> friendly warning accept.

- `0`: JOIN THE LOVE ALLIANCE
- `1`: PEACE TREATY
- `2`: TRADE
- `3`: INFORMATION
- `4`: LEAVE
- `5`: FIGHT

### Record 8

> You the vile Freedom filth have
> attacked. You a good friend may
> become. We our gratitude offer. The
> bases of the Love Alliance do
> never attack. They to you as
> targets forbidden are. This as a
> friendly warning accept. The bases
> of the Peace Alliance vile are.
> Their bases with our blessing you
> may destroy. Such destruction we
> encourage.

- `0`: JOIN THE LOVE ALLIANCE
- `1`: PEACE TREATY
- `2`: TRADE
- `3`: INFORMATION
- `4`: LEAVE
- `5`: FIGHT

### Record 9

> You the vile Peace filth have
> attacked. You a good friend may
> become. We our gratitude offer. The
> bases of the Love Alliance do
> never attack. They to you as
> targets forbidden are. This as a
> friendly warning accept. The bases
> of the Freedom Alliance vile are.
> Their bases with our blessing you
> may destroy. Such destruction we
> encourage. 

- `0`: JOIN THE LOVE ALLIANCE
- `1`: PEACE TREATY
- `2`: TRADE
- `3`: INFORMATION
- `4`: LEAVE
- `5`: FIGHT

### Record 10

> We that you for peace wish are
> pleased. All beings peace should
> know. Re: treaty with us, an
> obstacle exists. We loyal are. We
> no friends outside the Love
> Alliance recognize. You must the
> Love Alliance join. Then we can a
> peace treaty discuss. 

- `0`: JOIN THE LOVE ALLIANCE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 11

> The friendship of the Love Alliance
> good is to join. We to this
> fellowship you welcome. We to you a
> peace treaty of eternal friendship
> offer. We however you warn. To
> reject us do not.
>  
>   We the Humans to this treaty
> agree. Never the Venge to harm. 
> Never the Humans to betray. The
> Venge the friends of Humans will
> be. The Humans to the Venge loyal
> will be.  If the Humans untrue
> prove this treaty null and void
> is.  If the Humans untrue prove
> the Venge the Humans shall
> destroy.
>  
> You the peace treaty will sign?

- `0`: AGREE TO SIGN
- `1`: DONATE COMPONENTS
- `2`: FIGHT

### Record 12

> You must restitution for the
> destruction of our friends make.
> You must to us components donate.
> The components now surrender. 

- `0`: DONATE COMPONENTS
- `1`: REFUSE

### Record 13

> It necessary was, you say, our
> friends to attack. We say, it
> necessary is, for us you to attack.
> So we now attack.  Turnabout fair
> play is. 

- `0`: FIGHT

### Record 14

> We cannot the Alliance your joining
> approve. We loyal to the Jot are.
> We without their permission no
> treaties sign. You must to the Jot
> talk. They will the Love Alliance
> you permit to join. 

- `0`: PEACE TREATY
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 15

> We to our fellowship you welcome.
> We shall friends forever be. We
> shall never our trust betray. You
> will always us in need help. 

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE

### Record 16

> You a great risk run. You
> perilously close are, to us
> annoying are. We forgiving entities
> are not. You now must go. When you
> further on this matter have
> thought, you may return. 

- `0`: LEAVE
- `1`: FIGHT

### Record 17

> We to our friends these will give.
> You under probation are.  Perhaps
> you a simple mistake made. Perhaps
> non-fatal this mistake was.
> Perhaps you can trusted be. And
> perhaps not. 

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE

### Record 18

> That you with components provide,
> we do require. To us now the
> components give. Your generosity we
> appreciate. We the components will
> now take. Great gratitude we
> provide. You a true friend are.

- `0`: DONATE COMPONENTS
- `1`: REFUSE

### Record 19

> Our foes most vulgar are. Their
> corruption beyond belief is.  You
> our friend are. Thus, you their foe
> are. You must them extirpate.  You
> must their starbases wrack. You
> must all their worlds attack. Now
> go.

- `0`: WE WILL KILL THEM
- `1`: WE CANNOT KILL THEM

### Record 20

> We a severe shortage of starbases
> have. You a fine starbase possess.
> To us you must your starbase give.
> We a great need have.  Surely a
> friend another friend will not so
> small an item refuse?  We your
> starbase humbly accept. Gratitude
> in advance we proffer. 

- `0`: GIVE STARBASE
- `1`: REFUSE

### Record 21

> You doubtful sound. You unwilling
> your friends to help are?  We to
> you warning give. To hesitate we
> you forbid. You lucky to get
> warning are. You us help? Yes or
> no; you must say. 

- `0`: YES, I'LL HELP
- `1`: I CAN'T MAKE THAT PROMISE

### Record 22

> You a false friend have proved. You
> us have betrayed. Never we shall
> forget. Never we shall forgive. You
> must die. You must die.  All
> humans must die. This insult shall
> be avenged. 

- `0`: FIGHT

### Record 23

> You a fine friend have proved. You
> us have supported. Never we shall
> forget. You are friend are. You the
> enemy of your choice may choose.
> We grateful shall be, when that
> enemy is destroyed.  Whom do you
> choose to destroy?

- `0`: THE ACARI
- `1`: THE BROODMASTERS
- `2`: THE VORTICELLA
- `3`: I'LL KILL NO ONE

### Record 24

> You the Acari vowed to destroy. The
> Acari yet live. You must greater
> effort exert. Delenda est!

- `0`: INFORMATION
- `1`: LEAVE

### Record 25

> You the Broodmasters vowed to
> destroy. The Broodmasters yet
> live.  You must greater effort
> exert. Delenda est!

- `0`: INFORMATION
- `1`: LEAVE

### Record 26

> You the Vorticella vowed to
> destroy. The Vorticella yet live.
> You must greater effort exert.
> Delenda est!

- `0`: INFORMATION
- `1`: LEAVE

### Record 27

> You honored are. We the Venge you
> praise. Our enemies deceased are.
> Our foes all shall likewise do. We
> with you very happy are. 

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE

### Record 28

> To you this information we freely
> give. Perhaps you it will help.  

- `0`: AUTOMATA
- `1`: FREEDOM ALLIANCE
- `2`: JOT
- `3`: PEACE ALLIANCE
- `4`: VORTICELLA
- `5`: YOURSELVES
- `6`: EXIT

### Record 29

> Workers for Love they are. They
> against us have never a crime
> perpetrated. Of course they free
> will lack.  Perhaps that the
> reason for their forbearance is.
> But it unimportant is. 

- `0`: AUTOMATA
- `1`: FREEDOM ALLIANCE
- `2`: JOT
- `3`: PEACE ALLIANCE
- `4`: VORTICELLA
- `5`: YOURSELVES
- `6`: EXIT

### Record 30

> Five hundred twenty and four orbits
> ago, an Acari us deeply offended.
> The Acari's name Kalamastra was.
> The Venge then retribution swore.
> Our people for the day of reckoning
> have lived. Someday the Acari
> their treachery sorely will
> regret.  Kalamastra's name will in
> infamy live. The Acari will in
> horror his name recite. They the
> catastrophe of the Venge's wrath
> shall know. Today the Dignee and
> the Cicisbeo, the Acari have
> joined.  Friends of our enemies,
> our enemies are. All of them, we
> despise.  

- `0`: AUTOMATA
- `1`: FREEDOM ALLIANCE
- `2`: JOT
- `3`: PEACE ALLIANCE
- `4`: VORTICELLA
- `5`: YOURSELVES
- `6`: EXIT

### Record 31

> The Jot never have us betrayed. The
> Jot great powers of psyche
> possess.  The Jot rulers of the
> Love Alliance are. We the Jot
> support. 

- `0`: AUTOMATA
- `1`: FREEDOM ALLIANCE
- `2`: JOT
- `3`: PEACE ALLIANCE
- `4`: VORTICELLA
- `5`: YOURSELVES
- `6`: EXIT

### Record 32

> The Broodmasters we detest. The
> Broodmasters we hate. On the
> Broodmasters we shall ruin wreak.
> Sixteen orbits ago, the
> Broodmasters to us alliance
> offered. We innocently accepted.
> We members of the Peace Alliance
> were. Then, the Broodmasters us
> treacherously harmed. We lightly a
> favor asked. A small favor it was.
> Yet they refused. Now they must
> die. Their friends the Dacians are.
> So, too must the Dacians die. So,
> too must all friends of the
> Broodmasters die. 

- `0`: AUTOMATA
- `1`: FREEDOM ALLIANCE
- `2`: JOT
- `3`: PEACE ALLIANCE
- `4`: VORTICELLA
- `5`: YOURSELVES
- `6`: EXIT

### Record 33

> Detestable beings these are.
> Destroyers of innocent ships they
> are. We whenever able them destroy.
> You as well should them destroy. 

- `0`: AUTOMATA
- `1`: FREEDOM ALLIANCE
- `2`: JOT
- `3`: PEACE ALLIANCE
- `4`: VORTICELLA
- `5`: YOURSELVES
- `6`: EXIT

### Record 34

> We the Venge are. You to a friend
> be generous, wise are.  Your step
> carefully watch. 

- `0`: AUTOMATA
- `1`: FREEDOM ALLIANCE
- `2`: JOT
- `3`: PEACE ALLIANCE
- `4`: VORTICELLA
- `5`: YOURSELVES
- `6`: EXIT

### Record 35

> You a fine friend have proved. You
> us have supported. Never we shall
> forget. You are friend are. You the
> enemy of your choice may choose.
> We grateful shall be, when that
> enemy is destroyed.  Whom do you
> choose to destroy?

- `0`: THE ACARI
- `1`: I'LL KILL NO ONE

### Record 36

> You a fine friend have proved. You
> us have supported. Never we shall
> forget. You are friend are. You the
> enemy of your choice may choose.
> We grateful shall be, when that
> enemy is destroyed.  Whom do you
> choose to destroy?

- `0`: THE ACARI
- `1`: THE BROODMASTERS
- `2`: I'LL KILL NO ONE

### Record 37

> You a fine friend have proved. You
> us have supported. Never we shall
> forget. You are friend are. You the
> enemy of your choice may choose.
> We grateful shall be, when that
> enemy is destroyed.  Whom do you
> choose to destroy?

- `0`: THE ACARI
- `1`: THE VORTICELLA
- `2`: I'LL KILL NO ONE

### Record 38

> You a fine friend have proved. You
> us have supported. Never we shall
> forget. You are friend are. You the
> enemy of your choice may choose.
> We grateful shall be, when that
> enemy is destroyed.  Whom do you
> choose to destroy?

- `0`: THE BROODMASTERS
- `1`: THE VORTICELLA
- `2`: I'LL KILL NO ONE

### Record 39

> You a fine friend have proved. You
> us have supported. Never we shall
> forget. You are friend are. You the
> enemy of your choice may choose.
> We grateful shall be, when that
> enemy is destroyed.  Whom do you
> choose to destroy?

- `0`: THE BROODMASTERS
- `1`: I'LL KILL NO ONE

### Record 40

> You a fine friend have proved. You
> us have supported. Never we shall
> forget. You are friend are. You the
> enemy of your choice may choose.
> We grateful shall be, when that
> enemy is destroyed.  Whom do you
> choose to destroy?

- `0`: THE VORTICELLA
- `1`: I'LL KILL NO ONE

### Record 41

> We the Venge your infestation
> notice. You parasite grubs
> possess.  Your ship diseased is.
> You us wish this plague to remove?

- `0`: YES, PLEASE REMOVE THE GRUBS
- `1`: NO, LEAVE THE GRUBS BE
- `2`: LEAVE

### Record 42

> The grubs removed are. Your ship
> purified is. Now you we have
> helped.  Can you us help? We in
> great need of help are.

- `0`: I'D BE GLAD TO HELP YOU
- `1`: IT DEPENDS ON WHAT YOU WANT
- `2`: LEAVE
