.nds
.thumb
.include "armips/include/battlescriptcmd.s"

//文本文件197

.create "data/move/move_seq/1_308", 0x0
//霸主气场

seq_307:
    //attack up
    changevar VAR_OP_SET, VAR_34, 0x27
    gotosubscript 12
    //accuracy up
    changevar VAR_OP_SET, VAR_34, 0x28
    gotosubscript 12
    changevar VAR_OP_SET, VAR_34, 0x29
    gotosubscript 12
    changevar VAR_OP_SET, VAR_34, 0x2a
    gotosubscript 12
    changevar VAR_OP_SET, VAR_34, 0x2b
    gotosubscript 12
    changevar VAR_OP_SET, VAR_34, 0x2c
    gotosubscript 12
    changevar VAR_OP_SET, VAR_34, 0x2d
    gotosubscript 12
    endscript

end:
    endscript

.close