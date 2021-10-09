.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_292", 0x0

//Ｖ热焰

a030_292:
    changevar VAR_OP_SET, VAR_ADD_STATUS2, ADD_STATUS_V_CREATE | ADD_STATUS_ATTACK | 0x20000000
    critcalc
    damagecalc
    endscript

.close