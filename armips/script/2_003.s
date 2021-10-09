.include "armips/include/script.s"

Script: @ 0
	script Script_1
	script Script_2
	script Script_3
	script Script_4
	script Script_5
	script Script_6
	script Script_7
	script Script_8
	script Script_9
	script Script_10
	script Script_11
	script Script_12
	script Script_13
	script Script_14
	script Script_15
	script Script_16
	script Script_17
	script Script_18
	script Script_19
	script Script_20
	script Script_21
	script Script_22
	script Script_23
	script Script_24
	script Script_25
	script Script_26
	script Script_27
	script Script_28
	script Script_29
	script Script_30
	script Script_31
	script Script_32
	script Script_33
	script Script_34
	script Script_35
	script Script_36
	script Script_37
	script Script_38
	script Script_39
	script Script_40
	script Script_41
	script Script_42
	script Script_43
	script Script_44
	script Script_45
	script Script_46
	script Script_47
	script Script_48
	script Script_49
	script Script_50
	script Script_51
	script Script_52
	script Script_53
	script Script_54
	script Script_55
	script Script_56
	script Script_57
	script Script_58
	script Script_59
	script Script_60
	script Script_61
	script Script_62
	script Script_63
	script Script_64
	script Script_65
	script Script_66
	script Script_67
	script Script_68
	script Script_69
	script Script_70
	script Script_71
	script Script_72
	script Script_73
	script Script_74
	script Script_75
	script Script_76
	script Script_77
	.hword 0xfd13
@ 122

Script_3: @ 122
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Cmd_0x24e 0x800c
	CompareVarValue 0x800c, 0x4
	JumpIf 0x4, Script_branch_3e3
	SetVar 0x8004, 0x0
	GetTimePeriod 0x800c
	Cmd_0x1b5 0x800c
	SetVar 0x8004, 0x53
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_175
	SetVar 0x8004, 0x54
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_175
	SetVar 0x8004, 0x0
Script_branch_175: @ 175
	MessageSp 0x8004
	OpenTouchScreen
	YesNoTouchScreen 0x800c
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_1aa
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_19b
	End
@ 19b

Script_branch_19b: @ 19b
	Message 0x3
	WaitButton
	CloseTouchScreen
	CloseMessage
	ReleaseAll
	LocalScript
	End
@ 1aa

Script_branch_1aa: @ 1aa
	CheckPlayerAction 0x800c
	CompareVarValue 0x800c, 0x3
	JumpIf 0x5, Script_branch_1c5
	SetPlayerAction 0x800
	Jump Script_branch_1c9
@ 1c5

Script_branch_1c5: @ 1c5
	SetPlayerAction 0x100
Script_branch_1c9: @ 1c9
	UpdatePlayerAction
	Movement 0xff, Script_branch_460
	WaitMovement
	Cmd_0x257
	Cmd_0x24e 0x800c
	CompareVarValue 0x800c, 0x4
	CallIf 0x4, Script_branch_211
	CompareVarValue 0x800c, 0x4
	CallIf 0x0, Script_branch_20c
	Call Function_216
	CheckFlag 0x65
	JumpIf 0x0, Script_branch_34d
	Jump Script_branch_23a
@ 20c

Script_branch_20c: @ 20c
	Message 0x1
	Return
@ 211

Script_branch_211: @ 211
	Message 0x7
	Return
@ 216

Function_216: @ 216
	Movement 0x8007, Script_branch_1064
	WaitMovement
	Cmd_0x164 0x8006
	Cmd_0x1e7 0x8006
	Movement 0x8007, Script_branch_107c
	WaitMovement
	Cmd_0x211 0x8008
	HealPokemon
	Return
@ 23a

Script_branch_23a: @ 23a
	CompareVarValue 0x8004, 0x1
	JumpIf 0x1, Script_branch_2cb
	Message 0x2
	Movement 0xff, Script_branch_468
	WaitMovement
	CheckPlayerAction 0x800c
	CompareVarValue 0x800c, 0x3
	JumpIf 0x5, Script_branch_26f
	SetPlayerAction 0x400
	Jump Script_branch_273
@ 26f

Script_branch_26f: @ 26f
	SetPlayerAction 0x1
Script_branch_273: @ 273
	UpdatePlayerAction
	Cmd_0x211 0x8009
	CompareVars 0x8008, 0x8009
	JumpIf 0x1, Script_branch_2b2
	WaitTime 0xf, 0x800a
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	CloseMessage
	Cmd_0x1b4
	ReturnScreen
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	TextPokeNickname 0x0, 0x8009
	Message 0x66
Script_branch_2b2: @ 2b2
	Movement 0x8007, Script_branch_454
	WaitMovement
	Message 0x3
	WaitButton
	CloseMessage
	CloseTouchScreen
	ReleaseAll
	LocalScript
	End
@ 2cb

Script_branch_2cb: @ 2cb
	Message 0x8
	Movement 0xff, Script_branch_468
	WaitMovement
	CheckPlayerAction 0x800c
	CompareVarValue 0x800c, 0x3
	JumpIf 0x5, Script_branch_2f3
	SetPlayerAction 0x400
	Jump Script_branch_2f7
@ 2f3

Script_branch_2f3: @ 2f3
	SetPlayerAction 0x1
Script_branch_2f7: @ 2f7
	UpdatePlayerAction
	Cmd_0x211 0x8009
	CompareVars 0x8008, 0x8009
	JumpIf 0x1, Script_branch_336
	WaitTime 0xf, 0x800a
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	CloseMessage
	Cmd_0x1b4
	ReturnScreen
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	TextPokeNickname 0x0, 0x8009
	Message 0x66
Script_branch_336: @ 336
	Movement 0x8007, Script_branch_454
	WaitMovement
	Message 0x9
	WaitButton
	CloseMessage
	ReleaseAll
	LocalScript
	End
@ 34d

Script_branch_34d: @ 34d
	Cmd_0xee 0x8006, 0x11, 0x8006, 0x1
	JumpIf 0x1, Script_branch_364
	Jump Script_branch_23a
@ 364

Script_branch_364: @ 364
	SetFlag 0x65
	Cmd_0x94 0x1, 0x5e
	Cmd_0xff 0xf4, 0x0
	WaitMovement
	CheckPlayerAction 0x800c
	CompareVarValue 0x800c, 0x3
	JumpIf 0x5, Script_branch_391
	SetPlayerAction 0x400
	Jump Script_branch_395
@ 391

Script_branch_391: @ 391
	SetPlayerAction 0x1
Script_branch_395: @ 395
	UpdatePlayerAction
	Cmd_0x211 0x8009
	CompareVars 0x8008, 0x8009
	JumpIf 0x1, Script_branch_3d4
	WaitTime 0xf, 0x800a
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	CloseMessage
	Cmd_0x1b4
	ReturnScreen
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	TextPokeNickname 0x0, 0x8009
	Message 0x66
Script_branch_3d4: @ 3d4
	Message 0xa
	WaitButton
	CloseMessage
	CloseTouchScreen
	ReleaseAll
	LocalScript
	End
@ 3e3

Script_branch_3e3: @ 3e3
	CheckFlag 0x64
	JumpIf 0x1, Script_branch_41d
	SetFlag 0x64
	Message 0x4
	TextPlayerName 0x0
	Message 0x5
	OpenTouchScreen
	YesNoTouchScreen 0x800c
	CloseTouchScreen
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_445
	Message 0x9
	WaitButton
	CloseMessage
	ReleaseAll
	LocalScript
	End
@ 41d

Script_branch_41d: @ 41d
	TextPlayerName 0x0
	Message 0x6
	OpenTouchScreen
	YesNoTouchScreen 0x800c
	CloseTouchScreen
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_445
	Message 0x9
	WaitButton
	CloseMessage
	ReleaseAll
	LocalScript
	End
@ 445

Script_branch_445: @ 445
	SetVar 0x8004, 0x1
	Jump Script_branch_1aa
@ 451

.byte 0x0 @ 0x451L
.byte 0x0 @ 0x452L
.byte 0x0 @ 0x453L

Script_branch_454: @ 454
	AddOW 0x1
	Cmd_0x3e 0x1, 0x0, 0xfe, 0x0, 0x0, 0x0
Script_branch_460: @ 460
	LockCamera 0x1, 0xfe
	Nop
Script_branch_468: @ 468
	FacePlayer
	Dummy
	Cmd_0xfe 0x0
Script_70: @ 470
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	Cmd_0x1b4
	PlaySound 0x49f
	WaitSound
	HealPokemon
	ReturnScreen
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	LocalScript
	End
@ 498

Script_1: @ 498
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_4d6
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_4dd
	EndBoard 0x800c
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_4dd
	ShowBoard 0x2
	LocalScript
	End
@ 4d6

Script_branch_4d6: @ 4d6
	ShowBoard 0x2
	LocalScript
	End
@ 4dd

Script_branch_4dd: @ 4dd
	ShowBoard 0x4
	WaitBoard
	Menu
	LocalScript
	End
@ 4e8

Script_2: @ 4e8
	Call Function_4f2
	LocalScript
	End
@ 4f2

Function_4f2: @ 4f2
	CheckItemPocket 0x8004, 0x800c
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x7
	JumpIf 0x1, Script_branch_574
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_568
	CompareVarValue 0x8008, 0x4
	JumpIf 0x1, Script_branch_568
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_568
	CompareVarValue 0x8008, 0x2
	JumpIf 0x1, Script_branch_568
	CompareVarValue 0x8008, 0x6
	JumpIf 0x1, Script_branch_568
	CompareVarValue 0x8008, 0x5
	JumpIf 0x1, Script_branch_57a
	CompareVarValue 0x8008, 0x3
	JumpIf 0x1, Script_branch_56e
	End
@ 568

Script_branch_568: @ 568
	PlaySound 0x4a1
	Return
@ 56e

Script_branch_56e: @ 56e
	PlaySound 0x4a6
	Return
@ 574

Script_branch_574: @ 574
	PlaySound 0x4a2
	Return
@ 57a

Script_branch_57a: @ 57a
	PlaySound 0x4ab
	Return
@ 580

.byte 0x15 @ 0x580L
.byte 0x0 @ 0x581L
.byte 0x2 @ 0x582L
.byte 0x0 @ 0x583L

Script_4: @ 584
	Cmd_0x261
	LockAll
	GetPartyCount 0x8004
	SetVar 0x8005, 0x0
Script_branch_592: @ 592
	Cmd_0x1b3 0x800c, 0x8005
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_5ad
	TextPokeNickname 0x0, 0x8005
	Message 0x35
Script_branch_5ad: @ 5ad
	IncrementVar 0x8005, 0x1
	CompareVars 0x8004, 0x8005
	JumpIf 0x5, Script_branch_592
	Cmd_0x165 0x800c, 0x6
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_5f5
	CloseMessage
	ReleaseAll
	End
@ 5d9

Script_5: @ 5d9
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	WaitAB
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	End
@ 5f5

Script_branch_5f5: @ 5f5
	TextPlayerName 0x0
	Message 0xb
	WaitAB
	CloseMessage
	FadeOutMusic 0x0, 0xa
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	Cmd_0x1b4
	Cmd_0x117
	End
@ 617

Script_6: @ 617
	ClearFlag 0x20
	Call Function_646
	Cmd_0x15b 0x800c, 0x35
	End
@ 629

Script_25: @ 629
	Message 0x14
	WaitAB
	CloseMessage
	End
@ 632

Script_7: @ 632
	SetFlag 0x20
	Call Function_646
	SetVarFromVariable 0x4000, 0x800c
	LocalScript
	End
@ 646

Function_646: @ 646
	Cmd_0x251
	Message 0xd
	OpenTouchScreen
	YesNoTouchScreen 0x800c
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_740
	Cmd_0xfd 0x800c
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_698
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_6bd
	CompareVarValue 0x800c, 0x2
	JumpIf 0x1, Script_branch_6a9
	CompareVarValue 0x800c, 0x3
	JumpIf 0x1, Script_branch_6c6
	End
@ 698

Script_branch_698: @ 698
	Cmd_0x252 0x2eb
	Message 0x14
	WaitAB
	SetVar 0x800c, 0x0
	Return
@ 6a9

Script_branch_6a9: @ 6a9
	Message 0xe
	YesNoTouchScreen 0x800c
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_740
Script_branch_6bd: @ 6bd
	Message 0x15
	Jump Script_branch_6f2
@ 6c6

Script_branch_6c6: @ 6c6
	Message 0xe
	YesNoTouchScreen 0x800c
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_740
	CheckFlag 0x20
	JumpIf 0x0, Script_branch_76a
	CheckFlag 0x20
	JumpIf 0x1, Script_branch_775
	End
@ 6f2

Script_branch_6f2: @ 6f2
	Cmd_0x200 0x3
	End
@ 6f8

.byte 0xc @ 0x6f8L
.byte 0x80 @ 0x6f9L
.byte 0x1a @ 0x6faL
.byte 0x0 @ 0x6fbL
.byte 0x8 @ 0x6fcL
.byte 0x0 @ 0x6fdL
.byte 0x0 @ 0x6feL
.byte 0x0 @ 0x6ffL
.byte 0x1 @ 0x700L
.byte 0x2 @ 0x701L
.byte 0x16 @ 0x702L
.byte 0x0 @ 0x703L
.byte 0x15 @ 0x704L
.byte 0x0 @ 0x705L
.byte 0x0 @ 0x706L
.byte 0x0 @ 0x707L
.byte 0x59 @ 0x708L
.byte 0x1 @ 0x709L
.byte 0x20 @ 0x70aL
.byte 0x0 @ 0x70bL
.byte 0x20 @ 0x70cL
.byte 0x0 @ 0x70dL
.byte 0x1d @ 0x70eL
.byte 0x0 @ 0x70fL
.byte 0x1 @ 0x710L
.byte 0x4d @ 0x711L
.byte 0x0 @ 0x712L
.byte 0x0 @ 0x713L
.byte 0x0 @ 0x714L
.byte 0xfe @ 0x715L
.byte 0x0 @ 0x716L
.byte 0xc @ 0x717L
.byte 0x80 @ 0x718L
.byte 0x5a @ 0x719L
.byte 0x1 @ 0x71aL
.byte 0x1b @ 0x71bL
.byte 0x0 @ 0x71cL
.byte 0x11 @ 0x71dL
.byte 0x0 @ 0x71eL
.byte 0xc @ 0x71fL
.byte 0x80 @ 0x720L
.byte 0x0 @ 0x721L
.byte 0x0 @ 0x722L
.byte 0x1c @ 0x723L
.byte 0x0 @ 0x724L
.byte 0x1 @ 0x725L
.byte 0x22 @ 0x726L
.byte 0x0 @ 0x727L
.byte 0x0 @ 0x728L
.byte 0x0 @ 0x729L
.byte 0xbe @ 0x72aL
.byte 0x0 @ 0x72bL
.byte 0x0 @ 0x72cL
.byte 0x2d @ 0x72dL
.byte 0x0 @ 0x72eL
.byte 0x10 @ 0x72fL
.byte 0x49 @ 0x730L
.byte 0x0 @ 0x731L
.byte 0x1a @ 0x732L
.byte 0x6 @ 0x733L
.byte 0x4b @ 0x734L
.byte 0x0 @ 0x735L
.byte 0x1a @ 0x736L
.byte 0x6 @ 0x737L
.byte 0x5c @ 0x738L
.byte 0x1 @ 0x739L
.byte 0x1e @ 0x73aL
.byte 0x0 @ 0x73bL
.byte 0x52 @ 0x73cL
.byte 0x2 @ 0x73dL
.byte 0x1b @ 0x73eL
.byte 0x0 @ 0x73fL

Script_branch_740: @ 740
	Cmd_0x252 0x2eb
	SetVar 0x800c, 0x0
	Return
@ 74c

.byte 0x2d @ 0x74cL
.byte 0x0 @ 0x74dL
.byte 0x12 @ 0x74eL
.byte 0x31 @ 0x74fL
.byte 0x0 @ 0x750L
.byte 0x52 @ 0x751L
.byte 0x2 @ 0x752L
.byte 0xeb @ 0x753L
.byte 0x2 @ 0x754L
.byte 0x1b @ 0x755L
.byte 0x0 @ 0x756L

Script_branch_757: @ 757
	Message 0x15
	Jump Script_branch_6f2
@ 760

.byte 0x2 @ 0x760L
.byte 0x0 @ 0x761L
.byte 0x81 @ 0x762L
.byte 0x2 @ 0x763L
.byte 0x1f @ 0x764L
.byte 0x0 @ 0x765L
.byte 0x20 @ 0x766L
.byte 0x0 @ 0x767L
.byte 0x1b @ 0x768L
.byte 0x0 @ 0x769L

Script_branch_76a: @ 76a
	Message 0xf
	Jump Script_branch_6f2
@ 773

.byte 0x2 @ 0x773L
.byte 0x0 @ 0x774L

Script_branch_775: @ 775
	Cmd_0x282 0x800c, 0x11, 0x800c
	Nop
	JumpIf 0x1, Script_branch_757
	Jump Script_branch_76a
@ 78c

.byte 0x2 @ 0x78cL
.byte 0x0 @ 0x78dL

Script_8: @ 78e
	Call Function_7aa
	Message 0x20
	WaitAB
	LocalScript
	End
@ 79d

Script_36: @ 79d
	Call Function_7aa
	Message 0x5a
	LocalScript
	End
@ 7aa

Function_7aa: @ 7aa
	PlaySound 0x4a7
	Cmd_0x193 0x8004, 0x8005
	Cmd_0x204 0x0, 0x8004
	Message 0x19
	WaitSound
	TextPlayerName 0x0
	Cmd_0x204 0x1, 0x8004
	Return
@ 7c8

Script_27: @ 7c8
	Call Function_7e4
	Message 0x20
	WaitAB
	LocalScript
	End
@ 7d7

Script_35: @ 7d7
	Call Function_7e4
	Message 0x5a
	LocalScript
	End
@ 7e4

Function_7e4: @ 7e4
	PlaySound 0x4a7
	Cmd_0x196 0x8004
	Cmd_0x213 0x0, 0x8004
	Message 0x19
	WaitSound
	TextPlayerName 0x0
	Cmd_0x213 0x1, 0x8004
	Return
@ 800

Script_9: @ 800
	Call Function_80a
	LocalScript
	End
@ 80a

Function_80a: @ 80a
	Call Function_4f2
	Cmd_0x7d 0x8004, 0x8005, 0x800c
	CheckItemPocket 0x8004, 0x800c
	CompareVarValue 0x800c, 0x7
	CallIf 0x1, Script_branch_892
	CompareVarValue 0x800c, 0x7
	CallIf 0x5, Script_branch_8a3
	CompareVarValue 0x8005, 0x1
	JumpIf 0x2, Script_branch_84e
	Message 0x1e
	Jump Script_branch_851
@ 84e

Script_branch_84e: @ 84e
	Message 0x1f
Script_branch_851: @ 851
	WaitButton
	Return
@ 855

Script_34: @ 855
	Call Function_85f
	LocalScript
	End
@ 85f

Function_85f: @ 85f
	Call Function_4f2
	Cmd_0x7d 0x8004, 0x8005, 0x800c
	CheckItemPocket 0x8004, 0x800c
	CompareVarValue 0x800c, 0x7
	CallIf 0x1, Script_branch_892
	CompareVarValue 0x800c, 0x7
	CallIf 0x5, Script_branch_8a3
	Message 0x59
	Return
@ 892

Script_branch_892: @ 892
	TextPlayerName 0x0
	TextItem 0x1, 0x8004
	Message 0x1c
	Jump Script_branch_8c9
@ 8a3

Script_branch_8a3: @ 8a3
	CompareVarValue 0x8005, 0x1
	JumpIf 0x2, Script_branch_8bb
	TextItem 0x0, 0x8004
	Jump Script_branch_8c0
@ 8bb

Script_branch_8bb: @ 8bb
	Cmd_0x34c 0x0, 0x8004
Script_branch_8c0: @ 8c0
	Message 0x19
	Jump Script_branch_8c9
@ 8c9

Script_branch_8c9: @ 8c9
	WaitSound
	TextPlayerName 0x0
	CompareVarValue 0x8005, 0x1
	JumpIf 0x2, Script_branch_8e6
	TextItem 0x1, 0x8004
	Jump Script_branch_8eb
@ 8e6

Script_branch_8e6: @ 8e6
	Cmd_0x34c 0x1, 0x8004
Script_branch_8eb: @ 8eb
	CheckItemPocket 0x8004, 0x800c
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x7
	JumpIf 0x1, Script_branch_972
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_961
	CompareVarValue 0x8008, 0x4
	JumpIf 0x1, Script_branch_9b6
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_9a5
	CompareVarValue 0x8008, 0x2
	JumpIf 0x1, Script_branch_9c7
	CompareVarValue 0x8008, 0x6
	JumpIf 0x1, Script_branch_983
	CompareVarValue 0x8008, 0x5
	JumpIf 0x1, Script_branch_994
	CompareVarValue 0x8008, 0x3
	JumpIf 0x1, Script_branch_9d8
	End
@ 961

Script_branch_961: @ 961
	CheckItemPocket 0x8004, 0x800c
	Cmd_0xc3 0x2, 0x800c
	Jump Script_branch_9e9
@ 972

Script_branch_972: @ 972
	CheckItemPocket 0x8004, 0x800c
	Cmd_0xc3 0x2, 0x800c
	Jump Script_branch_9e9
@ 983

Script_branch_983: @ 983
	CheckItemPocket 0x8004, 0x800c
	Cmd_0xc3 0x2, 0x800c
	Jump Script_branch_9e9
@ 994

Script_branch_994: @ 994
	CheckItemPocket 0x8004, 0x800c
	Cmd_0xc3 0x2, 0x800c
	Jump Script_branch_9e9
@ 9a5

Script_branch_9a5: @ 9a5
	CheckItemPocket 0x8004, 0x800c
	Cmd_0xc3 0x2, 0x800c
	Jump Script_branch_9e9
@ 9b6

Script_branch_9b6: @ 9b6
	CheckItemPocket 0x8004, 0x800c
	Cmd_0xc3 0x2, 0x800c
	Jump Script_branch_9e9
@ 9c7

Script_branch_9c7: @ 9c7
	CheckItemPocket 0x8004, 0x800c
	Cmd_0xc3 0x2, 0x800c
	Jump Script_branch_9e9
@ 9d8

Script_branch_9d8: @ 9d8
	CheckItemPocket 0x8004, 0x800c
	Cmd_0xc3 0x2, 0x800c
	Jump Script_branch_9e9
@ 9e9

Script_branch_9e9: @ 9e9
	Return
@ 9eb

Script_10: @ 9eb
	Call Function_9f5
	LocalScript
	End
@ 9f5

Function_9f5: @ 9f5
	Message 0x1b
	WaitButton
	Return
@ 9fc

Script_11: @ 9fc
	Cmd_0x261
	LockAll
	PlayFanfare 0x60b
	Call Function_a18
	TextPlayerName 0x0
	Message 0x21
	OpenTouchScreen
	Jump Script_branch_a2e
@ a18

Function_a18: @ a18
	Cmd_0x1f4 0x5a
	Cmd_0x1f5 0x5a
	WaitDoor 0x5a
	Return
@ a23

Function_a23: @ a23
	Cmd_0x1f6 0x345a, 0x5a01
	FreeDoor 0x5a
	Return
@ a2e

Script_branch_a2e: @ a2e
	TextPlayerName 0x0
	Message 0x22
	Cmd_0x2ed 0x1, 0x1, 0x0, 0x1, 0x8006
	CheckFlag 0x976
	CallIf 0x0, Script_branch_a78
	CheckFlag 0x976
	CallIf 0x1, Script_branch_a82
	Cmd_0x2ef 0x3f, 0xff, 0x1
	CheckFlag 0x964
	JumpIf 0x1, Script_branch_a8c
	CheckFlag 0x964
	JumpIf 0x0, Script_branch_ad1
	Jump Script_branch_ad1
@ a76

.byte 0x2 @ 0xa76L
.byte 0x0 @ 0xa77L

Script_branch_a78: @ a78
	Cmd_0x2ef 0x3d, 0xff, 0x0
	Return
@ a82

Script_branch_a82: @ a82
	Cmd_0x2ef 0x3e, 0xff, 0x0
	Return
@ a8c

Script_branch_a8c: @ a8c
	Cmd_0x2ef 0x40, 0xff, 0x2
	Cmd_0x2ef 0x42, 0xff, 0x3
	Cmd_0x2f0
	SetVarFromVariable 0x8008, 0x8006
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_b01
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_c23
	CompareVarValue 0x8008, 0x2
	JumpIf 0x1, Script_branch_dba
	Jump Script_branch_df0
@ ad1

Script_branch_ad1: @ ad1
	Cmd_0x2ef 0x42, 0xff, 0x2
	Cmd_0x2f0
	SetVarFromVariable 0x8008, 0x8006
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_b01
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_c23
	Jump Script_branch_df0
@ b01

Script_branch_b01: @ b01
	PlayFanfare 0x60c
	TextPlayerName 0x0
	Message 0x23
	Call Function_b17
	Jump Script_branch_b53
@ b17

Function_b17: @ b17
	Cmd_0x2ed 0x1, 0x1, 0x0, 0x1, 0x800c
	Cmd_0x2ef 0x43, 0x4c, 0x0
	Cmd_0x2ef 0x44, 0x4d, 0x1
	Cmd_0x2ef 0x45, 0x4e, 0x2
	Cmd_0x2ef 0x46, 0x4f, 0x3
	Cmd_0x2ef 0x48, 0x51, 0x5
	Return
@ b49

.byte 0x46 @ 0xb49L
.byte 0x0 @ 0xb4aL
.byte 0x47 @ 0xb4bL
.byte 0x0 @ 0xb4cL
.byte 0x50 @ 0xb4dL
.byte 0x0 @ 0xb4eL
.byte 0x4 @ 0xb4fL
.byte 0x0 @ 0xb50L
.byte 0x1b @ 0xb51L
.byte 0x0 @ 0xb52L

Script_branch_b53: @ b53
	Cmd_0x2f0
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_ba2
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_bb5
	CompareVarValue 0x8008, 0x2
	JumpIf 0x1, Script_branch_bc8
	CompareVarValue 0x8008, 0x3
	JumpIf 0x1, Script_branch_bdb
	CompareVarValue 0x8008, 0x4
	JumpIf 0x1, Script_branch_bee
	Jump Script_branch_a2e
@ ba2

Script_branch_ba2: @ ba2
	CloseMessage
	Call Function_e16
	Cmd_0x9e 0x0
	ReturnScreen
	Jump Script_branch_c01
@ bb5

Script_branch_bb5: @ bb5
	CloseMessage
	Call Function_e16
	Cmd_0x9e 0x1
	ReturnScreen
	Jump Script_branch_c01
@ bc8

Script_branch_bc8: @ bc8
	CloseMessage
	Call Function_e16
	Cmd_0x9e 0x2
	ReturnScreen
	Jump Script_branch_c01
@ bdb

Script_branch_bdb: @ bdb
	CloseMessage
	Call Function_e16
	Cmd_0x9e 0x3
	ReturnScreen
	Jump Script_branch_c01
@ bee

Script_branch_bee: @ bee
	CloseMessage
	Call Function_e16
	Cmd_0x9e 0x4
	ReturnScreen
	Jump Script_branch_c01
@ c01

Script_branch_c01: @ c01
	TextPlayerName 0x0
	MessageAll 0x22
	Call Function_b17
	Call Function_a18
	FadeScreen 0x6, 0x1, 0x1, 0x0
	Jump Script_branch_b53
@ c23

Script_branch_c23: @ c23
	PlayFanfare 0x60c
	TextPlayerName 0x0
	Message 0x24
	Jump Script_branch_c33
@ c33

Script_branch_c33: @ c33
	Call Function_ca7
Script_branch_c39: @ c39
	Cmd_0x268 0x4000
	CompareVarValue 0x4000, 0x0
	JumpIf 0x5, Script_branch_c72
	Cmd_0x2f0
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_cec
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_d3a
	Jump Script_branch_a2e
@ c72

Script_branch_c72: @ c72
	Cmd_0x2f0
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_cec
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_d3a
	CompareVarValue 0x8008, 0x2
	JumpIf 0x1, Script_branch_d86
	Jump Script_branch_a2e
@ ca7

Function_ca7: @ ca7
	Cmd_0x2ed 0x1, 0x1, 0x0, 0x1, 0x800c
	Cmd_0x2ef 0x49, 0x52, 0x0
	Cmd_0x2ef 0x4a, 0x53, 0x1
	Cmd_0x268 0x4000
	CompareVarValue 0x4000, 0x0
	JumpIf 0x5, Script_branch_cda
	Cmd_0x2ef 0x4b, 0x54, 0x2
	Return
@ cda

Script_branch_cda: @ cda
	Cmd_0x2ef 0x41, 0x55, 0x2
	Cmd_0x2ef 0x4b, 0x54, 0x3
	Return
@ cec

Script_branch_cec: @ cec
	CloseMessage
	CheckMail 0x800c
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_d0f
	Call Function_e16
	OpenMail
	ReturnScreen
	Jump Script_branch_d18
@ d0f

Script_branch_d0f: @ d0f
	Message 0x2f
	Jump Script_branch_c33
@ d18

Script_branch_d18: @ d18
	TextPlayerName 0x0
	MessageAll 0x22
	Call Function_ca7
	Call Function_a18
	FadeScreen 0x6, 0x1, 0x1, 0x0
	Jump Script_branch_c39
@ d3a

Script_branch_d3a: @ d3a
	Cmd_0x23c 0x800c
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_d5b
	CloseMessage
	Call Function_e16
	Cmd_0x9c
	Jump Script_branch_d64
@ d5b

Script_branch_d5b: @ d5b
	Message 0x4f
	Jump Script_branch_c33
@ d64

Script_branch_d64: @ d64
	TextPlayerName 0x0
	MessageAll 0x22
	Call Function_ca7
	Call Function_a18
	FadeScreen 0x6, 0x1, 0x1, 0x0
	Jump Script_branch_c39
@ d86

Script_branch_d86: @ d86
	CloseMessage
	Call Function_e16
	Cmd_0x269 0x96, 0x16
	Nop
	Nop
	TextPlayerName 0x0
	MessageAll 0x22
	Call Function_ca7
	Call Function_a18
	FadeScreen 0x6, 0x1, 0x1, 0x0
	Jump Script_branch_c39
@ dba

Script_branch_dba: @ dba
	PlayFanfare 0x60c
	CloseMessage
	Cmd_0x2c2 0x800c
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_de7
	Call Function_e16
	Cmd_0xa4 0x96, 0x1a, 0x21, 0x0
	Jump Script_branch_a2e
@ de7

Script_branch_de7: @ de7
	Message 0x5e
	Jump Script_branch_a2e
@ df0

Script_branch_df0: @ df0
	CloseMessage
	PlayFanfare 0x60d
	Call Function_a23
	CloseTouchScreen
	ReleaseAll
	End
@ e02

.byte 0x1a @ 0xe02L
.byte 0x0 @ 0xe03L
.byte 0x10 @ 0xe04L
.byte 0xfc @ 0xe05L
.byte 0xff @ 0xe06L
.byte 0xff @ 0xe07L
.byte 0xae @ 0xe08L
.byte 0x0 @ 0xe09L
.byte 0x6 @ 0xe0aL
.byte 0x0 @ 0xe0bL
.byte 0x1 @ 0xe0cL
.byte 0x0 @ 0xe0dL
.byte 0x1 @ 0xe0eL
.byte 0x0 @ 0xe0fL
.byte 0x0 @ 0xe10L
.byte 0x0 @ 0xe11L
.byte 0xaf @ 0xe12L
.byte 0x0 @ 0xe13L
.byte 0x1b @ 0xe14L
.byte 0x0 @ 0xe15L

Function_e16: @ e16
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	FreeDoor 0x5a
	Return
@ e27

Script_15: @ e27
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	Cmd_0x9c
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	End
@ e43

Script_12: @ e43
	Message 0x26
	LocalScript
	End
@ e4a

Script_13: @ e4a
	Cmd_0x261
	LockAll
	Movement 0xff, Script_branch_1054
	Movement 0x0, Script_branch_105c
	WaitMovement
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	TextPlayerName 0x0
	Message 0x29
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	CloseMessage
	PlaySound 0x49f
	WaitSound
	HealPokemon
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	Message 0x2a
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ e9f

.byte 0x2d @ 0xe9fL
.byte 0x0 @ 0xea0L
.byte 0x2a @ 0xea1L
.byte 0x1b @ 0xea2L
.byte 0x0 @ 0xea3L
.byte 0x2d @ 0xea4L
.byte 0x0 @ 0xea5L
.byte 0x2b @ 0xea6L
.byte 0x1b @ 0xea7L
.byte 0x0 @ 0xea8L

Script_14: @ ea9
	Cmd_0x261
	LockAll
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	CheckPlayerAction 0x800c
	CompareVarValue 0x800c, 0x3
	JumpIf 0x5, Script_branch_ed4
	SetPlayerAction 0x800
	Jump Script_branch_ed8
@ ed4

Script_branch_ed4: @ ed4
	SetPlayerAction 0x100
Script_branch_ed8: @ ed8
	UpdatePlayerAction
	Movement 0xff, Script_branch_460
	WaitMovement
	Message 0x2c
	Call Function_f89
	Call Function_216
	CheckBadge 0x0, 0x800c
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_f49
	Message 0x2d
	Movement 0xff, Script_branch_468
	WaitMovement
	CheckPlayerAction 0x800c
	CompareVarValue 0x800c, 0x3
	JumpIf 0x5, Script_branch_f2e
	SetPlayerAction 0x400
	Jump Script_branch_f32
@ f2e

Script_branch_f2e: @ f2e
	SetPlayerAction 0x1
Script_branch_f32: @ f32
	UpdatePlayerAction
	Movement 0x8007, Script_branch_454
	WaitMovement
	Message 0x2e
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ f49

Script_branch_f49: @ f49
	Movement 0xff, Script_branch_468
	WaitMovement
	CheckPlayerAction 0x800c
	CompareVarValue 0x800c, 0x3
	JumpIf 0x5, Script_branch_f6e
	SetPlayerAction 0x400
	Jump Script_branch_f72
@ f6e

Script_branch_f6e: @ f6e
	SetPlayerAction 0x1
Script_branch_f72: @ f72
	UpdatePlayerAction
	Movement 0x8007, Script_branch_454
	WaitMovement
	Message 0x28
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ f89

Function_f89: @ f89
	Cmd_0x1be 0x8004
	CompareVarValue 0x8004, 0x45
	JumpIf 0x1, Script_branch_100a
	CompareVarValue 0x8004, 0x9e
	JumpIf 0x1, Script_branch_1012
	CompareVarValue 0x8004, 0xa6
	JumpIf 0x1, Script_branch_101a
	CompareVarValue 0x8004, 0xec
	JumpIf 0x1, Script_branch_1022
	CompareVarValue 0x8004, 0xb9
	JumpIf 0x1, Script_branch_102a
	CompareVarValue 0x8004, 0x51
	JumpIf 0x1, Script_branch_1032
	CompareVarValue 0x8004, 0xf6
	JumpIf 0x1, Script_branch_103a
	CompareVarValue 0x8004, 0x125
	JumpIf 0x1, Script_branch_1042
	CompareVarValue 0x8004, 0xa9
	JumpIf 0x1, Script_branch_104a
	SetVar 0x8007, 0x0
	Return
@ 100a

Script_branch_100a: @ 100a
	SetVar 0x8007, 0x0
	Return
@ 1012

Script_branch_1012: @ 1012
	SetVar 0x8007, 0x3
	Return
@ 101a

Script_branch_101a: @ 101a
	SetVar 0x8007, 0x6
	Return
@ 1022

Script_branch_1022: @ 1022
	SetVar 0x8007, 0x3
	Return
@ 102a

Script_branch_102a: @ 102a
	SetVar 0x8007, 0x0
	Return
@ 1032

Script_branch_1032: @ 1032
	SetVar 0x8007, 0x0
	Return
@ 103a

Script_branch_103a: @ 103a
	SetVar 0x8007, 0x2
	Return
@ 1042

Script_branch_1042: @ 1042
	SetVar 0x8007, 0x3
	Return
@ 104a

Script_branch_104a: @ 104a
	SetVar 0x8007, 0x3
	Return
@ 1052

.byte 0x0 @ 0x1052L
.byte 0x0 @ 0x1053L

Script_branch_1054: @ 1054
	Nop
	Dummy
	Cmd_0xfe 0x0
Script_branch_105c: @ 105c
	Dummy
	Dummy
	Cmd_0xfe 0x0
Script_branch_1064: @ 1064
	End
@ 1066

.byte 0x1 @ 0x1066L
.byte 0x0 @ 0x1067L
.byte 0xfe @ 0x1068L
.byte 0x0 @ 0x1069L
.byte 0x0 @ 0x106aL
.byte 0x0 @ 0x106bL
.byte 0x0 @ 0x106cL
.byte 0x0 @ 0x106dL
.byte 0x1 @ 0x106eL
.byte 0x0 @ 0x106fL
.byte 0xfe @ 0x1070L
.byte 0x0 @ 0x1071L
.byte 0x0 @ 0x1072L
.byte 0x0 @ 0x1073L
.byte 0x3 @ 0x1074L
.byte 0x0 @ 0x1075L
.byte 0x1 @ 0x1076L
.byte 0x0 @ 0x1077L
.byte 0xfe @ 0x1078L
.byte 0x0 @ 0x1079L
.byte 0x0 @ 0x107aL
.byte 0x0 @ 0x107bL

Script_branch_107c: @ 107c
	Dummy
	Dummy
	Cmd_0xfe 0x0
Script_16: @ 1084
	PlayFanfare 0x5dc
	LockAll
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	Cmd_0x1c2 0x96
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	ReleaseAll
	End
@ 10aa

Script_17: @ 10aa
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Cmd_0x1c7 0x32
	CloseMessage
	ReleaseAll
	End
@ 10bc

Script_18: @ 10bc
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Message 0x36
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ 10cf

Script_19: @ 10cf
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Message 0x39
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ 10e2

Script_20: @ 10e2
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Message 0x3a
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ 10f5

Script_21: @ 10f5
	CheckItem 0x1c2, 0x1, 0x800c
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_1163
	Cmd_0x261
	LockAll
	PlayFanfare 0x5dc
	Cmd_0xb8 0x800c
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_1140
	Message 0x3b
	Cmd_0x3f 0x800c
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_115d
	Cmd_0xb9 0x1
	CloseMessage
	ReleaseAll
	End
@ 1140

Script_branch_1140: @ 1140
	Message 0x3c
	Cmd_0x3f 0x800c
	CompareVarValue 0x800c, 0x1
	JumpIf 0x1, Script_branch_115d
	Cmd_0xb9 0x0
	CloseMessage
	ReleaseAll
	End
@ 115d

Script_branch_115d: @ 115d
	CloseMessage
	ReleaseAll
	End
@ 1163

Script_branch_1163: @ 1163
	End
@ 1165

Script_22: @ 1165
	PlayFanfare 0x5dc
	LockAll
	Message 0x3e
	WaitAB
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	CloseMessage
	EggHatchScreen
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	ReleaseAll
	End
@ 1190

.align 2
Script_23: @ 1190
	PlayFanfare 0x5dc
	LockAll
	CheckItem 0x4093 0x1 0x800C
	CompareVarValue 0x800C 0x1
	JumpIf EQUAL repel
	Message 0x41
	WaitAB
	CloseMessage
	ReleaseAll
	End
@ 11a1
.align 2
repel:
	Message 0x75
	OpenTouchScreen
	YesNoTouchScreen 0x800C
	CompareVarValue 0x800C 0x0
	JumpIf EQUAL repelss
	CompareVarValue 0x800C 0x1
	JumpIf EQUAL repels2
	WaitAB
	CloseTouchScreen
	CloseMessage
	ReleaseAll
	End

repelss:
	CloseTouchScreen
	CloseMessage
	TakeItem 0x4093 0x1 0x800c
	PlayFanfare 0x5ff  @ ->use repel sound, change this(Platinum = 0x600)
	special 0x0
	TextItem 0x0 0x4093
	TextPlayerName 0x1
	Message 0x76  @ ->"{STRVAR 3,1}used a {COLOR 2}{STRVAR 3,0}{COLOR 0}."
	WaitAB
	CloseMessage
	ReleaseAll
	End

repels2:
	CloseTouchScreen
	CloseMessage
	ReleaseAll
	End

Script_24: @ 11a1
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Message 0x67
	OpenTouchScreen
Script_branch_11ae: @ 11ae
	Cmd_0x2ee 0x1, 0x1, 0x0, 0x1, 0x800c
	Cmd_0x2ef 0x70, 0xff, 0x0
	Cmd_0x2ef 0x71, 0xff, 0x1
	Cmd_0x2ef 0x72, 0xff, 0x2
	Cmd_0x2ef 0x73, 0xff, 0x3
	Cmd_0x2ef 0x74, 0xff, 0x4
	Cmd_0x2f0
	CompareVarValue 0x800c, 0x4
	JumpIf 0x4, Script_branch_1277
	SetVar 0x8004, 0x68
	IncrementVar 0x8004, 0x800c
	MessageSp 0x8004
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	CloseMessage
	SetVar 0x8000, 0x2
	IncrementVar 0x8000, 0x800c
	Cmd_0x1ec 0x8000, 0x800c, 0x8001
	ReturnScreen
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_1277
	Message 0x6d
	YesNoTouchScreen 0x800c
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_11ae
	CompareVarValue 0x8001, 0xffff
	JumpIf 0x1, Script_branch_126a
	Cmd_0x1ee 0x0, 0x8001
	Message 0x6f
	Jump Script_branch_126d
@ 126a

Script_branch_126a: @ 126a
	Message 0x6e
Script_branch_126d: @ 126d
	WaitButton
	CloseMessage
	CloseTouchScreen
	ReleaseAll
	End
@ 1277

Script_branch_1277: @ 1277
	Message 0x6c
	Jump Script_branch_126d
@ 1280

.byte 0x2 @ 0x1280L
.byte 0x0 @ 0x1281L

Script_26: @ 1282
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Message 0x44
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ 1295

Script_28: @ 1295
	End
@ 1297

Script_29: @ 1297
	Cmd_0x261
	LockAll
	ReleaseAll
	End
@ 129f

.byte 0x2d @ 0x129fL
.byte 0x0 @ 0x12a0L
.byte 0x58 @ 0x12a1L
.byte 0x32 @ 0x12a2L
.byte 0x0 @ 0x12a3L
.byte 0x35 @ 0x12a4L
.byte 0x0 @ 0x12a5L
.byte 0x61 @ 0x12a6L
.byte 0x0 @ 0x12a7L
.byte 0x2 @ 0x12a8L
.byte 0x0 @ 0x12a9L
.byte 0x35 @ 0x12aaL
.byte 0x0 @ 0x12abL
.byte 0x61 @ 0x12acL
.byte 0x0 @ 0x12adL
.byte 0x2 @ 0x12aeL
.byte 0x0 @ 0x12afL

Script_30: @ 12b0
	StopMusic 0x0
	CheckGender 0x800c
	CompareVarValue 0x800c, 0x0
	CallIf 0x1, Script_branch_12d6
	CompareVarValue 0x800c, 0x1
	CallIf 0x1, Script_branch_12dc
	LocalScript
	End
@ 12d6

Script_branch_12d6: @ 12d6
	Cmd_0x57 0x489
	Return
@ 12dc

Script_branch_12dc: @ 12dc
	Cmd_0x57 0x488
	Return
@ 12e2

Script_32: @ 12e2
	StopMusic 0x0
	Cmd_0x57 0x440
	LocalScript
	End
@ 12ee

Script_71: @ 12ee
	StopMusic 0x0
	Cmd_0x57 0x441
	LocalScript
	End
@ 12fa

Script_43: @ 12fa
	StopMusic 0x0
	Cmd_0x57 0x451
	LocalScript
	End
@ 1306

Script_45: @ 1306
	StopMusic 0x0
	Cmd_0x57 0x452
	LocalScript
	End
@ 1312

Script_37: @ 1312
	StopMusic 0x0
	Cmd_0x57 0x43e
	LocalScript
	End
@ 131e

Script_38: @ 131e
	StopMusic 0x0
	Cmd_0x57 0x43f
	LocalScript
	End
@ 132a

Script_66: @ 132a
	StopMusic 0x0
	Cmd_0x57 0x48f
	LocalScript
	End
@ 1336

Script_68: @ 1336
	StopMusic 0x0
	Cmd_0x57 0x48c
	LocalScript
	End
@ 1342

Script_31: @ 1342
Script_33: @ 1342
Script_39: @ 1342
Script_44: @ 1342
Script_46: @ 1342
Script_67: @ 1342
Script_69: @ 1342
Script_72: @ 1342
	FadeOutMusic 0x0, 0x1e
	StopMusic 0x0
	PlayDefaultMusic
	LocalScript
	End
@ 1352

Script_40: @ 1352
	Cmd_0x1ae 0x8004, 0x8005, 0x8006
	Call Function_136c
	LocalScript
	End
@ 1364

Script_48: @ 1364
	Call Function_136c
	End
@ 136c

Function_136c: @ 136c
	PlayFanfare 0x878
	WaitFanfare 0x878
	PlayFanfare 0x878
	WaitFanfare 0x878
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	Cmd_0x1af 0x96, 0xae, 0x6
	Dummy
	Dummy
	Nop
	WaitFadeScreen
	Return
@ 139a

Script_41: @ 139a
	CheckFlag 0xfd
	JumpIf 0x1, Script_branch_13f6
	CompareVarValue 0x404e, 0x4
	JumpIf 0x5, Script_branch_13f6
	CompareVarValue 0x404f, 0x4
	JumpIf 0x5, Script_branch_13f6
	CompareVarValue 0x4050, 0x4
	JumpIf 0x5, Script_branch_13f6
	CompareVarValue 0x4051, 0x4
	JumpIf 0x5, Script_branch_13f6
	CompareVarValue 0x404d, 0x4
	JumpIf 0x5, Script_branch_13f6
	SetFlag 0xfd
	Cmd_0x2a8 0x1f, 0x16
	End
@ 13f2

.byte 0x0 @ 0x13f2L
.byte 0x0 @ 0x13f3L
.byte 0x2 @ 0x13f4L
.byte 0x0 @ 0x13f5L

Script_branch_13f6: @ 13f6
	LocalScript
	End
@ 13fa

Script_42: @ 13fa
	Message 0x5d
	WaitButton
	CloseMessage
	ReleaseAll
	LocalScript
	End
@ 1407

Script_47: @ 1407
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	WFC 0x800c
	SetVarFromVariable 0x8004, 0x800c
	Cmd_0x296 0x8005, 0x8004, 0x800c
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_1444
	ReturnScreen
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	LocalScript
	End
@ 1444

Script_branch_1444: @ 1444
	ReturnScreen
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	LocalScript
	End
@ 1456

Script_49: @ 1456
	Jump Script_branch_145e
@ 145c

.byte 0x2 @ 0x145cL
.byte 0x0 @ 0x145dL

Script_branch_145e: @ 145e
	OpenTouchScreen
	Cmd_0x2ed 0x1, 0x1, 0x0, 0x1, 0x800c
	Cmd_0x2ef 0x141, 0xff, 0x0
	Cmd_0x2ef 0x142, 0xff, 0x1
	Cmd_0x2ef 0x143, 0xff, 0x2
	Cmd_0x2f0
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_14b1
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_14bd
	CompareVarValue 0x8008, 0x2
	JumpIf 0x1, Script_branch_14c7
	End
@ 14b1

Script_50: @ 14b1
Script_branch_14b1: @ 14b1
	Cmd_0x113 0x8004
	Jump Script_branch_14dd
@ 14bb

.byte 0x2 @ 0x14bbL
.byte 0x0 @ 0x14bcL

Script_51: @ 14bd
Script_branch_14bd: @ 14bd
	Cmd_0x30e
	Jump Script_branch_14dd
@ 14c5

.byte 0x2 @ 0x14c5L
.byte 0x0 @ 0x14c6L

Script_52: @ 14c7
Script_branch_14c7: @ 14c7
	CloseTouchScreen
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x1
	WaitButton
	CloseMessage
	LocalScript
	End
@ 14dd

Script_branch_14dd: @ 14dd
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x6
	FreezeMessage
	Jump Script_branch_145e
@ 14f1

.byte 0x2 @ 0x14f1L
.byte 0x0 @ 0x14f2L

Script_53: @ 14f3
	Jump Script_branch_14fb
@ 14f9

.byte 0x2 @ 0x14f9L
.byte 0x0 @ 0x14faL

Script_branch_14fb: @ 14fb
	OpenTouchScreen
	Cmd_0x2ed 0x1, 0x1, 0x0, 0x1, 0x800c
	Cmd_0x2ef 0x141, 0xff, 0x0
	Cmd_0x2ef 0x142, 0xff, 0x1
	Cmd_0x2ef 0x143, 0xff, 0x2
	Cmd_0x2f0
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_154e
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_155a
	CompareVarValue 0x8008, 0x2
	JumpIf 0x1, Script_branch_1564
	End
@ 154e

Script_54: @ 154e
Script_branch_154e: @ 154e
	Cmd_0x114 0x8004
	Jump Script_branch_15a6
@ 1558

.byte 0x2 @ 0x1558L
.byte 0x0 @ 0x1559L

Script_55: @ 155a
Script_branch_155a: @ 155a
	Cmd_0x30e
	Jump Script_branch_15a6
@ 1562

.byte 0x2 @ 0x1562L
.byte 0x0 @ 0x1563L

Script_56: @ 1564
Script_branch_1564: @ 1564
	CloseTouchScreen
	CheckFlag 0x16f
	JumpIf 0x1, Script_branch_15e8
	CheckFlag 0x170
	JumpIf 0x1, Script_branch_160c
	CheckFlag 0x171
	JumpIf 0x1, Script_branch_1630
	CheckFlag 0x18a
	JumpIf 0x1, Script_branch_1654
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x1
Script_branch_159e: @ 159e
	WaitButton
	CloseMessage
	LocalScript
	End
@ 15a6

Script_branch_15a6: @ 15a6
	CheckFlag 0x16f
	JumpIf 0x1, Script_branch_15fa
	CheckFlag 0x170
	JumpIf 0x1, Script_branch_161e
	CheckFlag 0x171
	JumpIf 0x1, Script_branch_1642
	CheckFlag 0x18a
	JumpIf 0x1, Script_branch_1666
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x6
Script_branch_15de: @ 15de
	FreezeMessage
	Jump Script_branch_14fb
@ 15e6

.byte 0x2 @ 0x15e6L
.byte 0x0 @ 0x15e7L

Script_branch_15e8: @ 15e8
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x2
	Jump Script_branch_159e
@ 15fa

Script_branch_15fa: @ 15fa
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x7
	Jump Script_branch_15de
@ 160c

Script_branch_160c: @ 160c
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x3
	Jump Script_branch_159e
@ 161e

Script_branch_161e: @ 161e
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x8
	Jump Script_branch_15de
@ 1630

Script_branch_1630: @ 1630
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x4
	Jump Script_branch_159e
@ 1642

Script_branch_1642: @ 1642
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x9
	Jump Script_branch_15de
@ 1654

Script_branch_1654: @ 1654
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0x5
	Jump Script_branch_159e
@ 1666

Script_branch_1666: @ 1666
	Cmd_0x1b6 0x3, 0x800c
	Cmd_0x1b8 0x800c, 0xa
	Jump Script_branch_15de
@ 1678

Script_57: @ 1678
	OpenTouchScreen
	Cmd_0x2ed 0x1, 0x1, 0x0, 0x1, 0x800c
	Cmd_0x2ef 0x141, 0xff, 0x0
	Cmd_0x2ef 0x144, 0xff, 0x1
	Cmd_0x2ef 0x143, 0xff, 0x2
	Cmd_0x2f0
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_16cb
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_16d1
	CompareVarValue 0x8008, 0x2
	JumpIf 0x1, Script_branch_16d7
	End
@ 16cb

Script_58: @ 16cb
Script_branch_16cb: @ 16cb
	Cmd_0x303
	LocalScript
	End
@ 16d1

Script_59: @ 16d1
Script_branch_16d1: @ 16d1
	CloseTouchScreen
	LocalScript
	End
@ 16d7

Script_60: @ 16d7
Script_branch_16d7: @ 16d7
	CloseTouchScreen
	LocalScript
	End
@ 16dd

Script_61: @ 16dd
	OpenTouchScreen
	Cmd_0x2ed 0x1, 0x1, 0x0, 0x1, 0x800c
	Cmd_0x2ef 0x141, 0xff, 0x0
	Cmd_0x2ef 0x144, 0xff, 0x1
	Cmd_0x2ef 0x143, 0xff, 0x2
	Cmd_0x2f0
	SetVarFromVariable 0x8008, 0x800c
	CompareVarValue 0x8008, 0x0
	JumpIf 0x1, Script_branch_1730
	CompareVarValue 0x8008, 0x1
	JumpIf 0x1, Script_branch_1736
	CompareVarValue 0x8008, 0x2
	JumpIf 0x1, Script_64
	End
@ 1730

Script_62: @ 1730
Script_branch_1730: @ 1730
	Cmd_0x304 0x15, 0x2

Script_63: @ 1736
Script_branch_1736: @ 1736
	CloseTouchScreen
	LocalScript
	End
@ 173c

Script_64: @ 173c: @ 173c
	CloseTouchScreen
	LocalScript
	End
@ 1742

Script_65: @ 1742
	PlayFanfare 0x5dc
	LockAll
	Cmd_0x2d7 0x8005
	TextPokeNickname 0x0, 0x8005
	Message 0x63
	CloseMessage
	Cmd_0x326
	Cmd_0x2d7 0x8005
	TextPokeNickname 0x0, 0x8005
	Message 0x64
	WaitAB
	CloseMessage
	ReleaseAll
	End
@ 176c
.align
Script_73:
	LockAll
	FadeScreen 0x6, 0x1, 0x0, 0x0
	WaitFadeScreen
	Cmd_0x15d
	Cmd_0x15f 0x800C
	ReturnScreen
	FadeScreen 0x6, 0x1, 0x1, 0x0
	WaitFadeScreen
	CompareVarValue 0x800C, 0x5
	JumpIf 0x2, SelectUnknow
	TextPokeNickname 0x0, 0x800C
	special 2
	CompareVarValue 0x800C, 0x0
	JumpIf 0x1, CanSwitchAbilty
	SetVarFromVariable 0x800C, 0x8005
	SetVar 0x8005, 0x1
	special 3
	SetVarFromVariable 0x8004, 0x800C
	SetVar 0x8005, 0x2
	special 3
	TakeItem 543, 1, 0x8004
	Message 121
	WaitAB
	CloseMessage
	ReleaseAll
	End

SelectUnknow:
	ReleaseAll
	End

CanSwitchAbilty:
	Message 122
	WaitAB
	CloseMessage
	ReleaseAll
	End

.align
@引虫香水
Script_74:
	LockAll
	SetVar 0x800C, 544
	special 4
	@使用失败
	CompareVarValue 0x800C, 0x0
	JumpIf 0x1, CantUseLure
	@使用成功
	TextItem 0x0, 0x800C
	TextPlayerName 0x1
	PlayFanfare 0x5ff
	TakeItem 544, 1, 0x8004
	Message 124
	WaitAB
	CloseMessage
	ReleaseAll
	End

Script_76:
	LockAll
	SetVar 0x800C, 545
	special 4
	@使用失败
	CompareVarValue 0x800C, 0x0
	JumpIf 0x1, CantUseLure
	@使用成功
	TextItem 0x0, 0x800C
	TextPlayerName 0x1
	PlayFanfare 0x5ff
	TakeItem 545, 1, 0x8004
	Message 124
	WaitAB
	CloseMessage
	ReleaseAll
	End

Script_77:
	LockAll
	SetVar 0x800C, 546
	special 4
	@使用失败
	CompareVarValue 0x800C, 0x0
	JumpIf 0x1, CantUseLure
	@使用成功
	TextItem 0x0, 0x800C
	TextPlayerName 0x1
	PlayFanfare 0x5ff
	TakeItem 546, 1, 0x8004
	Message 124
	WaitAB
	CloseMessage
	ReleaseAll
	End

CantUseLure:
	Message 126
	WaitAB
	CloseMessage
	ReleaseAll
	End

@香水用完
.align
Script_75:
	LockAll
	special 5
	CheckItem 0x800C 0x1 0x8004
	CompareVarValue 0x8004 0x1
	JumpIf EQUAL lurenext
	Message 125
	WaitAB
	CloseMessage
	ReleaseAll
	End

lurenext:
	Message 123
	OpenTouchScreen
	YesNoTouchScreen 0x8004
	CompareVarValue 0x8004 0x0
	JumpIf EQUAL luress
	CompareVarValue 0x8004 0x1
	JumpIf EQUAL lure2
	WaitAB
	CloseTouchScreen
	CloseMessage
	ReleaseAll
	End

luress:
	CloseTouchScreen
	CloseMessage
	special 4
	TakeItem 0x800C 0x1 0x8004
	PlayFanfare 0x5ff  @ ->use repel sound, change this(Platinum = 0x600)
	TextItem 0x0 0x800C
	TextPlayerName 0x1
	Message 0x76  @ ->"{STRVAR 3,1}used a {COLOR 2}{STRVAR 3,0}{COLOR 0}."
	WaitAB
	CloseMessage
	ReleaseAll
	End

lure2:
	CloseTouchScreen
	CloseMessage
	ReleaseAll
	End
@ end_0x176cL
