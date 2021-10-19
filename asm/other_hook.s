.text
.align 2
.thumb

.include "offset_def.s"

//hook 08041190
.global WindowClose
WindowClose:
ldr r0, =0x04000050
mov r1, #0x0
strh r1, [r0]
mov r0, r5
add r0, #0xD2
ldrb r1, [r0, #0x0]
mov r0, #0x40
ldr r2, =0x02041198 + 1
bx r2

.global ev_screen
ev_screen:
mov r1, #0x20
ldr r4, [r3,#0x4C]
mov r6, r4
tst r6, r1
beq check
sub r1, #0x21
bl PageChange
mov r0, #2
pop {r4-r6,pc}

/*L Button*/
check:
mov r1, #0x2
lsl r1, r1, #8
tst r6, r1
beq check2
sub r0, r2, #3
ldrsb r1, [r5, r0]
cmp r1, #0x1
bne check2
mov r1, #1
mov r0, r5
bl ChangeState
mov r0, #2
pop {r4-r6,pc}

/*R Button*/
check2:
mov r1, #0x1
lsl r1, r1, #8
tst r6, r1
beq check3
sub r0, r2, #3
ldrsb r1, [r5, r0]
cmp r1, #1
bne check3
mov r1, #2
mov r0, r5
bl ChangeState
mov r0, #2
pop {r4-r6,pc}

/*Select Button*/
check3:
mov r1, #0x4
tst r6, r1
beq return
sub r0, r2, #3
ldrsb r1, [r5, r0]
cmp r1, #1
bne return
mov r1, #0
mov r0, r5
bl ChangeState
mov r0, #2
pop {r4-r6,pc}


return:
ldr r1, =0x02088B74 + 1
bx r1

PageChange:
ldr r2, =0x02089E30 + 1
bx r2

/*不同形态的图片读取*/
.global PokePicLoad
PokePicLoad:
ldr r6, [sp, #0x18]
ldr r1, [sp, #0x1C]
mov r0, #0x0
strh r0, [r5, #0x6]
strb r0, [r5, #0x8]
str r0, [r5, #0xC]
push {r0-r3}
sub sp, #0x4
str r1, [sp, #0x0]
mov r0, r5
mov r1, r4
mov r2, r3
mov r3, r6
bl GetOtherFormPic
add sp, #0x4
cmp r0, #0x0
bne HaveNewPic
pop {r0-r3}
ldr r0, =0x020701F8 + 1
bx r0

HaveNewPic:
pop {r0-r3}
pop {r3-r7,pc}

//形态变化恢复
.global FormResert
FormResert:
lsl r0, r0, #0x2
add r2, r5, r0
lsl r1, r4, #0x2
ldr r0, [r2, r1]
push {r0-r2}
mov r2, r4
mov r1, r6
mov r0, r5
bl TryRevertFormChange
pop {r0-r2}
ldr r3, =0x69B4 + Overlay_12_Start
bx r3

//战斗结束
.global Battle_End
Battle_End:
ldr r1, [r4, r3]
mov r7, r0
lsl r2, r2, #0x2
str r1, [r7, r2]
push {r0-r3}
mov r0, r4
bl BattleEndRevertFormChange
pop {r0-r3}
ldr r1, =0xB98 + Overlay_12_Start
bx r1

//地区形态进化
.global GetFormEvo
GetFormEvo:
str r0, [sp, #0x1C]
ldr r1, [sp, #0x1C]
push {r0-r3}
mov r0, r7
bl GetMonEvoData
pop {r0-r3}
ldr r0, =0x02070EDE + 1
bx r0

//小图标色板
.global IconPalGet
IconPalGet:
push {r3}
bl PokeIconPalNumGet
pop {r3}
ldr r1, =0x020743F8 + 1
bx r1

//mega
//hook 0802F89C
.global LoadMegaOam
LoadMegaOam:
mov r3, #0x4
ldr r1, [sp, #0x38]
str r0, [sp, #0x0]
ldrb r0, [r6, #0x3]
push {r0-r3}
mov r0, r5
bl LoadMegaIcon
pop {r0-r3}
ldr r2, =0x2F8A4 + Overlay_12_Start
bx r2

//0802FBFC
.global load_mega_button
load_mega_button:
mov r1, #0x4D
str r0, [sp, #0x0]
push {r1-r3}
mov r0, r5
bl LoadMegaButton
pop {r1-r3}
mov r0, #0x3
str r0, [sp, #0x4]
ldr r0, =0x2FC04 + Overlay_12_Start
bx r0

//08030644
.global MegaButtonCheck
MegaButtonCheck:
mov r2, r5
add r2, r2, #0x1C
push {r0-r3}
mov r0, r5
mov r1, r4
bl CheckMegaButton
cmp r0, #0x0
bne end
pop {r0-r3}
cmp r4, #0x1
blt sub_803065Ah
ldr r3, =0x3064C + Overlay_12_Start
bx r3

sub_803065Ah:
ldr r0, =0x3065A + Overlay_12_Start
bx r0

end:
pop {r0-r3}
mov r0, #0x0
mvn r0, r0
pop {r3-r7,pc}
