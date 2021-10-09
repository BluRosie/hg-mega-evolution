.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//力量平分效果
//Power Split
PowerSplitMsg equ 1297

.create "data/move/move_seq/1_303", 0x0

a001_298:
    //attack
    changevartomonvalue2 VAR_OP_GET_RESULT, SIDE_ATTACKER, MON_DATA_ATK, 9
    changevartomonvalue2 VAR_OP_GET_RESULT, SIDE_DEFENCE, MON_DATA_ATK, 43
    changevar2 VAR_OP_ADD,43,9
    changevar VAR_OP_RSH, 43, 1
    changevartomonvalue2 VAR_OP_SET, SIDE_ATTACKER, MON_DATA_ATK, 43
    changevartomonvalue2 VAR_OP_SET, SIDE_DEFENCE, MON_DATA_ATK, 43

    //spatk
    changevartomonvalue2 VAR_OP_GET_RESULT, SIDE_ATTACKER, MON_DATA_SPATK, 9
    changevartomonvalue2 VAR_OP_GET_RESULT, SIDE_DEFENCE, MON_DATA_SPATK, 43
    changevar2 VAR_OP_ADD,43,9
    changevar VAR_OP_RSH, 43, 1
    changevartomonvalue2 VAR_OP_SET, SIDE_ATTACKER, MON_DATA_SPATK, 43
    changevartomonvalue2 VAR_OP_SET, SIDE_DEFENCE, MON_DATA_SPATK, 43

    printmessage PowerSplitMsg, 0x2, 0x1, "NaN", "NaN", "NaN", "NaN", "NaN"
    waitmessage
    wait 0x1E
    endscript

.close