.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//mega计划动画
//Guard Split
MegaMsg equ 1276

.create "data/move/move_seq/1_297", 0x0

mega:
    //设置技能动画
    changevar VAR_OP_SET, VAR_MOVE_EFFECT, 0x1
    changevar VAR_OP_SET, VAR_MOVE_TEMP2, 470
    //播放文本
    printmessage MegaMsg, 0xB, 0xFF, 0x15,0,0,0,0
    waitmessage
    wait 0x1E
    //如果不是替身跳转
    ifmonstat IF_NOTMASK, BATTLER_xFF, MON_DATA_STATUS_2, 0x1000000, _0044
    //设置出场
    setstatus2effect BATTLER_xFF, 0xF
    waitmessage
    cmd_C4 BATTLER_xFF
    waitmessage
    setstatus2effect BATTLER_xFF, 0x10
    waitmessage
    //清楚替身flag
    changevartomonvalue VAR_OP_CLEARMASK, BATTLER_xFF, MON_DATA_STATUS_2, 0x1000000
    seteffectsecondary BATTLER_xFF, BATTLER_x15, BATTLER_xFF
    wait 0x7e
    wait 0x16e
    //形态变化
    changeform BATTLER_xFF
    waitmessage
    printmessage MegaMsg + 3, 0xB, 0xFF, 0x15,0,0,0,0
    waitmessage
    wait 0x1E
    //恢复替身flag
    changevartomonvalue VAR_OP_SETMASK, BATTLER_xFF, MON_DATA_STATUS_2, 0x1000000
    changevar VAR_OP_SET, VAR_MOVE_EFFECT, 0x0
    changevar VAR_OP_CLEARMASK, VAR_06, 0x4000
    ifmonstat IF_NOTMASK, BATTLER_xFF, MON_DATA_STATUS_2, 0x1000000, _00EC
    setstatus2effect BATTLER_xFF, 0xF
    waitmessage
    cmd_D6 BATTLER_xFF
    waitmessage
    setstatus2effect BATTLER_xFF, 0x10
    waitmessage
    endscript
_0044:
    //播放技能动画
    seteffectsecondary BATTLER_xFF, BATTLER_x15, BATTLER_xFF
    wait 0x7e
    wait 0x16e
    //切换形态图片
    changeform BATTLER_xFF
    waitmessage
    printmessage MegaMsg + 3, 0xB, 0xFF, 0x15,0,0,0,0
    waitmessage
    wait 0x1E
    changevar VAR_OP_SET, VAR_MOVE_EFFECT, 0x0
    changevar VAR_OP_CLEARMASK, VAR_06, 0x4000
_00EC:
    endscript

.close