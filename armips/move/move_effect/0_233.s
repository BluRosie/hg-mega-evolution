.nds
.thumb

.include "armips/include/battlescriptcmd.s"
.include "armips/include/itemnums.s"

.create "data/move/move_effect/0_233", 0x0

a030_233:
    ifmonstat IF_EQUAL, BATTLER_ATTACKER, 0x1A, 0x79, _008C
    ifmonstat IF_EQUAL, BATTLER_ATTACKER, 0x37, 0x70, _008C
    ifmonstat IF_EQUAL, BATTLER_ATTACKER, 0x37, ITEM_RUSTED_SWORD, _008C
    ifmonstat IF_EQUAL, BATTLER_ATTACKER, 0x37, ITEM_RUSTED_SHEILD, _008C
    tryfling _008C
    changevar VAR_OP_SET, VAR_ADD_STATUS2, 0xA0000088
    critcalc
    damagecalc
    printattackmessage
    waitmessage
    wait 0x1E
    printmessage 0x478, 0xF, 0x1, 0x1, "NaN", "NaN", "NaN", "NaN"
    waitmessage
    wait 0x1E
    removeitem BATTLER_ATTACKER
    endscript
_008C:
    changevar VAR_OP_SETMASK, VAR_10, 0x40
    endscript

.close
