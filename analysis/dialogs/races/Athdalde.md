# Athdalde

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 2: ATHDAL2.BIN

Animation: `athdaldc.pan`. [Raw records](../ATHDAL2.json); [encounter pseudocode](../../mapped/ovl_23.c).

### Record 0

> You have come to us. We are named the
> Athdalde. We have plans for you. We
> must speak of them. We will both
> profit much. Other species must not
> know. Will you hear us out?

- `0`: I WISH TO HEAR YOUR PROPOSAL
- `1`: I WANT NO PART OF SECRET PLANS
- `2`: LEAVE
- `3`: FIGHT

### Record 1

> We need worlds to mine. You can find
> such worlds. You will search for us.
> You will destroy their bases. Destroy
> a %s world. Do not talk to
> them. Just destroy the planet's
> base. We will pay you well. You will
> weaken the world. You will destroy
> its base. Its wealth will be ours. We
> will give you metal. We will give you
> radioactives. We will give you water.
> We will give you organics. Destroy a
> %s world. Do you agree to
> this?

- `0`: I WILL ATTACK THIS WORLD
- `1`: I AM TOO WEAK TO ATTACK THIS WORLD
- `2`: I REFUSE TO BETRAY THIS WORLD TO YOU

### Record 2

> You are unfair to us. We do not plan
> harm. You are safe with us.  Let us
> talk about this. You must listen to
> us. We are friends to you.

- `0`: I WILL HEAR YOU OUT
- `1`: REFUSE
- `2`: LEAVE
- `3`: FIGHT

### Record 3

> Bad bad bad bad bad. You have much
> false pride. You are opposed to us.
> You are the Athdalde's enemy. Go
> before we kill you. Do not return to
> us. But you can make amends. You must
> destroy a starbase. Then you must
> tell us. Give us the base's
> coordinates.  We will forgive you
> then. We will be friends again.

- `0`: LEAVE
- `1`: FIGHT

### Record 4

> We give thanks to you. You will help
> us much. Go and get that world. Do
> not fail us now.

- `0`: I NEED TO TRADE FIRST
- `1`: I NEED INFORMATION FIRST
- `2`: I NEED A PEACE TREATY FIRST
- `3`: LEAVE
- `4`: FIGHT

### Record 5

> You do jest with us. You can gain in
> strength. When you are very strong.
> Then you can attack them. Then you
> will help us. Do not tell our secret.
> That you plan an attack. When you
> attack that world. Then we will be
> friends.

- `0`: AT LEAST SELL ME SOME FUEL
- `1`: INFORMATION
- `2`: PEACE TREATY
- `3`: LEAVE
- `4`: FIGHT

### Record 6

> Treaties are for the weak. You and I
> are strong. So you need a treaty...
> Perhaps your worlds are weak. We will
> be very fair. You need not fear us.
> Unless you do betray us. Then your
> worlds are prey.

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 7

> Treaties are for the weak. You and I
> are strong. So you need a treaty...
> Perhaps your worlds are weak. We will
> be very fair. You need not fear us.
> Unless you do betray us. Then your
> worlds are prey.

- `0`: I NEED FUEL BEFORE I DEPART
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 8

> We will trade with you. It will help
> you fight. We will help you fight.
> What goods do you need? Do not forget
> one thing. If you trade with us. You
> are beholden to us. Those who trade
> with us.  Then are our close friends.
> If you ever betray us. If you turn on
> us. We will not forgive you. Do you
> still wish trade? Remember this will
> commit you.

- `0`: TRADE
- `1`: NO TRADE
- `2`: INFORMATION
- `3`: LEAVE
- `4`: FIGHT

### Record 9

> Why have you come back? Go destroy a
> %s starbase.  You have not
> attacked one. You have not helped us.
> Go away and attack one. Then you can
> come back.

- `0`: INFORMATION
- `1`: I NEED FUEL TO GO ON
- `2`: LEAVE
- `3`: FIGHT

### Record 10

> We hear good of you. You have wrecked
> a starbase. We like this very much.
> We must know the coordinates. Soon
> before the base returns. Before the
> victims rebuild it. Tell us the
> coordinates now. Of the destroyed
> starbase's system. Tell us the
> coordinates now. 

- `0`: PROVIDE COORDINATES
- `1`: DO NOT PROVIDE COORDINATES
- `2`: LEAVE
- `3`: FIGHT

### Record 11

> Thank you very very much. Let's work
> together in future. But please leave
> for now. We have work to do.

- `0`: LET'S TRADE BEFORE I GO
- `1`: I NEED INFORMATION BEFORE I GO
- `2`: LEAVE
- `3`: FIGHT

### Record 12

> You have kept good faith. You helped
> us a lot. Thank you very very much.
> We will now reward you. Please take
> your reward freely. Then leave us for
> now. We have work to do.

- `0`: RECEIVE REWARD
- `1`: TRADE
- `2`: INFORMATION
- `3`: LEAVE
- `4`: FIGHT

### Record 13

> What can we tell you?  What
> information would you like?

- `0`: ACARI
- `1`: AUTOMATA
- `2`: BALATHIDE
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 14

> What can we tell you?  What
> information would you like?

- `0`: DIGNEE
- `1`: JOT
- `2`: MONAD
- `3`: VENGE
- `4`: VORTICELLA
- `5`: PREV...
- `6`: EXIT

### Record 15

> Fine worlds for our use. You can beat
> them easily. Blow up all their bases.
> We will pay you well. 

- `0`: ACARI
- `1`: AUTOMATA
- `2`: BALATHIDE
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 16

> They are simple robot beings. They
> lack self preservation instincts. So
> they don't fear death. So we can kill
> them. And then take their worlds. You
> kill them for us. 

- `0`: ACARI
- `1`: AUTOMATA
- `2`: BALATHIDE
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 17

> Their worlds are no good. They've
> sucked out all life. Keep them from
> your ship. They can drain your power.
> They always seek new worlds. And
> other sources of energy. 

- `0`: ACARI
- `1`: AUTOMATA
- `2`: BALATHIDE
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 18

> They have many fine worlds. They are
> good trading partners. You must
> choose for yourself. If you wish
> Broodmaster loot. We do not fight
> them. But you could fight them. We
> would not much care.

- `0`: ACARI
- `1`: AUTOMATA
- `2`: BALATHIDE
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 19

> Their world is very nice. But has very
> few resources. It is hardly worth it.
> Do not bother with them. Other worlds
> are much better. 

- `0`: ACARI
- `1`: AUTOMATA
- `2`: BALATHIDE
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 20

> They are a suspicious lot. Pretty
> tough starships as well. 

- `0`: ACARI
- `1`: AUTOMATA
- `2`: BALATHIDE
- `3`: BROODMASTERS
- `4`: CICISBEO
- `5`: DACIANS
- `6`: NEXT...
- `7`: EXIT

### Record 21

> They have great moral influence. We
> can not attack them. Unless they wish
> an attack. But they rarely do so. If
> you can trick them. And destroy a
> Dignee base. We will be most glad. 

- `0`: DIGNEE
- `1`: JOT
- `2`: MONAD
- `3`: VENGE
- `4`: VORTICELLA
- `5`: PREV...
- `6`: EXIT

### Record 22

> They have some fine worlds. We could
> use those worlds. Beware their mind
> control secret. They can mess you up.
> Go in hard and fast. 

- `0`: DIGNEE
- `1`: JOT
- `2`: MONAD
- `3`: VENGE
- `4`: VORTICELLA
- `5`: PREV...
- `6`: EXIT

### Record 23

> We would like his world. But we can
> not win. He can defend himself well.
> If you can beat him. We would like to
> know. Tell us what to do. Then we
> will get him. 

- `0`: DIGNEE
- `1`: JOT
- `2`: MONAD
- `3`: VENGE
- `4`: VORTICELLA
- `5`: PREV...
- `6`: EXIT

### Record 24

> They have a good world. But we won't
> plunder them. They do not ever
> forgive. They will hunt us down. They
> will fight and fight.  We dare not
> anger them. It is too much trouble. 

- `0`: DIGNEE
- `1`: JOT
- `2`: MONAD
- `3`: VENGE
- `4`: VORTICELLA
- `5`: PREV...
- `6`: EXIT

### Record 25

> They have few good resources. We can
> trade with them. They are like a
> friend. We don't need their worlds. 

- `0`: DIGNEE
- `1`: JOT
- `2`: MONAD
- `3`: VENGE
- `4`: VORTICELLA
- `5`: PREV...
- `6`: EXIT

### Record 26

> You have kept good faith. You helped
> us a lot. Thank you very very much.
> We will now reward you. Please take
> your reward freely. Then leave us for
> now. We have work to do.

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT
