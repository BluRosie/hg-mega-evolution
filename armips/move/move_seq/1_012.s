.nds
.thumb
.include "armips/include/battlescriptcmd.s"
.include "armips/include/abilities.s"

//文本文件197
//VAR_OP_SETMASK equ 10
//VAR_60 equ 60
BUF_PARA_TEMP_WORK equ 0x2B
BUFFER_STATE_TYPE equ BUF_PARA_TEMP_WORK
STATUS_EFF_DOWN equ 13
BUF_PARA_ATTACK_CLIENT equ 15
BUF_PARA_CLIENT_WORK equ 20

.create "data/move/move_seq/1_012", 0x0
//状态能力变化的脚本

seq_12:
    //能力变化
    abilitycheck 1, BATTLER_ADDL_EFFECT, ABILITY_BIG_PECKS, start_change
    if IF_NOTEQUAL, 34, 0x17, seq_12_2
    goto big_pecks_check_msg

seq_12_2:
    if IF_NOTEQUAL, 34, 0x2f, start_change

big_pecks_check_msg:
    if IF_NOTEQUAL, BUFFER_STATE_TYPE, 0x1, big_pecks_no_move_msg
    printattackmessage
    waitmessage

big_pecks_no_move_msg:
    if IF_NOTEQUAL, BUFFER_STATE_TYPE, 0x1, big_pecks_no_move_anim
    seteffectprimary BATTLER_ATTACKER
    waitmessage

big_pecks_no_move_anim:
    changevar2 7, BUF_PARA_CLIENT_WORK, BATTLER_ADDL_EFFECT
    printmessage 1294, 0xB, 0xFF, 0x15,0,0,0,0
    waitmessage
    wait 0x1E
    endscript

start_change:
    statbuffchange CantUpByMove, CantUpByAbility, Substitute //替身
    //如果不是技能直接追加，跳过技能信息的显示
    if IF_NOTEQUAL, BUFFER_STATE_TYPE, 0x1, no_move_msg
    printattackmessage
    waitmessage

no_move_msg:
    //如果不是直接追加，跳过技能动画的显示
    if IF_NOTEQUAL, BUFFER_STATE_TYPE, 0x1, no_move_anim
    seteffectprimary BATTLER_ATTACKER
    waitmessage

no_move_anim:
    //检查是否有状态变化
    if IF_MASK, VAR_60, 0x2, no_state_change
    //状态变化动画
    setstatus2effect3 BATTLER_ADDL_EFFECT, BUF_PARA_TEMP_WORK
    waitmessage
    if IF_NOTMASK, VAR_60, 0x80, no_state_change
    //设置发动了状态变化
    changevar VAR_OP_SETMASK, VAR_60, 0x2

no_state_change:
    printpreparedmessage
    waitmessage
    wait 0x1E
    //检查如果是有能力下降
    if IF_EQUAL, BUF_PARA_TEMP_WORK, STATUS_EFF_DOWN, DefiantCheck
    endscript

CantUpByMove:
    //直接追加效果，如果不是技能就不播放技能文本
    if IF_NOTEQUAL, BUFFER_STATE_TYPE, 0x1, _00C4
    printattackmessage
    waitmessage

_00C4:
    //如果不是直接追加，跳过
    if IF_MASK, 6, 0x200000, CantUpByAbility
    wait 0x1E
    //播放无法上升的文本提示
    printpreparedmessage
    waitmessage
    wait 0x1E

CantUpByAbility:
    endscript

Substitute:
    //替身时不会下降
    changevar VAR_OP_SETMASK, 10, 0x40
    endscript

DefiantCheck:
    //如果不是技能间接追加，直接检查特性
    if IF_NOTEQUAL, BUFFER_STATE_TYPE, 0x2, DefiantCheck_2
    //如果是技能副作用，并且攻击方就是受效果方，跳过
    if2 IF_EQUAL, BATTLER_ADDL_EFFECT, BUF_PARA_ATTACK_CLIENT, DefiantCheck_End

DefiantCheck_2:
    abilitycheck 0, BATTLER_ADDL_EFFECT, ABILITY_DEFIANT, DefiantCheck_3
    abilitycheck 1, BATTLER_ADDL_EFFECT, ABILITY_COMPETITIVE, DefiantCheck_End
    changevar 7, 5, 0x3
    changevar 7, 34, 0x2A
    gotosubscript 12

DefiantCheck_3:
    changevar 7, 5, 0x3
    changevar 7, 34, 0x27
    gotosubscript 12

DefiantCheck_End:
    endscript
.close