.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_285", 0x0

//蓄能焰袭

a030_285:
    changevar VAR_OP_SET, VAR_ADD_STATUS2, 0x11 | ADD_STATUS_ATTACK
    critcalc
    damagecalc
    endscript

.close