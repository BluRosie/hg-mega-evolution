.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_277", 0x0

a030_277:
    changevar VAR_OP_SET, VAR_ADD_STATUS1,  ADD_STATUS_HONE_CLAWS | ADD_STATUS_ATTACK
    endscript

.close