.nds
.thumb

// big thanks to mikelan98 and nomura for this.  really cool stuff

.open "build/a028/8_0", 0x023C8000

.org 0x023C8000 + 0x3060

typetable:
.incbin "data/rawdata/type.bin"

.close

.open "base/overlay/overlay_0012.bin", 0x08000000

.org 0x0801A460
.word typetable + 1

.org 0x0801A460
.word typetable + 2

.org 0x0801A78C
.word typetable

.org 0x0801A8B4
.word typetable

.org 0x0801A900
.word typetable + 1

.org 0x0801A904
.word typetable + 2

.org 0x0801AD80
.word typetable

.org 0x0801AD84
.word typetable + 1

.org 0x0801AD88
.word typetable + 2

.org 0x0801ADD4
.word typetable
.close

