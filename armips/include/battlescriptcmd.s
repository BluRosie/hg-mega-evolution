ADD_STATUS_ATTACK equ 0x40000000
ADD_STATUS_DEFENCE equ 0x80000000

//MON_DATA_ID
MON_DATA_SPECIES equ 0
MON_DATA_ATK equ 1
MON_DATA_DEF equ 2
MON_DATA_SPE equ 3
MON_DATA_SPATK equ 4
MON_DATA_SPDEF equ 5
MON_DATA_MOVE_1 equ 6
MON_DATA_10 equ 10
MON_DATA_11 equ 11 
MON_DATA_12 equ 12
MON_DATA_13 equ 13
MON_DATA_14 equ 14
MON_DATA_15 equ 15
MON_DATA_EGG_FLAG equ 16
MON_DATA_NICKNAME_FLAG equ 17
MON_DATA_18 equ 18
MON_DATA_STAT_STAGE_ATTACK equ 19
MON_DATA_STAT_STAGE_DEFENSE equ 20
MON_DATA_STAT_STAGE_SPEED equ 21
MON_DATA_STAT_STAGE_SPATK equ 22
MON_DATA_STAT_STAGE_SPDEF equ 23
MON_DATA_STAT_STAGE_ACCURACY equ 24
MON_DATA_STAT_STAGE_EVASION equ 25
MON_DATA_ABILITY equ 26
MON_DATA_TYPE_1 equ 27
MON_DATA_TYPE_2 equ 28
MON_DATA_GENDER equ 29
MON_DATA_30 equ 30
MON_DATA_PP_1 equ 31
MON_DATA_PP_2 equ 32
MON_DATA_PP_3 equ 33
MON_DATA_PP_4 equ 34
MON_DATA_PP_BONUS_1 equ 35
MON_DATA_PP_BONUS_2 equ 36
MON_DATA_PP_BONUS_3 equ 37
MON_DATA_PP_BONUS_4 equ 38
MON_DATA_PP_MAX_1 equ 39
MON_DATA_PP_MAX_2 equ 40
MON_DATA_PP_MAX_3 equ 41
MON_DATA_PP_MAX_4 equ 42
MON_DATA_LEVEL equ 43
MON_DATA_FRIENDSHIP equ 44
MON_DATA_NICKNAME equ 45
MON_DATA_46 equ 46
MON_DATA_HP equ 47
MON_DATA_MAX_HP equ 48
MON_DATA_49 equ 49
MON_DATA_EXP equ 50
MON_DATA_PID equ 51
MON_DATA_STATUS_1 equ 52
MON_DATA_STATUS_2 equ 53
MON_DATA_54 equ 54
MON_DATA_ITEM equ 55
MON_DATA_56 equ 56
MON_DATA_57 equ 57
MON_DATA_58 equ 58
MON_DATA_MOVE_STATE equ 59
MON_DATA_MOVE_STATE_2 equ 60
MON_DATA_DISABLE_COUNTER equ 61
MON_DATA_ENCORE_COUNTER equ 62
MON_DATA_CHARGE_COUNTER equ 63
MON_DATA_TAUNT_COUNTER equ 64
MON_DATA_65 equ 65
MON_DATA_PERISH_SONG_COUNTER equ 66
MON_DATA_ROLLOUT_COUNTER equ 67
MON_DATA_FURY_CUTTER_COUNTER equ 68
MON_DATA_STOCKPILE_COUNT equ 69
MON_DATA_STOCKPILE_DEF_COUNT equ 70
MON_DATA_STOCKPILE_SPDEF_COUNT equ 71
MON_DATA_72 equ 72
MON_DATA_73 equ 73
MON_DATA_LOCKON_TARGET equ 74
MON_DATA_MIMIC_BIT equ 75
MON_DATA_BIND_TARGET equ 76
MON_DATA_MEAN_LOOK_TARGET equ 77
MON_DATA_LAST_RESORT_COUNTER equ 78
MON_DATA_79 equ 79
MON_DATA_HEAL_BLOCK_COUNTER equ 80
MON_DATA_81 equ 81
MON_DATA_82 equ 82
MON_DATA_METRONOME_VAR equ 83
MON_DATA_84 equ 84
MON_DATA_85 equ 85
MON_DATA_86 equ 86
MON_DATA_87 equ 87
MON_DATA_FAKE_OUT_COUNTER equ 88
MON_DATA_SLOW_START_COUNTER equ 89
MON_DATA_SUBSTITUTE_HP equ 90
MON_DATA_91 equ 91
MON_DATA_DISABLED_MOVE equ 92
MON_DATA_ENCORED_MOVE equ 93
MON_DATA_94 equ 94
MON_DATA_HP_RECOVERED_BY_ITEM equ 95
MON_DATA_SLOW_START_ACTIVE equ 96
MON_DATA_SLOW_START_INACTIVE equ 97
MON_DATA_FORM equ 98
MON_DATA_VARIABLE equ 100

//status up:
ATK_UP equ 15
DEF_UP equ 16
SPE_UP equ 17
SPATK_UP equ 18
SPDEF_UP equ 19
HIT_UP equ 20
ACC_UP equ 21
ATK_DOWN equ 22
DEF_DOWN equ 23
SPE_DOWN equ 24
SPATK_DOWN equ 25
SPDEF_DOWN equ 26
HIT_DOWN equ 27
ACC_DOWN equ 28

//side
SIDE_ATTACKER equ 1
SIDE_DEFENCE equ 2

//new effect
ADD_STATUS_HONE_CLAWS equ 0x91
ADD_STATUS_POWER_SPLIT equ 0x92
ADD_STATUS_GUARD_SPLIT equ 0x93
ADD_STATUS_AUTOTOMIZE equ 0x94
ADD_STATUS_QUIVER_DANCE equ 0x95
ADD_STATUS_SOAK equ 0x96
ADD_STATUS_COIL equ 0x97
ADD_STATUS_SHIFT_GEAR equ 0x98
ADD_STATUS_SHELL_SMASH equ 0x99
ADD_STATUS_V_CREATE equ 0x9A

.macro startencounter
    .word 0x0
.endmacro

// battler values

BATTLER_ALL              equ 0x00
BATTLER_ATTACKER         equ 0x01
BATTLER_DEFENDER         equ 0x02
BATTLER_PLAYER           equ 0x03
BATTLER_OPPONENT         equ 0x04
BATTLER_FAINTED          equ 0x05
BATTLER_REPLACE          equ 0x06
BATTLER_ADDL_EFFECT      equ 0x07
BATTLER_CHAR_CHECKED     equ 0x08
BATTLER_PLAYER_LEFT      equ 0x09
BATTLER_ENEMY_LEFT       equ 0x0a
BATTLER_PLAYER_RIGHT     equ 0x0b
BATTLER_ENEMY_RIGHT      equ 0x0c
BATTLER_x0D              equ 0x0d
BATTLER_ATTACKER2        equ 0x0e
BATTLER_DEFENDER2        equ 0x0f
BATTLER_ATTACKER_PARTNER equ 0x10
BATTLER_DEFENDER_PARTNER equ 0x11
BATTLER_WHIRLWINDED      equ 0x12
BATTLER_x13              equ 0x13
BATTLER_x14              equ 0x14
BATTLER_x15              equ 0x15
BATTLER_ALL_REPLACED     equ 0x16
BATTLER_xFF              equ 0xFF

.macro pokemonencounter,battler
    .word 0x1, battler
.endmacro

.macro pokemonslidein,battler
    .word 0x2, battler
.endmacro

.macro pokemonappear,battler
    .word 0x3, battler
.endmacro

.macro returnpokemon,battler
    .word 0x4, battler
.endmacro

.macro deletepokemon,battler
    .word 0x5, battler
.endmacro

.macro starttrainerencounter,battler
    .word 0x6, battler
.endmacro

.macro throwpokeball,battler,type
    .word 0x7, battler, type
.endmacro

.macro preparetrainerslide,battler
    .word 0x8, battler
.endmacro

.macro trainerslidein,battler,pos
    .word 0x9, battler, pos
.endmacro

.macro backgroundslidein
    .word 0xA
.endmacro

.macro hpgaugeslidein,battler
    .word 0xB, battler
.endmacro

.macro hpgaugeslidewait,battler
    .word 0xC, battler
.endmacro

.macro preparehpgaugeslide,battler
    .word 0xD, battler
.endmacro

.macro waitmessage
    .word 0xE
.endmacro

.macro damagecalc
    .word 0xF
.endmacro

.macro damagecalc2
    .word 0x10
.endmacro

.macro printattackmessage
    .word 0x11
.endmacro

.macro printmessage,msgid,tag,num1,num2,num3,num4,num5,num6
    .word 0x12, msgid, tag
    .if tag == 0
    .elseif tag < 9
        .word num1
    .elseif tag < 31
        .word num1, num2
    .elseif tag < 52
        .word num1, num2, num3
    .elseif tag < 60
        .word num1, num2, num3, num4
    .else
        .word num1, num2, num3, num4, num5, num6
    .endif
.endmacro

.macro printmessage2,msgid,tag,num1,num2,num3,num4,num5,num6
    .word 0x13, msgid, tag
    .if tag == 0
    .elseif tag < 9
        .word num1
    .elseif tag < 31
        .word num1, num2
    .elseif tag < 52
        .word num1, num2, num3
    .elseif tag < 60
        .word num1, num2, num3, num4
    .else
        .word num1, num2, num3, num4, num5, num6
    .endif
.endmacro

.macro printpreparedmessage
    .word 0x14
.endmacro

.macro preparemessage,msgid,tag,num1,num2,num3,num4,num5,num6
    .word 0x15, msgid, tag
    .if tag == 0
    .elseif tag < 9
        .word num1
    .elseif tag < 31
        .word num1, num2
    .elseif tag < 52
        .word num1, num2, num3
    .elseif tag < 60
        .word num1, num2, num3, num4
    .else
        .word num1, num2, num3, num4, num5, num6
    .endif
.endmacro

.macro printmessagepassbattler,battler,msgid,tag,num1,num2,num3,num4,num5,num6
    .word 0x16, battler, msgid, tag
    .if tag == 0
    .elseif tag < 9
        .word num1
    .elseif tag < 31
        .word num1, num2
    .elseif tag < 52
        .word num1, num2, num3
    .elseif tag < 60
        .word num1, num2, num3, num4
    .else
        .word num1, num2, num3, num4, num5, num6
    .endif
.endmacro

.macro seteffectprimary,battler
    .word 0x17, battler
.endmacro

.macro seteffectsecondary,battler,attacker,defender
    .word 0x18, battler, attacker, defender
.endmacro

.macro monflicker,battler
    .word 0x19, battler
.endmacro

.macro datahpupdate,battler
    .word 0x1A, battler
.endmacro

.macro healthbarupdate,battler
    .word 0x1B, battler
.endmacro

.macro tryfaintmon,battler
    .word 0x1C, battler
.endmacro

.macro dofaintanimation
    .word 0x1D
.endmacro

.macro wait,time
    .word 0x1E, time
.endmacro

.macro playse,battler,soundid
    .word 0x1F, battler, soundid
.endmacro

// if condition operator

IF_EQUAL    equ 0 // equal
IF_NOTEQUAL equ 1 // not equal
IF_GREATER  equ 2 // greater than
IF_LESSTHAN equ 3 // less than
IF_MASK     equ 4 // mask on
IF_NOTMASK  equ 5 // mask off
IF_AND      equ 6 // exact and

.macro if,condition,source,comparator,address
    .word 0x20, condition, source, comparator
	.word ((address - org()) / 4) - 1
.endmacro

.macro ifmonstat,condition,battler,source,comparator,address
    .word 0x21, condition, battler, source, comparator
    .word ((address - org()) / 4) - 1
.endmacro

.macro fadeout
    .word 0x22
.endmacro

.macro jumptosubseq,num
    .word 0x23, num
.endmacro

.macro jumptocurmoveeffectscript
    .word 0x24
.endmacro

.macro jumptocurmovescript2,num
    .word 0x25, num
.endmacro

.macro critcalc
    .word 0x26
.endmacro

.macro shouldgetexp,address
    .word 0x27
    .word ((address - org()) / 4) - 1
.endmacro

.macro initexpget
    .word 0x28
.endmacro

.macro getexp
    .word 0x29
.endmacro

.macro getexploop,address
    .word 0x2A
    .word ((address - org()) / 4) - 1
.endmacro

.macro showmonlist
    .word 0x2B
.endmacro

.macro waitformonselection
    .word 0x2C
.endmacro

.macro switchindataupdate,battler
    .word 0x2D, battler
.endmacro

.macro jumpifcantswitch,address // maybe?
    .word 0x2E
    .word ((address - org()) / 4) - 1
.endmacro

.macro initcapture,num
    .word 0x2F, num
.endmacro

.macro capturemon
    .word 0x30
.endmacro

.macro setmultihit,hits,num
    .word 0x31, hits, num
.endmacro

// changevar operators:

VAR_OP_SET         equ 7
VAR_OP_ADD         equ 8
VAR_OP_SUB         equ 9
VAR_OP_SETMASK     equ 10
VAR_OP_CLEARMASK   equ 11
VAR_OP_MUL         equ 12
VAR_OP_DIV         equ 13
VAR_OP_LSH         equ 14
VAR_OP_RSH         equ 15
VAR_OP_TO_BIT      equ 16
VAR_OP_GET_RESULT  equ 17
VAR_OP_SUB_TO_ZERO equ 18
VAR_OP_XOR         equ 19
VAR_OP_AND         equ 20

// var names:
VAR_BATTLE_TYPE equ 0
VAR_CRIT_CHANCE equ 1
VAR_ADD_STATUS1 equ 2
VAR_ADD_STATUS2 equ 3
VAR_04 equ 4
VAR_05 equ 5
VAR_06 equ 6
VAR_FIELD_EFFECT equ 7
VAR_DAMAGE_MULT equ 8
VAR_09 equ 9
VAR_10 equ 10
VAR_SIDE_EFFECT_PLAYER equ 11
VAR_SIDE_EFFECT_OPPONENT equ 12
VAR_SIDE_EFFECT_ACTIVE_BATTLER equ 13
VAR_DAMAGE equ 14
VAR_ATTACKER equ 15
VAR_DEFENDER equ 16
VAR_ACTIVE_BATTLER equ 17
VAR_FAINTED_BATTLER equ 18
VAR_SWITCHED_BATTLER equ 19
VAR_BATTLER_SOMETHING equ 20
VAR_DAMAGE_BACKUP equ 21
VAR_22 equ 22
VAR_MONEY equ 23
VAR_CURRENT_MOVE equ 24
VAR_TURNS equ 25
VAR_ATTACKER_TEMP equ 26
VAR_DEFENDER_TEMP equ 27
VAR_MOVE_TEMP equ 28
VAR_ITEM_TEMP equ 29
VAR_ABILITY_TEMP equ 30
VAR_SUCCESSIVE_HIT equ 31
VAR_HP_TEMP equ 32
VAR_BATTLE_RESULT equ 33
VAR_34 equ 34
VAR_MOVE_TEMP2 equ 35
VAR_ITEM_TEMP2 equ 36
VAR_ABILITY_TEMP2 equ 37
VAR_WEATHER_TURNS equ 38
VAR_39 equ 39
VAR_40 equ 40
VAR_PHYSICAL_DAMAGE equ 41
VAR_SPECIAL_DAMAGE equ 42
VAR_43 equ 43
VAR_WAS_MOVE_CRITICAL equ 44
VAR_LAST_DAMAGING_ATTACKER equ 45
VAR_LAST_DAMAGING_DEFENDER equ 46
VAR_47 equ 47
VAR_48 equ 48
VAR_49 equ 49
VAR_FLING_TEMP equ 50
VAR_FLING_SUBSCRIPT equ 51
VAR_BATTLE_STATUS equ 52
VAR_MOVE_BACKUP equ 53
VAR_54 equ 54
VAR_SAFARI_BALL_COUNT equ 55
VAR_SWITCHED_BATTLER_TEMP equ 56
VAR_MOVE_TYPE equ 57
VAR_MOVE_EFFECT equ 58
VAR_RULESET equ 59
VAR_60 equ 60
VAR_61 equ 61
VAR_62 equ 62
VAR_ATTACKER_TEMP2 equ 63
VAR_DEFENDER_TEMP2 equ 64
VAR_65 equ 65
VAR_ASSURANCE_DAMAGE equ 66
VAR_ASSURANCE_DAMAGE_AGAINST_DEFENDER equ 67
VAR_68 equ 68
VAR_69 equ 69
VAR_70 equ 70
VAR_71 equ 71
VAR_72 equ 72 
VAR_73 equ 73
VAR_74 equ 74
VAR_75 equ 75
VAR_76 equ 76
VAR_77 equ 77
VAR_78 equ 78
VAR_79 equ 79
VAR_80 equ 80
VAR_81 equ 81
VAR_82 equ 82
VAR_83 equ 83
VAR_84 equ 84
VAR_85 equ 85
VAR_86 equ 86
VAR_87 equ 87
VAR_88 equ 88
VAR_89 equ 89
VAR_90 equ 90

.macro changevar,operator,var,value
    .word 0x32, operator, var, value
.endmacro

.macro statbuffchange,address1,address2,address3 // all failure addresses
    .word 0x33
    .word ((address1 - org()) / 4) - 3
    .word ((address2 - org()) / 4) - 2
    .word ((address3 - org()) / 4) - 1
.endmacro

.macro changevartomonvalue,operator,battler,var,value
    .word 0x34, operator, battler, var, value
.endmacro

.macro clearstatus2,battler,value
    .word 0x35, battler, value
.endmacro

.macro togglevanish,battler,num
    .word 0x36, battler, num
.endmacro

.macro abilitycheck,num,battler,ability,address
    .word 0x37, num, battler, ability
    .word ((address - org()) / 4) - 1
.endmacro

.macro random,range,startingnum // random number from startingnum to startingnum+range
    .word 0x38, range, startingnum
.endmacro

.macro changevar2,operator,var,value
    .word 0x39, operator, var, value
.endmacro

.macro changevartomonvalue2,operator,battler,value,var
    .word 0x3A, operator, battler, value, var
.endmacro

.macro goto,address
    .word 0x3B
    .word ((address - org()) / 4) - 1
.endmacro

.macro gotosubscript,num
    .word 0x3C, num
.endmacro

.macro gotosubscript2,num
    .word 0x3D, num
.endmacro

.macro checkifchatot // i think it is this
    .word 0x3E
.endmacro

.macro sethaze
    .word 0x3F
.endmacro

.macro setsomeflag,battler
    .word 0x40, battler
.endmacro

.macro clearsomeflag,battler
    .word 0x41, battler
.endmacro

.macro setstatusicon,battler,status
    .word 0x42, battler, status
.endmacro

.macro trainermessage,battler,type
    .word 0x43, battler, type
.endmacro

.macro calcmoney
    .word 0x44
.endmacro

.macro setstatus2effect,battler,status
    .word 0x45, battler, status
.endmacro

.macro setstatus2effect2,battler1,battler2,status
    .word 0x46, battler1, battler2, status
.endmacro

.macro setstatus2effect3,battler,status
    .word 0x47, battler, status
.endmacro

.macro returnmessage,battler
    .word 0x48, battler
.endmacro

.macro sentoutmessage,battler
    .word 0x49, battler
.endmacro

.macro encountermessage,battler
    .word 0x4A, battler
.endmacro

.macro encountermessage2,battler
    .word 0x4B, battler
.endmacro

.macro trainermessage2,battler
    .word 0x4C, battler
.endmacro

.macro tryconversion,address
    .word 0x4D
    .word ((address - org()) / 4) - 1
.endmacro

.macro if2,condition,source,comparator,address
    .word 0x4E, condition, source, comparator
    .word ((address - org()) / 4) - 1
.endmacro

.macro ifmonstat2,condition,battler,source,comparator,address
    .word 0x4F, condition, battler, source, comparator
    .word ((address - org()) / 4) - 1
.endmacro

.macro dopayday
    .word 0x50
.endmacro

.macro setlightscreen, address
    .word 0x51
    .word ((address - org()) / 4) - 1
.endmacro

.macro setreflect, address
    .word 0x52
    .word ((address - org()) / 4) - 1
.endmacro

.macro setmist, address
    .word 0x53
    .word ((address - org()) / 4) - 1
.endmacro

.macro tryonehitko
    .word 0x54
.endmacro

.macro damagediv, denominator, value
    .word 0x55, denominator, value
.endmacro

.macro damagediv2, denominator, value
    .word 0x56, denominator, value
.endmacro

.macro trymimic, address
    .word 0x57
    .word ((address - org()) / 4) - 1
.endmacro

.macro metronome
    .word 0x58
.endmacro

.macro trydisable,address
    .word 0x59
    .word ((address - org()) / 4) - 1
.endmacro

.macro counter
    .word 0x5A
.endmacro

.macro mirrorcoat
    .word 0x5B
.endmacro

.macro tryencore,address
    .word 0x5C
    .word ((address - org()) / 4) - 1
.endmacro

.macro tryconversion2,address
    .word 0x5D
    .word ((address - org()) / 4) - 1
.endmacro

.macro trysketch,address
    .word 0x5E
    .word ((address - org()) / 4) - 1
.endmacro

.macro trysleeptalk,address
    .word 0x5F
    .word ((address - org()) / 4) - 1
.endmacro

.macro flaildamagecalc
    .word 0x60
.endmacro

.macro tryspite,address
    .word 0x61
    .word ((address - org()) / 4) - 1
.endmacro

.macro healbell
    .word 0x62
.endmacro

.macro trythief,address1,address2
    .word 0x63
    .word ((address1 - org()) / 4) - 2
    .word ((address2 - org()) / 4) - 1
.endmacro

.macro willprotectwork,address
    .word 0x64
    .word ((address - org()) / 4) - 1
.endmacro

.macro trysubstitute,address
    .word 0x65
    .word ((address - org()) / 4) - 1
.endmacro

.macro trywhirlwind,address
    .word 0x66
    .word ((address - org()) / 4) - 1
.endmacro

.macro transform
    .word 0x67
.endmacro

.macro tryspikes,address
    .word 0x68
    .word ((address - org()) / 4) - 1
.endmacro

.macro checkspikes,battler,address
    .word 0x69, battler
    .word ((address - org()) / 4) - 1
.endmacro

.macro tryperishsong,address
    .word 0x6A
    .word ((address - org()) / 4) - 1
.endmacro

.macro orderbattlersbyspeed,value
    .word 0x6B, value
.endmacro

.macro exitloopatvalue,value,address // something like that
    .word 0x6C, value
    .word ((address - org()) / 4) - 1
.endmacro

.macro weatherdamagecalc,battler
    .word 0x6D, battler
.endmacro

.macro rolloutdamagecalc
    .word 0x6E
.endmacro

.macro furycutterdamagecalc
    .word 0x6F
.endmacro

.macro tryattract,address
    .word 0x70
    .word ((address - org()) / 4) - 1
.endmacro

.macro trysafeguard,address
    .word 0x71
    .word ((address - org()) / 4) - 1
.endmacro

.macro trypresent,address
    .word 0x72
    .word ((address - org()) / 4) - 1
.endmacro

.macro magnitudedamagecalc
    .word 0x73
.endmacro

.macro tryswitchinmon,battler,num,address
    .word 0x74, battler, num
    .word ((address - org()) / 4) - 1
.endmacro

.macro dorapidspineffect
    .word 0x75
.endmacro

.macro changehprecoverybasedonweather
    .word 0x76
.endmacro

.macro hiddenpowerdamagecalc
    .word 0x77
.endmacro

.macro dopsychup
    .word 0x78
.endmacro

.macro tryfuturesight,address
    .word 0x79
    .word ((address - org()) / 4) - 1
.endmacro

.macro checkhitrate,attacker,defender,move,address
    .word 0x7A, attacker, defender, move
    .word ((address - org()) / 4) - 1
.endmacro

.macro tryteleport,address
    .word 0x7B
    .word ((address - org()) / 4) - 1
.endmacro

.macro beatupdamagecalc
    .word 0x7C
.endmacro

.macro dofollowme
    .word 0x7D
.endmacro

.macro tryhelpinghand,address
    .word 0x7E
    .word ((address - org()) / 4) - 1
.endmacro

.macro trytrick,address1,address2
    .word 0x7F
    .word ((address1 - org()) / 4) - 2
    .word ((address2 - org()) / 4) - 1
.endmacro

.macro trywish,address
    .word 0x80
    .word ((address - org()) / 4) - 1
.endmacro

.macro tryassist,address
    .word 0x81
    .word ((address - org()) / 4) - 1
.endmacro

.macro trymagiccoat,address
    .word 0x82
    .word ((address - org()) / 4) - 1
.endmacro

.macro trymagiccoat2
    .word 0x83
.endmacro

.macro dorevenge
    .word 0x84
.endmacro

.macro trybreakscreens,address
    .word 0x85
    .word ((address - org()) / 4) - 1
.endmacro

.macro tryyawn,address
    .word 0x86
    .word ((address - org()) / 4) - 1
.endmacro

.macro tryknockitemoff,address
    .word 0x87
    .word ((address - org()) / 4) - 1
.endmacro

.macro eruptiondamagecalc
    .word 0x88
.endmacro

.macro tryimprison,address
    .word 0x89
    .word ((address - org()) / 4) - 1
.endmacro

.macro trygrudge,address
    .word 0x8A
    .word ((address - org()) / 4) - 1
.endmacro

.macro trysnatch,address
    .word 0x8B
    .word ((address - org()) / 4) - 1
.endmacro

.macro lowkickdamagecalc
    .word 0x8C
.endmacro

.macro weatherballdamagecalc
    .word 0x8D
.endmacro

.macro trypursuit,address // maybe?
    .word 0x8E
    .word ((address - org()) / 4) - 1
.endmacro

.macro typecheck
    .word 0x8F
.endmacro

.macro checkoneturnflag,battler,flag,value,address
    .word 0x90, battler, flag, value
    .word ((address - org()) / 4) - 1
.endmacro

.macro setoneturnflag,battler,flag,value
    .word 0x91, battler, flag, value
.endmacro

.macro gyroballdamagecalc
    .word 0x92
.endmacro

.macro metalburstdamagecalc,address
    .word 0x93
    .word ((address - org()) / 4) - 1
.endmacro

.macro paybackdamagecalc
    .word 0x94
.endmacro

.macro trumpcarddamagecalc
    .word 0x95
.endmacro

.macro wringoutdamagecalc
    .word 0x96
.endmacro

.macro trymefirst,address
    .word 0x97
    .word ((address - org()) / 4) - 1
.endmacro

.macro trycopycat,address
    .word 0x98
    .word ((address - org()) / 4) - 1
.endmacro

.macro punishmentdamagecalc
    .word 0x99
.endmacro

.macro trysuckerpunch,address
    .word 0x9A
    .word ((address - org()) / 4) - 1
.endmacro

.macro checkbattlercondition,battler,mode,num,address
    .word 0x9B, battler, mode, num
    .word ((address - org()) / 4) - 1
.endmacro

.macro tryfeint,address
    .word 0x9C
    .word ((address - org()) / 4) - 1
.endmacro

.macro trypsychoshift,address
    .word 0x9D
    .word ((address - org()) / 4) - 1
.endmacro

.macro trylastresort,address
    .word 0x9E
    .word ((address - org()) / 4) - 1
.endmacro

.macro trytoxicspikes,address
    .word 0x9F
    .word ((address - org()) / 4) - 1
.endmacro

.macro checktoxicspikes,address
    .word 0xA0
    .word ((address - org()) / 4) - 1
.endmacro

.macro moldbreakerabilitycheck,num,battler,ability,address
    .word 0xA1, num, battler, ability
    .word ((address - org()) / 4) - 1
.endmacro

.macro checkbattlersequal,battler1,battler2,address
    .word 0xA2, battler1, battler2
    .word ((address - org()) / 4) - 1
.endmacro
 
.macro trypickup
    .word 0xA3
.endmacro

.macro dotrickroom
    .word 0xA4
.endmacro

.macro checkmovefinished,battler,address
    .word 0xA5, battler
    .word ((address - org()) / 4) - 1
.endmacro

.macro checkitemeffect,num,battler,effect,address
    .word 0xA6, num, battler, effect
    .word ((address - org()) / 4) - 1
.endmacro

.macro getitemeffect,battler,num
    .word 0xA7, battler, num
.endmacro

.macro getitempower,battler,num
    .word 0xA8, battler, num
.endmacro

.macro trycamouflage,address
    .word 0xA9
    .word ((address - org()) / 4) - 1
.endmacro

.macro donaturepower
    .word 0xAA
.endmacro

.macro dosecretpower
    .word 0xAB
.endmacro

.macro trynaturalgift,address
    .word 0xAC
    .word ((address - org()) / 4) - 1
.endmacro

.macro trypluck,address1,address2
    .word 0xAD
    .word ((address1 - org()) / 4) - 2
    .word ((address2 - org()) / 4) - 1
.endmacro

.macro tryfling,address
    .word 0xAE
    .word ((address - org()) / 4) - 1
.endmacro

.macro yesnobox,num
    .word 0xAF, num
.endmacro

.macro yesnowait,address1,address2
    .word 0xB0
    .word ((address1 - org()) / 4) - 2
    .word ((address2 - org()) / 4) - 1
.endmacro

.macro monlist
    .word 0xB1
.endmacro

.macro monlistwait,address
    .word 0xB2
    .word ((address - org()) / 4) - 1
.endmacro

.macro setbattleresult
    .word 0xB3
.endmacro

.macro checkstealthrock,battler,address
    .word 0xB4, battler
    .word ((address - org()) / 4) - 1
.endmacro

.macro checkeffectactivation,address
    .word 0xB5
    .word ((address - org()) / 4) - 1
.endmacro

.macro checkchatteractivation,address
    .word 0xB6
    .word ((address - org()) / 4) - 1
.endmacro

.macro getmoveparameter,field
    .word 0xB7, field
.endmacro

.macro mosaic,battler,num,wait
    .word 0xB8, battler, num, wait
.endmacro

.macro changeform,battler
    .word 0xB9, battler
.endmacro

.macro changebackground
    .word 0xBA
.endmacro

.macro recoverstatus,battler
    .word 0xBB, battler
.endmacro

.macro tryescape,battler,address
    .word 0xBC, battler
    .word ((address - org()) / 4) - 1
.endmacro

.macro initstartballguage,battler
    .word 0xBD, battler
.endmacro

.macro deletestartballguage,battler
    .word 0xBE, battler
.endmacro

.macro initballguage,battler
    .word 0xBF, battler
.endmacro

.macro deleteballguage,battler
    .word 0xC0, battler
.endmacro

.macro loadballgfx
    .word 0xC1
.endmacro

.macro deleteballgfx
    .word 0xC2
.endmacro

.macro incrementgamestat,battler,num,id // i think
    .word 0xC3, battler, num, id
.endmacro

.macro cmd_C4,battler
    .word 0xC4, battler
.endmacro

.macro checkifcurrentmovehits,address // i think
    .word 0xC5
    .word ((address - org()) / 4) - 1
.endmacro

.macro cmd_C6,battler // something to do with sprites
    .word 0xC6, battler
.endmacro

.macro cmd_C7,battler // something to do with sprites
    .word 0xC7, battler
.endmacro

.macro checkwipeout,battler,address
    .word 0xC8, battler
    .word ((address - org()) / 4) - 1
.endmacro

.macro tryacupressure,address
    .word 0xC9
    .word ((address - org()) / 4) - 1
.endmacro

.macro removeitem,battler
    .word 0xCA, battler
.endmacro

.macro tryrecycle,address
    .word 0xCB
    .word ((address - org()) / 4) - 1
.endmacro

.macro itemeffectcheckonhit,address
    .word 0xCC
    .word ((address - org()) / 4) - 1
.endmacro

.macro battleresultmessage // during online battles
    .word 0xCD
.endmacro

.macro runawaymessage // during online battles
    .word 0xCE
.endmacro

.macro giveupmessage // during online battles
    .word 0xCF
.endmacro

.macro cmd_D0_checkhpsomething,battler
    .word 0xD0, battler
.endmacro

.macro trynaturalcure,battler,address
    .word 0xD1, battler
    .word ((address - org()) / 4) - 1
.endmacro

.macro checknostatus,battler,address
    .word 0xD2, battler
    .word ((address - org()) / 4) - 1
.endmacro

.macro checkcloudnine,address
    .word 0xD3
    .word ((address - org()) / 4) - 1
.endmacro

.macro cmd_D4,battler
    .word 0xD4, battler
.endmacro

.macro checkwhenitemmakesmovehit,address
    .word 0xD5
    .word ((address - org()) / 4) - 1
.endmacro

.macro cmd_D6,battler
    .word 0xD6, battler
.endmacro

.macro playmovesoundeffect,battler
    .word 0xD7, battler
.endmacro

.macro playsong,battler,num
    .word 0xD8, battler, num
.endmacro

.macro checkifsafariencounterdone,address
    .word 0xD9
    .word ((address - org()) / 4) - 1
.endmacro

.macro waitwithoutbuttonpress,time
    .word 0xDA, time
.endmacro

.macro checkmovetypematches,type,address
    .word 0xDB, type
    .word ((address - org()) / 4) - 1
.endmacro

.macro getdatafrompersonalnarc,monnum,formnum,num
    .word 0xDC, monnum, formnum, num
.endmacro

.macro refreshmondata,battler
    .word 0xDD, battler
.endmacro

.macro cmd_DE,num1,num2
    .word 0xDE, num1, num2
.endmacro

.macro cmd_DF,num
    .word 0xDF, num
.endmacro

.macro endscript
    .word 0xE0
.endmacro

