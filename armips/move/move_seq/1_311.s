.nds
.thumb

.include "armips/include/battlescriptcmd.s"
.include "armips/include/constants.s"
.include "armips/include/abilities.s"

//浸水

.create "data/move/move_seq/1_311", 0x0
seq_311:
    abilitycheck 0, BATTLER_DEFENDER, ABILITY_MULTITYPE, _end
    ifmonstat IF_NOTEQUAL, BATTLER_DEFENDER, MON_DATA_TYPE_1, TYPE_WATER, changetype
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, MON_DATA_TYPE_2, TYPE_WATER, _end

changetype:
    changevartomonvalue VAR_OP_SET, BATTLER_DEFENDER, MON_DATA_TYPE_1, TYPE_WATER
    changevartomonvalue VAR_OP_SET, BATTLER_DEFENDER, MON_DATA_TYPE_2, TYPE_WATER
    gotosubscript 76
    printmessage 1313, 0xB, 0xFF, 0x15,0,0,0,0
    waitmessage
    wait 0x1E
    endscript

_end:
    changevar VAR_OP_SETMASK, VAR_10, 0x40
    endscript
    
.close