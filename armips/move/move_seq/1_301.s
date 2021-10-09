.nds
.thumb
.include "armips/include/battlescriptcmd.s"

//文本文件197
//VAR_OP_SET equ 7
//VAR_OP_SETMASK equ 10
//VAR_OP_CLEARMASK equ 11
.create "data/move/move_seq/1_301", 0x0
//破碎铠甲

seq_301:
    //判断防御能力值是否为0,速度值为12
    ifmonstat IF_NOTEQUAL, BATTLER_ADDL_EFFECT, 20, 0, next
    ifmonstat IF_EQUAL, BATTLER_ADDL_EFFECT, 21, 12, end

next:
    changevar VAR_OP_SETMASK, 6, 0x200000
    changevar VAR_OP_SETMASK, 6, 0x4001
    changevar VAR_OP_SETMASK, 6, 0x80
    //防御下降
    changevar 7, 5, 0x2
    changevar VAR_OP_SET, 34, 0x17
    gotosubscript 12
    //速度x2
    changevar 7, 5, 0x3
    changevar VAR_OP_SET, 34, 0x29
    gotosubscript 12
    changevar VAR_OP_CLEARMASK, 60, 0x2
    changevar VAR_OP_CLEARMASK, 60, 0x80
    endscript

end:
    endscript

.close