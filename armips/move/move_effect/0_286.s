.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_286", 0x0

//盘蜷

a030_286:
    changevar VAR_OP_SET, VAR_ADD_STATUS1,  ADD_STATUS_COIL | ADD_STATUS_ATTACK
    endscript

.close