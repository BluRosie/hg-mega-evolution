.nds
.thumb


.open "base/arm9.bin", 0x02000000

// edits to GetMoveDataTable -- change size
.org 0x02073302
    mov r1, #((NUM_OF_MOVES + 1) * 16) >> 6
    lsl r1, #6

.close

.open "base/overlay/overlay_0012.bin", 0x022378C0

.org 0x0223DE34
    .word 0x3182

.org 0x0223E590
    .word 0x317E

.org 0x022400A8
    .word 0x3182

.org 0x022406C0
    .word 0x3183

.org 0x02240816 // this one takes advantage of an unnecessary reload of the move into r0
    lsl r0, #4
    add r4, r6, r0
    mov r0, #0x3200 >> 8
    lsl r0, #8
    sub r0, #0x7C // put 0x3184 in r0


.org 0x02240F10 // this one takes advantage of a close value, 0x30AC, already being in the pool
    ldr r1, =0x30AC
    add r1, #0xD8 // 30AC + D8 = 3184

.org 0x02240F6C

.pool


.org 0x022414EC
    .word 0x317E

.org 0x02241F04
    .word 0x3181

.org 0x02241F98
    .word 0x3181

.org 0x02242960
    .word 0x3181

.org 0x02242D8C
    .word 0x3186

.org 0x02243028
    .word 0x3181

.org 0x02243360
    .word 0x3181

.org 0x022434FC
    .word 0x317E

.org 0x022438D0
    .word 0x3181

.org 0x02243A04
    .word 0x3181

.org 0x02243B38
    .word 0x3181

.org 0x02244838
    .word 0x3185

.org 0x0224491C
    .word 0x317E

.org 0x022453CC
    .word 0x3182

.org 0x022486A4
    .word 0x317E + ((NUM_OF_MOVES+1) * 16) // size of new battle structure now
    .word 0x317E

.org 0x0224B388
    .word 0x3186

.org 0x0224B494
    .word 0x317E

.org 0x0224B51C
    .word 0x3186

.org 0x0224B858
    .word 0x317E

.org 0x0224B878
    .word 0x3181

.org 0x0224BCF4
    mov r0, #0x3180 >> 7
    lsl r0, #7

.org 0x0224BFF8
    .word 0x3183

.org 0x0224C000
    .word 0x317E

.org 0x0224C15C // for some reason this 3E6 is stupid optimized
// 3186 is goal > 3200
    mov r2, #0x3200 >> 8
    ldr r0, [r5, r1]
    lsl r2, #8 // r2 = 0x3200
    tst r0, r2
    bne 0x0224C1EA
    ldr r0, =0x3044
    sub r2, #0x7A // r2 = 3186

.org 0x0224C200

.pool


.org 0x0224C1F4
    .word 0x3189

.org 0x0224C1FC
    .word 0x317E

.org 0x0224C360
    .word 0x3189

.org 0x0224C90C
    mov r1, #0x3180 >> 7
    ldr r0, [r4, r0]
    lsl r1, #7

.org 0x0224C9D8
    .word 0x317E

.org 0x0224CEF8
    .word 0x3182

.org 0x0224D1C4
    .word 0x3186

.org 0x0224DC00
    .word 0x3186

.org 0x0224DF5C
    .word 0x3182
    .word 0x3189

.org 0x0224DF74
    .word 0x3186

.org 0x0224E128
    .word 0x3189

.org 0x0224E2F6
    mov r0, #0x3180 >> 7
    lsl r0, #7


// the next little bit is all to get an optimized 3E8.  thank god it is barely accessed

.org 0x0225019E
    bne _edited

.org 0x022501B6
    b _edited

.org 0x022501C4 // optimized 3E8 > 3188
    str r0, [sp, #0x5C]

_edited: // originally at 0x022501CA
    ldr r0, [sp, #0x60]
    mov r1, #0x3200 >> 8
    lsl r0, r0, #4
    add r0, r5, r0
    lsl r1, #8
    sub r1, #0x78 // r1 = 3200 - 78 = 3188
    nop

.org 0x022506C4
    .word 0x3185

.org 0x0225099C
    .word 0x3186

.org 0x02250BAC
    .word 0x3182
    .word 0x3186

.org 0x02251A24
    .word 0x3181

.org 0x0225203C
    .word 0x3182
    .word 0x3181

.org 0x02252170
    .word 0x3182

.org 0x02252608
    .word 0x317E

.org 0x0225304C
    .word 0x3182

.org 0x0225305C
    .word 0x3181

.org 0x02253830
    .word 0x317E

.org 0x02253838
    .word 0x3181

.org 0x02254130
    .word 0x3189

.org 0x02254138
    .word 0x3182
    .word 0x3181

.org 0x0225438C
    .word 0x3189

.org 0x0225581C
    .word 0x3189

.org 0x02257010
    .incbin "data/rawdata/effect.bin"
    .word 302, 303, 304, 309, 310, 311, 312, 313, 314, 315

.org 0x022572BE
    mov r0, #0x3180 >> 7
    lsl r0, #7

.org 0x0225749C
    .word 0x3181
    .word 0x3182

.org 0x02257AE8
    .word 0x317E

.org 0x02257C28
    .word 0x3186

.org 0x02257E30
    .word 0x317E

.org 0x02257E6C
    .word 0x317E

.org 0x02258062
    mov r0, #0x3180 >> 7
    lsl r0, #7

.org 0x0225817C
    .word 0x3189

.org 0x022584A4
    .word 0x317E

.org 0x02258680
    .word 0x317E

.org 0x02258B98
    .word 0x3181

.org 0x022645A4
    .word 0x3181


.close


// this fixes new move animations
.open "base/overlay/overlay_0007.bin", 0x0221BE20

.org 0x0221C380
    .word NUM_OF_MOVES

.close


.open "base/overlay/overlay_0010.bin", 0x0221BE20

.org 0x3E8 + 0x0221BE20
    bl getmovetarget

.org 0xCDC + 0x0221BE20
    .word 0x3181

.org 0xD40 + 0x0221BE20
    .word 0x3181

.org 0xDFC + 0x0221BE20
    bl getmovetype

.org 0xF04 + 0x0221BE20
    bl getmovepower

.org 0xF30 + 0x0221BE20
    bl getbattleeffect_1

.org 0x1040 + 0x0221BE20
    .word 0x3181

.org 0x1278 + 0x0221BE20
    bl getbattleeffect_2

.org 0x180C + 0x0221BE20
    bl getbattleeffect_3

.org 0x1844 + 0x0221BE20
    bl getbattleeffect_3

.org 0x19E8 + 0x0221BE20
    bl getbattleeffect_4

.org 0x1AC8 + 0x0221BE20
    .word 0x3181

.org 0x1B14 + 0x0221BE20
    bl getbattleeffect_4

.org 0x1BF4 + 0x0221BE20
    .word 0x3181

.org 0x1E20 + 0x0221BE20
    .word 0x317E

.org 0x1EC4 + 0x0221BE20
    .word 0x317E

.org 0x236C + 0x0221BE20
    bl getmovepss_1

.org 0x239A + 0x0221BE20
    bl getmovepss_2

.org 0x2A44 + 0x0221BE20
    bl getbattleeffect_1

.org 0x2B74 + 0x0221BE20
    .word 0x3181

.org 0x2D42 + 0x0221BE20
    bl getmovetype_2

.org 0x2D62 + 0x0221BE20
    bl getmovepower_2

.org 0x2D82 + 0x0221BE20
    bl getbattleeffect_5

.org 0x3250 + 0x0221BE20
    .word 0x317E

.org 0x3260 + 0x0221BE20
    .word 0x3181

.org 0x3F08 + 0x0221BE20
    .word 0x3181

.org 0x41E0 + 0x0221BE20
    .word 0x3181

.org 0x443C + 0x0221BE20
    .word 0x3181

.org 0x4548 + 0x0221BE20
    .word 0x3181

.close

.open "build/a028/8_0", 0x023C8000

.org 0x023C8000 + 0x3000
getmovetarget:
    add r3, sp, #0x18
    ldr r0, =0x3186
    bx lr

getmovetype:
    ldr r1, =0x3182
    bx lr

getmovepower:
    ldr r1, =0x3181
    bx lr

getbattleeffect_1:
    ldr r1, =0x222B098
    ldr r2, =0x317e
    bx lr

getbattleeffect_2:
    ldr r1, =0x317e
    bx lr

getbattleeffect_3:
    ldr r0, =0x317e
    lsl r2, r2, #4
    bx lr

getbattleeffect_4:
    ldr r2, =0x317e
    mov r0, #0
    bx lr

getmovepss_1:
    ldr r1, =0x3180
    bx lr

getmovepss_2:
    ldr r0, =0x3180
    bx lr

getmovetype_2:
    ldr r0, =0x3182
    bx lr

getmovepower_2:
    ldr r0, =0x3181
    bx lr

getbattleeffect_5:
    ldr r0, =0x317e
    bx lr
.pool

.close