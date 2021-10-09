.text
.align 2
.thumb

.include "offset_def.s"

@//hook 0x7504 r0
.global StateChange
StateChange:
push {r2,r3}
ldr r4, [r1, #0x0]
mov r0, r4
mov r1, r5
bl GetStateChangeValue
mov r7, r0
mov r1, r5
mov r0, r4
bl GetStateChangeParm
mov r4, r0
pop {r2,r3}
ldr r1, =0x7548 + Overlay_12_Start
bx r1

//bianshen 1B9B4
.global PokemonApper_hook
PokemonApper_hook:
ldr r0, [sp, #0x80]
push {r1-r3}
mov r1, r0
mov r0, r5
mov r2, r6
bl PokemonApper
cmp r0, #0x0
bne returnseq
pop {r1-r3}
b ends

returnseq:
pop {r1-r3}
str r0, [sp, #0xCC]
mov r0, #0x1
str r0, [sp, #0x84]

ends:
ldr r0, =0x1BA6A + Overlay_12_Start
bx r0

//清除变身状态 170D8
.global ST_PokemonParamGet_hook
ST_PokemonParamGet_hook:
add r1, r7, r6
strb r2, [r1, r0]
add r0, r0, #0x1
strb r2, [r1, r0]
ldr r1, [sp, #0x4]
push {r0-r3}
mov r0, r7
bl ST_PokemonParamGet
pop {r0-r3}
ldr r0, =0x170E0 + Overlay_12_Start
bx r0

.global DamageCheck
DamageCheck:
mov r1, r5
pop {r5}
push {lr}
bl DamageCalc
pop {pc}

@//hook 0x184F6 r0 
.global AbilityWeatherSpeed
AbilityWeatherSpeed:
ldr r0, [sp, #0x2C]
ldr r1, [sp, #0x28]
mov r2, r5
bl WeatherAbility_SpeedCheck
cmp r0, #0x0
beq WeatherBack
cmp r0, #0x1
beq WeatherSpeedUP1
cmp r0, #0x1
beq WeatherSpeedUP2

WeatherBack:
ldr r0, =0x18508 + Overlay_12_Start
bx r0

WeatherSpeedUP1:
lsl r6, r6, #1
b WeatherBack

WeatherSpeedUP2:
lsl r4, r4, #1
b WeatherBack

@//hook 0x18910 r1
.global AbilityCheckPriority
AbilityCheckPriority:
mov r1, r5
push {r3}
add sp, #0x4
ldr r2, [sp, #0x2C]
ldr r3, [sp, #0x4]
bl PriorityAbility_Check
str r0, [sp, #0x48]
ldr r0, [sp, #0x5C]
mov r1, r5
ldr r2, [sp, #0x28]
ldr r3, [sp, #0x4]
bl PriorityAbility_Check
sub sp, #0x4
pop {r3}
str r0, [sp, #0x44]
ldr r0, =0x18922 + Overlay_12_Start
bx r0

//受伤类技能 1C576 
.global ST_ServerWazaHitTokuseiCheck_hook
ST_ServerWazaHitTokuseiCheck_hook:
push {r1-r3}
mov r0, r7
mov r1, r5
mov r2, r4
bl DefenceAttackedCheck
pop {r1-r3}
cmp r0, #0xff
beq endWazaCheck
cmp r0, #0x26
bgt sub_0801C59e
blt sub_0801C57E
b sub_0801c846

sub_0801C57E:
cmp r0, #0x10
bgt sub_1c58a
bge sub_1c64c
ldr r1, =0x1C57C + Overlay_12_Start
bx r1

sub_0801C59e:
ldr r1, =0x1C596 + Overlay_12_Start
bx r1


sub_0801c846:
ldr r1, =0x1c83E + Overlay_12_Start
bx r1

sub_1c58a:
ldr r1, =0x1c582 + Overlay_12_Start
bx r1

sub_1c64c:
ldr r1, =0x1c644 + Overlay_12_Start
bx r1

endWazaCheck:
mov r0, #0x1
pop {r3-r7, pc}

//小偷效果道具检查
//hook 08009A74 r0
.global CheckCanTakeItem
CheckCanTakeItem:
add r0, r5, r1
ldrh r0, [r0,r3]
push {r1-r5}
bl CheckItemByThief
pop {r1-r5}
cmp r0, #0x0
beq backToThief_1
ldr r0, =0x9A7C + Overlay_12_Start
bx r0

backToThief_1:
ldr r0, =0x9A86 + Overlay_12_Start
bx r0

//沙暴天气受伤
//hook 0800A308
.global CheckWeatherDamage_1
CheckWeatherDamage_1:
mov r0, #0xC0
mov r6, r4
mul r6, r0
push {r1-r3}
mov r0, r5
mov r1, r4
bl CheckStome
pop {r1-r3}
cmp r0, #0x0
bne skip_weather
mov r0, #0x2D
lsl r0, r0, #8
mov r1, #0x8C
add r0, r1, r0
ldr r1, =0xA310 + Overlay_12_Start
bx r1

skip_weather:
ldr r0, =0xA34C + Overlay_12_Start
bx r0

//雪天受伤
CheckWeatherDamage_2:
mov r0, r5
mov r1, r4
push {r2-r3}
bl CheckStome2
pop {r2-r3}
cmp r0, #0x0
bne skip_weather_2
ldr r0, =0xA418 + Overlay_12_Start
bx r0

skip_weather_2:
ldr r0, =0xA436 + Overlay_12_Start
bx r0

//对站前防御方检查
.global ServerDefenceCheck_hook
ServerDefenceCheck_hook:
mov r1, r5
mov r7, r0
mov r4, #0x0
ldr r0, [r5, #0x6C]
mov r6, r4
push {r0-r3}
mov r0, r1
bl ServerDefenceCheck_2
pop {r0-r3}
ldr r1, =0x13AE4 + Overlay_12_Start
bx r1
