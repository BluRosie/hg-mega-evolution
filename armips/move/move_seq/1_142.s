.nds
.thumb

.include "armips/include/battlescriptcmd.s"
.include "armips/include/itemnums.s"

.create "data/move/move_seq/1_142", 0x0

a001_142:
    checknostatus BATTLER_DEFENDER, _0084
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x1A, 0x79, _0084

    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x37, 0x70, _0084
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x37, ITEM_RUSTED_SWORD, _0084
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, 0x37, ITEM_RUSTED_SHEILD, _0084

    ifmonstat IF_NOTEQUAL, BATTLER_DEFENDER, 0x56, 0x0, _0084
    ifmonstat IF_NOTEQUAL, BATTLER_DEFENDER, 0x55, 0x0, _0084
    tryknockitemoff _0084
    printpreparedmessage
    waitmessage
    wait 0x1E
_0084:
    endscript

.close
