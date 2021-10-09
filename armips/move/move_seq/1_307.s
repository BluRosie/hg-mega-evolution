.nds
.thumb
.include "armips/include/battlescriptcmd.s"

//文本文件197

.create "data/move/move_seq/1_307", 0x0
//心情不定

seq_307:

    ifmonstat2 IF_NOTEQUAL, BATTLER_ADDL_EFFECT, 20, 0, next
    ifmonstat IF_EQUAL, BATTLER_ADDL_EFFECT, 22, 12, end

next:
    changevar VAR_OP_SETMASK, 6, 0x200000
    changevar VAR_OP_SETMASK, 6, 0x4001
    changevar VAR_OP_SETMASK, 6, 0x80

    changevar 7, 5, 0x2
    changevar2 VAR_OP_SET, 34, 22
    gotosubscript 12

    changevar 7, 5, 0x3
    changevar2 VAR_OP_SET, 34, 20
    gotosubscript 12
    changevar VAR_OP_CLEARMASK, 60, 0x2
    changevar VAR_OP_CLEARMASK, 60, 0x80
    endscript

end:
    endscript

.close