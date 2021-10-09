.text
.align 4
.thumb

.include "offset_def.s"

//220C
.global rand
rand:
mov r1, r7
lsl r0, r0, #0x3
ldr r0, [r4, r0]
push {r1-r3}
bl random
pop {r1-r3}

encount_back:
ldr r3, =0x2214 + Overlay_02_Start
bx r3

.align 4
//29E0
.global AddPokemonParm_Encount
AddPokemonParm_Encount:
mov r1, r5
push {r0-r3}
mov r0, r2
mov r1, r3
bl AddPokemonParam
pop {r0-r3}
mov r7, r0
ldrb r0, [r5, #0xD]
mov r4, r2
mov r6, r3
cmp r0, #0
bne b_80029F6h
ldr r0, =0x29EC + Overlay_02_Start
bx r0

b_80029F6h:
ldr r2, =0x29F6 + Overlay_02_Start
bx r2

.align 4
//连锁捕捉文本 EF74 0
.global GetLinkPokemonText
GetLinkPokemonText:
push {r1-r3}
mov r0, r4
mov r1, r7
bl GetMonLinkMessage
pop {r1-r3}
cmp r0, #0x0
beq nothing
mov r1, #0x51
lsl r1, r1, #4
add r1, #7
add r0, sp, #0x10C
strh r1, [r0, #2]
mov r1, #0x91
strb r1, [r0, #1]
ldr r1, =linkNum
ldrh r1, [r1, #0]
str r1, [sp, #0x114]
b link_back

nothing:
add r0, sp, #0x10C
strh r1, [r0, #2]
mov r1, #0x82
strb r1, [r0, #1]

link_back:
ldr r0, =0xEF7C + Overlay_12_Start
bx r0

.align 4
//引虫香水
.global lureCheck
lureCheck:
mov r0, r5
bl LureCheck
cmp r0, #0
beq lure_false
mov r0, #1
pop {r3-r7,pc}

lure_false:
ldr r0, =0x1DEA + Overlay_01_Start
bx r0
