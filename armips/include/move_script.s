//技能动画

// -----------------------------------------
//
// WAIT
// 等待
// Initialize move oam resources
//
// -----------------------------------------
.macro WAIT,time
.word 0x0
.word time
.endmacro


// -----------------------------------------
//
// WAIT_FLAG
// 等待资源加载结束？或者等待粒子效果结束
// Initialize move oam resources
//
// -----------------------------------------
.macro WAIT_FLAG
.word 0x1
.endmacro


// -----------------------------------------
//
// SEQEND
// 脚本结束
// Initialize move oam resources
//
// -----------------------------------------
.macro END
.word 0x4
.endmacro

// -----------------------------------------
//
// TURN_CHK
// 设置参数
// Initialize move oam resources
//
// -----------------------------------------
.macro WORK_SET,adrs1,adrs2
.word 0xC
.word adrs1
.word adrs2
.endmacro

// -----------------------------------------
//
// TURN_CHK
// 判断回合数
// Initialize move oam resources
//
// -----------------------------------------
.macro TURN_CHECK,adrs1,adrs2
.word 0xD
.word (adrs1-.)/4
.word (adrs2-.)/4
.endmacro

// -----------------------------------------
//
// TURN_CHK
// 改变背景bg
// Initialize move oam resources
//
// -----------------------------------------
.macro CHANGE_BG,map_id, ch_mode
.word 0x10
.word map_id
.word ch_mode
.endmacro

// -----------------------------------------
//
// TURN_CHK
// 背景bg恢复
// Initialize move oam resources
//
// -----------------------------------------
.macro CHANGE_BG_RECOVER,map_id, ch_mode
.word 0x12
.word map_id
.word ch_mode
.endmacro

// -----------------------------------------
//
// TURN_CHK
// 背景bg恢复
// Initialize move oam resources
//
// -----------------------------------------
.macro CHANGE_BG_WAIT
.word 0x14
.endmacro
// -----------------------------------------
//
// SEPAN_FLOW
// 声音播放
// Initialize move oam resources
//
// -----------------------------------------
.macro SOUND_FLOW,seID,start_pan,end_pan,add_pan,wait
.word 0x18
.word seID
.word start_pan
.word end_pan
.word add_pan
.word wait
.endmacro

MOVE_SE_PAN_ATTACK equ 0xFFFFFF8B //(-117)
WAZA_SE_PAN_DEF equ 0x75

WAZA_SE_PAN_ADD equ 0x4
WAZA_SE_PAN_WAIT equ 0x2

.macro	SOUND_FLOW_LR,seID
	SOUND_FLOW	seID, MOVE_SE_PAN_ATTACK, WAZA_SE_PAN_DEF, WAZA_SE_PAN_ADD, WAZA_SE_PAN_WAIT
.endmacro


// -----------------------------------------
//
// ADD_PARTICLE
// 加载粒子文件，并根据攻击方向加载指定的文件
// Initialize move oam resources
//
// -----------------------------------------
.macro ADD_PARTICLE,particle_no, data, call_back
.word 0x2E
.word particle_no
.word data
.word call_back
.endmacro


// -----------------------------------------
//
// ADD_PARTICLE_SEP
// 加载粒子文件，并根据攻击方向加载指定的文件
// Initialize move oam resources
//
// -----------------------------------------
.macro ADD_PARTICLE_DATA,particle_no, side_1v1mine, side_1v1enemy, data3, data4, data5, data6, call_back
.word 0x30
.word particle_no
.word side_1v1mine
.word side_1v1enemy
.word data3
.word data4
.word data5
.word data6
.word call_back
.endmacro


// -----------------------------------------
//
// WAIT_PARTICLE
// 等待粒子加载结束
// Initialize move oam resources
//
// -----------------------------------------
.macro WAIT_PARTICLE
.word 0x32
.endmacro


// -----------------------------------------
//
// LOAD_PARTICLE
// 根据文件加载粒子到指定编号的粒子内存
// Initialize move oam resources
//
// -----------------------------------------
.macro LOAD_PARTICLE, particle_no, particle_file_index
.word 0x33
.word particle_no
.word particle_file_index
.endmacro

// -----------------------------------------
//
// EXIT_PARTICLE
// 退出粒子系统
// Initialize move oam resources
//
// -----------------------------------------
.macro EXIT_PARTICLE, particle_no
.word 0x35
.word particle_no
.endmacro

// -----------------------------------------
//
// POKEOAM_RES_INIT
// 初始化技能资源
// Initialize move oam resources
//
// -----------------------------------------
.macro OAM_RES_INIT
.word 0x38
.endmacro

// -----------------------------------------
//
// POKEOAM_RES_LOAD
// 加载技能资源
// load move oam resources
//
// -----------------------------------------
.macro OAM_RES_LOAD, id
.word 0x39
.word id
.endmacro

// -----------------------------------------
//
// POKEOAM_DROP
// 设置每个oam资源对应的宠物
// load move oam resources
//
// -----------------------------------------
.macro OAM_DROP, side,auto_move,cap_id,use_res_id
.word 0x3A
.word side
.word auto_move
.word cap_id
.word use_res_id
.endmacro


// -----------------------------------------
//
// POKEOAM_RES_FREE
// 释放所有加载的oam资源
// load move oam resources
//
// -----------------------------------------
.macro OAM_RES_FREE
.word 0x3B
.endmacro

// -----------------------------------------
//
// POKEOAM_RES_FREE
// 释放所有drop
// load move oam resources
//
// -----------------------------------------
.macro OAM_DROP_FREE, id
.word 0x3C
.word id
.endmacro

// -----------------------------------------
//
// POKEOAM_RES_LOAD
// 调用一段指令，跟随参数
// load move oam resources
//
// -----------------------------------------
.macro CALL_FUNC, function_id,num_param, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9
.word 0x2D
.word function_id
.word num_param
.if num_param > 0
	.word p0
.endif
.if	num_param>1
	.word p1
.endif
.if	num_param>2
	.word p2
.endif
.if	num_param>3
	.word p3
.endif
.if	num_param>4
	.word p4
.endif
.if	num_param>5
	.word p5
.endif
.if	num_param>6
	.word p6
.endif
.if	num_param>7
	.word p7
.endif
.if	num_param>8
	.word p8
.endif
.if	num_param>9
	.word p9
.endif
.endmacro


// -----------------------------------------
//
// CONTEST_JP
// 华丽大赛跳转
// load move oam resources
//
// -----------------------------------------
.macro CONTEST_JUMP, adr
.word 0x47
.word (adrs-.)/4
.endmacro

// -----------------------------------------
//
// CONTEST_JP
// 播放叫声
// load move oam resources
//
// -----------------------------------------
.macro VOICE_PLAY, type, pal, vol
.word 0x41
.word type
.word pal
.word vol
.endmacro

.macro VOICE_WAIT_STOP, type
.word 0x42
.word type
.endmacro
// -----------------------------------------
//
// PTAT_JP
// 双打跳转
// load move oam resources
//
// -----------------------------------------
.macro DOUBLE_BATTLE_JUMP, adr
.word 0x48
.word (adrs-.)/4
.endmacro

// -----------------------------------------
EMTFUNC_ATTACK_POS equ 3
EMTFUNC_DEFENCE_POS equ 4
EMTFUNC_SEP_POS equ 18

// -----------------------------------------
PAL_BLACK equ 0x0
PAL_WHITE equ 0x7FFF
PAL_BLUE equ 0xC30A
PAL_RED equ 0x001F
PAL_RED_BROWN equ 0x084C

// -----------------------------------------
FUNC_BG_PAL_COLOR equ 0x21
FUNC_MON_COLOR_CHANGE equ 0x22
FUNC_MON_SHAKE equ 0x24
FUNC_MON_COORD_CHANGE equ 0x39

// -----------------------------------------
SHAKE_S_X equ 1
SHAKE_S_Y equ 1
SHAKE_S_WAIT equ 1
SHAKE_S_NUM equ 2

SHAKE_M_X equ 2
SHAKE_M_Y equ 2
SHAKE_M_WAIT equ 1
SHAKE_M_NUM equ 2

SHAKE_B_X equ 4
SHAKE_B_Y equ 4
SHAKE_B_WAIT equ 1
SHAKE_B_NUM equ 2

SHAKE_NUM_LONG equ 4
SHAKE_NUM_LONG2 equ 8

// -----------------------------------------
FLAG_ATTACK equ 2
FLAG_ATTACK_2 equ 4
FLAG_DEF equ 8
FLAG_DEF_2 equ 16
FLAG_OTHER equ 0x20 //除自己外
FLAG_ALL equ 0x40
// -----------------------------------------
.macro LOAD_PARTICLE_DROP, ptc_no, data_no
	OAM_RES_INIT
	OAM_RES_LOAD 0
	OAM_RES_LOAD 1
	OAM_RES_LOAD 2
	OAM_RES_LOAD 3
	OAM_DROP 4,0,0,0
	OAM_DROP 5,0,1,1
	OAM_DROP 6,0,2,2
	OAM_DROP 7,0,3,3
	CALL_FUNC 0x4e, 1, 0,0,0,0,0,0,0,0,0,0
	LOAD_PARTICLE ptc_no, data_no
	WAIT_FLAG
	OAM_RES_FREE
	OAM_DROP_FREE 0
	OAM_DROP_FREE 1
	OAM_DROP_FREE 2
	OAM_DROP_FREE 3
.endmacro

.macro BG_PAL_FADE_IN,color
    CALL_FUNC FUNC_BG_PAL_COLOR, 5, 0, 1, 0,12, color, 0,0,0,0,0
.endmacro

.macro BG_PAL_FADE_OUT,color
    CALL_FUNC FUNC_BG_PAL_COLOR, 5, 0, 1, 12,0, color, 0,0,0,0,0
.endmacro

.macro MON_SHAKE, shake_flag,shake_flag_wait, shake_num,flag
    CALL_FUNC FUNC_MON_SHAKE, 5, shake_flag,0,shake_flag_wait,shake_num,flag,0,0,0,0,0
.endmacro

//mon,fade_wait,count,rgb,color_change,wait
.macro MON_COLOR_CHANGE, mon, color,time
    CALL_FUNC FUNC_MON_COLOR_CHANGE,6,mon,0,1,color,10,time,0,0,0,0
.endmacro

.macro MON_COORD_CHANGE, x,y,mon
    CALL_FUNC FUNC_MON_COORD_CHANGE,4,4,x,y,mon,0,0,0,0,0,0
.endmacro
