.nds
.thumb

.include "armips/include/macros.s"
.include "armips/include/constants.s"
.include "armips/include/movenums.s"

move MOVE_NONE
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 0
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags 0x00
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_POUND
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_NORMAL
    accuracy 100
    pp 35
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_KARATE_CHOP
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_FIGHTING
    accuracy 100
    pp 25
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_DOUBLE_SLAP
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 15
    type TYPE_NORMAL
    accuracy 85
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_COMET_PUNCH
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 18
    type TYPE_NORMAL
    accuracy 85
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_MEGA_PUNCH
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_NORMAL
    accuracy 85
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_PAY_DAY
    battleeffect 0x0022
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x17
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FIRE_PUNCH
    battleeffect 0x0004
    pss SPLIT_PHYSICAL
    basepower 75
    type TYPE_FIRE
    accuracy 100
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_ICE_PUNCH
    battleeffect 0x0005
    pss SPLIT_PHYSICAL
    basepower 75
    type TYPE_ICE
    accuracy 100
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_THUNDER_PUNCH
    battleeffect 0x0006
    pss SPLIT_PHYSICAL
    basepower 75
    type TYPE_ELECTRIC
    accuracy 100
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SCRATCH
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_NORMAL
    accuracy 100
    pp 35
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_VICE_GRIP
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 55
    type TYPE_NORMAL
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_GUILLOTINE
    battleeffect 0x0026
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 30
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x09
    contesttype CONTEST_COOL
    terminatedata

move MOVE_RAZOR_WIND
    battleeffect 0x0027
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x06
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SWORDS_DANCE
    battleeffect 0x0032
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_CUT
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_NORMAL
    accuracy 95
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GUST
    battleeffect 0x0095
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_FLYING
    accuracy 100
    pp 35
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_WING_ATTACK
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_FLYING
    accuracy 100
    pp 35
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_WHIRLWIND
    battleeffect 0x001C
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority -6
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x09
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FLY
    battleeffect 0x009B
    pss SPLIT_PHYSICAL
    basepower 90
    type TYPE_FLYING
    accuracy 95
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x06
    contesttype CONTEST_SMART
    terminatedata

move MOVE_BIND
    battleeffect 0x002A
    pss SPLIT_PHYSICAL
    basepower 15
    type TYPE_NORMAL
    accuracy 85
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x15
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SLAM
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_NORMAL
    accuracy 75
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_VINE_WHIP
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 45
    type TYPE_GRASS
    accuracy 100
    pp 25
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_STOMP
    battleeffect 0x0096
    pss SPLIT_PHYSICAL
    basepower 65
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_DOUBLE_KICK
    battleeffect 0x002C
    pss SPLIT_PHYSICAL
    basepower 30
    type TYPE_FIGHTING
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_COOL
    terminatedata

move MOVE_MEGA_KICK
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_NORMAL
    accuracy 75
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_JUMP_KICK
    battleeffect 0x002D
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_FIGHTING
    accuracy 95
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ROLLING_KICK
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_FIGHTING
    accuracy 85
    pp 15
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SAND_ATTACK
    battleeffect 0x0017
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GROUND
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_HEADBUTT
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_HORN_ATTACK
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 65
    type TYPE_NORMAL
    accuracy 100
    pp 25
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FURY_ATTACK
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 15
    type TYPE_NORMAL
    accuracy 85
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_COOL
    terminatedata

move MOVE_HORN_DRILL
    battleeffect 0x0026
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 30
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x09
    contesttype CONTEST_COOL
    terminatedata

move MOVE_TACKLE
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_NORMAL
    accuracy 100
    pp 35
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_BODY_SLAM
    battleeffect 0x0006
    pss SPLIT_PHYSICAL
    basepower 85
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_WRAP
    battleeffect 0x002A
    pss SPLIT_PHYSICAL
    basepower 15
    type TYPE_NORMAL
    accuracy 85
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x15
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_TAKE_DOWN
    battleeffect 0x0030
    pss SPLIT_PHYSICAL
    basepower 90
    type TYPE_NORMAL
    accuracy 85
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_THRASH
    battleeffect 0x001B
    pss SPLIT_PHYSICAL
    basepower 90
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_RANDOM
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_DOUBLE_EDGE
    battleeffect 0x00C6
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x09
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_TAIL_WHIP
    battleeffect 0x0013
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_POISON_STING
    battleeffect 0x0002
    pss SPLIT_PHYSICAL
    basepower 15
    type TYPE_POISON
    accuracy 100
    pp 35
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_TWINEEDLE
    battleeffect 0x004D
    pss SPLIT_PHYSICAL
    basepower 25
    type TYPE_BUG
    accuracy 100
    pp 20
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_COOL
    terminatedata

move MOVE_PIN_MISSILE
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 14
    type TYPE_BUG
    accuracy 85
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_COOL
    terminatedata

move MOVE_LEER
    battleeffect 0x0013
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_COOL
    terminatedata

move MOVE_BITE
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_DARK
    accuracy 100
    pp 25
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_GROWL
    battleeffect 0x0012
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 40
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_ROAR
    battleeffect 0x001C
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority -6
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SING
    battleeffect 0x0001
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 55
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_SUPERSONIC
    battleeffect 0x0031
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 55
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SONIC_BOOM
    battleeffect 0x0082
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_NORMAL
    accuracy 90
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_DISABLE
    battleeffect 0x0056
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 80
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ACID
    battleeffect 0x0048
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_POISON
    accuracy 100
    pp 30
    effectchance 10
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_EMBER
    battleeffect 0x0004
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_FIRE
    accuracy 100
    pp 25
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_FLAMETHROWER
    battleeffect 0x0004
    pss SPLIT_SPECIAL
    basepower 95
    type TYPE_FIRE
    accuracy 100
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_MIST
    battleeffect 0x002E
    pss SPLIT_STATUS
    basepower 0
    type TYPE_ICE
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER_SIDE
    priority 0
    flags FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_WATER_GUN
    battleeffect 0x0000
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_WATER
    accuracy 100
    pp 25
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_HYDRO_PUMP
    battleeffect 0x0000
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_WATER
    accuracy 80
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SURF
    battleeffect 0x0101
    pss SPLIT_SPECIAL
    basepower 95
    type TYPE_WATER
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_ICE_BEAM
    battleeffect 0x0005
    pss SPLIT_SPECIAL
    basepower 95
    type TYPE_ICE
    accuracy 100
    pp 10
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_BLIZZARD
    battleeffect 0x0104
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_ICE
    accuracy 70
    pp 5
    effectchance 10
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_PSYBEAM
    battleeffect 0x004C
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_PSYCHIC
    accuracy 100
    pp 20
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_BUBBLE_BEAM
    battleeffect 0x0046
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_WATER
    accuracy 100
    pp 20
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x02
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_AURORA_BEAM
    battleeffect 0x0044
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_ICE
    accuracy 100
    pp 20
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_HYPER_BEAM
    battleeffect 0x0050
    pss SPLIT_SPECIAL
    basepower 150
    type TYPE_NORMAL
    accuracy 90
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_COOL
    terminatedata

move MOVE_PECK
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 35
    type TYPE_FLYING
    accuracy 100
    pp 35
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_DRILL_PECK
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_FLYING
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SUBMISSION
    battleeffect 0x0030
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_FIGHTING
    accuracy 80
    pp 25
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_LOW_KICK
    battleeffect 0x00C4
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_FIGHTING
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_COUNTER
    battleeffect 0x0059
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_FIGHTING
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority -5
    flags FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SEISMIC_TOSS
    battleeffect 0x0057
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_FIGHTING
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_STRENGTH
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_ABSORB
    battleeffect 0x0003
    pss SPLIT_SPECIAL
    basepower 20
    type TYPE_GRASS
    accuracy 100
    pp 25
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_MEGA_DRAIN
    battleeffect 0x0003
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_GRASS
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_LEECH_SEED
    battleeffect 0x0054
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x15
    contesttype CONTEST_SMART
    terminatedata

move MOVE_GROWTH
    battleeffect 0x000D
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_RAZOR_LEAF
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 55
    type TYPE_GRASS
    accuracy 95
    pp 25
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SOLAR_BEAM
    battleeffect 0x0097
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_GRASS
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x06
    contesttype CONTEST_COOL
    terminatedata

move MOVE_POISON_POWDER
    battleeffect 0x0042
    pss SPLIT_STATUS
    basepower 0
    type TYPE_POISON
    accuracy 75
    pp 35
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_STUN_SPORE
    battleeffect 0x0043
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 75
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SLEEP_POWDER
    battleeffect 0x0001
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 75
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_PETAL_DANCE
    battleeffect 0x001B
    pss SPLIT_SPECIAL
    basepower 90
    type TYPE_GRASS
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_RANDOM
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x15
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_STRING_SHOT
    battleeffect 0x0014
    pss SPLIT_STATUS
    basepower 0
    type TYPE_BUG
    accuracy 95
    pp 40
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_DRAGON_RAGE
    battleeffect 0x0029
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_DRAGON
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FIRE_SPIN
    battleeffect 0x002A
    pss SPLIT_SPECIAL
    basepower 35
    type TYPE_FIRE
    accuracy 70
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x15
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_THUNDER_SHOCK
    battleeffect 0x0006
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_ELECTRIC
    accuracy 100
    pp 30
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_THUNDERBOLT
    battleeffect 0x0006
    pss SPLIT_SPECIAL
    basepower 95
    type TYPE_ELECTRIC
    accuracy 100
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_THUNDER_WAVE
    battleeffect 0x0043
    pss SPLIT_STATUS
    basepower 0
    type TYPE_ELECTRIC
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_COOL
    terminatedata

move MOVE_THUNDER
    battleeffect 0x0098
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_ELECTRIC
    accuracy 70
    pp 10
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ROCK_THROW
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_ROCK
    accuracy 90
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_EARTHQUAKE
    battleeffect 0x0093
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_GROUND
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_FISSURE
    battleeffect 0x0026
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_GROUND
    accuracy 30
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x09
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_DIG
    battleeffect 0x0100
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_GROUND
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x06
    contesttype CONTEST_SMART
    terminatedata

move MOVE_TOXIC
    battleeffect 0x0021
    pss SPLIT_STATUS
    basepower 0
    type TYPE_POISON
    accuracy 85
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_CONFUSION
    battleeffect 0x004C
    pss SPLIT_SPECIAL
    basepower 50
    type TYPE_PSYCHIC
    accuracy 100
    pp 25
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_PSYCHIC
    battleeffect 0x0048
    pss SPLIT_SPECIAL
    basepower 90
    type TYPE_PSYCHIC
    accuracy 100
    pp 10
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_SMART
    terminatedata

move MOVE_HYPNOSIS
    battleeffect 0x0001
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 60
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_MEDITATE
    battleeffect 0x000A
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_AGILITY
    battleeffect 0x0034
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_SNATCH
    appeal 0x01
    contesttype CONTEST_COOL
    terminatedata

move MOVE_QUICK_ATTACK
    battleeffect 0x0067
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_NORMAL
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 1
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x01
    contesttype CONTEST_COOL
    terminatedata

move MOVE_RAGE
    battleeffect 0x0051
    pss SPLIT_PHYSICAL
    basepower 20
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0B
    contesttype CONTEST_COOL
    terminatedata

move MOVE_TELEPORT
    battleeffect 0x0099
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags 0
    appeal 0x01
    contesttype CONTEST_COOL
    terminatedata

move MOVE_NIGHT_SHADE
    battleeffect 0x0057
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_GHOST
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_MIMIC
    battleeffect 0x0052
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_PROTECT
    appeal 0x0C
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_SCREECH
    battleeffect 0x003B
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 85
    pp 40
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0A
    contesttype CONTEST_SMART
    terminatedata

move MOVE_DOUBLE_TEAM
    battleeffect 0x0010
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x01
    contesttype CONTEST_COOL
    terminatedata

move MOVE_RECOVER
    battleeffect 0x0020
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_SMART
    terminatedata

move MOVE_HARDEN
    battleeffect 0x000B
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_MINIMIZE
    battleeffect 0x006C
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_SMOKESCREEN
    battleeffect 0x0017
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0A
    contesttype CONTEST_SMART
    terminatedata

move MOVE_CONFUSE_RAY
    battleeffect 0x0031
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GHOST
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0A
    contesttype CONTEST_SMART
    terminatedata

move MOVE_WITHDRAW
    battleeffect 0x000B
    pss SPLIT_STATUS
    basepower 0
    type TYPE_WATER
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_DEFENSE_CURL
    battleeffect 0x009C
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_BARRIER
    battleeffect 0x0033
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_COOL
    terminatedata

move MOVE_LIGHT_SCREEN
    battleeffect 0x0023
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER_SIDE
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_HAZE
    battleeffect 0x0019
    pss SPLIT_STATUS
    basepower 0
    type TYPE_ICE
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_ACTIVE_FIELD
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_REFLECT
    battleeffect 0x0041
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER_SIDE
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FOCUS_ENERGY
    battleeffect 0x002F
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_COOL
    terminatedata

move MOVE_BIDE
    battleeffect 0x001A
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 1
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_METRONOME
    battleeffect 0x0053
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x0E
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_MIRROR_MOVE
    battleeffect 0x0009
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FLYING
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority 0
    flags 0
    appeal 0x0F
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SELF_DESTRUCT
    battleeffect 0x0007
    pss SPLIT_PHYSICAL
    basepower 200
    type TYPE_NORMAL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x09
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_EGG_BOMB
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_NORMAL
    accuracy 75
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_LICK
    battleeffect 0x0006
    pss SPLIT_PHYSICAL
    basepower 20
    type TYPE_GHOST
    accuracy 100
    pp 30
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x10
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SMOG
    battleeffect 0x0002
    pss SPLIT_SPECIAL
    basepower 20
    type TYPE_POISON
    accuracy 70
    pp 20
    effectchance 40
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SLUDGE
    battleeffect 0x0002
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_POISON
    accuracy 100
    pp 20
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_BONE_CLUB
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 65
    type TYPE_GROUND
    accuracy 85
    pp 20
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_FIRE_BLAST
    battleeffect 0x0004
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_FIRE
    accuracy 85
    pp 5
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_WATERFALL
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_WATER
    accuracy 100
    pp 15
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_CLAMP
    battleeffect 0x002A
    pss SPLIT_PHYSICAL
    basepower 35
    type TYPE_WATER
    accuracy 75
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SWIFT
    battleeffect 0x0011
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SKULL_BASH
    battleeffect 0x0091
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x06
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SPIKE_CANNON
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 20
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_COOL
    terminatedata

move MOVE_CONSTRICT
    battleeffect 0x0046
    pss SPLIT_PHYSICAL
    basepower 10
    type TYPE_NORMAL
    accuracy 100
    pp 35
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x15
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_AMNESIA
    battleeffect 0x0036
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_KINESIS
    battleeffect 0x0017
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 80
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0B
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SOFT_BOILED
    battleeffect 0x0020
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_HI_JUMP_KICK
    battleeffect 0x002D
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_FIGHTING
    accuracy 90
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GLARE
    battleeffect 0x0043
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 75
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_DREAM_EATER
    battleeffect 0x0008
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_PSYCHIC
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_POISON_GAS
    battleeffect 0x0042
    pss SPLIT_STATUS
    basepower 0
    type TYPE_POISON
    accuracy 55
    pp 40
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_BARRAGE
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 15
    type TYPE_NORMAL
    accuracy 85
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_LEECH_LIFE
    battleeffect 0x0003
    pss SPLIT_PHYSICAL
    basepower 20
    type TYPE_BUG
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_LOVELY_KISS
    battleeffect 0x0001
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 75
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SKY_ATTACK
    battleeffect 0x004B
    pss SPLIT_PHYSICAL
    basepower 140
    type TYPE_FLYING
    accuracy 90
    pp 5
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x06
    contesttype CONTEST_COOL
    terminatedata

move MOVE_TRANSFORM
    battleeffect 0x0039
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x17
    contesttype CONTEST_SMART
    terminatedata

move MOVE_BUBBLE
    battleeffect 0x0046
    pss SPLIT_SPECIAL
    basepower 20
    type TYPE_WATER
    accuracy 100
    pp 30
    effectchance 10
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x02
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_DIZZY_PUNCH
    battleeffect 0x004C
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x10
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SPORE
    battleeffect 0x0001
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0A
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_FLASH
    battleeffect 0x0017
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0A
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_PSYWAVE
    battleeffect 0x0058
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_PSYCHIC
    accuracy 80
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SPLASH
    battleeffect 0x0055
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x10
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_ACID_ARMOR
    battleeffect 0x0033
    pss SPLIT_STATUS
    basepower 0
    type TYPE_POISON
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_CRABHAMMER
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 90
    type TYPE_WATER
    accuracy 85
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_EXPLOSION
    battleeffect 0x0007
    pss SPLIT_PHYSICAL
    basepower 250
    type TYPE_NORMAL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x09
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_FURY_SWIPES
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 18
    type TYPE_NORMAL
    accuracy 80
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_BONEMERANG
    battleeffect 0x002C
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_GROUND
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_REST
    battleeffect 0x0025
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_ROCK_SLIDE
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 75
    type TYPE_ROCK
    accuracy 90
    pp 10
    effectchance 30
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_HYPER_FANG
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_NORMAL
    accuracy 90
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SHARPEN
    battleeffect 0x000A
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_CONVERSION
    battleeffect 0x001E
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x17
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_TRI_ATTACK
    battleeffect 0x0024
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SUPER_FANG
    battleeffect 0x0028
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SLASH
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SUBSTITUTE
    battleeffect 0x004F
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x17
    contesttype CONTEST_SMART
    terminatedata

move MOVE_STRUGGLE
    battleeffect 0x00FE
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_NORMAL
    accuracy 0
    pp 1
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SKETCH
    battleeffect 0x005F
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 1
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags 0
    appeal 0x17
    contesttype CONTEST_SMART
    terminatedata

move MOVE_TRIPLE_KICK
    battleeffect 0x0068
    pss SPLIT_PHYSICAL
    basepower 10
    type TYPE_FIGHTING
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_COOL
    terminatedata

move MOVE_THIEF
    battleeffect 0x0069
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_DARK
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0C
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SPIDER_WEB
    battleeffect 0x006A
    pss SPLIT_STATUS
    basepower 0
    type TYPE_BUG
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0D
    contesttype CONTEST_SMART
    terminatedata

move MOVE_MIND_READER
    battleeffect 0x005E
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_NIGHTMARE
    battleeffect 0x006B
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GHOST
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FLAME_WHEEL
    battleeffect 0x007D
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_FIRE
    accuracy 100
    pp 25
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SNORE
    battleeffect 0x005C
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_CURSE
    battleeffect 0x006D
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GHOST
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x15
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_FLAIL
    battleeffect 0x0063
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_CONVERSION_2
    battleeffect 0x005D
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags 0
    appeal 0x17
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_AEROBLAST
    battleeffect 0x002B
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_FLYING
    accuracy 95
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_COOL
    terminatedata

move MOVE_COTTON_SPORE
    battleeffect 0x003C
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 85
    pp 40
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x01
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_REVERSAL
    battleeffect 0x0063
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_FIGHTING
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SPITE
    battleeffect 0x0064
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GHOST
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_POWDER_SNOW
    battleeffect 0x0005
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_ICE
    accuracy 100
    pp 25
    effectchance 10
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_PROTECT
    battleeffect 0x006F
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 3
    flags 0
    appeal 0x10
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_MACH_PUNCH
    battleeffect 0x0067
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_FIGHTING
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 1
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x01
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SCARY_FACE
    battleeffect 0x003C
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x02
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_FAINT_ATTACK
    battleeffect 0x0011
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_DARK
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SWEET_KISS
    battleeffect 0x0031
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FAIRY
    accuracy 75
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_BELLY_DRUM
    battleeffect 0x008E
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_SLUDGE_BOMB
    battleeffect 0x0002
    pss SPLIT_SPECIAL
    basepower 90
    type TYPE_POISON
    accuracy 100
    pp 10
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_MUD_SLAP
    battleeffect 0x0049
    pss SPLIT_SPECIAL
    basepower 20
    type TYPE_GROUND
    accuracy 100
    pp 10
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_OCTAZOOKA
    battleeffect 0x0049
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_WATER
    accuracy 85
    pp 10
    effectchance 50
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SPIKES
    battleeffect 0x0070
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GROUND
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_OPPONENTS_FIELD
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ZAP_CANNON
    battleeffect 0x0006
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_ELECTRIC
    accuracy 50
    pp 5
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FORESIGHT
    battleeffect 0x0071
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_DESTINY_BOND
    battleeffect 0x0062
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GHOST
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags 0
    appeal 0x09
    contesttype CONTEST_SMART
    terminatedata

move MOVE_PERISH_SONG
    battleeffect 0x0072
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_ACTIVE_FIELD
    priority 0
    flags FLAG_HIDE_SHADOW
    appeal 0x0A
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_ICY_WIND
    battleeffect 0x0046
    pss SPLIT_SPECIAL
    basepower 55
    type TYPE_ICE
    accuracy 95
    pp 15
    effectchance 100
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x02
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_DETECT
    battleeffect 0x006F
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FIGHTING
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_USER
    priority 3
    flags 0
    appeal 0x10
    contesttype CONTEST_COOL
    terminatedata

move MOVE_BONE_RUSH
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 25
    type TYPE_GROUND
    accuracy 80
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_LOCK_ON
    battleeffect 0x005E
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_OUTRAGE
    battleeffect 0x001B
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_DRAGON
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_RANDOM
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SANDSTORM
    battleeffect 0x0073
    pss SPLIT_STATUS
    basepower 0
    type TYPE_ROCK
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_ACTIVE_FIELD
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_GIGA_DRAIN
    battleeffect 0x0003
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_GRASS
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ENDURE
    battleeffect 0x0074
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 3
    flags FLAG_KEEP_HP_BAR
    appeal 0x0D
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_CHARM
    battleeffect 0x003A
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FAIRY
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_ROLLOUT
    battleeffect 0x0075
    pss SPLIT_PHYSICAL
    basepower 30
    type TYPE_ROCK
    accuracy 90
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_FALSE_SWIPE
    battleeffect 0x0065
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_NORMAL
    accuracy 100
    pp 40
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x10
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SWAGGER
    battleeffect 0x0076
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 90
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_MILK_DRINK
    battleeffect 0x0020
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_SPARK
    battleeffect 0x0006
    pss SPLIT_PHYSICAL
    basepower 65
    type TYPE_ELECTRIC
    accuracy 100
    pp 20
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FURY_CUTTER
    battleeffect 0x0077
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_BUG
    accuracy 95
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_COOL
    terminatedata

move MOVE_STEEL_WING
    battleeffect 0x008A
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_STEEL
    accuracy 90
    pp 25
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_MEAN_LOOK
    battleeffect 0x006A
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0A
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_ATTRACT
    battleeffect 0x0078
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_SLEEP_TALK
    battleeffect 0x0061
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority 0
    flags 0
    appeal 0x05
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_HEAL_BELL
    battleeffect 0x0066
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_USER_SIDE
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_RETURN
    battleeffect 0x0079
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_PRESENT
    battleeffect 0x007A
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 90
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x10
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_FRUSTRATION
    battleeffect 0x007B
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_SAFEGUARD
    battleeffect 0x007C
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 25
    effectchance 0
    target MOVE_TARGET_USER_SIDE
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_PAIN_SPLIT
    battleeffect 0x005B
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0A
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SACRED_FIRE
    battleeffect 0x007D
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_FIRE
    accuracy 95
    pp 5
    effectchance 50
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_MAGNITUDE
    battleeffect 0x007E
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_GROUND
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_DYNAMIC_PUNCH
    battleeffect 0x004C
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_FIGHTING
    accuracy 50
    pp 5
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_MEGAHORN
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_BUG
    accuracy 85
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_DRAGON_BREATH
    battleeffect 0x0006
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_DRAGON
    accuracy 100
    pp 20
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_BATON_PASS
    battleeffect 0x007F
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags 0
    appeal 0x10
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_ENCORE
    battleeffect 0x005A
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x14
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_PURSUIT
    battleeffect 0x0080
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_DARK
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_RAPID_SPIN
    battleeffect 0x0081
    pss SPLIT_PHYSICAL
    basepower 20
    type TYPE_NORMAL
    accuracy 100
    pp 40
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SWEET_SCENT
    battleeffect 0x0018
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_IRON_TAIL
    battleeffect 0x0045
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_STEEL
    accuracy 75
    pp 15
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_METAL_CLAW
    battleeffect 0x008B
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_STEEL
    accuracy 95
    pp 35
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_VITAL_THROW
    battleeffect 0x004E
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_FIGHTING
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority -1
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x02
    contesttype CONTEST_COOL
    terminatedata

move MOVE_MORNING_SUN
    battleeffect 0x0084
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SYNTHESIS
    battleeffect 0x0084
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_SMART
    terminatedata

move MOVE_MOONLIGHT
    battleeffect 0x0084
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FAIRY
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_HIDDEN_POWER
    battleeffect 0x0087
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x17
    contesttype CONTEST_SMART
    terminatedata

move MOVE_CROSS_CHOP
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_FIGHTING
    accuracy 80
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_TWISTER
    battleeffect 0x0092
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_DRAGON
    accuracy 100
    pp 20
    effectchance 20
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_RAIN_DANCE
    battleeffect 0x0088
    pss SPLIT_STATUS
    basepower 0
    type TYPE_WATER
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_ACTIVE_FIELD
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SUNNY_DAY
    battleeffect 0x0089
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FIRE
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_ACTIVE_FIELD
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_CRUNCH
    battleeffect 0x0045
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_DARK
    accuracy 100
    pp 15
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_MIRROR_COAT
    battleeffect 0x0090
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_PSYCHIC
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority -5
    flags 0
    appeal 0x0F
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_PSYCH_UP
    battleeffect 0x008F
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_SMART
    terminatedata

move MOVE_EXTREME_SPEED
    battleeffect 0x0067
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_NORMAL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 1
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x01
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ANCIENT_POWER
    battleeffect 0x008C
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_ROCK
    accuracy 100
    pp 5
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SHADOW_BALL
    battleeffect 0x0048
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_GHOST
    accuracy 100
    pp 15
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FUTURE_SIGHT
    battleeffect 0x0094
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_PSYCHIC
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags 0
    appeal 0x11
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ROCK_SMASH
    battleeffect 0x0045
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_FIGHTING
    accuracy 100
    pp 15
    effectchance 50
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_WHIRLPOOL
    battleeffect 0x0105
    pss SPLIT_SPECIAL
    basepower 15
    type TYPE_WATER
    accuracy 70
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x15
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_BEAT_UP
    battleeffect 0x009A
    pss SPLIT_PHYSICAL
    basepower 10
    type TYPE_DARK
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FAKE_OUT
    battleeffect 0x009E
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 1
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_UPROAR
    battleeffect 0x009F
    pss SPLIT_SPECIAL
    basepower 50
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_RANDOM
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0A
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_STOCKPILE
    battleeffect 0x00A0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SPIT_UP
    battleeffect 0x00A1
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SWALLOW
    battleeffect 0x00A2
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_HEAT_WAVE
    battleeffect 0x0004
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_FIRE
    accuracy 90
    pp 10
    effectchance 10
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_HAIL
    battleeffect 0x00A4
    pss SPLIT_STATUS
    basepower 0
    type TYPE_ICE
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_ACTIVE_FIELD
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_TORMENT
    battleeffect 0x00A5
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x10
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_FLATTER
    battleeffect 0x00A6
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_WILL_O_WISP
    battleeffect 0x00A7
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FIRE
    accuracy 75
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_MEMENTO
    battleeffect 0x00A8
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x09
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_FACADE
    battleeffect 0x00A9
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_FOCUS_PUNCH
    battleeffect 0x00AA
    pss SPLIT_PHYSICAL
    basepower 150
    type TYPE_FIGHTING
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority -3
    flags FLAG_HIDE_SHADOW | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x06
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SMELLING_SALT
    battleeffect 0x00AB
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x10
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FOLLOW_ME
    battleeffect 0x00AC
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 3
    flags 0
    appeal 0x0E
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_NATURE_POWER
    battleeffect 0x00AD
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x0E
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_CHARGE
    battleeffect 0x00AE
    pss SPLIT_STATUS
    basepower 0
    type TYPE_ELECTRIC
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_SMART
    terminatedata

move MOVE_TAUNT
    battleeffect 0x00AF
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x10
    contesttype CONTEST_SMART
    terminatedata

move MOVE_HELPING_HAND
    battleeffect 0x00B0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_ALLY
    priority 5
    flags 0
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_TRICK
    battleeffect 0x00B1
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0C
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ROLE_PLAY
    battleeffect 0x00B2
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags 0
    appeal 0x17
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_WISH
    battleeffect 0x00B3
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_HIDE_SHADOW
    appeal 0x08
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_ASSIST
    battleeffect 0x00B4
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority 0
    flags 0
    appeal 0x0E
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_INGRAIN
    battleeffect 0x00B5
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x15
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SUPERPOWER
    battleeffect 0x00B6
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_FIGHTING
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_MAGIC_COAT
    battleeffect 0x00B7
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority 4
    flags 0
    appeal 0x0F
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_RECYCLE
    battleeffect 0x00B8
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x0C
    contesttype CONTEST_SMART
    terminatedata

move MOVE_REVENGE
    battleeffect 0x00B9
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_FIGHTING
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority -4
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_BRICK_BREAK
    battleeffect 0x00BA
    pss SPLIT_PHYSICAL
    basepower 75
    type TYPE_FIGHTING
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_YAWN
    battleeffect 0x00BB
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_KNOCK_OFF
    battleeffect 0x00BC
    pss SPLIT_PHYSICAL
    basepower 20
    type TYPE_DARK
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ENDEAVOR
    battleeffect 0x00BD
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_ERUPTION
    battleeffect 0x00BE
    pss SPLIT_SPECIAL
    basepower 150
    type TYPE_FIRE
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SKILL_SWAP
    battleeffect 0x00BF
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0C
    contesttype CONTEST_SMART
    terminatedata

move MOVE_IMPRISON
    battleeffect 0x00C0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags 0
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_REFRESH
    battleeffect 0x00C1
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_GRUDGE
    battleeffect 0x00C2
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GHOST
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags 0
    appeal 0x0A
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SNATCH
    battleeffect 0x00C3
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority 4
    flags 0
    appeal 0x0C
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SECRET_POWER
    battleeffect 0x00C5
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0E
    contesttype CONTEST_SMART
    terminatedata

move MOVE_DIVE
    battleeffect 0x00FF
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_WATER
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x06
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_ARM_THRUST
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 15
    type TYPE_FIGHTING
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_CAMOUFLAGE
    battleeffect 0x00D5
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_SMART
    terminatedata

move MOVE_TAIL_GLOW
    battleeffect 0x0035
    pss SPLIT_STATUS
    basepower 0
    type TYPE_BUG
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_LUSTER_PURGE
    battleeffect 0x0048
    pss SPLIT_SPECIAL
    basepower 70
    type TYPE_PSYCHIC
    accuracy 100
    pp 5
    effectchance 50
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_SMART
    terminatedata

move MOVE_MIST_BALL
    battleeffect 0x0047
    pss SPLIT_SPECIAL
    basepower 70
    type TYPE_PSYCHIC
    accuracy 100
    pp 5
    effectchance 50
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FEATHER_DANCE
    battleeffect 0x003A
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FLYING
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_TEETER_DANCE
    battleeffect 0x00C7
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0E
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_BLAZE_KICK
    battleeffect 0x00C8
    pss SPLIT_PHYSICAL
    basepower 85
    type TYPE_FIRE
    accuracy 90
    pp 10
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_MUD_SPORT
    battleeffect 0x00C9
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GROUND
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_ACTIVE_FIELD
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_ICE_BALL
    battleeffect 0x0075
    pss SPLIT_PHYSICAL
    basepower 30
    type TYPE_ICE
    accuracy 90
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_NEEDLE_ARM
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_GRASS
    accuracy 100
    pp 15
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SLACK_OFF
    battleeffect 0x0020
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_HYPER_VOICE
    battleeffect 0x0000
    pss SPLIT_SPECIAL
    basepower 90
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_POISON_FANG
    battleeffect 0x00CA
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_POISON
    accuracy 100
    pp 15
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x04
    contesttype CONTEST_SMART
    terminatedata

move MOVE_CRUSH_CLAW
    battleeffect 0x0045
    pss SPLIT_PHYSICAL
    basepower 75
    type TYPE_NORMAL
    accuracy 95
    pp 10
    effectchance 50
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_BLAST_BURN
    battleeffect 0x0050
    pss SPLIT_SPECIAL
    basepower 150
    type TYPE_FIRE
    accuracy 90
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_HYDRO_CANNON
    battleeffect 0x0050
    pss SPLIT_SPECIAL
    basepower 150
    type TYPE_WATER
    accuracy 90
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_METEOR_MASH
    battleeffect 0x008B
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_STEEL
    accuracy 85
    pp 10
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ASTONISH
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 30
    type TYPE_GHOST
    accuracy 100
    pp 15
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_WEATHER_BALL
    battleeffect 0x00CB
    pss SPLIT_SPECIAL
    basepower 50
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_SMART
    terminatedata

move MOVE_AROMATHERAPY
    battleeffect 0x0066
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_USER_SIDE
    priority 0
    flags FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FAKE_TEARS
    battleeffect 0x003E
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_AIR_CUTTER
    battleeffect 0x002B
    pss SPLIT_SPECIAL
    basepower 55
    type TYPE_FLYING
    accuracy 95
    pp 25
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_OVERHEAT
    battleeffect 0x00CC
    pss SPLIT_SPECIAL
    basepower 140
    type TYPE_FIRE
    accuracy 90
    pp 5
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_ODOR_SLEUTH
    battleeffect 0x0071
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x14
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ROCK_TOMB
    battleeffect 0x0046
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_ROCK
    accuracy 80
    pp 10
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x02
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SILVER_WIND
    battleeffect 0x008C
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_BUG
    accuracy 100
    pp 5
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_METAL_SOUND
    battleeffect 0x003E
    pss SPLIT_STATUS
    basepower 0
    type TYPE_STEEL
    accuracy 85
    pp 40
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0A
    contesttype CONTEST_SMART
    terminatedata

move MOVE_GRASS_WHISTLE
    battleeffect 0x0001
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 55
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_TICKLE
    battleeffect 0x00CD
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_COSMIC_POWER
    battleeffect 0x00CE
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_COOL
    terminatedata

move MOVE_WATER_SPOUT
    battleeffect 0x00BE
    pss SPLIT_SPECIAL
    basepower 150
    type TYPE_WATER
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SIGNAL_BEAM
    battleeffect 0x004C
    pss SPLIT_SPECIAL
    basepower 75
    type TYPE_BUG
    accuracy 100
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SHADOW_PUNCH
    battleeffect 0x0011
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_GHOST
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_SMART
    terminatedata

move MOVE_EXTRASENSORY
    battleeffect 0x001F
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_PSYCHIC
    accuracy 100
    pp 30
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SKY_UPPERCUT
    battleeffect 0x00CF
    pss SPLIT_PHYSICAL
    basepower 85
    type TYPE_FIGHTING
    accuracy 90
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SAND_TOMB
    battleeffect 0x002A
    pss SPLIT_PHYSICAL
    basepower 15
    type TYPE_GROUND
    accuracy 70
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x15
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SHEER_COLD
    battleeffect 0x0026
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_ICE
    accuracy 30
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x09
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_MUDDY_WATER
    battleeffect 0x0049
    pss SPLIT_SPECIAL
    basepower 95
    type TYPE_WATER
    accuracy 85
    pp 10
    effectchance 30
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_BULLET_SEED
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 25
    type TYPE_GRASS
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_COOL
    terminatedata

move MOVE_AERIAL_ACE
    battleeffect 0x0011
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_FLYING
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ICICLE_SPEAR
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 10
    type TYPE_ICE
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_IRON_DEFENSE
    battleeffect 0x0033
    pss SPLIT_STATUS
    basepower 0
    type TYPE_STEEL
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0D
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_BLOCK
    battleeffect 0x006A
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0D
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_HOWL
    battleeffect 0x000A
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_COOL
    terminatedata

move MOVE_DRAGON_CLAW
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_DRAGON
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FRENZY_PLANT
    battleeffect 0x0050
    pss SPLIT_SPECIAL
    basepower 150
    type TYPE_GRASS
    accuracy 90
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_COOL
    terminatedata

move MOVE_BULK_UP
    battleeffect 0x00D0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FIGHTING
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_BOUNCE
    battleeffect 0x0107
    pss SPLIT_PHYSICAL
    basepower 85
    type TYPE_FLYING
    accuracy 85
    pp 5
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x06
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_MUD_SHOT
    battleeffect 0x0046
    pss SPLIT_SPECIAL
    basepower 55
    type TYPE_GROUND
    accuracy 95
    pp 15
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x02
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_POISON_TAIL
    battleeffect 0x00D1
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_POISON
    accuracy 100
    pp 25
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x04
    contesttype CONTEST_SMART
    terminatedata

move MOVE_COVET
    battleeffect 0x0069
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_NORMAL
    accuracy 100
    pp 40
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0C
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_VOLT_TACKLE
    battleeffect 0x0106
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_ELECTRIC
    accuracy 100
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x16
    contesttype CONTEST_COOL
    terminatedata

move MOVE_MAGICAL_LEAF
    battleeffect 0x0011
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_GRASS
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_WATER_SPORT
    battleeffect 0x00D2
    pss SPLIT_STATUS
    basepower 0
    type TYPE_WATER
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_ACTIVE_FIELD
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_CALM_MIND
    battleeffect 0x00D3
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_SMART
    terminatedata

move MOVE_LEAF_BLADE
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 90
    type TYPE_GRASS
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_DRAGON_DANCE
    battleeffect 0x00D4
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DRAGON
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ROCK_BLAST
    battleeffect 0x001D
    pss SPLIT_PHYSICAL
    basepower 25
    type TYPE_ROCK
    accuracy 80
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_SHOCK_WAVE
    battleeffect 0x0011
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_ELECTRIC
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_WATER_PULSE
    battleeffect 0x004C
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_WATER
    accuracy 100
    pp 20
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_DOOM_DESIRE
    battleeffect 0x0094
    pss SPLIT_SPECIAL
    basepower 140
    type TYPE_STEEL
    accuracy 85
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_PSYCHO_BOOST
    battleeffect 0x00CC
    pss SPLIT_SPECIAL
    basepower 140
    type TYPE_PSYCHIC
    accuracy 90
    pp 5
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ROOST
    battleeffect 0x00D6
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FLYING
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GRAVITY
    battleeffect 0x00D7
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_ACTIVE_FIELD
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_MIRACLE_EYE
    battleeffect 0x00D8
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 40
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x14
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_WAKE_UP_SLAP
    battleeffect 0x00D9
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_FIGHTING
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x10
    contesttype CONTEST_SMART
    terminatedata

move MOVE_HAMMER_ARM
    battleeffect 0x00DA
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_FIGHTING
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x02
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GYRO_BALL
    battleeffect 0x00DB
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_STEEL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_HEALING_WISH
    battleeffect 0x00DC
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags 0
    appeal 0x08
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_BRINE
    battleeffect 0x00DD
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_WATER
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_SMART
    terminatedata

move MOVE_NATURAL_GIFT
    battleeffect 0x00DE
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FEINT
    battleeffect 0x00DF
    pss SPLIT_PHYSICAL
    basepower 30
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 2
    flags 0
    appeal 0x10
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_PLUCK
    battleeffect 0x00E0
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_FLYING
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0C
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_TAILWIND
    battleeffect 0x00E1
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FLYING
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER_SIDE
    priority 0
    flags FLAG_SNATCH
    appeal 0x01
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ACUPRESSURE
    battleeffect 0x00E2
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_ACUPRESSURE
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_COOL
    terminatedata

move MOVE_METAL_BURST
    battleeffect 0x00E3
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_STEEL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority 0
    flags FLAG_MIRROR_MOVE
    appeal 0x0F
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_U_TURN
    battleeffect 0x00E4
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_BUG
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x10
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_CLOSE_COMBAT
    battleeffect 0x00E5
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_FIGHTING
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x16
    contesttype CONTEST_SMART
    terminatedata

move MOVE_PAYBACK
    battleeffect 0x00E6
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_DARK
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x06
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ASSURANCE
    battleeffect 0x00E7
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_DARK
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_EMBARGO
    battleeffect 0x00E8
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0D
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_FLING
    battleeffect 0x00E9
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_DARK
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x17
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_PSYCHO_SHIFT
    battleeffect 0x00EA
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x10
    contesttype CONTEST_COOL
    terminatedata

move MOVE_TRUMP_CARD
    battleeffect 0x00EB
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_NORMAL
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x15
    contesttype CONTEST_COOL
    terminatedata

move MOVE_HEAL_BLOCK
    battleeffect 0x00EC
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0D
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_WRING_OUT
    battleeffect 0x00ED
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_NORMAL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x16
    contesttype CONTEST_SMART
    terminatedata

move MOVE_POWER_TRICK
    battleeffect 0x00EE
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x10
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GASTRO_ACID
    battleeffect 0x00EF
    pss SPLIT_STATUS
    basepower 0
    type TYPE_POISON
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x0D
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_LUCKY_CHANT
    battleeffect 0x00F0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER_SIDE
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x0D
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_ME_FIRST
    battleeffect 0x00F1
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_ME_FIRST
    priority 0
    flags FLAG_PROTECT
    appeal 0x01
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_COPYCAT
    battleeffect 0x00F2
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_DEPENDS
    priority 0
    flags 0
    appeal 0x0C
    contesttype CONTEST_COOL
    terminatedata

move MOVE_POWER_SWAP
    battleeffect 0x00F3
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x10
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_GUARD_SWAP
    battleeffect 0x00F4
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x10
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_PUNISHMENT
    battleeffect 0x00F5
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_DARK
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x17
    contesttype CONTEST_SMART
    terminatedata

move MOVE_LAST_RESORT
    battleeffect 0x00F6
    pss SPLIT_PHYSICAL
    basepower 130
    type TYPE_NORMAL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x15
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_WORRY_SEED
    battleeffect 0x00F7
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SUCKER_PUNCH
    battleeffect 0x00F8
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_DARK
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 1
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x01
    contesttype CONTEST_SMART
    terminatedata

move MOVE_TOXIC_SPIKES
    battleeffect 0x00F9
    pss SPLIT_STATUS
    basepower 0
    type TYPE_POISON
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_OPPONENTS_FIELD
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x0D
    contesttype CONTEST_SMART
    terminatedata

move MOVE_HEART_SWAP
    battleeffect 0x00FA
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x10
    contesttype CONTEST_COOL
    terminatedata

move MOVE_AQUA_RING
    battleeffect 0x00FB
    pss SPLIT_STATUS
    basepower 0
    type TYPE_WATER
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags 0
    appeal 0x08
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_MAGNET_RISE
    battleeffect 0x00FC
    pss SPLIT_STATUS
    basepower 0
    type TYPE_ELECTRIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_FLARE_BLITZ
    battleeffect 0x00FD
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_FIRE
    accuracy 100
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x16
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FORCE_PALM
    battleeffect 0x0006
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_FIGHTING
    accuracy 100
    pp 10
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_AURA_SPHERE
    battleeffect 0x0011
    pss SPLIT_SPECIAL
    basepower 90
    type TYPE_FIGHTING
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_ROCK_POLISH
    battleeffect 0x0034
    pss SPLIT_STATUS
    basepower 0
    type TYPE_ROCK
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x01
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_POISON_JAB
    battleeffect 0x0002
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_POISON
    accuracy 100
    pp 20
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x04
    contesttype CONTEST_SMART
    terminatedata

move MOVE_DARK_PULSE
    battleeffect 0x001F
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_DARK
    accuracy 100
    pp 15
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_NIGHT_SLASH
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_DARK
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_AQUA_TAIL
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 90
    type TYPE_WATER
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_SEED_BOMB
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_GRASS
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_AIR_SLASH
    battleeffect 0x001F
    pss SPLIT_SPECIAL
    basepower 75
    type TYPE_FLYING
    accuracy 95
    pp 20
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_X_SCISSOR
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_BUG
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_BUG_BUZZ
    battleeffect 0x0048
    pss SPLIT_SPECIAL
    basepower 90
    type TYPE_BUG
    accuracy 100
    pp 10
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_DRAGON_PULSE
    battleeffect 0x0000
    pss SPLIT_SPECIAL
    basepower 90
    type TYPE_DRAGON
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_SMART
    terminatedata

move MOVE_DRAGON_RUSH
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_DRAGON
    accuracy 75
    pp 10
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_POWER_GEM
    battleeffect 0x0000
    pss SPLIT_SPECIAL
    basepower 70
    type TYPE_ROCK
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_DRAIN_PUNCH
    battleeffect 0x0003
    pss SPLIT_PHYSICAL
    basepower 75
    type TYPE_FIGHTING
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x14
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_VACUUM_WAVE
    battleeffect 0x0067
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_FIGHTING
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 1
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x01
    contesttype CONTEST_SMART
    terminatedata

move MOVE_FOCUS_BLAST
    battleeffect 0x0048
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_FIGHTING
    accuracy 70
    pp 5
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ENERGY_BALL
    battleeffect 0x0048
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_GRASS
    accuracy 100
    pp 10
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_BRAVE_BIRD
    battleeffect 0x00C6
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_FLYING
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_EARTH_POWER
    battleeffect 0x0048
    pss SPLIT_SPECIAL
    basepower 90
    type TYPE_GROUND
    accuracy 100
    pp 10
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SWITCHEROO
    battleeffect 0x00B1
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0C
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GIGA_IMPACT
    battleeffect 0x0050
    pss SPLIT_PHYSICAL
    basepower 150
    type TYPE_NORMAL
    accuracy 90
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x16
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_NASTY_PLOT
    battleeffect 0x0035
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_BULLET_PUNCH
    battleeffect 0x0067
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_STEEL
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 1
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x01
    contesttype CONTEST_SMART
    terminatedata

move MOVE_AVALANCHE
    battleeffect 0x00B9
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_ICE
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority -4
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ICE_SHARD
    battleeffect 0x0067
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_ICE
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 1
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x01
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SHADOW_CLAW
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_GHOST
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x11
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_THUNDER_FANG
    battleeffect 0x0113
    pss SPLIT_PHYSICAL
    basepower 65
    type TYPE_ELECTRIC
    accuracy 95
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ICE_FANG
    battleeffect 0x0112
    pss SPLIT_PHYSICAL
    basepower 65
    type TYPE_ICE
    accuracy 95
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FIRE_FANG
    battleeffect 0x0111
    pss SPLIT_PHYSICAL
    basepower 65
    type TYPE_FIRE
    accuracy 95
    pp 15
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SHADOW_SNEAK
    battleeffect 0x0067
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_GHOST
    accuracy 100
    pp 30
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 1
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x01
    contesttype CONTEST_SMART
    terminatedata

move MOVE_MUD_BOMB
    battleeffect 0x0049
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_GROUND
    accuracy 85
    pp 10
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_SMART
    terminatedata

move MOVE_PSYCHO_CUT
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_PSYCHIC
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ZEN_HEADBUTT
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_PSYCHIC
    accuracy 90
    pp 15
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_MIRROR_SHOT
    battleeffect 0x0049
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_STEEL
    accuracy 85
    pp 10
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_FLASH_CANNON
    battleeffect 0x0048
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_STEEL
    accuracy 100
    pp 10
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ROCK_CLIMB
    battleeffect 0x004C
    pss SPLIT_PHYSICAL
    basepower 90
    type TYPE_NORMAL
    accuracy 85
    pp 20
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_COOL
    terminatedata

move MOVE_DEFOG
    battleeffect 0x0102
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FLYING
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0D
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_TRICK_ROOM
    battleeffect 0x0103
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 5
    effectchance 0
    target MOVE_TARGET_ACTIVE_FIELD
    priority -7
    flags FLAG_MIRROR_MOVE
    appeal 0x0E
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_DRACO_METEOR
    battleeffect 0x00CC
    pss SPLIT_SPECIAL
    basepower 140
    type TYPE_DRAGON
    accuracy 90
    pp 5
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_SMART
    terminatedata

move MOVE_DISCHARGE
    battleeffect 0x0006
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_ELECTRIC
    accuracy 100
    pp 15
    effectchance 30
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_COOL
    terminatedata

move MOVE_LAVA_PLUME
    battleeffect 0x0004
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_FIRE
    accuracy 100
    pp 15
    effectchance 30
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_LEAF_STORM
    battleeffect 0x00CC
    pss SPLIT_SPECIAL
    basepower 140
    type TYPE_GRASS
    accuracy 90
    pp 5
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_POWER_WHIP
    battleeffect 0x0000
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_GRASS
    accuracy 85
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_ROCK_WRECKER
    battleeffect 0x0050
    pss SPLIT_PHYSICAL
    basepower 150
    type TYPE_ROCK
    accuracy 90
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_CROSS_POISON
    battleeffect 0x00D1
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_POISON
    accuracy 100
    pp 20
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GUNK_SHOT
    battleeffect 0x0002
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_POISON
    accuracy 70
    pp 5
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_IRON_HEAD
    battleeffect 0x001F
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_STEEL
    accuracy 100
    pp 15
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_MAGNET_BOMB
    battleeffect 0x0011
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_STEEL
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x05
    contesttype CONTEST_COOL
    terminatedata

move MOVE_STONE_EDGE
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 100
    type TYPE_ROCK
    accuracy 80
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_CAPTIVATE
    battleeffect 0x0109
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_STEALTH_ROCK
    battleeffect 0x010A
    pss SPLIT_STATUS
    basepower 0
    type TYPE_ROCK
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_OPPONENTS_FIELD
    priority 0
    flags 0
    appeal 0x0D
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GRASS_KNOT
    battleeffect 0x00C4
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_GRASS
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x04
    contesttype CONTEST_SMART
    terminatedata

move MOVE_CHATTER
    battleeffect 0x010B
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_FLYING
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT
    appeal 0x17
    contesttype CONTEST_SMART
    terminatedata

move MOVE_JUDGMENT
    battleeffect 0x010C
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0E
    contesttype CONTEST_SMART
    terminatedata

move MOVE_BUG_BITE
    battleeffect 0x00E0
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_BUG
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0C
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_CHARGE_BEAM
    battleeffect 0x0114
    pss SPLIT_SPECIAL
    basepower 50
    type TYPE_ELECTRIC
    accuracy 90
    pp 10
    effectchance 70
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_WOOD_HAMMER
    battleeffect 0x00C6
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_GRASS
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x12
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_AQUA_JET
    battleeffect 0x0067
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_WATER
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 1
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x01
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_ATTACK_ORDER
    battleeffect 0x002B
    pss SPLIT_PHYSICAL
    basepower 90
    type TYPE_BUG
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_SMART
    terminatedata

move MOVE_DEFEND_ORDER
    battleeffect 0x00CE
    pss SPLIT_STATUS
    basepower 0
    type TYPE_BUG
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x0B
    contesttype CONTEST_SMART
    terminatedata

move MOVE_HEAL_ORDER
    battleeffect 0x0020
    pss SPLIT_STATUS
    basepower 0
    type TYPE_BUG
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_SNATCH
    appeal 0x08
    contesttype CONTEST_SMART
    terminatedata

move MOVE_HEAD_SMASH
    battleeffect 0x010D
    pss SPLIT_PHYSICAL
    basepower 150
    type TYPE_ROCK
    accuracy 80
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x16
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_DOUBLE_HIT
    battleeffect 0x002C
    pss SPLIT_PHYSICAL
    basepower 35
    type TYPE_NORMAL
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x07
    contesttype CONTEST_SMART
    terminatedata

move MOVE_ROAR_OF_TIME
    battleeffect 0x0050
    pss SPLIT_SPECIAL
    basepower 150
    type TYPE_DRAGON
    accuracy 90
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SPACIAL_REND
    battleeffect 0x002B
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_DRAGON
    accuracy 95
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x04
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_LUNAR_DANCE
    battleeffect 0x010E
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_HIDE_SHADOW
    appeal 0x08
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_CRUSH_GRIP
    battleeffect 0x00ED
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_NORMAL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT | FLAG_CONTACT
    appeal 0x0F
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_MAGMA_STORM
    battleeffect 0x002A
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_FIRE
    accuracy 70
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x07
    contesttype CONTEST_TOUGH
    terminatedata

move MOVE_DARK_VOID
    battleeffect 0x0001
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 80
    pp 10
    effectchance 0
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_MIRROR_MOVE | FLAG_MAGIC_COAT | FLAG_PROTECT
    appeal 0x13
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SEED_FLARE
    battleeffect 0x010F
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_GRASS
    accuracy 85
    pp 5
    effectchance 40
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_HIDE_SHADOW | FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x16
    contesttype CONTEST_COOL
    terminatedata

move MOVE_OMINOUS_WIND
    battleeffect 0x008C
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_GHOST
    accuracy 100
    pp 5
    effectchance 10
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x0B
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SHADOW_FORCE
    battleeffect 0x0110
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_GHOST
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_CONTACT
    appeal 0x16
    contesttype CONTEST_SMART
    terminatedata

move MOVE_SHADOW_FORCE+1
    battleeffect 0x0000
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x10
    contesttype CONTEST_BEAUTY
    terminatedata

move MOVE_SHADOW_FORCE+2
    battleeffect 0x0000
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x11
    contesttype CONTEST_CUTE
    terminatedata

move MOVE_SHADOW_FORCE+3
    battleeffect 0x0000
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_SMART
    terminatedata

move MOVE_HONECLAWS
    battleeffect 292
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KINGS_ROCK | FLAG_MIRROR_MOVE | FLAG_PROTECT
    appeal 0x12
    contesttype CONTEST_SMART
    terminatedata

move MOVE_WIDE_GUARD
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_ROCK
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER_SIDE
    priority 3
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GUARD_SPLIT
    battleeffect 278
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_POWER_SPLIT
    battleeffect 279
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_WONDER_ROOM
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority -7
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_PSYSHOCK
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_PSYCHIC
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_VENOSHOCK
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_POISON
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_AUTOTOMIZE
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_RAGE_POWDER
    battleeffect 172
    pss SPLIT_STATUS
    basepower 0
    type TYPE_BUG
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 3
    flags FLAG_KEEP_HP_BAR
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_TELEKINESIS
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MAGIC_COAT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_MAGIC_ROOM
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority -7
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SMACK_DOWN
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_ROCK
    accuracy 100
    pp 15
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_STORM_THROW
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_FIGHTING
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FLAME_BURST
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 70
    type TYPE_FIRE
    accuracy 100
    pp 15
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SLUDGE_WAVE
    battleeffect 2
    pss SPLIT_PHYSICAL
    basepower 95
    type TYPE_POISON
    accuracy 100
    pp 10
    effectchance 10
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_QUIVER_DANCE
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_BUG
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_HEAVY_SLAM
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_STEEL
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SYNCHRONOISE
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_PSYCHIC
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ELECTRO_BALL
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_ELECTRIC
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SOAK
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_WATER
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MAGIC_COAT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FLAME_CHARGE
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_FIRE
    accuracy 100
    pp 20
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_COIL
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_POISON
    accuracy 0
    pp 20
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_LOW_SWEEP
    battleeffect 70
    pss SPLIT_PHYSICAL
    basepower 65
    type TYPE_FIGHTING
    accuracy 100
    pp 20
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ACID_SPRAY
    battleeffect 271
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_POISON
    accuracy 100
    pp 20
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FOUL_PLAY
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 95
    type TYPE_DARK
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SIMPLE_BEAM
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MAGIC_COAT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ENTRAINMENT
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MAGIC_COAT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_AFTER_YOU
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ROUND
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ECHOED_VOICE
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 40
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_CHIP_AWAY
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_NORMAL
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_CLEAR_SMOG
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 50
    type TYPE_POISON
    accuracy 0
    pp 15
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_STORED_POWER
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 20
    type TYPE_PSYCHIC
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_QUICK_GUARD
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_FIGHTING
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_USER
    priority 3
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ALLY_SWITCH
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_USER
    priority 2
    flags FLAG_KEEP_HP_BAR
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SCALD
    battleeffect 4
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_WATER
    accuracy 100
    pp 15
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SHELL_SMASH
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_HEAL_PULSE
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_PSYCHIC
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MAGIC_COAT
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_HEX
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_GHOST
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SKY_DROP
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_FLYING
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SHIFT_GEAR
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_STEEL
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_CIRCLE_THROW
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_FIGHTING
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority -6
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_INCINERATE
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_FIRE
    accuracy 100
    pp 15
    effectchance 100
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_QUASH
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_DARK
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MAGIC_COAT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ACROBATICS
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 55
    type TYPE_FLYING
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_REFLECT_TYPE
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_RETALIATE
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 70
    type TYPE_NORMAL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FINAL_GAMBIT
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 1
    type TYPE_FIGHTING
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_BESTOW
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_INFERNO
    battleeffect 4
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_FIRE
    accuracy 50
    pp 5
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_WATER_PLEDGE
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_WATER
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FIRE_PLEDGE
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_FIRE
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GRASS_PLEDGE
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_GRASS
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_VOLT_SWITCH
    battleeffect 228
    pss SPLIT_SPECIAL
    basepower 70
    type TYPE_ELECTRIC
    accuracy 100
    pp 20
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_STRUGGLE_BUG
    battleeffect 71
    pss SPLIT_SPECIAL
    basepower 50
    type TYPE_BUG
    accuracy 100
    pp 20
    effectchance 100
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_BULLDOZE
    battleeffect 70
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_GROUND
    accuracy 100
    pp 20
    effectchance 100
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FROST_BREATH
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 60
    type TYPE_ICE
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_DRAGON_TAIL
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_DRAGON
    accuracy 90
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority -6
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_WORK_UP
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_NORMAL
    accuracy 0
    pp 30
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ELECTROWEB
    battleeffect 70
    pss SPLIT_SPECIAL
    basepower 55
    type TYPE_ELECTRIC
    accuracy 95
    pp 15
    effectchance 100
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_WILD_CHARGE
    battleeffect 198
    pss SPLIT_PHYSICAL
    basepower 90
    type TYPE_ELECTRIC
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_DRILL_RUN
    battleeffect 43
    pss SPLIT_PHYSICAL
    basepower 80
    type TYPE_GROUND
    accuracy 95
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_DUAL_CHOP
    battleeffect 44
    pss SPLIT_PHYSICAL
    basepower 40
    type TYPE_DRAGON
    accuracy 90
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_HEART_STAMP
    battleeffect 31
    pss SPLIT_PHYSICAL
    basepower 60
    type TYPE_PSYCHIC
    accuracy 100
    pp 25
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_HORN_LEECH
    battleeffect 3
    pss SPLIT_PHYSICAL
    basepower 75
    type TYPE_GRASS
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SACRED_SWORD
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 90
    type TYPE_FIGHTING
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_RAZOR_SHELL
    battleeffect 69
    pss SPLIT_PHYSICAL
    basepower 75
    type TYPE_WATER
    accuracy 95
    pp 10
    effectchance 50
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_HEAT_CRASH
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 1
    type TYPE_FIRE
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_LEAF_TORNADO
    battleeffect 73
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_GRASS
    accuracy 90
    pp 10
    effectchance 50
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_STEAMROLLER
    battleeffect 150
    pss SPLIT_PHYSICAL
    basepower 65
    type TYPE_BUG
    accuracy 100
    pp 20
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_COTTON_GUARD
    battleeffect 0
    pss SPLIT_STATUS
    basepower 0
    type TYPE_GRASS
    accuracy 0
    pp 10
    effectchance 0
    target MOVE_TARGET_USER
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_SNATCH
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_NIGHT_DAZE
    battleeffect 73
    pss SPLIT_SPECIAL
    basepower 85
    type TYPE_DARK
    accuracy 95
    pp 10
    effectchance 40
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_PSYSTRIKE
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_PSYCHIC
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_TAIL_SLAP
    battleeffect 29
    pss SPLIT_PHYSICAL
    basepower 25
    type TYPE_NORMAL
    accuracy 85
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_HURRICANE
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 110
    type TYPE_FLYING
    accuracy 70
    pp 10
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_HEAD_CHARGE
    battleeffect 198
    pss SPLIT_PHYSICAL
    basepower 120
    type TYPE_NORMAL
    accuracy 100
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GEAR_GRIND
    battleeffect 44
    pss SPLIT_PHYSICAL
    basepower 50
    type TYPE_STEEL
    accuracy 85
    pp 15
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SEARING_SHOT
    battleeffect 4
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_FIRE
    accuracy 100
    pp 5
    effectchance 30
    target MOVE_TARGET_FOES_AND_ALLY
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_TECHNO_BLAST
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 120
    type TYPE_NORMAL
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_RELIC_SONG
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 75
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 10
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SECRET_SWORD
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 85
    type TYPE_FIGHTING
    accuracy 100
    pp 10
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_GLACIATE
    battleeffect 70
    pss SPLIT_SPECIAL
    basepower 65
    type TYPE_ICE
    accuracy 95
    pp 10
    effectchance 100
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_BOLT_STRIKE
    battleeffect 6
    pss SPLIT_SPECIAL
    basepower 130
    type TYPE_ELECTRIC
    accuracy 85
    pp 5
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_BLUE_FLARE
    battleeffect 4
    pss SPLIT_SPECIAL
    basepower 130
    type TYPE_FIRE
    accuracy 85
    pp 5
    effectchance 20
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FIERY_DANCE
    battleeffect 276
    pss SPLIT_SPECIAL
    basepower 80
    type TYPE_FIRE
    accuracy 100
    pp 10
    effectchance 50
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FREEZE_SHOCK
    battleeffect 75
    pss SPLIT_SPECIAL
    basepower 140
    type TYPE_ICE
    accuracy 90
    pp 5
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ICE_BURN
    battleeffect 75
    pss SPLIT_SPECIAL
    basepower 140
    type TYPE_ICE
    accuracy 90
    pp 5
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_SNARL
    battleeffect 71
    pss SPLIT_SPECIAL
    basepower 55
    type TYPE_DARK
    accuracy 95
    pp 15
    effectchance 100
    target MOVE_TARGET_BOTH
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_ICICLE_CRASH
    battleeffect 31
    pss SPLIT_PHYSICAL
    basepower 85
    type TYPE_ICE
    accuracy 90
    pp 10
    effectchance 30
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_V_CREATE
    battleeffect 0
    pss SPLIT_PHYSICAL
    basepower 180
    type TYPE_FIRE
    accuracy 95
    pp 5
    effectchance 100
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_CONTACT | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FUSION_FLARE
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_FIRE
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move MOVE_FUSION_BOLT
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_ELECTRIC
    accuracy 100
    pp 5
    effectchance 0
    target MOVE_TARGET_SELECTED
    priority 0
    flags FLAG_KEEP_HP_BAR | FLAG_PROTECT | FLAG_MIRROR_MOVE | FLAG_KINGS_ROCK
    appeal 0x00
    contesttype CONTEST_COOL
    terminatedata

move NUM_OF_MOVES+1
    battleeffect 0
    pss SPLIT_SPECIAL
    basepower 100
    type TYPE_NORMAL
    accuracy 100
    pp 10
    effectchance 0
    target 0x0000
    priority 0
    flags 0x32
    appeal 0x10
    contesttype CONTEST_BEAUTY
    terminatedata


// you can easily insert new moves this way too
