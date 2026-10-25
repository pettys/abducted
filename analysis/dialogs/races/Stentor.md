# Stentor

Recovered original speech and choices. Records include conditional variants; their order is not a conversation flow. Numeric choices are return values used by the encounter code. `%s` and similar placeholders are filled at runtime.

For known outcomes and relationship fields, see [interaction map](../interaction-map.json). Full branching still lives in the recovered pseudocode.

## Cluster 1: STENTOR1.BIN

Animation: `stentorc.pan`. [Raw records](../STENTOR1.json); [encounter pseudocode](../../mapped/ovl_19.c).

### Record 0

> Yuhaf fown dar seek cretbais.  Plisstel nowun.
> Shalwee trayd ?

- `0`: I WANT A PEACE TREATY.
- `1`: I WANT SOME INFORMATION
- `2`: YES, I'D LIKE TO TRADE
- `3`: LEAVE
- `4`: FIGHT

### Record 1

> Pieces nottin tresting. Note retee.
> Traydor fite ?

- `0`: INFORMATION
- `1`: "I REALLY WANT A PEACE TREATY"
- `2`: TRADE
- `3`: LEAVE
- `4`: FIGHT

### Record 2

> Uneedin for mayshun. Menoe mutch. Meevin no time
> travel. In formay shunvall youble. Yumuss
> paiforrit. Wutyu givmi?

- `0`: PAY FOR INFORMATION
- `1`: I DON'T NEED INFORMATION AFTER ALL
- `2`: ASK ABOUT TIME TRAVEL
- `3`: LEAVE
- `4`: FIGHT

### Record 3

> Meesae traydor fite! Nowfite!

- `0`: FIGHT

### Record 4

> Meekan chute yirsh ipthru time. Ittellby biggrand
> bet turr. Buttyu musgivv meeyir spay stay shun.
> Okay?

- `0`: TRADE HOME BASE FOR TIME-TRAVELED SHIP
- `1`: REFUSE
- `2`: LEAVE
- `3`: FIGHT

### Record 5

> Wutyu wishtu no?

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: FEL
- `3`: LUTIN
- `4`: YOURSELVES
- `5`: EXIT

### Record 6

> Heh veefire powr. Gitbi hyne dem.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: FEL
- `3`: LUTIN
- `4`: YOURSELVES
- `5`: EXIT

### Record 7

> Litteish ipz. Bee wear ifyu maykemadd.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: FEL
- `3`: LUTIN
- `4`: YOURSELVES
- `5`: EXIT

### Record 8

> Lukfour meinz. Dowont foll oclose bee Hyne.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: FEL
- `3`: LUTIN
- `4`: YOURSELVES
- `5`: EXIT

### Record 9

> There nohzgun chute tray tahed. Kanby har umful.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: FEL
- `3`: LUTIN
- `4`: YOURSELVES
- `5`: EXIT

### Record 10

> Meeno tyme. Meekan travv elthroo tymalit tilbit.
> Icon travv elyu thru tiemtoo.

- `0`: BROODMASTERS
- `1`: CICISBEO
- `2`: FEL
- `3`: LUTIN
- `4`: YOURSELVES
- `5`: EXIT

### Record 11

> Uneedin for mayshun. Menoe mutch. Meevin no time
> travel. In formay shunvall youble. Yumuss
> paiforrit. Wutyu givmi?

- `0`: PAY FOR INFORMATION
- `1`: I DON'T NEED INFORMATION AFTER ALL
- `2`: LEAVE
- `3`: FIGHT

### Record 12

> Lemee no wutyune eed. Eye one-two hell pew.

- `0`: ASK ABOUT PEACE TREATY
- `1`: TRADE
- `2`: ASK ABOUT INFORMATION
- `3`: LEAVE
- `4`: FIGHT
