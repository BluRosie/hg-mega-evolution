.nds
.thumb

.include "armips/include/battlescriptcmd.s"

.create "data/move/move_effect/0_280", 0x0

effect_280:
    ifmonstat2 IF_MASK, BATTLER_DEFENDER, MON_DATA_STATUS_1, 0x8, poison
    ifmonstat2 IF_MASK, BATTLER_DEFENDER, MON_DATA_STATUS_1, 0x80, poison
    changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0xA
    goto _end

poison:
    changevar VAR_OP_SET, VAR_DAMAGE_MULT, 0x14

_end:
    critcalc
    damagecalc
    endscript

.close