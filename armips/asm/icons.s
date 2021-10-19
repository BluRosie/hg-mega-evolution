.nds
.thumb

.include "armips/asm/offset.s"
.open "base/arm9.bin", 0x02000000

gIconPalTable equ 0x020FFC10

.org 0x02074364
push {r3,lr}
bl PokeIconPalNumGet
ldr r1, =gIconPalTable
ldrb r0, [r1,r0]
pop {r3,pc}
.pool

.close