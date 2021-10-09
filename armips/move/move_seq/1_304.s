.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//防御平分效果
//Guard Split
GuardSplitMsg equ 1300

.create "data/move/move_seq/1_304", 0x0

a001_299:
    //attack
    changevartomonvalue2 VAR_OP_GET_RESULT, SIDE_ATTACKER, MON_DATA_DEF, 9
    changevartomonvalue2 VAR_OP_GET_RESULT, SIDE_DEFENCE, MON_DATA_DEF, 43
    changevar2 VAR_OP_ADD,43,9
    changevar VAR_OP_RSH, 43, 1
    changevartomonvalue2 VAR_OP_SET, SIDE_ATTACKER, MON_DATA_DEF, 43
    changevartomonvalue2 VAR_OP_SET, SIDE_DEFENCE, MON_DATA_DEF, 43

    //spatk
    changevartomonvalue2 VAR_OP_GET_RESULT, SIDE_ATTACKER, MON_DATA_SPDEF, 9
    changevartomonvalue2 VAR_OP_GET_RESULT, SIDE_DEFENCE, MON_DATA_SPDEF, 43
    changevar2 VAR_OP_ADD,43,9
    changevar VAR_OP_RSH, 43, 1
    changevartomonvalue2 VAR_OP_SET, SIDE_ATTACKER, MON_DATA_SPDEF, 43
    changevartomonvalue2 VAR_OP_SET, SIDE_DEFENCE, MON_DATA_SPDEF, 43

    printmessage GuardSplitMsg, 0x2, 0x1, "NaN", "NaN", "NaN", "NaN", "NaN"
    waitmessage
    wait 0x1E
    endscript

.close