.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_279", 0x0

//防御平分

a030_279:
    changevar VAR_OP_SET, VAR_ADD_STATUS2,  ADD_STATUS_GUARD_SPLIT | 0x20000000
    endscript

.close