.text
.align 2
.thumb

.include "offset_def.s"


//小偷效果道具检查
//hook 08009A74 r0
.global CheckCanTakeItem
CheckCanTakeItem:
add r0, r5, r1
ldrh r0, [r0,r3]
push {r1-r5}
bl CheckItemByThief
pop {r1-r5}
cmp r0, #0x0
beq backToThief_1
ldr r0, =0x9A7C + Overlay_12_Start
bx r0

backToThief_1:
ldr r0, =0x9A86 + Overlay_12_Start
bx r0

