.macro	Script, adr=0
.word  \adr - 1f
1:
.endm


.equ LESSER,			0x0
.equ EQUAL,				0x1
.equ GREATER,			0x2

.macro Nop
.hword 0x0
.endm

.macro Dummy
.hword 0x1
.endm

.macro End
.hword 0x2
.endm

.macro WaitTime a1, a2
.hword 0x3
.hword \a1
.hword \a2
.endm

.macro RegValueSet a1, a2
.hword 0x4
.byte \a1
.byte \a2
.endm

.macro RegDataSet a1, a2
.hword 0x5
.byte \a1
.word \a2
.endm

.macro RegAdrsSet a1, a2
.hword 0x6
.byte \a1
.word \a2
.endm

.macro AdrsValueSet a1, a2
.hword 0x7
.word \a1
.byte \a2
.endm

.macro AdrsRegSet a1, a2
.hword 0x8
.word \a1
.byte \a2
.endm

.macro RegRegSet a1, a2
.hword 0x9
.byte \a1
.byte \a2
.endm

.macro AdrsAdrsSet a1, a2
.hword 0xa
.word \a1
.word \a2
.endm

.macro IfRegReg a1, a2
.hword 0xb
.byte \a1
.byte \a2
.endm

.macro IfRegValue a1, a2
.hword 0xc
.byte \a1
.byte \a2
.endm

.macro IfRegAdrs a1, a2
.hword 0xd
.byte \a1
.word \a2
.endm

.macro IfAdrsReg a1, a2
.hword 0xe
.word \a1
.byte \a2
.endm

.macro IfAdrsValue a1, a2
.hword 0xf
.word \a1
.byte \a2
.endm

.macro IfAdrsAdrs a1, a2
.hword 0x10
.word \a1
.word \a2
.endm

.macro CompareVarValue a1, a2
.hword 0x11
.hword \a1
.hword \a2
.endm

.macro CompareVars a1, a2
.hword 0x12
.hword \a1
.hword \a2
.endm

.macro Cmd_0x13 a1
.hword 0x13
.hword \a1
.endm

.macro CommonScript a1
.hword 0x14
.hword \a1
.endm

.macro LocalScript
.hword 0x15
.endm

.macro Jump a1
.hword 0x16
.word   \a1 - 1f
1:
.endm

.macro JumpIfObjID a1, a2
.hword 0x17
.byte \a1
.word   \a2 - 1f
1:
.endm

.macro JumpIfBgID a1, a2
.hword 0x18
.byte \a1
.word   \a2 - 1f
1:
.endm

.macro JumpIfPlayerDir a1, a2
.hword 0x19
.byte \a1
.word   \a2 - 1f
1:
.endm

.macro Call a1
.hword 0x1a
.word   \a1 - 1f
1:
.endm

.macro Return
.hword 0x1b
.endm

.macro JumpIf a1, a2
.hword 0x1c
.byte \a1
.word   \a2 - 1f
1:
.endm

.macro CallIf a1, a2
.hword 0x1d
.byte \a1
.word   \a2 - 1f
1:
.endm

.macro SetFlag a1
.hword 0x1e
.hword \a1
.endm

.macro ClearFlag a1
.hword 0x1f
.hword \a1
.endm

.macro CheckFlag a1
.hword 0x20
.hword \a1
.endm

.macro SetFlagFromVar a1
.hword 0x21
.hword \a1
.endm

.macro ClearFlagFromVar a1
.hword 0x22
.hword \a1
.endm

.macro FlagStatusToVar a1, a2
.hword 0x23
.hword \a1
.hword \a2
.endm

.macro SetTrainerFlag a1
.hword 0x24
.hword \a1
.endm

.macro ClearTrainerFlag a1
.hword 0x25
.hword \a1
.endm

.macro CheckTrainerFlag a1
.hword 0x26
.hword \a1
.endm

.macro IncrementVar a1, a2
.hword 0x27
.hword \a1
.hword \a2
.endm

.macro DecrementVar a1, a2
.hword 0x28
.hword \a1
.hword \a2
.endm

.macro SetVar a1, a2
.hword 0x29
.hword \a1
.hword \a2
.endm

.macro SetVarFromVariable a1, a2
.hword 0x2a
.hword \a1
.hword \a2
.endm

.macro SetVarFromFlexible a1, a2
.hword 0x2b
.hword \a1
.hword \a2
.endm

.macro MessageAll a1
.hword 0x2c
.byte \a1
.endm

.macro Message a1
.hword 0x2d
.byte \a1
.endm

.macro MessageSp a1
.hword 0x2e
.hword \a1
.endm

.macro MessageNoSkip a1
.hword 0x2f
.hword \a1
.endm

.macro Cmd_0x30 a1
.hword 0x30
.byte \a1
.endm

.macro WaitAB
.hword 0x31
.endm

.macro WaitButton
.hword 0x32
.endm

.macro WaitABPad
.hword 0x33
.endm

.macro OpenMessage
.hword 0x34
.endm

.macro CloseMessage
.hword 0x35
.endm

.macro FreezeMessage
.hword 0x36
.endm

.macro MakeBoard a1, a2, a3, a4
.hword 0x37
.byte \a1
.byte \a2
.hword \a3
.hword \a4
.endm

.macro BoardInfo a1, a2
.hword 0x38
.byte \a1
.hword \a2
.endm

.macro ShowBoard a1
.hword 0x39
.byte \a1
.endm

.macro WaitBoard
.hword 0x3a
.endm

.macro BoardMessage a1, a2
.hword 0x3b
.byte \a1
.hword \a2
.endm

.macro EndBoard a1
.hword 0x3c
.hword \a1
.endm

.macro Menu
.hword 0x3d
.endm

.macro Cmd_0x3e a1, a2, a3, a4, a5, a6
.hword 0x3e
.byte \a1
.byte \a2
.byte \a3
.byte \a4
.byte \a5
.byte \a6
.endm

.macro Cmd_0x3f a1
.hword 0x3f
.hword \a1
.endm

.macro MultiStandardText a1, a2, a3, a4, a5
.hword 0x40
.byte \a1
.byte \a2
.byte \a3
.byte \a4
.hword \a5
.endm

.macro MultiLocalText a1, a2, a3, a4, a5
.hword 0x41
.byte \a1
.byte \a2
.byte \a3
.byte \a4
.hword \a5
.endm

.macro AddMultiOption a1, a2
.hword 0x42
.byte \a1
.byte \a2
.endm

.macro ShowMulti
.hword 0x43
.endm

.macro ListStandardText a1, a2, a3, a4, a5
.hword 0x44
.byte \a1
.byte \a2
.byte \a3
.byte \a4
.hword \a5
.endm

.macro ListLocalText a1, a2, a3, a4, a5
.hword 0x45
.byte \a1
.byte \a2
.byte \a3
.byte \a4
.hword \a5
.endm

.macro AddListOption a1, a2, a3
.hword 0x46
.hword \a1
.hword \a2
.hword \a3
.endm

.macro ShowList
.hword 0x47
.endm

.macro MultiColumn a1
.hword 0x48
.byte \a1
.endm

.macro PlayFanfare a1
.hword 0x49
.hword \a1
.endm

.macro StopFanfare a1
.hword 0x4a
.hword \a1
.endm

.macro WaitFanfare a1
.hword 0x4b
.hword \a1
.endm

.macro PlayCry a1, a2
.hword 0x4c
.hword \a1
.hword \a2
.endm

.macro WaitCry
.hword 0x4d
.endm

.macro PlaySound a1
.hword 0x4e
.hword \a1
.endm

.macro WaitSound
.hword 0x4f
.endm

.macro PlayMusic a1
.hword 0x50
.hword \a1
.endm

.macro StopMusic a1
.hword 0x51
.hword \a1
.endm

.macro PlayDefaultMusic
.hword 0x52
.endm

.macro SetMusic a1
.hword 0x53
.hword \a1
.endm

.macro FadeOutMusic a1, a2
.hword 0x54
.hword \a1
.hword \a2
.endm

.macro FadeInMusic a1
.hword 0x55
.hword \a1
.endm

.macro Cmd_0x56 a1, a2
.hword 0x56
.byte \a1
.byte \a2
.endm

.macro Cmd_0x57 a1
.hword 0x57
.hword \a1
.endm

.macro Cmd_0x58 a1
.hword 0x58
.byte \a1
.endm

.macro CheckChatotCry a1
.hword 0x59
.hword \a1
.endm

.macro StartChatotCry a1
.hword 0x5a
.hword \a1
.endm

.macro StopChatotCry
.hword 0x5b
.endm

.macro SaveChatotCry
.hword 0x5c
.endm

.macro Cmd_0x5d
.hword 0x5d
.endm

.macro Movement a1, a2
.hword 0x5e
.hword \a1
.word   \a2 - 1f
1:
.endm

.macro WaitMovement
.hword 0x5f
.endm

.macro LockAll
.hword 0x60
.endm

.macro ReleaseAll
.hword 0x61
.endm

.macro Lock a1
.hword 0x62
.hword \a1
.endm

.macro Release a1
.hword 0x63
.hword \a1
.endm

.macro AddOW a1
.hword 0x64
.hword \a1
.endm

.macro RemoveOW a1
.hword 0x65
.hword \a1
.endm

.macro LockCamera a1, a2
.hword 0x66
.hword \a1
.hword \a2
.endm

.macro ReleaseCamera
.hword 0x67
.endm

.macro FacePlayer
.hword 0x68
.endm

.macro CheckPlayerPosition a1, a2
.hword 0x69
.hword \a1
.hword \a2
.endm

.macro CheckOverworldPosition a1, a2, a3
.hword 0x6a
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x6b a1, a2, a3
.hword 0x6b
.hword \a1
.hword \a2
.hword \a3
.endm

.macro KeepOverworld a1, a2
.hword 0x6c
.hword \a1
.byte \a2
.endm

.macro OverworldDefaultMovement a1, a2
.hword 0x6d
.hword \a1
.hword \a2
.endm

.macro GiveMoney a1
.hword 0x6e
.word \a1
.endm

.macro TakeMoney a1
.hword 0x6f
.word \a1
.endm

.macro CompareMoney a1, a2
.hword 0x70
.hword \a1
.word   \a2 - 1f
1:
.endm

.macro ShowMoney a1, a2
.hword 0x71
.hword \a1
.hword \a2
.endm

.macro HideMoney
.hword 0x72
.endm

.macro UpdateMoney
.hword 0x73
.endm

.macro Cmd_0x74 a1
.hword 0x74
.byte \a1
.endm

.macro Cmd_0x75
.hword 0x75
.endm

.macro Cmd_0x76 a1
.hword 0x76
.byte \a1
.endm

.macro CheckCoins a1
.hword 0x77
.hword \a1
.endm

.macro GiveCoins a1
.hword 0x78
.hword \a1
.endm

.macro TakeCoins a1
.hword 0x79
.hword \a1
.endm

.macro Cmd_0x7a a1, a2, a3
.hword 0x7a
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x7b
.hword 0x7b
.endm

.macro Cmd_0x7c a1, a2, a3
.hword 0x7c
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x7d a1, a2, a3
.hword 0x7d
.hword \a1
.hword \a2
.hword \a3
.endm

.macro TakeItem a1, a2, a3
.hword 0x7e
.hword \a1
.hword \a2
.hword \a3
.endm

.macro GiveItem a1, a2, a3
.hword 0x7f
.hword \a1
.hword \a2
.hword \a3
.endm

.macro CheckItem a1, a2, a3
.hword 0x80
.hword \a1
.hword \a2
.hword \a3
.endm

.macro CheckItemIsMachine a1, a2
.hword 0x81
.hword \a1
.hword \a2
.endm

.macro CheckItemPocket a1, a2
.hword 0x82
.hword \a1
.hword \a2
.endm

.macro Cmd_0x83 a1
.hword 0x83
.hword \a1
.endm

.macro GenderMessage a1, a2
.hword 0x84
.byte \a1
.byte \a2
.endm

.macro Cmd_0x85 a1, a2
.hword 0x85
.hword \a1
.hword \a2
.endm

.macro Cmd_0x86 a1, a2
.hword 0x86
.hword \a1
.hword \a2
.endm

.macro Cmd_0x87 a1, a2, a3
.hword 0x87
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x88 a1, a2
.hword 0x88
.hword \a1
.hword \a2
.endm

.macro GiveStoredPokemon a1, a2, a3, a4, a5, a6
.hword 0x89
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.hword \a6
.endm

.macro GivePokemonEgg a1, a2
.hword 0x8a
.hword \a1
.hword \a2
.endm

.macro Cmd_0x8b a1, a2, a3
.hword 0x8b
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x8c a1, a2, a3
.hword 0x8c
.hword \a1
.hword \a2
.hword \a3
.endm

.macro CheckMoveInParty a1, a2
.hword 0x8d
.hword \a1
.hword \a2
.endm

.macro Cmd_0x8e a1, a2
.hword 0x8e
.hword \a1
.hword \a2
.endm

.macro Cmd_0x8f a1, a2, a3
.hword 0x8f
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x90 a1
.hword 0x90
.hword \a1
.endm

.macro Cmd_0x91 a1
.hword 0x91
.byte \a1
.endm

.macro RecordPokegearNumber a1
.hword 0x92
.hword \a1
.endm

.macro Cmd_0x93 a1, a2
.hword 0x93
.hword \a1
.hword \a2
.endm

.macro Cmd_0x94 a1, a2
.hword 0x94
.hword \a1
.hword \a2
.endm

.macro Cmd_0x95 a1
.hword 0x95
.byte \a1
.endm

.macro ReturnScreen
.hword 0x96
.endm

.macro Cmd_0x97
.hword 0x97
.endm

.macro Cmd_0x98
.hword 0x98
.endm

.macro Cmd_0x99 a1, a2, a3
.hword 0x99
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x9a a1, a2, a3
.hword 0x9a
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x9b a1, a2
.hword 0x9b
.hword \a1
.hword \a2
.endm

.macro Cmd_0x9c
.hword 0x9c
.endm

.macro WorldMapScreen
.hword 0x9d
.endm

.macro Cmd_0x9e a1
.hword 0x9e
.byte \a1
.endm

.macro Cmd_0x9f
.hword 0x9f
.endm

.macro Cmd_0xa0
.hword 0xa0
.endm

.macro CallEnd2
.hword 0xa1
.endm

.macro Cmd_0xa2
.hword 0xa2
.endm

.macro EndGame a1
.hword 0xa3
.hword \a1
.endm

.macro Cmd_0xa4 a1, a2, a3, a4
.hword 0xa4
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0xa5 a1, a2
.hword 0xa5
.hword \a1
.hword \a2
.endm

.macro WFC a1
.hword 0xa6
.hword \a1
.endm

.macro Cmd_0xa7 a1, a2
.hword 0xa7
.hword \a1
.hword \a2
.endm

.macro Cmd_0xa8 a1
.hword 0xa8
.hword \a1
.endm

.macro Cmd_0xa9 a1, a2
.hword 0xa9
.hword \a1
.hword \a2
.endm

.macro Cmd_0xaa a1
.hword 0xaa
.hword \a1
.endm

.macro Cmd_0xab a1, a2
.hword 0xab
.hword \a1
.hword \a2
.endm

.macro Cmd_0xac
.hword 0xac
.endm

.macro GivePokemonNickname a1, a2
.hword 0xad
.hword \a1
.hword \a2
.endm

.macro FadeScreen a1, a2, a3, a4
.hword 0xae
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro WaitFadeScreen
.hword 0xaf
.endm

.macro Warp a1, a2, a3, a4, a5
.hword 0xb0
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro HallFameData a1
.hword 0xb1
.hword \a1
.endm

.macro Cmd_0xb2 a1, a2, a3, a4
.hword 0xb2
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro WFC1 a1
.hword 0xb3
.hword \a1
.endm

.macro Cmd_0xb4
.hword 0xb4
.endm

.macro Cmd_0xb5
.hword 0xb5
.endm

.macro Cmd_0xb6 a1
.hword 0xb6
.hword \a1
.endm

.macro Cmd_0xb7 a1, a2
.hword 0xb7
.hword \a1
.hword \a2
.endm

.macro Cmd_0xb8 a1
.hword 0xb8
.hword \a1
.endm

.macro Cmd_0xb9 a1
.hword 0xb9
.byte \a1
.endm

.macro CyclingRoad a1
.hword 0xba
.byte \a1
.endm

.macro CheckPlayerAction a1
.hword 0xbb
.hword \a1
.endm

.macro SetPlayerAction a1
.hword 0xbc
.hword \a1
.endm

.macro UpdatePlayerAction
.hword 0xbd
.endm

.macro TextPlayerName a1
.hword 0xbe
.byte \a1
.endm

.macro TextRivalName a1
.hword 0xbf
.byte \a1
.endm

.macro TextCounterpart a1
.hword 0xc0
.byte \a1
.endm

.macro TextPokemon a1, a2
.hword 0xc1
.byte \a1
.hword \a2
.endm

.macro TextItem a1, a2
.hword 0xc2
.byte \a1
.hword \a2
.endm

.macro Cmd_0xc3 a1, a2
.hword 0xc3
.byte \a1
.hword \a2
.endm

.macro TextAttackItem a1, a2
.hword 0xc4
.byte \a1
.hword \a2
.endm

.macro TextMoveName a1, a2
.hword 0xc5
.byte \a1
.hword \a2
.endm

.macro TextNumber a1, a2
.hword 0xc6
.byte \a1
.hword \a2
.endm

.macro TextPokeNickname a1, a2
.hword 0xc7
.byte \a1
.hword \a2
.endm

.macro TextObject a1, a2
.hword 0xc8
.byte \a1
.hword \a2
.endm

.macro TextPlayerTrainerType a1
.hword 0xc9
.byte \a1
.endm

.macro TextPokemonStored a1, a2, a3, a4
.hword 0xca
.byte \a1
.hword \a2
.hword \a3
.byte \a4
.endm

.macro TextStarterPokemon a1
.hword 0xcb
.byte \a1
.endm

.macro TextRivalStarter a1
.hword 0xcc
.byte \a1
.endm

.macro TextCounterpartStarter a1
.hword 0xcd
.byte \a1
.endm

.macro CheckStarter a1
.hword 0xce
.hword \a1
.endm

.macro Cmd_0xcf a1
.hword 0xcf
.byte \a1
.endm

.macro Cmd_0xd0 a1, a2
.hword 0xd0
.byte \a1
.hword \a2
.endm

.macro Cmd_0xd1 a1, a2
.hword 0xd1
.byte \a1
.hword \a2
.endm

.macro TextMapName a1, a2
.hword 0xd2
.byte \a1
.hword \a2
.endm

.macro CheckSwarm a1, a2
.hword 0xd3
.byte \a1
.hword \a2
.endm

.macro TrainerID a1
.hword 0xd4
.hword \a1
.endm

.macro TrainerBattle a1, a2, a3
.hword 0xd5
.hword \a1
.hword \a2
.hword \a3
.endm

.macro TrainerMessage a1, a2
.hword 0xd6
.hword \a1
.hword \a2
.endm

.macro TrainerMsgCheck a1, a2, a3
.hword 0xd7
.hword \a1
.hword \a2
.hword \a3
.endm

.macro TrainerRematchMsgCheck a1, a2, a3
.hword 0xd8
.hword \a1
.hword \a2
.hword \a3
.endm

.macro TrainerTypeCheck a1
.hword 0xd9
.hword \a1
.endm

.macro TrainerMusic a1
.hword 0xda
.hword \a1
.endm

.macro LostBattle
.hword 0xdb
.endm

.macro CheckBattleIsLost a1
.hword 0xdc
.hword \a1
.endm

.macro Cmd_0xdd a1, a2
.hword 0xdd
.hword \a1
.byte \a2
.endm

.macro Cmd_0xde a1
.hword 0xde
.hword \a1
.endm

.macro Cmd_0xdf a1, a2
.hword 0xdf
.byte \a1
.hword \a2
.endm

.macro Cmd_0xe0 a1, a2
.hword 0xe0
.byte \a1
.hword \a2
.endm

.macro Cmd_0xe1 a1, a2
.hword 0xe1
.byte \a1
.hword \a2
.endm

.macro Cmd_0xe2 a1, a2, a3, a4
.hword 0xe2
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0xe3 a1, a2, a3, a4
.hword 0xe3
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0xe4 a1
.hword 0xe4
.hword \a1
.endm

.macro Cmd_0xe5 a1, a2
.hword 0xe5
.hword \a1
.hword \a2
.endm

.macro Cmd_0xe6
.hword 0xe6
.endm

.macro Cmd_0xe7 a1, a2, a3
.hword 0xe7
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0xe8 a1, a2, a3
.hword 0xe8
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0xe9 a1
.hword 0xe9
.hword \a1
.endm

.macro Cmd_0xea a1, a2, a3, a4
.hword 0xea
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0xeb a1
.hword 0xeb
.hword \a1
.endm

.macro Cmd_0xec a1, a2, a3, a4, a5
.hword 0xec
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro Cmd_0xed
.hword 0xed
.endm

.macro Cmd_0xee a1, a2, a3, a4
.hword 0xee
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0xef a1, a2
.hword 0xef
.hword \a1
.hword \a2
.endm

.macro WarpLift a1, a2, a3, a4, a5
.hword 0xf0
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro CheckElevatorFloor a1
.hword 0xf1
.hword \a1
.endm

.macro ElevatorBox a1, a2, a3, a4
.hword 0xf2
.byte \a1
.byte \a2
.hword \a3
.hword \a4
.endm

.macro WirelessBattleWait a1
.hword 0xf3
.hword \a1
.endm

.macro Cmd_0xf4 a1
.hword 0xf4
.hword \a1
.endm

.macro Cmd_0xf5 a1
.hword 0xf5
.hword \a1
.endm

.macro Cmd_0xf6 a1
.hword 0xf6
.hword \a1
.endm

.macro PokemonContest
.hword 0xf7
.endm

.macro Cmd_0xf8 a1
.hword 0xf8
.hword \a1
.endm

.macro WildBattle a1, a2
.hword 0xf9
.hword \a1
.hword \a2
.endm

.macro FirstBattle a1, a2
.hword 0xfa
.hword \a1
.hword \a2
.endm

.macro CatchTutorial
.hword 0xfb
.endm

.macro Cmd_0xfc
.hword 0xfc
.endm

.macro Cmd_0xfd a1
.hword 0xfd
.hword \a1
.endm

.macro Cmd_0xfe a1
.hword 0xfe
.hword \a1
.endm

.macro Cmd_0xff a1, a2
.hword 0xff
.hword \a1
.hword \a2
.endm

.macro Cmd_0x100 a1
.hword 0x100
.hword \a1
.endm

.macro Cmd_0x101 a1
.hword 0x101
.hword \a1
.endm

.macro Cmd_0x102 a1, a2
.hword 0x102
.hword \a1
.hword \a2
.endm

.macro Cmd_0x103 a1, a2
.hword 0x103
.byte \a1
.byte \a2
.endm

.macro Cmd_0x104 a1
.hword 0x104
.hword \a1
.endm

.macro Cmd_0x105 a1
.hword 0x105
.hword \a1
.endm

.macro Cmd_0x106
.hword 0x106
.endm

.macro Cmd_0x107
.hword 0x107
.endm

.macro Cmd_0x108 a1
.hword 0x108
.hword \a1
.endm

.macro Cmd_0x109
.hword 0x109
.endm

.macro Cmd_0x10a
.hword 0x10a
.endm

.macro Cmd_0x10b a1, a2
.hword 0x10b
.hword \a1
.hword \a2
.endm

.macro Cmd_0x10c a1
.hword 0x10c
.hword \a1
.endm

.macro Cmd_0x10d a1, a2, a3, a4
.hword 0x10d
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x10e a1
.hword 0x10e
.hword \a1
.endm

.macro Cmd_0x10f a1, a2
.hword 0x10f
.hword \a1
.hword \a2
.endm

.macro Cmd_0x110 a1
.hword 0x110
.hword \a1
.endm

.macro Cmd_0x111 a1
.hword 0x111
.hword \a1
.endm

.macro Cmd_0x112 a1, a2
.hword 0x112
.hword \a1
.hword \a2
.endm

.macro Cmd_0x113 a1
.hword 0x113
.hword \a1
.endm

.macro Cmd_0x114 a1
.hword 0x114
.hword \a1
.endm

.macro Cmd_0x115 a1
.hword 0x115
.hword \a1
.endm

.macro Cmd_0x116 a1, a2, a3, a4
.hword 0x116
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x117
.hword 0x117
.endm

.macro Cmd_0x118
.hword 0x118
.endm

.macro CheckGender a1
.hword 0x119
.hword \a1
.endm

.macro HealPokemon
.hword 0x11a
.endm

.macro Cmd_0x11b
.hword 0x11b
.endm

.macro Cmd_0x11c
.hword 0x11c
.endm

.macro Cmd_0x11d a1, a2
.hword 0x11d
.hword \a1
.hword \a2
.endm

.macro Cmd_0x11e a1
.hword 0x11e
.hword \a1
.endm

.macro Cmd_0x11f a1, a2
.hword 0x11f
.hword \a1
.hword \a2
.endm

.macro Cmd_0x120 a1, a2
.hword 0x120
.hword \a1
.hword \a2
.endm

.macro Cmd_0x121 a1
.hword 0x121
.hword \a1
.endm

.macro Cmd_0x122 a1, a2
.hword 0x122
.hword \a1
.hword \a2
.endm

.macro ActivatePokedex
.hword 0x123
.endm

.macro Cmd_0x124
.hword 0x124
.endm

.macro GiveRunningShoes
.hword 0x125
.endm

.macro CheckBadge a1, a2
.hword 0x126
.hword \a1
.hword \a2
.endm

.macro GiveBadge a1
.hword 0x127
.hword \a1
.endm

.macro CheckBadgeCount a1
.hword 0x128
.hword \a1
.endm

.macro Cmd_0x129
.hword 0x129
.endm

.macro Cmd_0x12a a1, a2, a3, a4
.hword 0x12a
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x12b a1
.hword 0x12b
.hword \a1
.endm

.macro Cmd_0x12c a1
.hword 0x12c
.hword \a1
.endm

.macro Cmd_0x12d a1
.hword 0x12d
.hword \a1
.endm

.macro Cmd_0x12e a1, a2
.hword 0x12e
.hword \a1
.hword \a2
.endm

.macro Cmd_0x12f a1, a2
.hword 0x12f
.hword \a1
.hword \a2
.endm

.macro Cmd_0x130 a1
.hword 0x130
.hword \a1
.endm

.macro Cmd_0x131
.hword 0x131
.endm

.macro Cmd_0x132 a1, a2, a3, a4
.hword 0x132
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro DoorAnimation a1, a2, a3, a4, a5
.hword 0x133
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.byte \a5
.endm

.macro WaitDoor a1
.hword 0x134
.byte \a1
.endm

.macro FreeDoor a1
.hword 0x135
.byte \a1
.endm

.macro OpenDoor a1
.hword 0x136
.byte \a1
.endm

.macro CloseDoor a1
.hword 0x137
.byte \a1
.endm

.macro Cmd_0x138
.hword 0x138
.endm

.macro Cmd_0x139 a1, a2, a3, a4
.hword 0x139
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x13a
.hword 0x13a
.endm

.macro Cmd_0x13b
.hword 0x13b
.endm

.macro Cmd_0x13c
.hword 0x13c
.endm

.macro Cmd_0x13d a1
.hword 0x13d
.byte \a1
.endm

.macro Cmd_0x13e
.hword 0x13e
.endm

.macro Cmd_0x13f a1
.hword 0x13f
.hword \a1
.endm

.macro Cmd_0x140 a1
.hword 0x140
.hword \a1
.endm

.macro VermillionGymAnimation a1
.hword 0x141
.hword \a1
.endm

.macro VermillionGymBin a1, a2
.hword 0x142
.byte \a1
.hword \a2
.endm

.macro Cmd_0x143 a1, a2
.hword 0x143
.hword \a1
.hword \a2
.endm

.macro Cmd_0x144
.hword 0x144
.endm

.macro Cmd_0x145
.hword 0x145
.endm

.macro Cmd_0x146
.hword 0x146
.endm

.macro AzaleaGym a1
.hword 0x147
.byte \a1
.endm

.macro AzaleaGym2 a1
.hword 0x148
.byte \a1
.endm

.macro Cmd_0x149
.hword 0x149
.endm

.macro Cmd_0x14a
.hword 0x14a
.endm

.macro Cmd_0x14b
.hword 0x14b
.endm

.macro GetPartyCount a1
.hword 0x14c
.hword \a1
.endm

.macro Cmd_0x14d a1
.hword 0x14d
.hword \a1
.endm

.macro Cmd_0x14e
.hword 0x14e
.endm

.macro Cmd_0x14f
.hword 0x14f
.endm

.macro Cmd_0x150
.hword 0x150
.endm

.macro Cmd_0x151
.hword 0x151
.endm

.macro Cmd_0x152 a1, a2, a3
.hword 0x152
.hword \a1
.hword \a2
.hword \a3
.endm

.macro SetOverworldPosition a1, a2, a3, a4, a5
.hword 0x153
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro Cmd_0x154 a1, a2
.hword 0x154
.hword \a1
.hword \a2
.endm

.macro Cmd_0x155 a1, a2
.hword 0x155
.hword \a1
.hword \a2
.endm

.macro Cmd_0x156 a1, a2, a3
.hword 0x156
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x157
.hword 0x157
.endm

.macro Cmd_0x158 a1, a2
.hword 0x158
.hword \a1
.hword \a2
.endm

.macro Cmd_0x159
.hword 0x159
.endm

.macro Cmd_0x15a
.hword 0x15a
.endm

.macro Cmd_0x15b a1, a2
.hword 0x15b
.hword \a1
.hword \a2
.endm

.macro Cmd_0x15c a1
.hword 0x15c
.hword \a1
.endm

.macro Cmd_0x15d
.hword 0x15d
.endm

.macro Cmd_0x15e
.hword 0x15e
.endm

.macro Cmd_0x15f a1
.hword 0x15f
.hword \a1
.endm

.macro Cmd_0x160 a1, a2, a3
.hword 0x160
.byte \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x161 a1, a2
.hword 0x161
.byte \a1
.hword \a2
.endm

.macro Cmd_0x162 a1, a2
.hword 0x162
.hword \a1
.hword \a2
.endm

.macro CheckIfPokemonTraded a1, a2
.hword 0x163
.hword \a1
.hword \a2
.endm

.macro Cmd_0x164 a1
.hword 0x164
.hword \a1
.endm

.macro Cmd_0x165 a1, a2
.hword 0x165
.hword \a1
.hword \a2
.endm

.macro Cmd_0x166 a1
.hword 0x166
.hword \a1
.endm

.macro Cmd_0x167 a1
.hword 0x167
.hword \a1
.endm

.macro Cmd_0x168 a1
.hword 0x168
.hword \a1
.endm

.macro Cmd_0x169 a1, a2
.hword 0x169
.hword \a1
.hword \a2
.endm

.macro Cmd_0x16a a1, a2
.hword 0x16a
.hword \a1
.hword \a2
.endm

.macro Cmd_0x16b a1, a2, a3
.hword 0x16b
.byte \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x16c a1
.hword 0x16c
.hword \a1
.endm

.macro Cmd_0x16d
.hword 0x16d
.endm

.macro Cmd_0x16e
.hword 0x16e
.endm

.macro Cmd_0x16f a1, a2
.hword 0x16f
.hword \a1
.hword \a2
.endm

.macro CheckHiroMoneyNumber a1, a2
.hword 0x170
.hword \a1
.hword \a2
.endm

.macro EggHatchScreen
.hword 0x171
.endm

.macro Cmd_0x172
.hword 0x172
.endm

.macro Cmd_0x173 a1, a2
.hword 0x173
.hword \a1
.hword \a2
.endm

.macro Cmd_0x174 a1, a2
.hword 0x174
.hword \a1
.hword \a2
.endm

.macro Cmd_0x175 a1
.hword 0x175
.hword \a1
.endm

.macro UnvanishOverworld a1
.hword 0x176
.hword \a1
.endm

.macro VanishOverworld a1
.hword 0x177
.hword \a1
.endm

.macro OpenMail
.hword 0x178
.endm

.macro CheckMail a1
.hword 0x179
.hword \a1
.endm

.macro Cmd_0x17a a1, a2
.hword 0x17a
.hword \a1
.hword \a2
.endm

.macro GetTimePeriod a1
.hword 0x17b
.hword \a1
.endm

.macro GetRandom a1, a2
.hword 0x17c
.hword \a1
.hword \a2
.endm

.macro DummyGetRandom a1
.hword 0x17d
.hword \a1
.endm

.macro CheckHappiness a1, a2
.hword 0x17e
.hword \a1
.hword \a2
.endm

.macro AddHappiness a1, a2
.hword 0x17f
.hword \a1
.hword \a2
.endm

.macro SubHappiness a1
.hword 0x180
.byte \a1
.endm

.macro Cmd_0x181 a1, a2
.hword 0x181
.hword \a1
.hword \a2
.endm

.macro CheckPlayerDir a1
.hword 0x182
.hword \a1
.endm

.macro Cmd_0x183 a1
.hword 0x183
.hword \a1
.endm

.macro Cmd_0x184 a1
.hword 0x184
.hword \a1
.endm

.macro Cmd_0x185 a1
.hword 0x185
.hword \a1
.endm

.macro Cmd_0x186 a1, a2
.hword 0x186
.hword \a1
.hword \a2
.endm

.macro Cmd_0x187 a1
.hword 0x187
.hword \a1
.endm

.macro Cmd_0x188 a1, a2, a3
.hword 0x188
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x189 a1, a2, a3
.hword 0x189
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x18a a1
.hword 0x18a
.hword \a1
.endm

.macro Cmd_0x18b a1
.hword 0x18b
.hword \a1
.endm

.macro Cmd_0x18c a1, a2
.hword 0x18c
.hword \a1
.hword \a2
.endm

.macro Cmd_0x18d a1, a2
.hword 0x18d
.hword \a1
.hword \a2
.endm

.macro Cmd_0x18e a1, a2, a3
.hword 0x18e
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x18f a1, a2, a3
.hword 0x18f
.byte \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x190 a1
.hword 0x190
.byte \a1
.endm

.macro Cmd_0x191
.hword 0x191
.endm

.macro Cmd_0x192
.hword 0x192
.endm

.macro Cmd_0x193 a1, a2
.hword 0x193
.hword \a1
.hword \a2
.endm

.macro Cmd_0x194 a1, a2, a3
.hword 0x194
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x195 a1, a2
.hword 0x195
.hword \a1
.hword \a2
.endm

.macro Cmd_0x196 a1
.hword 0x196
.hword \a1
.endm

.macro Cmd_0x197 a1, a2
.hword 0x197
.hword \a1
.hword \a2
.endm

.macro Cmd_0x198 a1, a2
.hword 0x198
.hword \a1
.hword \a2
.endm

.macro Cmd_0x199
.hword 0x199
.endm

.macro Cmd_0x19a a1, a2
.hword 0x19a
.hword \a1
.hword \a2
.endm

.macro Cmd_0x19b
.hword 0x19b
.endm

.macro Cmd_0x19c a1, a2, a3
.hword 0x19c
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x19d a1, a2, a3, a4
.hword 0x19d
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x19e a1
.hword 0x19e
.hword \a1
.endm

.macro Cmd_0x19f a1
.hword 0x19f
.hword \a1
.endm

.macro Cmd_0x1a0 a1, a2, a3
.hword 0x1a0
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1a1 a1, a2
.hword 0x1a1
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1a2 a1, a2
.hword 0x1a2
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1a3 a1, a2, a3
.hword 0x1a3
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1a4 a1
.hword 0x1a4
.hword \a1
.endm

.macro Cmd_0x1a5
.hword 0x1a5
.endm

.macro Cmd_0x1a6
.hword 0x1a6
.endm

.macro Cmd_0x1a7 a1
.hword 0x1a7
.hword \a1
.endm

.macro Cmd_0x1a8 a1
.hword 0x1a8
.hword \a1
.endm

.macro Cmd_0x1a9 a1
.hword 0x1a9
.hword \a1
.endm

.macro Cmd_0x1aa a1, a2, a3
.hword 0x1aa
.byte \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1ab a1, a2
.hword 0x1ab
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1ac a1
.hword 0x1ac
.hword \a1
.endm

.macro Cmd_0x1ad a1
.hword 0x1ad
.hword \a1
.endm

.macro Cmd_0x1ae a1, a2, a3
.hword 0x1ae
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1af a1, a2, a3
.hword 0x1af
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1b0 a1, a2
.hword 0x1b0
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1b1 a1, a2, a3
.hword 0x1b1
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1b2 a1, a2
.hword 0x1b2
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1b3 a1, a2
.hword 0x1b3
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1b4
.hword 0x1b4
.endm

.macro Cmd_0x1b5 a1
.hword 0x1b5
.hword \a1
.endm

.macro Cmd_0x1b6 a1, a2
.hword 0x1b6
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1b7 a1, a2
.hword 0x1b7
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1b8 a1, a2
.hword 0x1b8
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1b9 a1, a2
.hword 0x1b9
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1ba a1, a2
.hword 0x1ba
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1bb
.hword 0x1bb
.endm

.macro Cmd_0x1bc a1, a2
.hword 0x1bc
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1bd a1
.hword 0x1bd
.hword \a1
.endm

.macro Cmd_0x1be a1
.hword 0x1be
.hword \a1
.endm

.macro Cmd_0x1bf a1
.hword 0x1bf
.hword \a1
.endm

.macro Cmd_0x1c0 a1, a2, a3, a4, a5
.hword 0x1c0
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro Cmd_0x1c1 a1, a2
.hword 0x1c1
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1c2 a1
.hword 0x1c2
.hword \a1
.endm

.macro Cmd_0x1c3 a1
.hword 0x1c3
.hword \a1
.endm

.macro Cmd_0x1c4 a1, a2
.hword 0x1c4
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1c5
.hword 0x1c5
.endm

.macro Cmd_0x1c6
.hword 0x1c6
.endm

.macro Cmd_0x1c7 a1
.hword 0x1c7
.hword \a1
.endm

.macro Cmd_0x1c8 a1, a2
.hword 0x1c8
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1c9 a1, a2
.hword 0x1c9
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1ca a1, a2, a3
.hword 0x1ca
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1cb
.hword 0x1cb
.endm

.macro Cmd_0x1cc a1, a2
.hword 0x1cc
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1cd a1, a2, a3
.hword 0x1cd
.byte \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1ce a1
.hword 0x1ce
.hword \a1
.endm

.macro Cmd_0x1cf
.hword 0x1cf
.endm

.macro Cmd_0x1d0 a1
.hword 0x1d0
.byte \a1
.endm

.macro Cmd_0x1d1 a1, a2, a3
.hword 0x1d1
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1d2 a1, a2
.hword 0x1d2
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1d3 a1
.hword 0x1d3
.hword \a1
.endm

.macro Cmd_0x1d4 a1, a2
.hword 0x1d4
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1d5 a1
.hword 0x1d5
.hword \a1
.endm

.macro Cmd_0x1d6 a1
.hword 0x1d6
.byte \a1
.endm

.macro Cmd_0x1d7
.hword 0x1d7
.endm

.macro Cmd_0x1d8 a1
.hword 0x1d8
.hword \a1
.endm

.macro Cmd_0x1d9 a1
.hword 0x1d9
.hword \a1
.endm

.macro Cmd_0x1da
.hword 0x1da
.endm

.macro special a1
.hword 0x1db
.byte \a1
.endm

.macro Cmd_0x1dc
.hword 0x1dc
.endm

.macro Cmd_0x1dd a1, a2
.hword 0x1dd
.byte \a1
.hword \a2
.endm

.macro Cmd_0x1de a1, a2, a3, a4
.hword 0x1de
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x1df
.hword 0x1df
.endm

.macro Cmd_0x1e0 a1, a2, a3
.hword 0x1e0
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1e1 a1, a2
.hword 0x1e1
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1e2 a1, a2
.hword 0x1e2
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1e3 a1, a2
.hword 0x1e3
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1e4 a1
.hword 0x1e4
.hword \a1
.endm

.macro Cmd_0x1e5 a1
.hword 0x1e5
.hword \a1
.endm

.macro Cmd_0x1e6
.hword 0x1e6
.endm

.macro Cmd_0x1e7 a1
.hword 0x1e7
.hword \a1
.endm

.macro Cmd_0x1e8 a1, a2
.hword 0x1e8
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1e9 a1
.hword 0x1e9
.hword \a1
.endm

.macro Cmd_0x1ea a1
.hword 0x1ea
.hword \a1
.endm

.macro Cmd_0x1eb a1
.hword 0x1eb
.hword \a1
.endm

.macro Cmd_0x1ec a1, a2, a3
.hword 0x1ec
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1ed a1, a2, a3
.hword 0x1ed
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1ee a1, a2
.hword 0x1ee
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1ef a1
.hword 0x1ef
.hword \a1
.endm

.macro Cmd_0x1f0
.hword 0x1f0
.endm

.macro Cmd_0x1f1 a1, a2, a3
.hword 0x1f1
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x1f2 a1, a2, a3, a4, a5
.hword 0x1f2
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro Cmd_0x1f3 a1, a2, a3, a4, a5
.hword 0x1f3
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro Cmd_0x1f4 a1
.hword 0x1f4
.byte \a1
.endm

.macro Cmd_0x1f5 a1
.hword 0x1f5
.byte \a1
.endm

.macro Cmd_0x1f6 a1, a2
.hword 0x1f6
.hword \a1
.hword \a2
.endm

.macro Cmd_0x1f7 a1
.hword 0x1f7
.hword \a1
.endm

.macro Cmd_0x1f8 a1, a2, a3, a4
.hword 0x1f8
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x1f9
.hword 0x1f9
.endm

.macro Cmd_0x1fa a1, a2
.hword 0x1fa
.byte \a1
.hword \a2
.endm

.macro Cmd_0x1fb a1
.hword 0x1fb
.hword \a1
.endm

.macro Cmd_0x1fc a1
.hword 0x1fc
.hword \a1
.endm

.macro Cmd_0x1fd a1
.hword 0x1fd
.hword \a1
.endm

.macro Cmd_0x1fe
.hword 0x1fe
.endm

.macro Cmd_0x1ff a1, a2
.hword 0x1ff
.hword \a1
.hword \a2
.endm

.macro Cmd_0x200 a1
.hword 0x200
.hword \a1
.endm

.macro Cmd_0x201 a1, a2, a3
.hword 0x201
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x202 a1
.hword 0x202
.hword \a1
.endm

.macro Cmd_0x203 a1
.hword 0x203
.hword \a1
.endm

.macro Cmd_0x204 a1, a2
.hword 0x204
.byte \a1
.hword \a2
.endm

.macro Cmd_0x205 a1, a2
.hword 0x205
.hword \a1
.hword \a2
.endm

.macro Cmd_0x206 a1
.hword 0x206
.hword \a1
.endm

.macro Cmd_0x207 a1, a2
.hword 0x207
.byte \a1
.hword \a2
.endm

.macro Cmd_0x208 a1
.hword 0x208
.hword \a1
.endm

.macro Cmd_0x209
.hword 0x209
.endm

.macro Cmd_0x20a a1
.hword 0x20a
.hword \a1
.endm

.macro Cmd_0x20b a1, a2, a3, a4, a5
.hword 0x20b
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro Cmd_0x20c a1, a2, a3, a4, a5
.hword 0x20c
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro Cmd_0x20d a1, a2
.hword 0x20d
.byte \a1
.hword \a2
.endm

.macro Cmd_0x20e
.hword 0x20e
.endm

.macro Cmd_0x20f a1
.hword 0x20f
.hword \a1
.endm

.macro Cmd_0x210 a1
.hword 0x210
.hword \a1
.endm

.macro Cmd_0x211 a1
.hword 0x211
.hword \a1
.endm

.macro Cmd_0x212 a1, a2
.hword 0x212
.byte \a1
.hword \a2
.endm

.macro Cmd_0x213 a1, a2
.hword 0x213
.byte \a1
.hword \a2
.endm

.macro Cmd_0x214 a1, a2, a3
.hword 0x214
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x215 a1, a2, a3
.hword 0x215
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x216 a1
.hword 0x216
.hword \a1
.endm

.macro Cmd_0x217 a1, a2
.hword 0x217
.hword \a1
.hword \a2
.endm

.macro Cmd_0x218 a1
.hword 0x218
.hword \a1
.endm

.macro Cmd_0x219
.hword 0x219
.endm

.macro Cmd_0x21a a1, a2
.hword 0x21a
.hword \a1
.hword \a2
.endm

.macro Cmd_0x21b
.hword 0x21b
.endm

.macro Cmd_0x21c a1
.hword 0x21c
.hword \a1
.endm

.macro Cmd_0x21d a1, a2, a3
.hword 0x21d
.byte \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x21e
.hword 0x21e
.endm

.macro Cmd_0x21f a1, a2
.hword 0x21f
.hword \a1
.hword \a2
.endm

.macro Cmd_0x220
.hword 0x220
.endm

.macro Cmd_0x221 a1
.hword 0x221
.hword \a1
.endm

.macro Cmd_0x222 a1, a2
.hword 0x222
.byte \a1
.hword \a2
.endm

.macro Cmd_0x223 a1
.hword 0x223
.hword \a1
.endm

.macro Cmd_0x224
.hword 0x224
.endm

.macro Cmd_0x225 a1
.hword 0x225
.hword \a1
.endm

.macro Cmd_0x226 a1
.hword 0x226
.byte \a1
.endm

.macro Cmd_0x227 a1
.hword 0x227
.hword \a1
.endm

.macro Cmd_0x228 a1, a2
.hword 0x228
.hword \a1
.hword \a2
.endm

.macro Cmd_0x229 a1, a2
.hword 0x229
.byte \a1
.hword \a2
.endm

.macro Cmd_0x22a
.hword 0x22a
.endm

.macro Cmd_0x22b a1
.hword 0x22b
.hword \a1
.endm

.macro Cmd_0x22c a1
.hword 0x22c
.hword \a1
.endm

.macro Cmd_0x22d a1, a2
.hword 0x22d
.hword \a1
.hword \a2
.endm

.macro Cmd_0x22e a1, a2
.hword 0x22e
.hword \a1
.hword \a2
.endm

.macro Cmd_0x22f a1
.hword 0x22f
.hword \a1
.endm

.macro Cmd_0x230 a1, a2, a3
.hword 0x230
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x231 a1, a2, a3, a4
.hword 0x231
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x232 a1, a2, a3, a4
.hword 0x232
.hword \a1
.hword \a2
.hword \a3
.byte \a4
.endm

.macro Cmd_0x233 a1, a2
.hword 0x233
.hword \a1
.hword \a2
.endm

.macro Cmd_0x234 a1
.hword 0x234
.hword \a1
.endm

.macro Cmd_0x235 a1
.hword 0x235
.hword \a1
.endm

.macro Cmd_0x236
.hword 0x236
.endm

.macro Cmd_0x237 a1, a2, a3, a4
.hword 0x237
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x238 a1, a2
.hword 0x238
.hword \a1
.hword \a2
.endm

.macro Cmd_0x239 a1
.hword 0x239
.hword \a1
.endm

.macro Cmd_0x23a a1, a2, a3
.hword 0x23a
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x23b a1
.hword 0x23b
.hword \a1
.endm

.macro Cmd_0x23c a1
.hword 0x23c
.hword \a1
.endm

.macro Cmd_0x23d
.hword 0x23d
.endm

.macro Cmd_0x23e a1, a2
.hword 0x23e
.hword \a1
.hword \a2
.endm

.macro Cmd_0x23f
.hword 0x23f
.endm

.macro Cmd_0x240 a1
.hword 0x240
.hword \a1
.endm

.macro Cmd_0x241
.hword 0x241
.endm

.macro Cmd_0x242
.hword 0x242
.endm

.macro Cmd_0x243
.hword 0x243
.endm

.macro Cmd_0x244 a1, a2
.hword 0x244
.byte \a1
.hword \a2
.endm

.macro Cmd_0x245 a1, a2
.hword 0x245
.hword \a1
.hword \a2
.endm

.macro Cmd_0x246 a1, a2, a3
.hword 0x246
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x247 a1
.hword 0x247
.hword \a1
.endm

.macro Cmd_0x248 a1
.hword 0x248
.hword \a1
.endm

.macro Cmd_0x249
.hword 0x249
.endm

.macro Cmd_0x24a a1
.hword 0x24a
.hword \a1
.endm

.macro Cmd_0x24b
.hword 0x24b
.endm

.macro Cmd_0x24c a1
.hword 0x24c
.hword \a1
.endm

.macro Cmd_0x24d a1, a2, a3
.hword 0x24d
.hword \a1
.hword \a2
.byte \a3
.endm

.macro Cmd_0x24e a1
.hword 0x24e
.hword \a1
.endm

.macro Cmd_0x24f
.hword 0x24f
.endm

.macro Cmd_0x250 a1
.hword 0x250
.hword \a1
.endm

.macro Cmd_0x251
.hword 0x251
.endm

.macro Cmd_0x252 a1
.hword 0x252
.hword \a1
.endm

.macro Cmd_0x253 a1
.hword 0x253
.hword \a1
.endm

.macro Cmd_0x254 a1
.hword 0x254
.hword \a1
.endm

.macro Cmd_0x255
.hword 0x255
.endm

.macro Cmd_0x256 a1, a2
.hword 0x256
.hword \a1
.hword \a2
.endm

.macro Cmd_0x257
.hword 0x257
.endm

.macro Cmd_0x258
.hword 0x258
.endm

.macro Cmd_0x259
.hword 0x259
.endm

.macro Cmd_0x25a a1
.hword 0x25a
.hword \a1
.endm

.macro Cmd_0x25b
.hword 0x25b
.endm

.macro Cmd_0x25c a1
.hword 0x25c
.hword \a1
.endm

.macro Cmd_0x25d a1
.hword 0x25d
.hword \a1
.endm

.macro Cmd_0x25e
.hword 0x25e
.endm

.macro Cmd_0x25f
.hword 0x25f
.endm

.macro Cmd_0x260 a1, a2, a3
.hword 0x260
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x261
.hword 0x261
.endm

.macro Cmd_0x262
.hword 0x262
.endm

.macro Cmd_0x263 a1, a2, a3, a4, a5, a6
.hword 0x263
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.hword \a6
.endm

.macro Cmd_0x264 a1
.hword 0x264
.hword \a1
.endm

.macro Cmd_0x265 a1
.hword 0x265
.hword \a1
.endm

.macro Cmd_0x266 a1
.hword 0x266
.hword \a1
.endm

.macro Cmd_0x267 a1, a2
.hword 0x267
.hword \a1
.hword \a2
.endm

.macro Cmd_0x268 a1
.hword 0x268
.hword \a1
.endm

.macro Cmd_0x269 a1, a2
.hword 0x269
.hword \a1
.hword \a2
.endm

.macro Cmd_0x26a a1
.hword 0x26a
.hword \a1
.endm

.macro Cmd_0x26b a1
.hword 0x26b
.hword \a1
.endm

.macro Cmd_0x26c a1
.hword 0x26c
.byte \a1
.endm

.macro Cmd_0x26d a1
.hword 0x26d
.hword \a1
.endm

.macro Cmd_0x26e a1, a2
.hword 0x26e
.hword \a1
.hword \a2
.endm

.macro Cmd_0x26f a1
.hword 0x26f
.hword \a1
.endm

.macro Cmd_0x270 a1
.hword 0x270
.hword \a1
.endm

.macro Cmd_0x271 a1, a2, a3
.hword 0x271
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x272 a1, a2
.hword 0x272
.byte \a1
.hword \a2
.endm

.macro Cmd_0x273 a1
.hword 0x273
.byte \a1
.endm

.macro Cmd_0x274 a1, a2
.hword 0x274
.hword \a1
.hword \a2
.endm

.macro Cmd_0x275 a1
.hword 0x275
.hword \a1
.endm

.macro Cmd_0x276 a1, a2, a3
.hword 0x276
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x277 a1, a2, a3
.hword 0x277
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x278 a1, a2
.hword 0x278
.hword \a1
.hword \a2
.endm

.macro Cmd_0x279 a1, a2, a3
.hword 0x279
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x27a a1, a2
.hword 0x27a
.hword \a1
.hword \a2
.endm

.macro Cmd_0x27b a1, a2
.hword 0x27b
.hword \a1
.hword \a2
.endm

.macro Cmd_0x27c a1
.hword 0x27c
.hword \a1
.endm

.macro Cmd_0x27d a1, a2, a3
.hword 0x27d
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x27e a1, a2, a3
.hword 0x27e
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x27f a1, a2, a3
.hword 0x27f
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x280 a1, a2, a3
.hword 0x280
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x281 a1, a2, a3
.hword 0x281
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x282 a1, a2, a3
.hword 0x282
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x283 a1, a2, a3
.hword 0x283
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x284 a1, a2, a3
.hword 0x284
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x285 a1, a2, a3
.hword 0x285
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x286 a1
.hword 0x286
.hword \a1
.endm

.macro Cmd_0x287 a1
.hword 0x287
.hword \a1
.endm

.macro Cmd_0x288 a1
.hword 0x288
.hword \a1
.endm

.macro Cmd_0x289
.hword 0x289
.endm

.macro Cmd_0x28a a1
.hword 0x28a
.hword \a1
.endm

.macro Cmd_0x28b a1, a2, a3
.hword 0x28b
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x28c a1, a2, a3
.hword 0x28c
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x28d a1, a2, a3, a4
.hword 0x28d
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x28e a1, a2, a3
.hword 0x28e
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x28f a1, a2
.hword 0x28f
.hword \a1
.hword \a2
.endm

.macro Cmd_0x290 a1, a2
.hword 0x290
.hword \a1
.hword \a2
.endm

.macro Cmd_0x291 a1, a2, a3, a4
.hword 0x291
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x292 a1, a2
.hword 0x292
.byte \a1
.hword \a2
.endm

.macro Cmd_0x293 a1
.hword 0x293
.hword \a1
.endm

.macro Cmd_0x294 a1
.hword 0x294
.hword \a1
.endm

.macro Cmd_0x295
.hword 0x295
.endm

.macro Cmd_0x296 a1, a2, a3
.hword 0x296
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x297 a1
.hword 0x297
.hword \a1
.endm

.macro Cmd_0x298
.hword 0x298
.endm

.macro Cmd_0x299 a1
.hword 0x299
.hword \a1
.endm

.macro Cmd_0x29a a1, a2
.hword 0x29a
.hword \a1
.hword \a2
.endm

.macro Cmd_0x29b a1, a2, a3, a4
.hword 0x29b
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x29c a1, a2
.hword 0x29c
.byte \a1
.hword \a2
.endm

.macro Cmd_0x29d a1, a2
.hword 0x29d
.hword \a1
.hword \a2
.endm

.macro Cmd_0x29e a1, a2
.hword 0x29e
.hword \a1
.hword \a2
.endm

.macro Cmd_0x29f
.hword 0x29f
.endm

.macro Cmd_0x2a0 a1, a2, a3
.hword 0x2a0
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x2a1 a1, a2, a3, a4, a5
.hword 0x2a1
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro Cmd_0x2a2 a1, a2
.hword 0x2a2
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2a3 a1, a2, a3, a4
.hword 0x2a3
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x2a4 a1, a2
.hword 0x2a4
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2a5
.hword 0x2a5
.endm

.macro Cmd_0x2a6 a1, a2, a3
.hword 0x2a6
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x2a7 a1, a2
.hword 0x2a7
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2a8 a1, a2
.hword 0x2a8
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2a9 a1
.hword 0x2a9
.hword \a1
.endm

.macro Cmd_0x2aa a1
.hword 0x2aa
.hword \a1
.endm

.macro Cmd_0x2ab a1
.hword 0x2ab
.hword \a1
.endm

.macro Cmd_0x2ac
.hword 0x2ac
.endm

.macro Cmd_0x2ad a1, a2
.hword 0x2ad
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2ae
.hword 0x2ae
.endm

.macro Cmd_0x2af a1
.hword 0x2af
.hword \a1
.endm

.macro Cmd_0x2b0 a1
.hword 0x2b0
.hword \a1
.endm

.macro Cmd_0x2b1 a1
.hword 0x2b1
.hword \a1
.endm

.macro Cmd_0x2b2 a1, a2
.hword 0x2b2
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2b3 a1
.hword 0x2b3
.hword \a1
.endm

.macro Cmd_0x2b4
.hword 0x2b4
.endm

.macro Cmd_0x2b5 a1
.hword 0x2b5
.hword \a1
.endm

.macro Cmd_0x2b6 a1
.hword 0x2b6
.hword \a1
.endm

.macro Cmd_0x2b7 a1
.hword 0x2b7
.hword \a1
.endm

.macro Cmd_0x2b8 a1
.hword 0x2b8
.hword \a1
.endm

.macro Cmd_0x2b9
.hword 0x2b9
.endm

.macro Cmd_0x2ba a1, a2, a3
.hword 0x2ba
.byte \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x2bb
.hword 0x2bb
.endm

.macro Cmd_0x2bc a1
.hword 0x2bc
.hword \a1
.endm

.macro Cmd_0x2bd a1, a2, a3, a4
.hword 0x2bd
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x2be
.hword 0x2be
.endm

.macro Cmd_0x2bf
.hword 0x2bf
.endm

.macro Cmd_0x2c0 a1
.hword 0x2c0
.hword \a1
.endm

.macro Cmd_0x2c1
.hword 0x2c1
.endm

.macro Cmd_0x2c2 a1
.hword 0x2c2
.hword \a1
.endm

.macro Cmd_0x2c3 a1, a2
.hword 0x2c3
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2c4 a1
.hword 0x2c4
.hword \a1
.endm

.macro Cmd_0x2c5
.hword 0x2c5
.endm

.macro Cmd_0x2c6
.hword 0x2c6
.endm

.macro Cmd_0x2c7 a1
.hword 0x2c7
.hword \a1
.endm

.macro Cmd_0x2c8 a1
.hword 0x2c8
.byte \a1
.endm

.macro Cmd_0x2c9 a1
.hword 0x2c9
.byte \a1
.endm

.macro Cmd_0x2ca a1
.hword 0x2ca
.byte \a1
.endm

.macro Cmd_0x2cb
.hword 0x2cb
.endm

.macro Cmd_0x2cc
.hword 0x2cc
.endm

.macro Cmd_0x2cd a1
.hword 0x2cd
.hword \a1
.endm

.macro Cmd_0x2ce a1, a2
.hword 0x2ce
.byte \a1
.hword \a2
.endm

.macro Cmd_0x2cf a1, a2
.hword 0x2cf
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2d0 a1
.hword 0x2d0
.hword \a1
.endm

.macro Cmd_0x2d1 a1
.hword 0x2d1
.hword \a1
.endm

.macro Cmd_0x2d2 a1, a2, a3, a4, a5
.hword 0x2d2
.byte \a1
.byte \a2
.hword \a3
.hword \a4
.hword \a5
.endm

.macro Cmd_0x2d3 a1, a2, a3
.hword 0x2d3
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x2d4 a1, a2
.hword 0x2d4
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2d5 a1, a2
.hword 0x2d5
.byte \a1
.hword \a2
.endm

.macro Cmd_0x2d6
.hword 0x2d6
.endm

.macro Cmd_0x2d7 a1
.hword 0x2d7
.hword \a1
.endm

.macro Cmd_0x2d8 a1
.hword 0x2d8
.byte \a1
.endm

.macro Cmd_0x2d9 a1
.hword 0x2d9
.hword \a1
.endm

.macro Cmd_0x2da a1, a2, a3
.hword 0x2da
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x2db a1, a2, a3
.hword 0x2db
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x2dc a1
.hword 0x2dc
.hword \a1
.endm

.macro Cmd_0x2dd a1, a2
.hword 0x2dd
.byte \a1
.hword \a2
.endm

.macro Cmd_0x2de a1
.hword 0x2de
.byte \a1
.endm

.macro Cmd_0x2df a1
.hword 0x2df
.hword \a1
.endm

.macro Cmd_0x2e0
.hword 0x2e0
.endm

.macro Cmd_0x2e1 a1
.hword 0x2e1
.hword \a1
.endm

.macro Cmd_0x2e2 a1
.hword 0x2e2
.hword \a1
.endm

.macro Cmd_0x2e3
.hword 0x2e3
.endm

.macro Cmd_0x2e4 a1, a2, a3
.hword 0x2e4
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x2e5 a1, a2, a3, a4
.hword 0x2e5
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x2e6 a1, a2, a3
.hword 0x2e6
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x2e7 a1
.hword 0x2e7
.hword \a1
.endm

.macro Cmd_0x2e8
.hword 0x2e8
.endm

.macro Cmd_0x2e9 a1, a2
.hword 0x2e9
.byte \a1
.hword \a2
.endm

.macro OpenTouchScreen
.hword 0x2ea
.endm

.macro CloseTouchScreen
.hword 0x2eb
.endm

.macro YesNoTouchScreen a1
.hword 0x2ec
.hword \a1
.endm


.macro Cmd_0x2ed a1, a2, a3, a4, a5
.hword 0x2ed
.byte \a1
.byte \a2
.byte \a3
.byte \a4
.hword \a5
.endm

.macro Cmd_0x2ee a1, a2, a3, a4, a5
.hword 0x2ee
.byte \a1
.byte \a2
.byte \a3
.byte \a4
.hword \a5
.endm

.macro Cmd_0x2ef a1, a2, a3
.hword 0x2ef
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x2f0
.hword 0x2f0
.endm

.macro Cmd_0x2f1
.hword 0x2f1
.endm

.macro Cmd_0x2f2
.hword 0x2f2
.endm

.macro Cmd_0x2f3
.hword 0x2f3
.endm

.macro Cmd_0x2f4
.hword 0x2f4
.endm

.macro Cmd_0x2f5 a1, a2
.hword 0x2f5
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2f6 a1, a2, a3
.hword 0x2f6
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x2f7
.hword 0x2f7
.endm

.macro Cmd_0x2f8
.hword 0x2f8
.endm

.macro Cmd_0x2f9 a1
.hword 0x2f9
.hword \a1
.endm

.macro Cmd_0x2fa a1
.hword 0x2fa
.hword \a1
.endm

.macro Cmd_0x2fb
.hword 0x2fb
.endm

.macro Cmd_0x2fc
.hword 0x2fc
.endm

.macro Cmd_0x2fd
.hword 0x2fd
.endm

.macro Cmd_0x2fe a1, a2
.hword 0x2fe
.hword \a1
.hword \a2
.endm

.macro Cmd_0x2ff a1, a2
.hword 0x2ff
.hword \a1
.hword \a2
.endm

.macro Cmd_0x300
.hword 0x300
.endm

.macro Cmd_0x301
.hword 0x301
.endm

.macro Cmd_0x302 a1
.hword 0x302
.hword \a1
.endm

.macro Cmd_0x303
.hword 0x303
.endm

.macro Cmd_0x304 a1, a2
.hword 0x304
.hword \a1
.hword \a2
.endm

.macro Cmd_0x305 a1
.hword 0x305
.hword \a1
.endm

.macro Cmd_0x306 a1, a2
.hword 0x306
.hword \a1
.hword \a2
.endm

.macro Cmd_0x307 a1, a2
.hword 0x307
.hword \a1
.hword \a2
.endm

.macro Cmd_0x308
.hword 0x308
.endm

.macro Cmd_0x309 a1, a2
.hword 0x309
.hword \a1
.hword \a2
.endm

.macro Cmd_0x30a
.hword 0x30a
.endm

.macro Cmd_0x30b a1, a2
.hword 0x30b
.hword \a1
.hword \a2
.endm

.macro Cmd_0x30c a1
.hword 0x30c
.hword \a1
.endm

.macro Cmd_0x30d a1
.hword 0x30d
.hword \a1
.endm

.macro Cmd_0x30e
.hword 0x30e
.endm

.macro Cmd_0x30f a1
.hword 0x30f
.byte \a1
.endm

.macro Cmd_0x310 a1
.hword 0x310
.hword \a1
.endm

.macro Cmd_0x311 a1, a2
.hword 0x311
.hword \a1
.byte \a2
.endm

.macro Cmd_0x312 a1
.hword 0x312
.byte \a1
.endm

.macro Cmd_0x313 a1, a2, a3
.hword 0x313
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x314 a1, a2
.hword 0x314
.byte \a1
.hword \a2
.endm

.macro Cmd_0x315 a1
.hword 0x315
.byte \a1
.endm

.macro Cmd_0x316 a1, a2
.hword 0x316
.hword \a1
.hword \a2
.endm

.macro Cmd_0x317 a1, a2, a3
.hword 0x317
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x318 a1, a2
.hword 0x318
.hword \a1
.hword \a2
.endm

.macro Cmd_0x319 a1, a2
.hword 0x319
.hword \a1
.hword \a2
.endm

.macro Cmd_0x31a a1, a2, a3
.hword 0x31a
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x31b a1, a2
.hword 0x31b
.hword \a1
.hword \a2
.endm

.macro Cmd_0x31c
.hword 0x31c
.endm

.macro Cmd_0x31d a1
.hword 0x31d
.hword \a1
.endm

.macro Cmd_0x31e a1
.hword 0x31e
.hword \a1
.endm

.macro Cmd_0x31f a1
.hword 0x31f
.hword \a1
.endm

.macro Cmd_0x320 a1
.hword 0x320
.hword \a1
.endm

.macro Cmd_0x321 a1
.hword 0x321
.hword \a1
.endm

.macro Cmd_0x322
.hword 0x322
.endm

.macro Cmd_0x323 a1, a2
.hword 0x323
.hword \a1
.hword \a2
.endm

.macro Cmd_0x324 a1
.hword 0x324
.byte \a1
.endm

.macro Cmd_0x325
.hword 0x325
.endm

.macro Cmd_0x326
.hword 0x326
.endm

.macro Cmd_0x327 a1, a2
.hword 0x327
.hword \a1
.hword \a2
.endm

.macro Cmd_0x328 a1
.hword 0x328
.hword \a1
.endm

.macro Cmd_0x329 a1
.hword 0x329
.hword \a1
.endm

.macro Cmd_0x32a
.hword 0x32a
.endm

.macro Cmd_0x32b a1, a2
.hword 0x32b
.hword \a1
.hword \a2
.endm

.macro Cmd_0x32c a1, a2, a3, a4
.hword 0x32c
.hword \a1
.hword \a2
.hword \a3
.hword \a4
.endm

.macro Cmd_0x32d a1
.hword 0x32d
.hword \a1
.endm

.macro Cmd_0x32e
.hword 0x32e
.endm

.macro Cmd_0x32f a1
.hword 0x32f
.hword \a1
.endm

.macro Cmd_0x330
.hword 0x330
.endm

.macro Cmd_0x331 a1
.hword 0x331
.byte \a1
.endm

.macro Cmd_0x332
.hword 0x332
.endm

.macro Cmd_0x333 a1
.hword 0x333
.hword \a1
.endm

.macro Cmd_0x334 a1
.hword 0x334
.byte \a1
.endm

.macro Cmd_0x335 a1, a2
.hword 0x335
.hword \a1
.hword \a2
.endm

.macro Cmd_0x336 a1
.hword 0x336
.hword \a1
.endm

.macro Cmd_0x337 a1
.hword 0x337
.hword \a1
.endm

.macro Cmd_0x338 a1
.hword 0x338
.hword \a1
.endm

.macro Cmd_0x339 a1, a2
.hword 0x339
.hword \a1
.hword \a2
.endm

.macro Cmd_0x33a a1
.hword 0x33a
.hword \a1
.endm

.macro Cmd_0x33b a1, a2
.hword 0x33b
.hword \a1
.hword \a2
.endm

.macro Cmd_0x33c a1, a2, a3
.hword 0x33c
.hword \a1
.hword \a2
.byte \a3
.endm

.macro Cmd_0x33d a1, a2
.hword 0x33d
.byte \a1
.hword \a2
.endm

.macro Cmd_0x33e a1
.hword 0x33e
.hword \a1
.endm

.macro Cmd_0x33f a1
.hword 0x33f
.hword \a1
.endm

.macro Cmd_0x340 a1
.hword 0x340
.hword \a1
.endm

.macro Cmd_0x341 a1
.hword 0x341
.hword \a1
.endm

.macro Cmd_0x342 a1
.hword 0x342
.hword \a1
.endm

.macro Cmd_0x343 a1
.hword 0x343
.hword \a1
.endm

.macro Cmd_0x344 a1
.hword 0x344
.hword \a1
.endm

.macro Cmd_0x345 a1
.hword 0x345
.hword \a1
.endm

.macro Cmd_0x346 a1, a2
.hword 0x346
.hword \a1
.hword \a2
.endm

.macro Cmd_0x347 a1
.hword 0x347
.hword \a1
.endm

.macro Cmd_0x348 a1, a2
.hword 0x348
.hword \a1
.hword \a2
.endm

.macro Cmd_0x349 a1
.hword 0x349
.byte \a1
.endm

.macro Cmd_0x34a a1
.hword 0x34a
.byte \a1
.endm

.macro Cmd_0x34b a1, a2
.hword 0x34b
.hword \a1
.hword \a2
.endm

.macro Cmd_0x34c a1, a2
.hword 0x34c
.byte \a1
.hword \a2
.endm

.macro Cmd_0x34d a1, a2
.hword 0x34d
.byte \a1
.hword \a2
.endm

.macro Cmd_0x34e a1, a2, a3
.hword 0x34e
.hword \a1
.hword \a2
.hword \a3
.endm

.macro Cmd_0x34f a1
.hword 0x34f
.hword \a1
.endm

.macro Cmd_0x350 a1
.hword 0x350
.hword \a1
.endm

.macro Cmd_0x351 a1, a2
.hword 0x351
.byte \a1
.hword \a2
.endm

.macro Cmd_0x352 a1, a2
.hword 0x352
.hword \a1
.byte \a2
.endm

.macro Cmd_0x353 a1
.hword 0x353
.byte \a1
.endm

.macro Cmd_0x354 a1, a2
.hword 0x354
.byte \a1
.byte \a2
.endm

.macro	SeeUp a
.hword  0x0, \a
.endm

.macro	SeeDown a
.hword  0x1, \a
.endm

.macro	SeeLeft a
.hword  0x2, \a
.endm

.macro	SeeRight a
.hword  0x3, \a
.endm

.macro	WalkUp a
.hword  0x8, \a
.endm

.macro	WalkDown a
.hword  0x9, \a
.endm

.macro	WalkLeft a
.hword  0xa, \a
.endm

.macro	WalkRight a
.hword  0xb, \a
.endm

.macro	WalkUpFast a
.hword  0xc, \a
.endm

.macro	WalkDownFast a
.hword  0xd, \a
.endm

.macro	WalkLeftFast a
.hword  0xe, \a
.endm

.macro	WalkRightFast a
.hword  0xf, \a
.endm

.macro	WalkUpVeryFast a
.hword  0x10, \a
.endm

.macro	WalkDownVeryFast a
.hword  0x11, \a
.endm

.macro	WalkLeftVeryFast a
.hword  0x12, \a
.endm

.macro	WalkRightVeryFast a
.hword  0x13, \a
.endm

.macro	RunUp a
.hword  0x14, \a
.endm

.macro	RunDown a
.hword  0x15, \a
.endm

.macro	RunLeft a
.hword  0x16, \a
.endm

.macro	RunRight a
.hword  0x17, \a
.endm

.macro	MoveLeft a
.hword  0x1e, \a
.endm

.macro	MoveUpFast a
.hword  0x20, \a
.endm

.macro	MoveDownFast a
.hword  0x21, \a
.endm

.macro	MoveLeftFast a
.hword  0x22, \a
.endm

.macro	MoveRightFast a
.hword  0x23, \a
.endm

.macro	MoveUpVeryFast a
.hword  0x24, \a
.endm

.macro	MoveDownVeryFast a
.hword  0x25, \a
.endm

.macro	MoveLeftVeryFast a
.hword  0x26, \a
.endm

.macro	MoveRightVeryFast a
.hword  0x27, \a
.endm

.macro	Move_28 a
.hword  0x28, \a
.endm

.macro	Move_29 a
.hword  0x29, \a
.endm

.macro	Move_2a a
.hword  0x2a, \a
.endm

.macro	Move_2b a
.hword  0x2b, \a
.endm

.macro	Move_3c a
.hword  0x3c, \a
.endm

.macro	Move_3d a
.hword  0x3d, \a
.endm

.macro	Move_3e a
.hword  0x3e, \a
.endm

.macro	Move_3f a
.hword  0x3f, \a
.endm

.macro	Move_40 a
.hword  0x40, \a
.endm

.macro	Move_41 a
.hword  0x41, \a
.endm

.macro	Move_42 a
.hword  0x42, \a
.endm

.macro	Move_43 a
.hword  0x43, \a
.endm

.macro	WaitDisappear a
.hword  0x45, \a
.endm

.macro	Move_46 a
.hword  0x46, \a
.endm

.macro	Move_47 a
.hword  0x47, \a
.endm

.macro	Move_48 a
.hword  0x48, \a
.endm

.macro	Move_49 a
.hword  0x49, \a
.endm

.macro	Move_4a a
.hword  0x4a, \a
.endm

.macro	Exclamation a
.hword  0x4b, \a
.endm

.macro	PauseWalkUpSlow a
.hword  0x4c, \a
.endm

.macro	Move_64 a
.hword  0x64, \a
.endm

.macro	Move_65 a
.hword  0x65, \a
.endm

.macro	Move_66 a
.hword  0x66, \a
.endm

.macro	Move_68 a
.hword  0x68, \a
.endm

.macro	Move_6a a
.hword  0x6a, \a
.endm

.macro	Move_6b a
.hword  0x6b, \a
.endm

.macro	Move_75 a
.hword  0x75, \a
.endm

.macro	Move_76 a
.hword  0x76, \a
.endm

.macro	Move_77 a
.hword  0x77, \a
.endm

.macro	Move_99 a
.hword  0x99, \a
.endm

.macro	EndMovement a
.hword  0xfe, \a
.endm