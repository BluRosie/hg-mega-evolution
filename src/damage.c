#include "../include/types.h"
#include "../include/battle.h"
#include "../include/constants/ability.h"
#include "../include/constants/item.h"

const u16 MegaLauncherTable[]=
{
    396,//波导弹
    399,//恶之波动
    352,//水之波动
    406,//龙之波动
    805,//大地波动
    MOVE_TABLES_TERMIN,
};

const u16 StrongJawTable[]=
{
    44,//咬住
    242,//咬碎
    422,//雷电牙
    423,//火焰牙
    424,//冰冻牙
    158,//必杀门牙
    305,//剧毒牙
    706,//精神之牙
    405,//虫咬
    MOVE_TABLES_TERMIN,
};

const u16 SoundTable[]=
{
    405,//虫鸣
    448,//喋喋不休
    497,//回声
    320,//草笛
    45,//叫声
    304,//巨声
    319,//金属音
    195,//灭亡之歌
    547,//古老之歌
    45,//吼叫
    496,//轮唱
    103,//刺耳声
    47,//唱歌
    555,//大声咆哮
    173,//打鼾
    48,//超音波
    253,//吵闹
    586,//爆音波
    568,//战吼
    590,//密语
    574,//魅惑之声
    664,//泡影的咏叹调
    691,//鳞片噪音
    786,//破音
    775,//魂舞烈音爆
    575,//抛下狠话
    336,//长嚎
    826,//诡异咒语
    MOVE_TABLES_TERMIN,
};

int DamageCalc(void *bw,struct BattleStruct *sp,int wazano,u32 side_cond,u32 unused,u32 field_cond,u16 pow,u8 type,u8 attack,u8 defence,u8 critical)
{
    int i;
    s32 damage = 0;
    s32 damage2 = 0;
    u8 movetype;
    u8 movesplit;
    u16 pokeatk;
    u16 pokedef;
    u16 pokespatk;
    u16 pokespdef;
    s8 atkstate;
    s8 defstate;
    s8 spatkstate;
    s8 spdefstate;
    u8 level;
    u16 movepower;
    u16 item;
    u32 battle_type;
    int num;

    struct sDamageCalc AttackMon;
    struct sDamageCalc DefenceMon;

    if (!(critical == 1 || critical > 1))
        GF_ASSERT();

    pokeatk = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_ATK, NULL);
    pokedef = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_DEF, NULL);
    pokespatk = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_SPATK, NULL);
    pokespdef = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_SPDEF, NULL);

    atkstate = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_STATE_ATK, NULL) - 6;
    defstate = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_STATE_DEF, NULL) - 6;
    spatkstate = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_STATE_SPATK, NULL) - 6;
    spdefstate = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_STATE_SPDEF, NULL) - 6;

    level = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_LEVEL, NULL);

    AttackMon.species = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_SPECIES, NULL);
    DefenceMon.species = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_SPECIES, NULL);
    AttackMon.hp = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_HP, NULL);
    DefenceMon.hp = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_HP, NULL);
    AttackMon.maxhp = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_MAX_HP, NULL);
    DefenceMon.maxhp = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_MAX_HP, NULL);
    AttackMon.condition = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_MAX_CONDITION, NULL);
    DefenceMon.condition = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_MAX_CONDITION, NULL);
    AttackMon.ability = GetTargetAbility(sp, attack);
    DefenceMon.ability = GetTargetAbility(sp, defence);
    AttackMon.sex = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_SEX, NULL);
    DefenceMon.sex = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_SEX, NULL);
    AttackMon.type1 = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_TYPE1, NULL);
    DefenceMon.type1 = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_TYPE1, NULL);
    AttackMon.type2 = BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_TYPE2, NULL);
    DefenceMon.type2 = BattlePokemonParamGet(sp, defence, BATTLE_MON_DATA_TYPE2, NULL);

    item = GetMonItem(sp, attack);
    AttackMon.item_held_effect = ItemDataGet(sp, item, 1);
    AttackMon.item_power = ItemDataGet(sp, item, 2);

    item = GetMonItem(sp, defence);
    DefenceMon.item_held_effect = ItemDataGet(sp, item, 1);
    DefenceMon.item_power = ItemDataGet(sp, item, 2);

    battle_type = BattleTypeGet(bw);
    //max_client = BattleWorkClientSetMaxGet(bw);

    if(pow == 0)
        movepower = sp->moveTbl[wazano].power;
    else
        movepower = pow;

    //属性
    if(AttackMon.ability == ABILITY_NORMALIZE)//一般皮肤
        movetype = TYPE_NORMAL;
    else if(type == 0)
        movetype = sp->moveTbl[wazano].type;
    else
        movetype = type & 0x3f;

    if(sp->damage_value <= 10)
        GF_ASSERT();

    movetype = SkinAbilityTypeChange(AttackMon.ability,movetype);
    movepower = movepower * sp->damage_value / 10;

    //充电flag
    if ((sp->battlemon[attack].waza_kouka & 0x200) && (movetype == TYPE_ELECTRIC))
        movepower *= 2;

    if (sp->oneTurnFlag[attack].tedasuke_flag)
        movepower = movepower * 15 / 10;

    //技师
    if ((AttackMon.ability == ABILITY_TECHNICIAN) && (wazano != 165) && (movepower <= 60))
        movepower = movepower * 15 / 10;

    movesplit=sp->moveTbl[wazano].split;

    if ((AttackMon.ability == ABILITY_HUGE_POWER) || (AttackMon.ability == ABILITY_PURE_POWER))
        pokeatk = pokeatk * 2;

    //缓慢启动
    if ((AttackMon.ability == ABILITY_SLOW_START) &&
        ((BattleWorkMonDataGet(bw, sp, 3, 0) - BattlePokemonParamGet(sp, attack, BATTLE_MON_DATA_SOLW_START, NULL)) < 5))
        pokeatk /= 2;

    for (i = 0; i < 33; i++)
    {
        if ((AttackMon.item_held_effect == SoubiItemWazaTypePowUpTbl[i][0]) && (movetype == SoubiItemWazaTypePowUpTbl[i][1]))
        {
            movepower = movepower * (100 + AttackMon.item_power) / 100;
            break;
        }
    }
    //专爱头巾
    if (AttackMon.item_held_effect == HOLD_EFFECT_CHOICE_BAND)
        pokeatk = pokeatk * 150 / 100;

    //专爱眼镜
    if (AttackMon.item_held_effect == HOLD_EFFECT_CHOICE_SCARF)
        pokespatk = pokespatk * 150 / 100;

    //Soul Dew
    #ifdef GEN7_SOUL_DEW_EFFECT
    if ((AttackMon.item_held_effect == HOLD_EFFECT_SOUL_DEW) &&
        ((battle_type & BATTLE_TYPE_BATTLE_TOWER) == 0) &&
        ((AttackMon.species == 381) || (AttackMon.species == 380)) &&
        ((movetype == TYPE_DRAGON) || (movetype == TYPE_PSYCHIC)))
        movepower = movepower * 120 / 100;
    #else
    if ((AttackMon.item_held_effect == HOLD_EFFECT_SOUL_DEW) &&
        ((battle_type & BATTLE_TYPE_BATTLE_TOWER) == 0) &&
        ((AttackMon.species == 381) || (AttackMon.species == 380)))
        pokespatk = pokespatk * 150 / 100;

    if ((DefenceMon.item_held_effect == HOLD_EFFECT_SOUL_DEW) &&
        ((battle_type & BATTLE_TYPE_BATTLE_TOWER) == 0) &&
        ((DefenceMon.species == 381) || (DefenceMon.species == 380)))
        pokespdef = pokespdef * 150 / 100;
    #endif

    //深海之牙
    if ((AttackMon.item_held_effect == HOLD_EFFECT_DEEP_SEA_TOOTH) && (AttackMon.species == 366))
        pokespatk *= 2;

    //Deep Sea Scale
    if ((DefenceMon.item_held_effect == HOLD_EFFECT_DEEP_SEA_SCALE) && (DefenceMon.species == 366))
        pokespdef *= 2;

    //光珠
    if ((AttackMon.item_held_effect == HOLD_EFECT_LIGHT_BALL) && (AttackMon.species == 0x19))
        movepower *= 2;

    if ((DefenceMon.item_held_effect == 0x5a) && (DefenceMon.species == 0x84))
        pokedef *= 2;

    if ((AttackMon.item_held_effect == 0x5b) &&
        ((AttackMon.species == 104) ||
        (AttackMon.species == 105)))
            pokeatk *= 2;

    if ((AttackMon.item_held_effect == 3) &&
        ((movetype == TYPE_DRAGON) || (movetype == TYPE_STEEL)) &&
        (AttackMon.species == 483))
    {
        movepower = movepower * (100 + AttackMon.item_power) / 100;
    }

    //热暴走
    if((AttackMon.ability == ABILITY_FLARE_BOOST) && (AttackMon.condition & BATTLE_STATE_BURN))
        pokespatk = pokespatk * 150 / 100;

    //毒暴走
    if((AttackMon.ability == ABILITY_TOXIC_BOOST) && ((AttackMon.condition & BATTLE_STATE_TOXIC) || (AttackMon.condition & BATTLE_STATE_TOXIC_2)))
        pokeatk = pokeatk * 150 / 100;

    if ((AttackMon.item_held_effect == 4) &&
        ((movetype == TYPE_DRAGON) || (movetype == TYPE_WATER)) &&
        (AttackMon.species == 0xf2))
    {
        movepower = movepower * (100 + AttackMon.item_power) / 100;
    }

    if ((AttackMon.item_held_effect == 2) &&
        ((movetype == TYPE_DRAGON) || (movetype == TYPE_GHOST)) &&
        ((BattlePokemonParamGet(sp, attack, 0x35, NULL) & 0x200000) == 0) &&
        (AttackMon.species == 487))
    {
        movepower = movepower * (100 + AttackMon.item_power) / 100;
    }

    if ((AttackMon.item_held_effect == 0x5e) && (movesplit == SPLIT_PHYSICAL))
    {
        movepower = movepower * (100 + AttackMon.item_power) / 100;
    }

    if ((AttackMon.item_held_effect == 0x5f) && (movesplit == SPLIT_SPECIAL))
    {
        movepower = movepower * (100 + AttackMon.item_power) / 100;
    }
    
    if ((CheckDefenceAbility(sp, attack, defence, ABILITY_THICK_FAT) == TRUE) &&
        ((movetype == TYPE_FIRE) || (movetype == TYPE_ICE)))
    {
        movepower /= 2;
    }

    if (AttackMon.ability == ABILITY_HUSTLE)
    {
        pokeatk = pokeatk * 150 / 100;
    }

    if ((AttackMon.ability == ABILITY_GUTS) && (AttackMon.condition))
    {
        pokeatk = pokeatk * 150 / 100;
    }

    if ((CheckDefenceAbility(sp, attack, defence, ABILITY_MARVEL_SCALE) == TRUE) && (AttackMon.condition))
    {
        pokedef = pokedef * 150 / 100;
    }


    if ((AttackMon.ability == ABILITY_PLUS) &&
        (CheckSideAbility(bw, sp, CHECK_PALYER_SIDE_ALIVE, attack, ABILITY_MINUS)))
    {
        pokespatk = pokespatk * 150 / 100;
    }

    if ((AttackMon.ability == ABILITY_MINUS) &&
        (CheckSideAbility(bw, sp, CHECK_PALYER_SIDE_ALIVE, attack, ABILITY_PLUS)))
    {
        pokespatk = pokespatk * 150 / 100;
    }

    //软弱
    if((AttackMon.ability == ABILITY_DEFEATIST) && (AttackMon.hp < (AttackMon.maxhp / 2)))
    {
        pokespatk /= 2;
        pokeatk /= 2;
    }

    //钢能力者
    if ((movetype == TYPE_STEEL) && (AttackMon.ability == ABILITY_STEEL_WORK))
    {
        movepower = movepower * 150 / 100;
    }

    //水泡
    if(AttackMon.ability == ABILITY_WATER_BUBBLE && movetype == TYPE_WATER)
    {
        movepower = movepower * 2;
    }

    //硬爪
    if(AttackMon.ability == ABILITY_TOUGH_CLAWS && (sp->moveTbl[wazano].flag & FLAG_CONTACT))
    {
        movepower = movepower * 130 / 100;
    }

    //钢之意志
    num = CheckSideAbility(bw,sp,CHECK_PALYER_SIDE_ALIVE,attack,ABILITY_STEELY_SPIRIT);
    if((movetype == TYPE_STEEL) && num)
    {
        num *= 150;
        movepower = movepower * num / 100 ;
    }

    //电晶体
    if(AttackMon.ability == ABILITY_TRANSISTOR && movetype == TYPE_ELECTRIC)
    {
        movepower = movepower * 150 / 100;
    }

    //龙颚
    if(AttackMon.ability == ABILITY_DRAGONS_MAW && movetype == TYPE_DRAGON )
    {
        movepower = movepower * 150 / 100;
    }
    
    if(CheckSideAbility(bw,sp,CHECK_PALYER_SIDE_ALIVE,attack,ABILITY_BATTERY) && movesplit == SPLIT_SPECIAL)
        movepower = movepower * 130 / 100;

    if(AttackMon.ability != ABILITY_POWER_SPOT &&
        (CheckSideAbility(bw,sp,CHECK_PALYER_SIDE_ALIVE,attack,ABILITY_POWER_SPOT)))
        movepower = movepower * 130 / 100;

    if ((movetype == TYPE_ELECTRIC) && (CheckFieldMoveEffect(bw, sp, 0x10000)))
    {
        movepower /= 2;
    }

    if ((movetype == TYPE_FIRE) && (CheckFieldMoveEffect(bw, sp, 0x20000)))
    {
        movepower /= 2;
    }

    if ((movetype == TYPE_GRASS) && (AttackMon.ability == ABILITY_OVERGROW) && (AttackMon.hp <= AttackMon.maxhp * 10 / 30))
    {
        movepower = movepower * 150 / 100;
    }

    if ((movetype == TYPE_FIRE) && (AttackMon.ability == ABILITY_BLAZE) && (AttackMon.hp <= AttackMon.maxhp * 10 / 30))
    {
        movepower = movepower * 150 / 100;
    }

    if ((movetype == TYPE_WATER) && (AttackMon.ability == ABILITY_TORRENT) && (AttackMon.hp <= AttackMon.maxhp * 10 / 30))
    {
        movepower = movepower * 150 / 100;
    }

    if ((movetype == TYPE_BUG) && (AttackMon.ability == ABILITY_SWARM) && (AttackMon.hp <= AttackMon.maxhp * 10 / 30))
    {
        movepower = movepower * 150 / 100;
    }

    if((movetype==TYPE_FIRE)&&(CheckDefenceAbility(sp,attack,defence,ABILITY_HEATPROOF)==TRUE)){
        movepower /= 2;
    }

	if((movetype==TYPE_FIRE)&&(CheckDefenceAbility(sp,attack,defence,ABILITY_DRY_SKIN)==TRUE)){
        movepower = movepower * 125 / 100;
    }

    //蓄电池
    if(movesplit == SPLIT_SPECIAL && CheckSideAbility(bw, sp, CHECK_PALYER_SIDE_ALIVE, 0, ABILITY_BATTERY))
    {
        movepower = movepower * 40 / 30;
    }

    //能量点
    if(CheckSideAbility(bw, sp, CHECK_PALYER_SIDE_ALIVE, 0, ABILITY_POWER_SPOT) && AttackMon.ability!= ABILITY_POWER_SPOT)
    {
        movepower = movepower * 40 / 30;
    }

    if (AttackMon.ability == ABILITY_SIMPLE)
    {
        atkstate *= 2;
        if (atkstate < -6)
        {
            atkstate = -6;
        }
        if (atkstate > 6)
        {
            atkstate = 6;
        }
        spatkstate *= 2;
        if (spatkstate < -6)
        {
            spatkstate = -6;
        }
        if (spatkstate > 6)
        {
            spatkstate = 6;
        }
    }

    if (CheckDefenceAbility(sp, attack, defence, ABILITY_SIMPLE) == TRUE)
    {
        defstate *= 2;
        if (defstate < -6)
        {
            defstate = -6;
        }
        if (defstate > 6)
        {
            defstate = 6;
        }
        spdefstate *= 2;
        if (spdefstate < -6)
        {
            spdefstate = -6;
        }
        if (spdefstate > 6)
        {
            spdefstate = 6;
        }
    }

    if (CheckDefenceAbility(sp, attack, defence, ABILITY_UNAWARE) == TRUE)
    {
        atkstate = 0;
        spatkstate = 0;
    }

    if (AttackMon.ability == ABILITY_UNAWARE)
    {
        defstate = 0;
        spdefstate = 0;
    }

    atkstate += 6;
    defstate += 6;
    spatkstate += 6;
    spdefstate += 6;

    if ((AttackMon.ability == ABILITY_RIVALRY) &&
        (AttackMon.sex == DefenceMon.sex) && (AttackMon.sex != 2) && (DefenceMon.sex != 2))
    {
        movepower = movepower * 125 / 100;
    }

    if ((AttackMon.ability == ABILITY_RIVALRY) &&
        (AttackMon.sex != DefenceMon.sex) && (AttackMon.sex != 2) && (DefenceMon.sex != 2))
    {
        movepower = movepower * 75 / 100;
    }

    //铁拳
    for (i = 0; i < 0xF; i++)
    {
        if ((TetsunoKobushiTable[i] == wazano) && (AttackMon.ability == ABILITY_IRON_FIST))
        {
            movepower = movepower * 12 / 10;
            break;
        }
    }

    //超级炮台
    if(CheckMoveOnTable(wazano,MegaLauncherTable) && AttackMon.ability == ABILIRT_MEGA_LAUNCHER)
    {
        movepower = movepower * 150 / 100;
    }

    //强壮之鄂
    if(CheckMoveOnTable(wazano,StrongJawTable) && AttackMon.ability == ABILITY_STRONG_JAW)
    {
        movepower = movepower * 150 / 100;
    }

    //庞克摇滚
    if(CheckMoveOnTable(wazano,SoundTable) && AttackMon.ability == ABILITY_PUNK_ROCK)
    {
        movepower = movepower * 130 / 100;
    }

    if ((CheckSideAbility(bw, sp, CHECK_ALL_BATTLER_ALIVE, 0, ABILITY_CLOUD_NINE) == 0) &&
        (CheckSideAbility(bw, sp, CHECK_ALL_BATTLER_ALIVE, 0, ABILITY_AIR_LOCK) == 0))
    {
        if ((field_cond & WEATHER_SUN_ALL) && (AttackMon.ability == ABILITY_SOLAR_POWER))
        {
            pokespatk = pokespatk * 15 / 10;
        }
        if ((field_cond & WEATHER_SANDSTORM_ALL) &&
            ((DefenceMon.type1 == TYPE_ROCK) || (DefenceMon.type2 == TYPE_ROCK)))
        {
            pokespdef = pokespdef * 15 / 10;
        }

        //沙之力
        if ((field_cond & WEATHER_SANDSTORM_ALL) &&
            (GetTargetAbility(sp, attack) == ABILITY_SAND_FORCE) &&
            ((movetype = TYPE_STEEL) || (movetype = TYPE_GROUND) || (movetype == TYPE_ROCK)))
        {
            movepower = movepower * 13 / 10;
        }
        if ((field_cond & WEATHER_SUN_ALL) &&
            (CheckSideAbility(bw, sp, CHECK_PALYER_SIDE_ALIVE, attack, ABILITY_FLOWER_GIFT)))
        {
            pokeatk = pokeatk * 15 / 10;
        }
        if ((field_cond & WEATHER_SUN_ALL) &&
            (GetTargetAbility(sp, attack) != ABILITY_MOLD_BREAKER) &&
            (CheckSideAbility(bw, sp, CHECK_PALYER_SIDE_ALIVE, defence, ABILITY_FLOWER_GIFT)))
        {
            pokespdef = pokespdef * 15 / 10;
        }
    }

    if(sp->moveTbl[wazano].effect==7)
		pokedef=pokedef/2;

    if (movesplit == SPLIT_PHYSICAL)
    {
        if (critical > 1)
        {
            if (atkstate > 6)
            {
                damage = pokeatk * CondChgTable[atkstate][0];
                damage /= CondChgTable[atkstate][1];
            }
            else
            {
                damage = pokeatk;
            }
        }
        else
        {
            damage = pokeatk * CondChgTable[atkstate][0];
            damage /= CondChgTable[atkstate][1];
        }

        damage *= movepower;
        damage *= (level * 2 / 5 + 2);

        if (critical > 1)
        {
            if (defstate < 6)
            {
                damage2 = pokedef * CondChgTable[defstate][0];
                damage2 /= CondChgTable[defstate][1];
            }
            else
            {
                damage2 = pokedef;
            }
        }
        else
        {
            damage2 = pokedef * CondChgTable[defstate][0];
            damage2 /= CondChgTable[defstate][1];
        }

        damage /= damage2;
        damage /= 50;

        if ((AttackMon.condition & 0x10) && (AttackMon.ability != ABILITY_GUTS))
        {
            damage /= 2;
        }
        if (((side_cond & 1) != 0) && (critical == 1) && (sp->moveTbl[wazano].effect != 186) && (AttackMon.ability != ABILITY_INFILTRATOR))
        {
            if ((battle_type & 0x2) && (CheckAttackCount(bw, sp, 1, defence) == 2))
            {
                damage = damage * 2 / 3;
            }
            else
            {
                damage /= 2;
            }
        }
    }
    else if (movesplit == SPLIT_SPECIAL)
    {
        if (critical > 1)
        {
            if (spatkstate > 6)
            {
                damage = pokespatk * CondChgTable[spatkstate][0];
                damage /= CondChgTable[spatkstate][1];
            }
            else
            {
                damage = pokespatk;
            }
        }
        else
        {
            damage = pokespatk * CondChgTable[spatkstate][0];
            damage /= CondChgTable[spatkstate][1];
        }

        damage *= movepower;
        damage *= (level * 2 / 5 + 2);

        if (critical > 1)
        {
            if (spdefstate < 6)
            {
                damage2 = pokespdef * CondChgTable[spdefstate][0];
                damage2 /= CondChgTable[spdefstate][1];
            }
            else
            {
                damage2 = pokespdef;
            }
        }
        else
        {
            damage2 = pokespdef * CondChgTable[spdefstate][0];
            damage2 /= CondChgTable[spdefstate][1];
        }

        damage /= damage2;
        damage /= 50;
        if (((side_cond & 0x2) != 0) && (critical == 1) && (sp->moveTbl[wazano].effect != 186) && (AttackMon.ability != ABILITY_INFILTRATOR))
        {
            if ((battle_type & 0x2) && (CheckAttackCount(bw, sp, 1, defence) == 2))
            {
                damage = damage * 2 / 3;
            }
            else
            {
                damage /= 2;
            }
        }
    }

    if ((battle_type & 0x2) &&
        (sp->moveTbl[wazano].target == 0x4) &&
        (CheckAttackCount(bw, sp, 1, defence) == 2))
    {
        damage = damage * 3 / 4;
    }

    if ((battle_type & 0x2) &&
        (sp->moveTbl[wazano].target == 0x8) &&
        (CheckAttackCount(bw, sp, 1, defence) >= 2))
    {
        damage = damage * 3 / 4;
    }

    //妖精气场
    if(CheckSideAbility(bw,sp,CHECK_ALL_BATTLER_ALIVE,attack,ABILITY_DARK_AURA)&&
        CheckSideAbility(bw,sp,CHECK_ALL_BATTLER_ALIVE,attack,ABILITY_AURA_BREAK) == FALSE &&
        movetype == TYPE_DARK)
        damage = damage * 40 / 30;

    //暗黑气场
    if(CheckSideAbility(bw,sp,CHECK_ALL_BATTLER_ALIVE,attack,ABILITY_FAIRY_AURA) &&
        CheckSideAbility(bw,sp,CHECK_ALL_BATTLER_ALIVE,attack,ABILITY_AURA_BREAK) == FALSE &&
        movetype == TYPE_MYSTERY)
        damage = damage * 40 / 30;

    //气场破坏
    if (CheckSideAbility(bw, sp, CHECK_ALL_BATTLER_ALIVE, attack, ABILITY_AURA_BREAK))
    {
        if (CheckSideAbility(bw, sp, CHECK_ALL_BATTLER_ALIVE, attack, ABILITY_DARK_AURA)&&
            movetype == TYPE_DARK)
            damage = damage * 30 / 40;

        if (CheckSideAbility(bw, sp, CHECK_ALL_BATTLER_ALIVE, attack, ABILITY_FAIRY_AURA)&&
            movetype == TYPE_MYSTERY)
            damage = damage * 30 / 40;
    }

    if ((CheckSideAbility(bw, sp, CHECK_ALL_BATTLER_ALIVE, 0, ABILITY_CLOUD_NINE) == 0) &&
        (CheckSideAbility(bw, sp, CHECK_ALL_BATTLER_ALIVE, 0, ABILITY_AIR_LOCK) == 0))
    {
        if (field_cond & 0x3)
        {
            switch (movetype)
            {
            case TYPE_FIRE:
                damage /= 2;
                break;
            case TYPE_WATER:
                damage = damage * 15 / 10;
                break;
            }
        }

        if ((field_cond & 0x80CF) && (wazano == 0x76))
        {
            damage /= 2;
        }
        if (field_cond & 0x30)
        {
            switch (movetype)
            {
            case TYPE_FIRE:
                damage = damage * 15 / 10;
                break;
            case TYPE_WATER:
                damage /= 2;
                break;
            }
        }
    }
    if ((BattlePokemonParamGet(sp, attack, 73, NULL)) && (movetype == TYPE_FIRE))
    {
        damage = damage * 15 / 10;
    }

    //毛茸茸
    if(CheckDefenceAbility(sp,attack,defence,ABILITY_FLUFFY) && movetype == TYPE_FIRE)
    {
        damage = damage * 2;
    }

    if(CheckDefenceAbility(sp,attack,defence,ABILITY_FLUFFY) &&  (sp->moveTbl[wazano].flag & FLAG_CONTACT) && AttackMon.ability != ABILITY_LONG_REACH)
    {
        damage = damage / 2;
    }

    //毛皮大衣
    if(CheckDefenceAbility(sp,attack,defence,ABILITY_FUR_COAT) && movesplit == SPLIT_PHYSICAL)
    {
        damage = damage / 2;
    }

    //水泡
    if(CheckDefenceAbility(sp,attack,defence,ABILITY_WATER_BUBBLE) && movetype ==TYPE_FIRE)
    {
        damage = damage / 2;
    }

    //庞克摇滚
    if(CheckMoveOnTable(wazano,SoundTable) && CheckDefenceAbility(sp,attack,defence,ABILITY_PUNK_ROCK))
    {
        damage = damage / 2;
    }

    //友情防守
    if (CheckSideAbility(bw, sp, CHECK_ENEMY_SIDE_ALIVE, 0, ABILITY_FRIEND_GUARD) && DefenceMon.ability != ABILITY_FRIEND_GUARD)
    {
        damage = damage * 30 / 40;
    }
    
    return damage + 2;
}

u16	GetMonItem(struct BattleStruct *sp,int client_no)
{
	if((GetTargetAbility(sp,client_no)==ABILITY_KLUTZ)){
		return 0;
	}
	if(sp->battlemon[client_no].moveeffect.shutout_count){
		return 0;
	}
	
	return sp->battlemon[client_no].item;
}

void DamageCalcAct(struct BattleStruct *sp)
{
    u32 now_hp = sp->battlemon[sp->defence_client].hp;
    u32 max_hp = sp->battlemon[sp->defence_client].maxhp;

    //多重鳞片
    if (CheckDefenceAbility(sp, sp->attack_client, sp->defence_client, ABILITY_MULTISCALE) == TRUE && now_hp == max_hp)
    {
        sp->damage  = sp->damage * 5 / 10;
    }

    //幻影防守
    if (sp->battlemon[sp->defence_client].ability == ABILITY_SHADOW_SHIELD && now_hp == max_hp)
    {
        sp->damage  = sp->damage * 5 / 10;
    }

}