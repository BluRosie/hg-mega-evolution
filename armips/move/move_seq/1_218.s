.nds
.thumb

.include "armips/include/battlescriptcmd.s"
.include "armips/include/itemnums.s"

.create "data/move/move_seq/1_218", 0x0

a001_218:
    if IF_MASK, VAR_10, 0x10001, _00E8
    checknostatus BATTLER_DEFENDER, _00E8
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x1A, 0x79, _00E8
    ifmonstat IF_NOTEQUAL, BATTLER_DEFENDER, 0x51, 0x0, _00E8

    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x37, ITEM_RUSTED_SWORD, _00E8
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x37, ITEM_RUSTED_SHEILD, _00E8

    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x37, 0x70, _00E8
    ifmonstat IF_NOTEQUAL, BATTLER_DEFENDER, 0x56, 0x0, _00E8
    ifmonstat IF_NOTEQUAL, BATTLER_DEFENDER, 0x55, 0x0, _00E8
    gotosubscript 76
    changevartomonvalue VAR_OP_SETMASK, BATTLER_DEFENDER, 0x3B, 0x4000000
    changevartomonvalue VAR_OP_SET, BATTLER_DEFENDER, 0x51, 0x5
    printmessage 0x46F, 0x2, 0x2, "NaN", "NaN", "NaN", "NaN", "NaN"
    waitmessage
    wait 0x1E
    endscript
_00E8:
    changevar VAR_OP_SETMASK, VAR_10, 0x40
    endscript

.close
