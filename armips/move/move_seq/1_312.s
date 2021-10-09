.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//盘蜷

.create "data/move/move_seq/1_312", 0x0

a001_312:
    //attack
    ifmonstat IF_NOTEQUAL, BATTLER_ADDL_EFFECT, MON_DATA_STAT_STAGE_ATTACK, 12, StatusEffect
    //deff
    ifmonstat IF_NOTEQUAL, BATTLER_ADDL_EFFECT, MON_DATA_STAT_STAGE_DEFENSE, 12, StatusEffect
    //acc
    ifmonstat IF_EQUAL, BATTLER_ADDL_EFFECT, MON_DATA_STAT_STAGE_ACCURACY, 12, NoStatusEffect

StatusEffect:
    gotosubscript 76
    changevar VAR_OP_SETMASK, VAR_06, 0x200000
    changevar VAR_OP_SETMASK, VAR_06, 0x4001
    changevar VAR_OP_SETMASK, VAR_60, 0x80
    //spa up
    changevar VAR_OP_SET, VAR_34, ATK_UP
    gotosubscript 12
    //spd up
    changevar VAR_OP_SET, VAR_34, DEF_UP
    gotosubscript 12
    //spe
    changevar VAR_OP_SET, VAR_34, ACC_UP
    gotosubscript 12
    changevar VAR_OP_CLEARMASK, VAR_60, 0x2
    changevar VAR_OP_CLEARMASK, VAR_60, 0x80
    endscript
NoStatusEffect:
    printattackmessage
    waitmessage
    wait 0x1E
    printmessage 0x300, 0x2, 0x7, "NaN", "NaN", "NaN", "NaN", "NaN"
    waitmessage
    wait 0x1E
    changevar VAR_OP_SETMASK, VAR_10, 0x80000000
    endscript

.close