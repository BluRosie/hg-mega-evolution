.nds
.thumb
.include "armips/include/battlescriptcmd.s"
.include "armips/include/abilities.s"


.create "data/move/move_seq/1_091", 0x0
a001_091:
    if IF_MASK, VAR_10, 0x10000, _012C
    moldbreakerabilitycheck 0x0, BATTLER_DEFENDER, ABILITY_SUCTION_CUPS, _0140
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, MON_DATA_MOVE_STATE, 0x400, _015C
    if IF_EQUAL, VAR_BATTLE_TYPE, 0x4A, _012C
    trywhirlwind _012C
    gotosubscript 76
    trynaturalcure BATTLER_DEFENDER, _0084
    changevartomonvalue VAR_OP_SET, BATTLER_DEFENDER, 0x34, 0x0
_0084:
    deletepokemon BATTLER_DEFENDER
    waitmessage
    if IF_NOTMASK, VAR_BATTLE_TYPE, 0x1, _0110

_0020:
    ifmonstat IF_EQUAL, BATTLER_DEFENDER, MON_DATA_HP, 0, nohave
    //再生力
    abilitycheck 1, BATTLER_DEFENDER, ABILITY_REGENERATOR ,nohave
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_DEFENDER, MON_DATA_MAX_HP, 9
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_DEFENDER, MON_DATA_HP, 43
    changevar VAR_OP_DIV, 9, 3
    changevar2 VAR_OP_ADD, 9, 43
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_DEFENDER, MON_DATA_MAX_HP, 43
    if2 IF_GREATER, 9, 43, chaoguo
    changevartomonvalue2 VAR_OP_SET, BATTLER_DEFENDER, MON_DATA_HP, 9
    goto nohave

chaoguo:
    changevartomonvalue2 VAR_OP_SET, BATTLER_DEFENDER, MON_DATA_HP, 43

nohave:
    preparehpgaugeslide BATTLER_DEFENDER
    waitmessage
    switchindataupdate BATTLER_WHIRLWINDED
    waitmessage
    pokemonappear BATTLER_DEFENDER
    waitwithoutbuttonpress 0x48
    hpgaugeslidein BATTLER_DEFENDER
    waitmessage
    printmessage 0x25B, 0x2, 0x2, "NaN", "NaN", "NaN", "NaN", "NaN"
    waitmessage
    wait 0x1E
    changevar2 VAR_OP_SET, VAR_SWITCHED_BATTLER, VAR_DEFENDER
    gotosubscript 99
    endscript
_0110:
    fadeout
    waitmessage
    changevar VAR_OP_SETMASK, VAR_BATTLE_RESULT, 0x5
    endscript
_012C:
    changevar VAR_OP_SETMASK, VAR_10, 0x40
    endscript
_0140:
    preparemessage 0x293, 0xB, 0x2, 0x2, "NaN", "NaN", "NaN", "NaN"
    goto _016C
_015C:
    preparemessage 0x21E, 0x2, 0x2, "NaN", "NaN", "NaN", "NaN", "NaN"
_016C:
    printattackmessage
    waitmessage
    wait 0x1E
    printpreparedmessage
    waitmessage
    wait 0x1E
    changevar VAR_OP_SETMASK, VAR_10, 0x80000000
    endscript

.close