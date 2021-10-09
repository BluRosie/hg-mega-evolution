.nds
.thumb
.include "armips/include/battlescriptcmd.s"
.include "armips/include/abilities.s"


.create "data/move/move_seq/1_175", 0x0
a001_175:
    checkwipeout BATTLER_DEFENDER, _02B4
    tryswitchinmon BATTLER_ATTACKER, 0x1, _02B4
    checkifcurrentmovehits _002C
    gotosubscript2 43
_002C:
    checkwhenitemmakesmovehit _003C
    gotosubscript2 43
_003C:
    ifmonstat IF_NOTEQUAL, BATTLER_DEFENDER, MON_DATA_HP, 0x0, _0140
    ifmonstat IF_NOTMASK, BATTLER_DEFENDER, MON_DATA_STATUS_2, 0x2000000, _0140
    checkbattlersequal BATTLER_ATTACKER, BATTLER_DEFENDER, _0140
    ifmonstat IF_EQUAL, BATTLER_ATTACKER, MON_DATA_HP, 0x0, _0140
    printmessage 0x187, 0x9, 0x2, 0x1, "NaN", "NaN", "NaN", "NaN"
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_ATTACKER, 0x2F, VAR_HP_TEMP
    changevar VAR_OP_MUL, VAR_HP_TEMP, 0xFFFFFFFF
    changevar2 VAR_OP_SET, VAR_BATTLER_SOMETHING, VAR_ATTACKER
    changevar VAR_OP_SETMASK, VAR_06, 0x40
    gotosubscript 2
    dofaintanimation
    waitmessage
    preparehpgaugeslide BATTLER_FAINTED
    printmessage 0x1E, 0x2, 0x5, "NaN", "NaN", "NaN", "NaN", "NaN"
    waitmessage
    wait 0x1E
    incrementgamestat BATTLER_FAINTED, 0x1, 0x2A
    incrementgamestat BATTLER_FAINTED, 0x0, 0x61
_0140:
    changevar2 VAR_OP_GET_RESULT, VAR_FAINTED_BATTLER, VAR_ITEM_TEMP
    changevar2 VAR_OP_SET, VAR_FAINTED_BATTLER, VAR_DEFENDER
    ifmonstat IF_NOTEQUAL, BATTLER_DEFENDER, MON_DATA_HP, 0x0, _01A0
    trygrudge _01A0
    printmessage 0x238, 0xA, 0x1, 0xFF, "NaN", "NaN", "NaN", "NaN"
    waitmessage
    wait 0x1E
_01A0:
    changevar2 VAR_OP_SET, VAR_FAINTED_BATTLER, VAR_ITEM_TEMP
    ifmonstat IF_EQUAL, BATTLER_ATTACKER, MON_DATA_HP, 0x0, _02B4
    changevar2 VAR_OP_SET, VAR_SWITCHED_BATTLER, VAR_ATTACKER
    printmessage 0x42B, 0x12, 0x6, 0x6, "NaN", "NaN", "NaN", "NaN"
    waitmessage
    wait 0x1E
    gotosubscript 153
    ifmonstat IF_EQUAL, BATTLER_ATTACKER, MON_DATA_HP, 0x0, _02B4
    trynaturalcure BATTLER_ATTACKER, _0238
    changevartomonvalue VAR_OP_SET, BATTLER_ATTACKER, 0x34, 0x0

_0238:
    ifmonstat IF_EQUAL, BATTLER_ATTACKER, MON_DATA_HP, 0, nohave
    //再生力
    abilitycheck 1, BATTLER_ATTACKER, ABILITY_REGENERATOR ,nohave
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_ATTACKER, MON_DATA_MAX_HP, VAR_ATTACKER_TEMP
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_ATTACKER, MON_DATA_HP, VAR_DEFENDER_TEMP
    changevar VAR_OP_DIV, VAR_ATTACKER_TEMP, 3
    changevar2 VAR_OP_ADD, VAR_ATTACKER_TEMP, VAR_DEFENDER_TEMP
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_ATTACKER, MON_DATA_MAX_HP, VAR_DEFENDER_TEMP
    if2 IF_GREATER, VAR_ATTACKER_TEMP, VAR_DEFENDER_TEMP, chaoguo
    changevartomonvalue2 VAR_OP_SET, BATTLER_ATTACKER, MON_DATA_HP, VAR_ATTACKER_TEMP
    goto nohave

chaoguo:
    changevartomonvalue2 VAR_OP_SET, BATTLER_ATTACKER, MON_DATA_HP, VAR_DEFENDER_TEMP

nohave:
    changevar VAR_OP_CLEARMASK, VAR_06, 0x4000
    changevar VAR_OP_SET, VAR_MOVE_EFFECT, 0x1
    seteffectprimary BATTLER_ATTACKER
    waitmessage
    deletepokemon BATTLER_ATTACKER
    waitmessage
    preparehpgaugeslide BATTLER_ATTACKER
    waitmessage
    changevar VAR_OP_SETMASK, VAR_60, 0x10
    changevar VAR_OP_CLEARMASK, VAR_06, 0x80
    changevar VAR_OP_SET, VAR_47, 0x0
    jumptosubseq 10
_02B4:
    endscript

.close