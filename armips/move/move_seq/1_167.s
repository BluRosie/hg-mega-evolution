.nds
.thumb

.include "armips/include/battlescriptcmd.s"
.include "armips/include/itemnums.s"

.create "data/move/move_seq/1_167", 0x0

a001_167:
    if IF_MASK, VAR_10, 0x10001, _00A8
    checknostatus BATTLER_DEFENDER, _00A8
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x1A, 0x36, _00A8
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x1A, 0x79, _00A8

    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x37, 0x70, _00A8
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x37, ITEM_RUSTED_SHEILD, _00A8
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x37, ITEM_RUSTED_SWORD, _00A8

    gotosubscript 76
    changevartomonvalue VAR_OP_SET, BATTLER_DEFENDER, 0x1A, 0xF
    printmessage 0x3FD, 0xB, 0x2, 0x2, "NaN", "NaN", "NaN", "NaN"
    waitmessage
    wait 0x1E
    endscript
_00A8:
    changevar VAR_OP_SETMASK, VAR_10, 0x40
    endscript

.close
