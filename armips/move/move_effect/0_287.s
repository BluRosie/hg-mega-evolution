.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//祸不单行
.create "data/move/move_effect/0_287", 0x0

effect_287:
    //混乱
    ifmonstat2 IF_NOTEQUAL, BATTLER_DEFENDER, MON_DATA_STATUS_1, 0, Status
    changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0xA
    goto _end

Status:
    changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0x14

_end:
    critcalc
    damagecalc
    endscript

.close