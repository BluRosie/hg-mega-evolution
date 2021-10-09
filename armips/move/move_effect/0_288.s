.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_288", 0x0

//换挡

a030_288:
    changevar VAR_OP_SET, VAR_ADD_STATUS1,  ADD_STATUS_SHIFT_GEAR | ADD_STATUS_ATTACK
    endscript

.close