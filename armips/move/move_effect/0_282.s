.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//必定暴击
.create "data/move/move_effect/0_282", 0x0

effect_282:
    changevar VAR_OP_SET, VAR_WAS_MOVE_CRITICAL, 0x2
    damagecalc
    endscript
.close