# Halicot

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 2: HALICOT2.BIN

Animation: `halicotc.pan`. [Raw records](../HALICOT2.json); [encounter pseudocode](../../mapped/ovl_30.c).

### Record 0

> Greetings, Earthman. I am Xeron XM9413
> of the Halicot. We are at your service.

- `0`: REFUEL AND LEAVE
- `1`: TRADE
- `2`: INFORMATION
- `3`: PEACE TREATY
- `4`: LEAVE
- `5`: FIGHT

### Record 1

> I am Xeron XM9413 of the Halicot. What
> is your business here?

- `0`: INFORMATION
- `1`: PEACE TREATY
- `2`: LEAVE
- `3`: FIGHT

### Record 2

> I am Xeron XM9413 of the Halicot. There
> is danger here. Leave at once, or we
> must open hostilities. 

- `0`: LEAVE
- `1`: FIGHT

### Record 3

> Greetings, friend Earthman. I am Xeron
> XM9413 of the Halicot. We your allies
> are at your service. 

- `0`: REFUEL AND LEAVE
- `1`: TRADE
- `2`: INFORMATION
- `3`: LEAVE

### Record 4

> Peace is good. Alas that not all species
> agree on this important point. Do you
> know of the vileness of the Athdalde or
> Vorticella?

- `0`: NO, TELL ME MORE ABOUT THEM
- `1`: I'D RATHER DISCUSS A PEACE TREATY
- `2`: LEAVE
- `3`: FIGHT

### Record 5

> And what is the nature of your
> so-important business?

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE
- `3`: FIGHT

### Record 6

> Your words are as sweet and firm as
> honey. Your past actions are not such
> as to reassure us. If you truly wish
> peace, we are prepared. Are you willing
> to commit to a binding agreement?

- `0`: I AM INTERESTED IN SUCH AN AGREEMENT
- `1`: I CANNOT COMMIT TO ANYTHING
- `2`: LEAVE
- `3`: FIGHT

### Record 7

> How can we help you?

- `0`: TRADE
- `1`: INFORMATION
- `2`: LEAVE

### Record 8

> Very good. Will you pledge your genetic
> code to the following agreement -- Upon
> pain of mental violation, the Halicot
> and the Earthmen agree never to attack
> one another's stations or ships. 

- `0`: AGREE AND PLEDGE
- `1`: REFUSE

### Record 9

> I see. Best be on your way. 

- `0`: I HAVE FURTHER BUSINESS
- `1`: LEAVE
- `2`: FIGHT

### Record 10

> This makes us very happy. Good-bye. 

- `0`: I HAVE FURTHER BUSINESS
- `1`: LEAVE

### Record 11

> There are some powerful and hostile
> species in this cluster.  Beware the
> Athdalde and Vorticella. Their minds are
> evil. 

- `0`: ATHDALDE
- `1`: AUTOMATA
- `2`: VORTICELLA
- `3`: YOURSELVES
- `4`: EXIT

### Record 12

> They are scavengers who seek out healthy
> worlds and squeeze them like fruit
> rinds, scraping out the good parts, and
> leaving only husks. They have no home
> of their own, but traverse space,
> seeking unprotected planets to wreak
> their ruin. 

- `0`: ATHDALDE
- `1`: AUTOMATA
- `2`: VORTICELLA
- `3`: YOURSELVES
- `4`: EXIT

### Record 13

> Interesting robot beings. They are
> rather cold and reluctant to engage in
> peaceful trade, so we have constructed a
> philanthropy circuit to reprogram them.
> To use it, simply give them the
> circuit. If you wish a philanthropy
> circuit, you must first prove your love
> of peace. 

- `0`: ATHDALDE
- `1`: AUTOMATA
- `2`: VORTICELLA
- `3`: YOURSELVES
- `4`: EXIT

### Record 14

> Pirate beings which rob innocent ships.
> They have several secret bases. 

- `0`: ATHDALDE
- `1`: AUTOMATA
- `2`: VORTICELLA
- `3`: YOURSELVES
- `4`: EXIT

### Record 15

> We are a calm folk which know little of
> the universe beyond. 

- `0`: ATHDALDE
- `1`: AUTOMATA
- `2`: VORTICELLA
- `3`: YOURSELVES
- `4`: EXIT

### Record 16

> Would you prefer to trade normally or to
> purchase a Philanthropy Circuit?  A
> Philanthropy Circuit costs 8
> components.

- `0`: TRADE
- `1`: PURCHASE PHILANTHROPY CIRCUT
- `2`: EXIT

### Record 17

> You now possess a Philanthropy Circuit.
> It is only useful once installed in an
> Automata central brain.

- `0`: EXIT
