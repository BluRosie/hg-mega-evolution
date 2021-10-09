.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//V热焰

.create "data/move/move_seq/1_315", 0x0

a001_315:
    changevar VAR_OP_SETMASK, VAR_60, 0x80
    //spe down
    changevar VAR_OP_SET, VAR_34, SPE_DOWN
    gotosubscript 12
    //def down
    changevar VAR_OP_SET, VAR_34, DEF_DOWN
    gotosubscript 12
    //sp def down
    changevar VAR_OP_SET, VAR_34, SPDEF_DOWN
    gotosubscript 12
    changevar VAR_OP_CLEARMASK, VAR_60, 0x2
    changevar VAR_OP_CLEARMASK, VAR_60, 0x80
    endscript

.close