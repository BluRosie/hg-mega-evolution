.nds
.thumb
.include "armips/include/animscriptcmd.s"

//mega

.create "build/move/move_anim/0_470", 0x0

MegaAnimScript:
    loadparticlefromspa 0, 489
    loadparticlefromspa 1, 490
    wait 10

    playsepanmod 1939, -117, 0x75, 4, 2

    changebg 47, 0x020001
    waitforchangebg

    addparticle 0,0,3
    addparticle 0,8,3
    wait 50

    
    addparticle 0,1,3
    addparticle 0,2,3

    callfunction 0x22, 6, 2, 0, 1, 0x7FFF, 10, 100, 0, 0, 0, 0
    addparticle 1, 1, 3
    addparticle 0, 3, 3
    addparticle 0, 4, 3
    addparticle 0, 5, 3
    addparticle 0, 7, 3
    wait 20
    addparticle 1, 1, 3

    addparticle 0, 6, 3
    addparticle 1, 1, 3
    waitparticle
    unloadparticle 1
    loadparticlefromspa 1, 107

    addparticle 1,8,3
    addparticle 1,9,3
    addparticle 1,10,3

    wait 20
    callfunction 0x24, 5, 2, 0, 1, 4, 8 | 0x100, 0, 0, 0, 0, 0
    waitparticle

    addparticle 0, 10, 3
    addparticle 0, 12, 3
    wait 30

    resetbg 47, 0x040001
    playcry 0x9, 0xffffff8b, 0x64
    waitcry 0
    playcry 0xa, 0xffffff8b, 0x7f
    
    waitcry 0
    waitstate
    waitforchangebg

    waitparticle
    
    unloadparticle 0
    unloadparticle 1
    waitstate

    END

.close