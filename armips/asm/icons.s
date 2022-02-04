.nds
.thumb

.include "armips/asm/offset.s"
.include "armips/data/iconpalettetable.s"

.open "base/arm9.bin", 0x02000000

.org 0x02074364
push {r3,lr}
bl PokeIconPalNumGet
ldr r1, =gIconPalTable
ldrb r0, [r1,r0]
pop {r3,pc}
.pool

.close
