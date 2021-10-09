.nds
.thumb
.include "armips/include/battlescriptcmd.s"
.include "armips/include/abilities.s"


.create "data/move/move_seq/1_009", 0x0

a001_009:
    trynaturalcure BATTLER_REPLACE, _0020
    changevartomonvalue VAR_OP_SET, BATTLER_REPLACE, 0x34, 0x0
_0020:
    ifmonstat IF_EQUAL, BATTLER_REPLACE, MON_DATA_HP, 0, nohave
    abilitycheck 1, BATTLER_REPLACE, ABILITY_REGENERATOR ,nohave
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_REPLACE, MON_DATA_MAX_HP, 9
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_REPLACE, MON_DATA_HP, 43
    changevar VAR_OP_DIV, 9, 3
    changevar2 VAR_OP_ADD, 9, 43
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_REPLACE, MON_DATA_MAX_HP, 43
    if2 IF_GREATER, 9, 43, chaoguo
    changevartomonvalue2 VAR_OP_SET, BATTLER_REPLACE, MON_DATA_HP, 9
    goto nohave

chaoguo:
    changevartomonvalue2 VAR_OP_SET, BATTLER_REPLACE, MON_DATA_HP, 43

nohave:
    returnmessage BATTLER_REPLACE
    waitmessage
    gotosubscript 153
    ifmonstat IF_NOTEQUAL, BATTLER_REPLACE, MON_DATA_HP, 0x0, _0054
    goto _006C
_0054:
    returnpokemon BATTLER_REPLACE
    waitmessage
    preparehpgaugeslide BATTLER_REPLACE
    waitmessage
_006C:
    switchindataupdate BATTLER_REPLACE
    loadballgfx
    initballguage BATTLER_REPLACE
    waitmessage
    if IF_EQUAL, VAR_43, 0x1, _00A8
    sentoutmessage BATTLER_REPLACE
    goto _00B8
_00A8:
    printmessage 0x3D3, 0x2, 0x6, "NaN", "NaN", "NaN", "NaN", "NaN"
_00B8:
    waitmessage
    deleteballguage BATTLER_REPLACE
    waitmessage
    deleteballgfx
    pokemonappear BATTLER_REPLACE
    waitwithoutbuttonpress 0x48
    hpgaugeslidein BATTLER_REPLACE
    waitmessage
    gotosubscript 99
    if IF_GREATER, VAR_FAINTED_BATTLER, 0x3, _0140
    changevar2 VAR_OP_TO_BIT, VAR_43, VAR_FAINTED_BATTLER
    changevar VAR_OP_LSH, VAR_43, 0x18
    if2 IF_NOTMASK, VAR_06, 0x2B, _0140
    gotosubscript 6
_0140:
    endscript

.close