.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_278", 0x0

a030_278:
    changevar VAR_OP_SET, VAR_ADD_STATUS2,  ADD_STATUS_POWER_SPLIT | 0x20000000
    endscript

.close