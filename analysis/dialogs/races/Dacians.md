# Dacians

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 2: DACIAN2.BIN

Animation: `daciansc.pan`. [Raw records](../DACIAN2.json); [encounter pseudocode](../../mapped/ovl_28.c).

### Record 0

> We the Dacians have watched you the
> Earthling for a long time now.  We
> can speak frankly and openly to one
> another. Tell me now. What is your
> true opinion of the Broodmasters?

- `0`: I THINK THEY'RE REPULSIVE BAGS OF SLIME
- `1`: I THINK THEY'RE FINE FELLOWS
- `2`: WHAT DO YOU MEAN?
- `3`: LEAVE
- `4`: FIGHT 

### Record 1

> Welcome, friend. Have you destroyed
> any enemies of Freedom recently?

- `0`: YES, INDEED
- `1`: NOT RECENTLY
- `2`: LEAVE
- `3`: FIGHT 

### Record 2

> Who are you, and what do you want of
> us?

- `0`: I JUST WANT SOME INFORMATION
- `1`: I'D LIKE TO TRADE PEACEFULLY
- `2`: I WANT PEACE
- `3`: LEAVE
- `4`: FIGHT 

### Record 3

> Scram.

- `0`: LEAVE
- `1`: FIGHT 

### Record 4

> Friend, think of our excellent
> Freedom Alliance. Do you not think
> that the Dacians would be far
> superior leaders to the
> Broodmasters?

- `0`: I AGREE. WHAT SHOULD WE DO?
- `1`: I AGREE IN PRINCIPLE, BUT DARE NOT ATTACK THEM.
- `2`: LEAVE
- `3`: FIGHT 

### Record 5

> Yes. Well, you are right, of course.
> We said nothing. What can we do for
> you this lovely night?

- `0`: INFORMATION
- `1`: TRADE
- `2`: PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT 

### Record 6

> Why, we meant nothing at all. We're
> firm friends of the Broodmasters.
> Firm friends. As are you, we're
> sure. What can we do for you.

- `0`: INFORMATION
- `1`: TRADE
- `2`: PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT 

### Record 7

> Ah, and whom did you slay in the
> cause of Freedom?

- `0`: A PEACE ALLIANCE SHIP
- `1`: A LOVE ALLIANCE SHIP
- `2`: SHIPS OF BOTH ENEMY ALLIANCES
- `3`: I AM NOT SURE
- `4`: I KILLED NO ONE
- `5`: LEAVE
- `6`: FIGHT 

### Record 8

> Alas for the cause of Freedom.

- `0`: INFORMATION
- `1`: TRADE
- `2`: PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT 

### Record 9

> Much as we support the cause of
> peace, we make no decisions without
> first consulting our brethren, the
> noble Broodmasters. If you wish a
> formal union with our group, the
> aptly-named Freedom Alliance, you
> must apply to the Broodmasters for
> admission.

- `0`: I SEE
- `1`: LEAVE
- `2`: FIGHT 

### Record 10

> It would be impolitic for the Dacians
> to assail the Broodmasters, our
> ostensible Freedom Alliance comrades.
> But you, a free agent, can do so with
> our covert approval. Currently, the
> Broodmasters control %s more stellar
> systems than we do. You shall destroy
> Broodmaster bases, which we will
> promptly occupy. Once we control 
> more systems than the Broodmasters,
> control of the Freedom Alliance 
> passes to us. 

- `0`: A FINE PLAN
- `1`: I DARE NOT ATTACK THE BROODMASTERS OPENLY

### Record 11

> What assistance do you require?

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT 

### Record 12

> You know the fullness of our plans,
> yet have not joined us. You must
> die.

- `0`: FIGHT 

### Record 13

> We are the masters of the Freedom
> Alliance. The Broodmasters grovel
> beneath us. Soon we shall control the
> entire cluster. You have our thanks,
> humble Earthling, for your part in
> fulfilling our destiny. We forbid
> you to attack any more Broodmasters,
> lest our former masters become
> weakened to the point that they cease
> to be useful tools. Do so at your
> peril.

- `0`: TRADE
- `1`: INFORMATION
- `2`: PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT 

### Record 14

> A modest request. We choose to grant
> it, as leaders of the Freedom
> Alliance. Of course, this means you
> are now an official member of the
> entire Freedom Alliance, and as such,
> are subject to our commands.

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT 

### Record 15

> We forbid it, lest the Broodmasters
> become weakened to the point that
> they cease to be useful tools. Do so
> at your peril.

- `0`: LEAVE
- `1`: FIGHT 

### Record 16

> How unselfish of you. Soon all the
> peoples of this cluster shall be
> free.

- `0`: INFORMATION
- `1`: TRADE
- `2`: PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT 

### Record 17

> I see. Naturally we believe you.

- `0`: INFORMATION
- `1`: TRADE
- `2`: PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT 

### Record 18

> Oddly enough, we have no goods for
> sale today. So sorry.

- `0`: EXIT

### Record 19

> I fear that we have little of worth
> to tell you. Our sincerest
> apologies. All we know is that the
> Freedom Alliance consists of the
> Broodmasters and Dacians allied
> together to defend the oppressed of
> the cluster. The Peace Alliance is a
> conglomeration of imperious despots,
> while the Love Alliance is composed
> of soulless evil entities.

- `0`: EXIT

### Record 20

> Whom would you like to know about?

- `0`: THE ATHDALDE
- `1`: THE BALATHIDE
- `2`: THE FREEDOM ALLIANCE
- `3`: THE HALICOT
- `4`: THE LOVE ALLIANCE
- `5`: THE MONAD
- `6`: NEXT...
- `7`: EXIT

### Record 21

> Whom would you like to know about?

- `0`: THE PEACE ALLIANCE
- `1`: THE VORTICELLA
- `2`: PREV...
- `3`: EXIT

### Record 22

> Potentially dangerous entities
> capable of destroying entire
> planets. Best that they be directed
> towards the stars of the Peace or
> the Love Alliance. If they draw too
> near our own precious citizens, we
> may be forced into retaliation.

- `0`: THE ATHDALDE
- `1`: THE BALATHIDE
- `2`: THE FREEDOM ALLIANCE
- `3`: THE HALICOT
- `4`: THE LOVE ALLIANCE
- `5`: THE MONAD
- `6`: NEXT...
- `7`: EXIT

### Record 23

> Parasitic beings of little import.
> They have expressed an interest in
> joining the Freedom Alliance someday,
> and we have taken this under
> consideration. We advise against
> wantonly killing them.

- `0`: THE ATHDALDE
- `1`: THE BALATHIDE
- `2`: THE FREEDOM ALLIANCE
- `3`: THE HALICOT
- `4`: THE LOVE ALLIANCE
- `5`: THE MONAD
- `6`: NEXT...
- `7`: EXIT

### Record 24

> We Dacians, in league with the
> Broodmasters, are attempting to
> bring liberty and enlightenment to
> all peoples of this star cluster. 

- `0`: THE ATHDALDE
- `1`: THE BALATHIDE
- `2`: THE FREEDOM ALLIANCE
- `3`: THE HALICOT
- `4`: THE LOVE ALLIANCE
- `5`: THE MONAD
- `6`: NEXT...
- `7`: EXIT

### Record 25

> A minor species. The cluster is full
> of such.

- `0`: THE ATHDALDE
- `1`: THE BALATHIDE
- `2`: THE FREEDOM ALLIANCE
- `3`: THE HALICOT
- `4`: THE LOVE ALLIANCE
- `5`: THE MONAD
- `6`: NEXT...
- `7`: EXIT

### Record 26

> Enemies of freedom. The leaders are
> the Jot, who rule their subject
> species (the Automata and Venge) with
> an iron claw. The Automata are
> androids without emotions or desires.
> The Venge are pathetic creatures
> consumed with notions of
> retribution.

- `0`: THE ATHDALDE
- `1`: THE BALATHIDE
- `2`: THE FREEDOM ALLIANCE
- `3`: THE HALICOT
- `4`: THE LOVE ALLIANCE
- `5`: THE MONAD
- `6`: NEXT...
- `7`: EXIT

### Record 27

> A mysterious being which is both
> frivolous and unjust. It has certain
> abilities which could pose a serious
> threat to the stability of the
> cluster if aroused. At the moment, it
> seems willing to sit quietly on its
> world.

- `0`: THE ATHDALDE
- `1`: THE BALATHIDE
- `2`: THE FREEDOM ALLIANCE
- `3`: THE HALICOT
- `4`: THE LOVE ALLIANCE
- `5`: THE MONAD
- `6`: NEXT...
- `7`: EXIT

### Record 28

> Bitter enemies of freedom. They are
> ruled by the arrogant Dignee, and
> served by the Cicisbeo and Acari.
> They should be eliminated.  This
> should not be too difficult, because
> neither the Cicisbeo nor the Acari
> are particularly fearsome in matters
> of war. The Dignee are quite a
> problem, however, because their
> powerful moral influence forces all
> nearby beings to obey their will.

- `0`: THE PEACE ALLIANCE
- `1`: THE VORTICELLA
- `2`: PREV...
- `3`: EXIT

### Record 29

> Petty raiders who primarily attack
> our enemies. Thus, they are probably
> a benefit to the cause of freedom
> overall. However, they will need to
> be suppressed some day. They have
> goods for sale, but their base is
> hard to find. 

- `0`: THE PEACE ALLIANCE
- `1`: THE VORTICELLA
- `2`: PREV...
- `3`: EXIT

### Record 30

> We are the masters of the Freedom
> Alliance. Soon we shall control the
> entire cluster. You have our thanks,
> humble Earthling, for your part in
> fulfilling our destiny.

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT 

### Record 31

> Begone, vile Earthling.

- `0`: LEAVE
