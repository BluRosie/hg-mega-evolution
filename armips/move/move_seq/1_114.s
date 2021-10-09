.nds
.thumb
.include "armips/include/battlescriptcmd.s"
.include "armips/include/abilities.s"


.create "data/move/move_seq/1_114", 0x0
a001_114:
    tryswitchinmon BATTLER_ATTACKER, 0x1, _0078
    gotosubscript 76
    trynaturalcure BATTLER_ATTACKER, _0038
    changevartomonvalue VAR_OP_SET, BATTLER_ATTACKER, 0x34, 0x0

_0038:
    ifmonstat IF_EQUAL, BATTLER_ATTACKER, MON_DATA_HP, 0, nohave
    //再生力
    abilitycheck 1, BATTLER_ATTACKER, ABILITY_REGENERATOR ,nohave
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_ATTACKER, MON_DATA_MAX_HP, 9
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_ATTACKER, MON_DATA_HP, 43
    changevar VAR_OP_DIV, 9, 3
    changevar2 VAR_OP_ADD, 9, 43
    changevartomonvalue2 VAR_OP_GET_RESULT, BATTLER_ATTACKER, MON_DATA_MAX_HP, 43
    if2 IF_GREATER, 9, 43, chaoguo
    changevartomonvalue2 VAR_OP_SET, BATTLER_ATTACKER, MON_DATA_HP, 9
    goto nohave

chaoguo:
    changevartomonvalue2 VAR_OP_SET, BATTLER_ATTACKER, MON_DATA_HP, 43

nohave:
    deletepokemon BATTLER_ATTACKER
    waitmessage
    preparehpgaugeslide BATTLER_ATTACKER
    waitmessage
    changevar2 VAR_OP_SET, VAR_SWITCHED_BATTLER, VAR_ATTACKER
    changevar VAR_OP_SETMASK, VAR_06, 0x100
    jumptosubseq 10
_0078:
    changevar VAR_OP_SETMASK, VAR_10, 0x40
    endscript
.close