.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//杂耍
.create "data/move/move_effect/0_289", 0x0

effect_289:
    ifmonstat2 IF_EQUAL, BATTLER_ATTACKER, MON_DATA_ITEM, 0, Status
    changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0xA
    goto _end

Status:
    changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0x14

_end:
    critcalc
    damagecalc
    endscript

.close