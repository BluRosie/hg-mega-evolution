.include "armips/include/script.s"
//桧皮镇
//事件文件：71
//文本文件：564

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
	.hword 0xfd13
@ 46
.align 2
Script_5: @ 46
	CompareVarValue 0x4080, 0x0
	JumpIf 0x5, Script_branch_5f
	SetFlag 0x19f
	ClearFlag 0x271
	ClearFlag 0x272
Script_branch_5f: @ 5f
	End
@ 61

Script_1: @ 61
Script_6: @ 61
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Message 0x3
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ 74

Script_2: @ 74
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Message 0x9
	PlayCry 0x4f, 0x0
	Message 0xa
	WaitCry
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ 92

Script_3: @ 92
	Cmd_0x261
	LockAll
	FadeOutMusic 0x0, 0x3
	Movement 0xff, Movement_2a4
	WaitMovement
	SetVar 0x4099, 0x1
	CommonScript 0x7ef
	CheckPlayerPosition 0x8004, 0x8005
	CompareVarValue 0x8005, 0x1ce
	JumpIf 0x5, Script_branch_e5
	SetOverworldPosition 0x9, 0x194, 0x0, 0x1cf, 0x2
	Movement 0x9, Movement_28c
	Movement 0xff, Movement_2ac
	Jump Script_branch_18e
@ e5

Script_branch_e5: @ e5
	CompareVarValue 0x8005, 0x1cf
	JumpIf 0x5, Script_branch_114
	SetOverworldPosition 0x9, 0x194, 0x0, 0x1d0, 0x2
	Movement 0x9, Movement_28c
	Movement 0xff, Movement_2ac
	Jump Script_branch_18e
@ 114

Script_branch_114: @ 114
	CompareVarValue 0x8005, 0x1d0
	JumpIf 0x5, Script_branch_143
	SetOverworldPosition 0x9, 0x194, 0x0, 0x1cf, 0x2
	Movement 0x9, Movement_298
	Movement 0xff, Movement_2c0
	Jump Script_branch_18e
@ 143

Script_branch_143: @ 143
	CompareVarValue 0x8005, 0x1d1
	JumpIf 0x5, Script_branch_172
	SetOverworldPosition 0x9, 0x194, 0x0, 0x1d0, 0x2
	Movement 0x9, Movement_298
	Movement 0xff, Movement_2c0
	Jump Script_branch_18e
@ 172

Script_branch_172: @ 172
	SetOverworldPosition 0x9, 0x194, 0x0, 0x1d1, 0x2
	Movement 0x9, Movement_298
	Movement 0xff, Movement_2c0
Script_branch_18e: @ 18e
	WaitMovement
	TextRivalName 0x0
	Message 0x1
	CloseMessage
	CheckStarter 0x800c
	CompareVarValue 0x800c, 0x98
	JumpIf 0x5, Script_branch_1b7
	TrainerBattle 0x10a, 0x0, 0x0
	Jump Script_branch_1da
@ 1b7

Script_branch_1b7: @ 1b7
	CompareVarValue 0x800c, 0x9b
	JumpIf 0x5, Script_branch_1d2
	TrainerBattle 0x10d, 0x0, 0x0
	Jump Script_branch_1da
@ 1d2

Script_branch_1d2: @ 1d2
	TrainerBattle 0x1, 0x0, 0x0
Script_branch_1da: @ 1da
	CheckBattleIsLost 0x800c
	CompareVarValue 0x800c, 0x0
	JumpIf 0x1, Script_branch_285
	CommonScript 0x816
	TextRivalName 0x0
	Message 0x2
	CloseMessage
	SetVar 0x4075, 0x2
	CheckPlayerPosition 0x8004, 0x8005
	CompareVarValue 0x8005, 0x1ce
	JumpIf 0x5, Script_branch_21e
	Movement 0x9, Movement_2d4
	Jump Script_branch_277
@ 21e

Script_branch_21e: @ 21e
	CompareVarValue 0x8005, 0x1cf
	JumpIf 0x5, Script_branch_239
	Movement 0x9, Movement_2dc
	Jump Script_branch_277
@ 239

Script_branch_239: @ 239
	CompareVarValue 0x8005, 0x1d0
	JumpIf 0x5, Script_branch_254
	Movement 0x9, Movement_2d4
	Jump Script_branch_277
@ 254

Script_branch_254: @ 254
	CompareVarValue 0x8005, 0x1d1
	JumpIf 0x5, Script_branch_26f
	Movement 0x9, Movement_2dc
	Jump Script_branch_277
@ 26f

Script_branch_26f: @ 26f
	Movement 0x9, Movement_2ec
Script_branch_277: @ 277
	WaitMovement
	RemoveOW 0x9
	CommonScript 0x817
	ReleaseAll
	End
@ 285

Script_branch_285: @ 285
	LostBattle
	ReleaseAll
	End
@ 28b

.byte 0x0 @ 0x28bL

Movement_28c: @ 28c
	WalkLeftFast 0x9
	SeeUp 0x1
	EndMovement 0x0
@ 298

Movement_298: @ 298
	WalkLeftFast 0x9
	SeeDown 0x1
	EndMovement 0x0
@ 2a4

Movement_2a4: @ 2a4
	Exclamation 0x1
	EndMovement 0x0
@ 2ac

Movement_2ac: @ 2ac
	SeeRight 0x1
	Move_3e 0x6
	Move_3f 0x7
	SeeDown 0x1
	EndMovement 0x0
@ 2c0

Movement_2c0: @ 2c0
	SeeRight 0x1
	Move_3e 0x6
	Move_3f 0x7
	SeeUp 0x1
	EndMovement 0x0
@ 2d4

Movement_2d4: @ 2d4
	WalkLeftFast 0x3
	EndMovement 0x0
@ 2dc

Movement_2dc: @ 2dc
	WalkLeftFast 0x1
	WalkUpFast 0x1
	WalkLeftFast 0x2
	EndMovement 0x0
@ 2ec

Movement_2ec: @ 2ec
	WalkLeftFast 0x1
	WalkUpFast 0x2
	WalkLeftFast 0x2
	EndMovement 0x0
@ 2fc

Script_4: @ 2fc
	Cmd_0x261
	LockAll
	Movement 0xc, Movement_350
	WaitMovement
	Message 0x10
	PlayFanfare 0x600
	Message 0x11
	CloseMessage
	Movement 0xd, Movement_358
	WaitMovement
	SetOverworldPosition 0xd, 0x17, 0x0, 0x10, 0x3
	Movement 0xc, Movement_374
	WaitMovement
	RemoveOW 0xd
	SetFlag 0x272
	SetFlag 0x271
	ClearFlag 0x19f
	SetVar 0x4080, 0x1
	ReleaseAll
	End
@ 350

Movement_350: @ 350
	MoveLeftFast 0x2
	EndMovement 0x0
@ 358

Movement_358: @ 358
	Move_47 0x1
	RunLeft 0x1
	Move_3f 0x2
	WalkLeft 0x2
	Move_48 0x1
	WalkLeftVeryFast 0x9
	EndMovement 0x0
@ 374

Movement_374: @ 374
	WalkUpFast 0x2
	MoveDownFast 0x1
	EndMovement 0x0
@ 380

Script_7: @ 380
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	CheckFlag 0x7b
	JumpIf 0x1, Script_branch_39c
	Message 0x12
	Jump Script_branch_39f
@ 39c

Script_branch_39c: @ 39c
	Message 0x13
Script_branch_39f: @ 39f
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ 3a7

Script_8: @ 3a7
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	CheckFlag 0x7b
	JumpIf 0x1, Script_branch_3c3
	Message 0x5
	Jump Script_branch_39f
@ 3c3

Script_branch_3c3: @ 3c3
	Message 0x6
	Jump Script_branch_39f
@ 3cc

Script_9: @ 3cc
	BoardInfo 0x2, 0x0
	ShowBoard 0x3
	WaitBoard
	BoardMessage 0xc, 0x800c
	CommonScript 0x7d0
	End
@ 3e1

Script_10: @ 3e1
	BoardInfo 0x2, 0x0
	ShowBoard 0x3
	WaitBoard
	BoardMessage 0xd, 0x800c
	CommonScript 0x7d0
	End
@ 3f6

Script_11: @ 3f6
	BoardInfo 0x2, 0x0
	ShowBoard 0x3
	WaitBoard
	BoardMessage 0xf, 0x800c
	CommonScript 0x7d0
	End
@ 40b

Script_12: @ 40b
	MakeBoard 0xb, 0x0, 0xe, 0x800c
	ShowBoard 0x3
	WaitBoard
	EndBoard 0x800c
	CommonScript 0x7d0
	End
@ 422

Script_13: @ 422
	BoardInfo 0x2, 0x0
	ShowBoard 0x3
	WaitBoard
	BoardMessage 0xe, 0x800c
	CommonScript 0x7d0
	End
@ 437

Script_14: @ 437
	MakeBoard 0x0, 0x1, 0x2, 0x800c
	ShowBoard 0x3
	WaitBoard
	EndBoard 0x800c
	CommonScript 0x7d0
	End
@ 44e

Script_15: @ 44e
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Message 0x4
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ 461
.align 2
Script_16: @ 461
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Message 20
	WaitButton
	SetVar 0x8004 1
	SetVar 0x8005 5
	CommonScript 0x7F1
	SetVar 0x8004 50
	SetVar 0x8005 5
	CommonScript 0x7F1
	SetVar 0x8004 93
	SetVar 0x8005 5
	CommonScript 0x7F1
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ 474

Script_17: @ 474
	PlayFanfare 0x5dc
	LockAll
	FacePlayer
	Message 0x8
	WaitButton
	CloseMessage
	ReleaseAll
	End
@ 487

.byte 0x0 @ 0x487L

@ end_0x488L
