.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//磨爪效果
//Hone Claws
.create "data/move/move_seq/1_302", 0x0

a001_297:
    //attack
    ifmonstat IF_NOTEQUAL, BATTLER_ADDL_EFFECT, 19, 0xC, StatusEffect
    //accuracy
    ifmonstat IF_EQUAL, BATTLER_ADDL_EFFECT, 25, 0xC, NoStatusEffect
StatusEffect:
    gotosubscript 76
    changevar VAR_OP_SETMASK, VAR_06, 0x200000
    changevar VAR_OP_SETMASK, VAR_06, 0x4001
    changevar VAR_OP_SETMASK, VAR_60, 0x80
    //attack up
    changevar VAR_OP_SET, VAR_34, ATK_UP
    gotosubscript 12
    //accuracy up
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