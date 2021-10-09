.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_284", 0x0

//浸水

a030_284:
    changevar VAR_OP_SET, VAR_ADD_STATUS1,  ADD_STATUS_SOAK | ADD_STATUS_DEFENCE
    endscript

.close