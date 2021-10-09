.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_281", 0x0

effect_281:
    changevar VAR_OP_SET, VAR_ADD_STATUS1,  ADD_STATUS_AUTOTOMIZE | 0x20000000
    endscript
.close