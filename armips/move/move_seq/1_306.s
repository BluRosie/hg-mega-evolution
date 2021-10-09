.nds
.thumb

.include "armips/include/battlescriptcmd.s"

//收获
GuardSplitMsg equ 1310

.create "data/move/move_seq/1_306", 0x0

a001_299:
    ifmonstat IF_NOTEQUAL, BATTLER_xFF, MON_DATA_ITEM, 0x0, _005C
    tryrecycle _005C
    changevartomonvalue2 VAR_OP_SET, BATTLER_xFF, 0x37, VAR_ITEM_TEMP2
    printmessage GuardSplitMsg, 0xB, 0xFF, 0x15,0,0,0,0
    waitmessage
    wait 0x1e
    endscript
_005C:
    endscript

.close