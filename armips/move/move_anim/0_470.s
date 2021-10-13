.nds
.thumb
.include "armips/include/move_script.s"

//mega

.create "data/move/move_anim/0_470", 0x0
move_55:
    LOAD_PARTICLE_DROP 0, 489
    LOAD_PARTICLE_DROP 1, 490
    WAIT 10

    SOUND_FLOW_LR 1939

    CHANGE_BG 47,0x020001
    CHANGE_BG_WAIT

    ADD_PARTICLE 0,0,EMTFUNC_ATTACK_POS
    ADD_PARTICLE 0,8,EMTFUNC_ATTACK_POS
    WAIT 50

    
    ADD_PARTICLE 0,1,EMTFUNC_ATTACK_POS
    ADD_PARTICLE 0,2,EMTFUNC_ATTACK_POS

    MON_COLOR_CHANGE FLAG_ATTACK,PAL_WHITE,100
    ADD_PARTICLE 1,1,EMTFUNC_ATTACK_POS
    ADD_PARTICLE 0,3,EMTFUNC_ATTACK_POS
    ADD_PARTICLE 0,4,EMTFUNC_ATTACK_POS
    ADD_PARTICLE 0,5,EMTFUNC_ATTACK_POS
    ADD_PARTICLE 0,7,EMTFUNC_ATTACK_POS
    WAIT 20
    ADD_PARTICLE 1,1,EMTFUNC_ATTACK_POS

    ADD_PARTICLE 0,6,EMTFUNC_ATTACK_POS
    ADD_PARTICLE 1,1,EMTFUNC_ATTACK_POS
    WAIT_PARTICLE
    EXIT_PARTICLE 1
    LOAD_PARTICLE_DROP 1, 107

    ADD_PARTICLE 1,8,EMTFUNC_ATTACK_POS
    ADD_PARTICLE 1,9,EMTFUNC_ATTACK_POS
    ADD_PARTICLE 1,10,EMTFUNC_ATTACK_POS

    WAIT 20
    MON_SHAKE SHAKE_M_X,SHAKE_M_WAIT,SHAKE_NUM_LONG,FLAG_DEF | 0x100
    WAIT_PARTICLE

    ADD_PARTICLE 0,10,EMTFUNC_ATTACK_POS
    ADD_PARTICLE 0,12,EMTFUNC_ATTACK_POS
    WAIT 30

    CHANGE_BG_RECOVER 47, 0x040001
    VOICE_PLAY 0x9, 0xffffff8b, 0x64
    VOICE_WAIT_STOP 0
    VOICE_PLAY 0xa, 0xffffff8b, 0x7f
    
    VOICE_WAIT_STOP 0
    WAIT_FLAG
    CHANGE_BG_WAIT

    WAIT_PARTICLE
    
    EXIT_PARTICLE 0
    EXIT_PARTICLE 1
    WAIT_FLAG

    END

.close