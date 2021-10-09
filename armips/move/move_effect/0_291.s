.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//计算自身体重伤害
.create "data/move/move_effect/0_291", 0x0

effect_291:
    changevar2 VAR_OP_GET_RESULT, VAR_DEFENDER, VAR_ITEM_TEMP
    changevar2 VAR_OP_SET, VAR_DEFENDER, VAR_ATTACKER
    lowkickdamagecalc
    changevar2 VAR_OP_SET, VAR_DEFENDER, VAR_ITEM_TEMP
    critcalc
    damagecalc
    endscript

.close