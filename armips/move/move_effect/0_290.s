.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_290", 0x0

//破壳

a030_290:
    changevar VAR_OP_SET, VAR_ADD_STATUS1,  ADD_STATUS_SHELL_SMASH | ADD_STATUS_ATTACK
    endscript

.close