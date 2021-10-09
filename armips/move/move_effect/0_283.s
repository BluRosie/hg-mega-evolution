.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_283", 0x0

//蝶舞

a030_283:
    changevar VAR_OP_SET, VAR_ADD_STATUS1,  ADD_STATUS_QUIVER_DANCE| ADD_STATUS_ATTACK
    endscript

.close