#include "../include/types.h"
#include "../include/battle.h"
#include "../include/pokemon.h"
#include "../include/constants/ability.h"
#include "../include/constants/item.h"
#include "../include/constants/file.h"

#define STATE_DOWN 13
#define STATE_UP 12

const u16 gTriageMoveTable[] = //To do
{
    577,//吸取之吻
    235,//光合作用
    666,//花疗
    156,//睡觉
    202,//终极吸取
    MOVE_TABLES_TERMIN,
};

const u8 gMummyTable[] =
    {ABILITY_MULTITYPE, 0xff};

///检查技能表格
bool8 CheckMoveOnTable(u16 move, const u16 table[])
{
    for (u32 i = 0; table[i] != MOVE_TABLES_TERMIN; ++i)
    {
        if (move == table[i])
            return TRUE;
    }
    return FALSE;
}

///检查特性表格
bool8 CheckAbilityOnTable(u8 ability, const u8 table[])
{
    for (u32 i = 0; table[i] != 0xFF; ++i)
    {
        if (ability == table[i])
            return TRUE;
    }
    return FALSE;
}

//天气速度上升
u8 WeatherAbility_SpeedCheck(int ability1, int ability2, struct BattleStruct *gBattleRam)
{
    if (((ability1 == ABILITY_SAND_RUSH) && (gBattleRam->field_condition & WEATHER_SANDSTORM_ALL)) ||
        ((ability1 == ABILITY_SLUSH_RUSH) && (gBattleRam->field_condition & WEATHER_HAIL_ALL))   ||
        ((ability1 == ABILITY_SWIFT_SWIM) && (gBattleRam->field_condition & WEATHER_RAIN_ALL)))
        return 1;
    if (((ability2 == ABILITY_SAND_RUSH) && (gBattleRam->field_condition & WEATHER_SANDSTORM_ALL)) ||
        ((ability2 == ABILITY_SLUSH_RUSH) && (gBattleRam->field_condition & WEATHER_HAIL_ALL)))
        return 2;
    return 0;
}

//优先度判定
s8 PriorityAbility_Check(u16 move, struct BattleStruct *gBattleRam, int ability,void *gBattleWork)
{
    s8 priority = gBattleRam->moveTbl[move].priority;

    //皇后的威严
    if (CheckSideAbility(gBattleWork,gBattleRam,CHECK_ENEMY_SIDE_ALIVE,0,ABILITY_QUEENLY_MAJESTY) == 0 &&
        CheckSideAbility(gBattleWork,gBattleRam,CHECK_ENEMY_SIDE_ALIVE,0,ABILIRT_DAZZLING) == 0)
    {
        //先行治疗，疾风之翼
        if ((ability == ABILITY_PRANKSTER && gBattleRam->moveTbl[move].split == SPLIT_STATUS) ||
            (ability == ABILITY_GALE_WINGS && gBattleRam->moveTbl[move].type == TYPE_FLYING))
            priority += 1;

        if (CheckMoveOnTable(move,gTriageMoveTable))
            priority += 3;
    }
    return priority;
}

int GetStateChangeValue(int state,struct BattleStruct *gBattleData)
{
    int value;
    
    if (state >= ADD_STATE_ATKDOWN2)
    {
        value = -2;
    }
    else if (state >= ADD_STATE_ATKUP2)
    {
        value = 2;
    }
    else if (state >= ADD_STATE_ATKDOWN)
    {
        value = -1;
    }
    else
    {
        value = 1;
    }

    if(CheckDefenceAbility(gBattleData, gBattleData->attack_client, gBattleData->state_client, ABILITY_CONTRARY) == TRUE)
        return -value;
    else
        return value;
}

int GetStateChangeParm(int state, struct BattleStruct *gBattleData)
{
    int value;
    int temp;

    if (state >= ADD_STATE_ATKDOWN2)
    {
        value = state - ADD_STATE_ATKDOWN2;
        temp = STATE_DOWN;
    }
    else if (state >= ADD_STATE_ATKUP2)
    {
        value = state - ADD_STATE_ATKUP2;
        temp = STATE_UP;
    }
    else if (state >= ADD_STATE_ATKDOWN)
    {
        value = state - ADD_STATE_ATKDOWN;
        temp = STATE_DOWN;
    }
    else
    {
        value = state - ADD_STATE_ATKUP;
        temp = STATE_UP;
    }

    if(CheckDefenceAbility(gBattleData, gBattleData->attack_client, gBattleData->state_client, ABILITY_CONTRARY) == TRUE)
    {
        if(temp == STATE_DOWN) 
            temp = STATE_UP;
        else if(temp == STATE_UP)
            temp = STATE_DOWN;
    }

    gBattleData->temp_work = temp;
    return value;
}

int SkinAbilityTypeChange(int ability, int movetype)
{
    if (movetype == TYPE_NORMAL)
    {
        switch (ability)
        {
        case ABILITY_REFRIGERATE:
            return TYPE_ICE;
        case ABILITY_PIXILATE:
            return TYPE_MYSTERY;
        case ABILITY_AERILATE:
            return TYPE_FLYING;
        case ABILITY_GALVANIZE:
            return TYPE_ELECTRIC;
        default:
            break;
        }
    }

    return movetype;
}


//复制的特性
static int TraceAbility(void *bw, struct BattleStruct *sp, int def1, int def2)
{
    int ret = 0xff;

    if ((sp->battlemon[def1].ability != 59) &&
        (sp->battlemon[def1].ability != 36) &&
        (sp->battlemon[def1].ability != 121) &&
        (sp->battlemon[def1].ability != ABILITY_IMPOSTER) &&
        (sp->battlemon[def1].hp) &&
        (sp->battlemon[def2].hp) &&
        (sp->battlemon[def2].ability != 59) &&
        (sp->battlemon[def2].ability != 36) &&
        (sp->battlemon[def2].ability != ABILITY_IMPOSTER) &&
        (sp->battlemon[def2].ability != 121))
    {
        if (BattleWorkRandGet(bw) & 1)
        {
            ret = def2;
        }
        else
        {
            ret = def1;
        }
    }
    else if ((sp->battlemon[def1].ability != 59) &&
             (sp->battlemon[def1].ability != 36) &&
             (sp->battlemon[def1].ability != ABILITY_IMPOSTER) &&
             (sp->battlemon[def1].hp) &&
             (sp->battlemon[def1].ability != 121))
    {
        ret = def1;
    }
    else if ((sp->battlemon[def2].ability != 59) &&
             (sp->battlemon[def2].ability != 36) &&
             (sp->battlemon[def2].ability != ABILITY_IMPOSTER) &&
             (sp->battlemon[def2].hp) &&
             (sp->battlemon[def2].ability != 121))
    {
        ret = def2;
    }
    return ret;
}

static int GetAbilityClient(struct BattleStruct *sp,int num)
{
    int i = 0;
    if (num == 0)
        i = 1;
    else if (num == 1)
        i = 0;
    else if (num == 2)
        i = 3;
    else if (num == 3)
        i = 2;
    if(!sp->battlemon[i].hp)
    {
        if(i < 1)
            i += 2;
        else
            i -= 2;
    }
    return i;
}

//宠物出场时的属性设置
void ST_PokemonParamGet(struct BattleStruct *sp, int client_no)
{
    sp->battlemon[client_no].imposter_flag = 0;
    sp->battlemon[client_no].sword_flag = 0;
    sp->battlemon[client_no].dark_flag = 0;
    sp->battlemon[client_no].sheild_flag = 0;
    sp->battlemon[client_no].fairy_flag = 0;
    sp->battlemon[client_no].aura_break_flag = 0;
    sp->battlemon[client_no].sword_change_flag = 0;
    sp->battlemon[client_no].sheild_change_flag = 0;

    //轻金属
    if(GetTargetAbility(sp, client_no) == ABILITY_LIGHT_METAL || ItemDataGet(sp, sp->battlemon[client_no].item, 1) == ITEM_EFFECT_FLOAT)
        sp->battlemon[client_no].weight /= 2;
    if(GetTargetAbility(sp, client_no) == ABILITY_HEAVY_METAL)
        sp->battlemon[client_no].weight *= 2;
}

//宝可梦出场时的代码
int PokemonApper(struct BattleStruct *sp,int client_set_max,void* bw)
{
    u8 i;
    int	seq_no = 0;
	int	client_no;
    int	def1,def2;

    for (i = 0; i < client_set_max; i++)
    {
        client_no = sp->psp_agi_work[i];
        def1 = BattleWorkEnemyClientNoGet(bw, client_no, 0);
        def2 = BattleWorkEnemyClientNoGet(bw, client_no, 2);

        //尝试复制的对象是否可以复制
        sp->defence_client_work = TraceAbility(bw, sp, def1, def2);
        //变身者
        if ((sp->battlemon[client_no].imposter_flag == 0) &&
                 (sp->battlemon[client_no].hp) &&
                 (GetTargetAbility(sp, client_no) == ABILITY_IMPOSTER))
        {
            sp->battlemon[client_no].imposter_flag = TRUE;
            sp->movetype_now = 144;
            sp->attack_client = client_no;
            sp->client_work = client_no;
            sp->defence_client = GetAbilityClient(sp,client_no);
            seq_no = 92;
            break;
        }
        //霸主气场
        /*else if(client_no == 1 &&
            sp->battlemon[client_no].bazhu_flag == 0)
        {
            sp->battlemon[client_no].bazhu_flag = 1;
            sp->battlemon[client_no].hp *= 2;
            sp->battlemon[client_no].maxhp *= 2;
            sp->state_client = client_no;
            seq_no = 308;
            break;
        }*/
        //复制
        else if ((sp->battlemon[client_no].trace_flag == 0) &&
            (sp->defence_client_work != 0xFF) &&
            (sp->battlemon[client_no].hp) &&
            (sp->battlemon[client_no].item != 112) &&
            (sp->battlemon[sp->defence_client_work].hp) &&
            (GetTargetAbility(sp, client_no) == ABILITY_TRACE))
        {
            sp->battlemon[client_no].trace_flag = 1;
            sp->client_work = client_no;
            seq_no = 187;
            break;
        }
        //腐朽之剑
        else if((sp->battlemon[client_no].sword_change_flag == 0) &&
            (sp->battlemon[client_no].hp) &&
            (GetMonItem(sp, client_no) == ITEM_RUSTED_SWORD) &&
            (sp->battlemon[client_no].form_no == 0)&&
            (sp->battlemon[client_no].species == 888 + 50))
        {
            sp->battlemon[client_no].sword_change_flag = 1;
            sp->client_work = client_no;
            sp->battlemon[client_no].form_no = 1;
            BattleFormChange(client_no,1,bw,sp,TRUE);
            seq_no = SEQ_FORM_CHANGE;
            break;
        }
        //腐朽之盾
        else if((sp->battlemon[client_no].sheild_change_flag == 0) &&
            (sp->battlemon[client_no].hp) &&
            (GetMonItem(sp, client_no) == ITEM_RUSTED_SHEILD) &&
            (sp->battlemon[client_no].form_no == 0)&&
            (sp->battlemon[client_no].species == 889 + 50))
        {
            sp->battlemon[client_no].sheild_change_flag = 1;
            sp->client_work = client_no;
            sp->battlemon[client_no].form_no = 1;
            BattleFormChange(client_no,1,bw,sp,TRUE);
            seq_no = SEQ_FORM_CHANGE;
            break;
        }
        //不饶之剑
        else if((sp->battlemon[client_no].sword_flag == 0) &&
                (sp->battlemon[client_no].hp) &&
                (sp->battlemon[client_no].states[1] < 12) &&
                (GetTargetAbility(sp, client_no) == ABILITY_INTREPID_SWORD))
        {
            sp->addeffect_param = ADD_STATE_ATKUP;
            sp->addeffect_type = ADD_EFFECT_ABILITY;
            sp->state_client = client_no;
            sp->battlemon[client_no].sword_flag = 1;
            seq_no = SEQ_STATE_CHANGE;
            break;
        }
        //不屈之盾
        else if((sp->battlemon[client_no].sheild_flag == 0) &&
                (sp->battlemon[client_no].hp) &&
                (sp->battlemon[client_no].states[2] < 12) &&
                (GetTargetAbility(sp, client_no) == ABILITY_DAUNTLESS_SHIELD))
        {
            sp->addeffect_param = ADD_STATE_DEFUP;
            sp->addeffect_type = ADD_EFFECT_ABILITY;
            sp->state_client = client_no;
            sp->battlemon[client_no].sheild_flag = 1;
            seq_no = SEQ_STATE_CHANGE;
            break;
        }
        //黑暗光环
        else if((sp->battlemon[client_no].dark_flag == 0)&&
                (sp->battlemon[client_no].hp)&&
                (GetTargetAbility(sp, client_no) == ABILITY_DARK_AURA))
        {
            sp->battlemon[client_no].dark_flag = 1;
            sp->client_work = client_no;
            seq_no = SEQ_DARK_AURA;
            break;
        }
        //妖精光环
        else if((sp->battlemon[client_no].fairy_flag == 0)&&
                (sp->battlemon[client_no].hp)&&
                (GetTargetAbility(sp, client_no) == ABILITY_FAIRY_AURA))
        {
            sp->battlemon[client_no].fairy_flag = 1;
            sp->client_work = client_no;
            seq_no = SEQ_FAIRY_AURA;
            break;
        }
        //光环破坏
        else if((sp->battlemon[client_no].aura_break_flag == 0)&&
                (sp->battlemon[client_no].hp)&&
                (GetTargetAbility(sp, client_no) == ABILITY_AURA_BREAK))
        {
            sp->battlemon[client_no].aura_break_flag = 1;
            sp->client_work = client_no;
            seq_no = SEQ_AURA_BREAK;
            break;
        }
        
        
    }

    if (i == client_set_max)
    {
        sp->spac_seq_no++;
    }
    return seq_no;
}


/********************************************************************************************************************/
/********************************************************************************************************************/
//                                                宠物回合结束特性效果
/********************************************************************************************************************/
/********************************************************************************************************************/
//恢复异常状态
static void ReciveCondition(struct BattleStruct *sp,int client_no)
{
    if (sp->battlemon[client_no].condition & 7)
    {
        sp->msg_work = 0;
    }
    else if (sp->battlemon[client_no].condition & 0xf88)
    {
        sp->msg_work = 1;
    }
    else if (sp->battlemon[client_no].condition & 0x10)
    {
        sp->msg_work = 2;
    }
    else if (sp->battlemon[client_no].condition & 0x40)
    {
        sp->msg_work = 3;
    }
    else
    {
        sp->msg_work = 4;
    }
    sp->client_work = client_no;
}

BOOL ST_ServerPCCTokuseiCheck(void *bw, struct BattleStruct *sp, int client_no)
{
    BOOL ret;
    int seq_no;
    int other_client;
    u16 recycle_item;

    ret = FALSE;
    if (client_no == 0)
        other_client = 2;
    else if (client_no == 2)
        other_client = 2;
    else if (client_no == 1)
        other_client = 3;
    else if (client_no == 3)
        other_client = 1;
    switch (GetTargetAbility(sp, client_no))
    {
    //加速
    case ABILITY_SPEED_BOOST:
        if ((sp->battlemon[client_no].hp) &&
            (sp->battlemon[client_no].states[COND_AGI] < 12) &&
            //刚出场无视效果
            (sp->battlemon[client_no].moveeffect.nekodamashi_count != sp->total_turn + 1))
        {
            sp->addeffect_param = ADD_STATE_SPEUP;
            sp->addeffect_type = ADD_STATUS_TOKUSEI;
            sp->state_client = client_no;
            seq_no = SEQ_STATE_CHANGE;
            ret = TRUE;
        }
        break;
    //蜕皮
    case ABILITY_SHED_SKIN:
        if ((sp->battlemon[client_no].condition & 0xff) &&
            (sp->battlemon[client_no].hp) &&
            (BattleWorkRandGet(bw) % 10 < 3))
        {
            ReciveCondition(sp,client_no);
            seq_no = 190;
            ret = TRUE;
        }
        break;
    //饱了又饿
    case ABILITY_HUGER_SWITCH:
        if ((sp->battlemon[client_no].hp))
        {
            sp->client_work = client_no;
            if(sp->battlemon[client_no].form_no == 1)
            {
                sp->battlemon[client_no].form_no = 0;
                BattleFormChange(client_no,0,bw,sp,TRUE);
            }
            else
            {
                sp->battlemon[client_no].form_no = 1;
                BattleFormChange(client_no,1,bw,sp,TRUE);
            }
            seq_no = SEQ_FORM_CHANGE;
            ret = TRUE;
        }
        break;
    //治愈之心
    case ABILITY_HEALER:
        if(sp->battlemon[client_no].hp &&
            (BattleTypeGet(bw) == 0x2) &&
            (sp->battlemon[other_client].hp)&&
            (BattleWorkRandGet(bw) % 10 < 3))
        {
            ReciveCondition(sp,other_client);
            seq_no = 190;
            ret = TRUE;
        }
        break;
    //收获
    case ABILITY_HARVEST:
        if(sp->battlemon[client_no].hp &&
            sp->recycle_item[client_no]&&
            (BattleWorkRandGet(bw) % 10 < 5 || sp->field_condition & WEATHER_SUN_ALL))
        {
            recycle_item = sp->recycle_item[client_no];
            if(recycle_item >= 149 && recycle_item <= 212)
            {
                sp->client_work = client_no;
                seq_no = SEQ_HARVEST;
                ret = TRUE;
            }
        }
        break;
    //心情不定
    case ABILITY_MOODY:
        if ((sp->battlemon[client_no].hp))
        {
            u8 state_up = BattleWorkRandGet(bw) % 5;
            u8 state_down = BattleWorkRandGet(bw) % 5;
            do
            {
                state_down = BattleWorkRandGet(bw) % 5;
            } while (state_up == state_down);
            
            sp->msg_work = ADD_STATE_ATKUP2 + state_up;
            sp->client_work = ADD_STATE_ATKDOWN + state_down;

            sp->state_client = client_no;
            seq_no = SEQ_MOODY;
            ret = TRUE;
        }
        break;
    default:
        break;
    }
    if (ret == TRUE)
    {
        ST_ServerSequenceLoad(sp, 1, seq_no);
        sp->next_server_seq_no = sp->server_seq_no;
        sp->server_seq_no = 0x16;
    }

    return ret;
}

/********************************************************************************************************************/
/********************************************************************************************************************/
//                                                攻击命中效果检查
/********************************************************************************************************************/
/********************************************************************************************************************/

#define	SWOAM_NORMAL	(0)	//通常
#define	SWOAM_LOOP		(1)	//连续技能

enum{
	SEQ_NORMAL_CRITICAL_MSG=0,
	SEQ_NORMAL_WAZA_STATUS_MSG,
	SEQ_NORMAL_ADD_STATUS_MSG,
	SEQ_NORMAL_FORM_CHG_CHECK,
	SEQ_NORMAL_IKARI_CHECK,
	SEQ_NORMAL_TOKUSEI_CHECK,
    SEQ_NORMAL_TOKUSEI_2_CHECK,
    SEQ_NORMAL_ITEM_CHECK,
	SEQ_NORMAL_HIRUMASERU_CHECK,

	SEQ_LOOP_CRITICAL_MSG=0,
	SEQ_LOOP_ADD_STATUS_MSG,
	SEQ_LOOP_FORM_CHG_CHECK,
	SEQ_LOOP_IKARI_CHECK,
	SEQ_LOOP_TOKUSEI_CHECK,
    SEQ_LOOP_TOKUSEI_2_CHECK,
    SEQ_LOOP_ITEM_CHECK,
	SEQ_LOOP_WAZA_STATUS_MSG,
	SEQ_LOOP_HIRUMASERU_CHECK,
};

#define ARC_SUB_SEQ 1
#define SERVER_WAZA_SEQUENCE_NO 0x16

//检查宠物最高的一项能力值
static u8 CheckBestState(struct BattleStruct *sp)
{
    int ret,new,old = 0;

    for (int i = 1; i < 6;i++)
    {
        switch (i)
        {
        case 1:
            new = sp->battlemon[sp->attack_client].atk;
            break;
        case 2:
            new = sp->battlemon[sp->attack_client].def;
            break;
        case 3:
            new = sp->battlemon[sp->attack_client].spe;
            break;
        case 4:
            new = sp->battlemon[sp->attack_client].spatk;
            break;
        case 5:
            new = sp->battlemon[sp->attack_client].spdef;
            break;
        default:
            return ret;
        }
        if(new > old)
        {
            old = new;
            ret = i;
        }
    }
    return ret;
}

//攻击方特性检查
BOOL AttackAbilityCheck(void *bw, struct BattleStruct *sp,int *seq_no)
{
    BOOL ret;

    ret = FALSE;
    
    switch (sp->battlemon[sp->attack_client].ability)
    {
    //自信过剩，苍白嘶鸣
    case ABLITY_MOXIE:
    case ABILITY_CHILLING_NEIGH:
        //检查死亡方时候是防御方
        if ((sp->kizetsu_client == sp->defence_client) &&
            (sp->battlemon[sp->attack_client].hp) &&
            (sp->waza_status_flag & WAZA_STATUS_FLAG_NO_OUT) == 0 &&
            (sp->battlemon[sp->attack_client].states[1] < 12))
        {
            sp->client_work = sp->attack_client;
            sp->state_client = sp->attack_client;
            sp->addeffect_param = ADD_STATE_ATKUP;
            sp->addeffect_type = ADD_EFFECT_ABILITY;
            seq_no[0] = SEQ_STATE_CHANGE;
            ret = TRUE;
        }
        break;
    //异兽提升
    case ABILITY_BEAST_BOOST:
         //检查死亡方时候是防御方
        if ((sp->kizetsu_client == sp->defence_client) &&
            (sp->battlemon[sp->attack_client].hp) &&
            (sp->waza_status_flag & WAZA_STATUS_FLAG_NO_OUT) == 0 &&
            (sp->battlemon[sp->attack_client].states[CheckBestState(sp)] < 12))
        {
            sp->client_work = sp->attack_client;
            sp->state_client = sp->attack_client;
            sp->addeffect_param = ADD_STATE_ATKUP + CheckBestState(sp) - 1;
            sp->addeffect_type = ADD_EFFECT_ABILITY;
            seq_no[0] = SEQ_STATE_CHANGE;
            ret = TRUE;
        }
        break;
    //漆黑嘶鸣
    case ABILITY_GRIM_NEIGH:
        //检查死亡方时候是防御方
        if ((sp->kizetsu_client == sp->defence_client) &&
            (sp->battlemon[sp->attack_client].hp) &&
            (sp->waza_status_flag & WAZA_STATUS_FLAG_NO_OUT) == 0 &&
            (sp->battlemon[sp->attack_client].states[4] < 12))
        {
            sp->client_work = sp->attack_client;
            sp->state_client = sp->attack_client;
            sp->addeffect_param = ADD_STATE_SPATKUP;
            sp->addeffect_type = ADD_EFFECT_ABILITY;
            seq_no[0] = SEQ_STATE_CHANGE;
            ret = TRUE;
        }
        break;
    //羁绊变身
    case 210:
    {
        int work = 1;
        void *pp = BattleWorkPokemonParamGet(bw, sp->attack_client, sp->sel_mons_no[sp->attack_client]);
        sp->client_work = sp->attack_client;
        sp->battlemon[sp->attack_client].form_no = 1;
        SetMonData(pp, 112, &work);
        seq_no[0] = 262;
        ret = TRUE;
    }
        break;
    //人马一体
    case ABILITY_AS_ONE:
        if ((sp->kizetsu_client == sp->defence_client) &&
            (sp->battlemon[sp->attack_client].hp) &&
            (sp->waza_status_flag & WAZA_STATUS_FLAG_NO_OUT) == 0 &&
            (sp->battlemon[sp->attack_client].form_no > 0))
        {
            if(sp->battlemon[sp->attack_client].form_no == 1)
                sp->addeffect_param = ADD_STATE_ATKUP;
            else if (sp->battlemon[sp->attack_client].form_no == 2)
                sp->addeffect_param = ADD_STATE_SPATKUP;
            sp->client_work = sp->attack_client;
            sp->state_client = sp->attack_client;
            sp->addeffect_type = ADD_EFFECT_ABILITY;
            seq_no[0] = SEQ_STATE_CHANGE;
            ret = TRUE;
        }
        break;
    //毒手
    case ABILITY_POSION_TOUCH:
        if ((sp->battlemon[sp->defence_client].hp) &&
            //判断不存在异常状态
            (sp->battlemon[sp->defence_client].condition == 0) &&
            ((sp->waza_status_flag & WAZA_STATUS_FLAG_NO_OUT) == 0) &&
            (sp->moveTbl[sp->movetype_now].flag & FLAG_CONTACT) &&
            (BattleWorkRandGet(bw)%10<3))
        {
            sp->addeffect_type = ADD_EFFECT_ABILITY;
            sp->state_client = sp->defence_client;
            sp->client_work = sp->attack_client;
            seq_no[0] = 22;
            ret = TRUE;
        }
        break;
    }
    return ret;
}

//防御方被攻击时检查
int DefenceAttackedCheck(void *bw, struct BattleStruct *sp,int *seq_no)
{
    u8 ability = GetTargetAbility(sp,sp->defence_client);

    if(ability == ABILITY_IRON_BARBS)
        return 24;
    else
    {
        switch (ability)
        {
        //黏滑,卷发
        case ABILITY_TANGLING_HAIR:
        case ABILITY_GOOEY:
            //检查攻击方存活
            if ((sp->battlemon[sp->attack_client].hp) &&
            //技能正常
                ((sp->waza_status_flag & WAZA_STATUS_FLAG_NO_OUT) == 0) &&
                //攻击方未使用虫反
                ((sp->server_status_flag2 & SERVER_STATUS_FLAG2_U_TURN) == 0) &&
                //检查受到了物理或者特殊攻击伤害
                ((sp->oneSelfFlag[sp->defence_client].butsuri_ostf_damage) ||
                 (sp->oneSelfFlag[sp->defence_client].tokusyu_ostf_damage)) &&
                //接触攻击
                 (sp->moveTbl[sp->movetype_now].flag & FLAG_CONTACT) &&
                //检查速度不为最低值
                sp->battlemon[sp->attack_client].states[3] > 0)
                {
                    sp->state_client = sp->attack_client;
                    sp->addeffect_type = ADD_EFFECT_ABILITY;
                    sp->addeffect_param = ADD_STATE_SPEDOWN;
                    seq_no[0] = SEQ_STATE_CHANGE;
                    return 0xFF;
                }
            break;
        //木乃伊
        case ABILITY_MUMMY:
            //检查攻击方存活
            if ((sp->battlemon[sp->attack_client].hp) &&
            //技能正常
                ((sp->waza_status_flag & WAZA_STATUS_FLAG_NO_OUT) == 0) &&
                //攻击方未使用虫反
                ((sp->server_status_flag2 & SERVER_STATUS_FLAG2_U_TURN) == 0) &&
                //检查受到了物理或者特殊攻击伤害
                ((sp->oneSelfFlag[sp->defence_client].butsuri_ostf_damage) ||
                 (sp->oneSelfFlag[sp->defence_client].tokusyu_ostf_damage)) &&
                //接触攻击
                 (sp->moveTbl[sp->movetype_now].flag & FLAG_CONTACT) &&
                //排除某些特性
                !CheckAbilityOnTable(sp->battlemon[sp->attack_client].ability,gMummyTable)&&
                //还存在特性
                sp->battlemon[sp->attack_client].ability)
                {
                    sp->battlemon[sp->attack_client].ability = 0;
                    sp->client_work = sp->attack_client;
                    seq_no[0] = SEQ_MUMMY;
                    return 0xFF;
                }
            break;
        //破碎铠甲
        case ABILITY_WEAK_ARMOR:
            if(((sp->waza_status_flag & WAZA_STATUS_FLAG_NO_OUT) == 0) &&
                //攻击方未使用虫反
                ((sp->server_status_flag2 & SERVER_STATUS_FLAG2_U_TURN) == 0) &&
                //检查受到了物理或者特殊攻击伤害
                ((sp->oneSelfFlag[sp->defence_client].butsuri_ostf_damage) ||
                 (sp->oneSelfFlag[sp->defence_client].tokusyu_ostf_damage)) &&
                //物理伤害技能
                 (sp->moveTbl[sp->movetype_now].split == SPLIT_PHYSICAL) &&
                //防御方存活
                (sp->battlemon[sp->defence_client].hp))
                {
                    sp->state_client = sp->defence_client;
                    sp->client_work = sp->defence_client;
                    sp->addeffect_type = ADD_EFFECT_ABILITY;
                    seq_no[0] = SEQ_WEAK_ARMOR;
                    return 0xFF;
                }
            break;
        //正义之心
        case ABILITY_JUSTFIED:
            if (((sp->waza_status_flag & WAZA_STATUS_FLAG_NO_OUT) == 0) &&
                ((sp->server_status_flag & SERVER_STATUS_FLAG2_U_TURN) == 0) &&
                ((sp->oneSelfFlag[sp->defence_client].butsuri_ostf_damage) ||
                 (sp->oneSelfFlag[sp->defence_client].tokusyu_ostf_damage)) &&
                (sp->moveTbl[sp->movetype_now].type == TYPE_DARK) &&
                (sp->battlemon[sp->defence_client].hp))
                {
                    sp->client_work = sp->defence_client;
                    sp->state_client = sp->defence_client;
                    sp->addeffect_type = ADD_EFFECT_ABILITY;
                    sp->addeffect_param = ADD_STATE_ATKUP;
                    seq_no[0] = SEQ_STATE_CHANGE;
                    return 0xFF;
                }
            break;
        //胆怯
        case ABILITY_RATTLED:
            if (((sp->waza_status_flag & WAZA_STATUS_FLAG_NO_OUT) == 0) &&
                ((sp->server_status_flag & SERVER_STATUS_FLAG2_U_TURN) == 0) &&
                ((sp->oneSelfFlag[sp->defence_client].butsuri_ostf_damage) ||
                 (sp->oneSelfFlag[sp->defence_client].tokusyu_ostf_damage)) &&
                 (sp->moveTbl[sp->movetype_now].type == TYPE_DARK || sp->moveTbl[sp->movetype_now].type == TYPE_GHOST || sp->moveTbl[sp->movetype_now].type == TYPE_BUG) &&
                (sp->battlemon[sp->defence_client].hp))
                {
                    sp->client_work = sp->defence_client;
                    sp->state_client = sp->defence_client;
                    sp->addeffect_type = ADD_EFFECT_ABILITY;
                    sp->addeffect_param = ADD_STATE_SPEUP;
                    seq_no[0] = SEQ_STATE_CHANGE;
                    return 0xFF;
                }
            break;
        }
        
        return ability;
    }
}

//攻击方道具检查
BOOL AttackItemCheck(void *bw, struct BattleStruct *sp,int *seq_no,BOOL isloop)
{return FALSE;}

//技能使用后的效果检查
void ServerWazaOutAfterMessage(void *bw, struct BattleStruct *sp)
{
    if(sp->swoam_type == SWOAM_NORMAL)
    {
        switch (sp->swoam_seq_no)
        {
        //命中信息显示
        case SEQ_NORMAL_CRITICAL_MSG:
            sp->swoam_seq_no++;
            if (ServerCriticalMessage(bw, sp) == TRUE)
            {
                return;
            }
        //技能状态文本显示
        case SEQ_NORMAL_WAZA_STATUS_MSG:
            sp->swoam_seq_no++;
            if (ServerWazaStatusMessage(bw, sp) == TRUE)
            {
                return;
            }
        //追加效果文本显示
        case SEQ_NORMAL_ADD_STATUS_MSG:
        {
            int seq_no;

            sp->swoam_seq_no++;
            if ((ST_ServerAddStatusCheck(bw, sp, &seq_no) == TRUE) && ((sp->waza_status_flag & WAZA_STATUS_FLAG_HAZURE) == 0))
            {
                ST_ServerSequenceLoad(sp, ARC_SUB_SEQ, seq_no);
                sp->next_server_seq_no = sp->server_seq_no;
                sp->server_seq_no = SERVER_WAZA_SEQUENCE_NO;
                return;
            }
        }
        //形态变化文本
        case SEQ_NORMAL_FORM_CHG_CHECK:
            sp->swoam_seq_no++;
            ST_ServerSequenceLoad(sp, ARC_SUB_SEQ, 0x125);
            sp->next_server_seq_no = sp->server_seq_no;
            sp->server_seq_no = SERVER_WAZA_SEQUENCE_NO;
            return;
        case SEQ_NORMAL_IKARI_CHECK:
            sp->swoam_seq_no++;
            if (ServerIkariCheck(bw, sp) == TRUE)
            {
                return;
            }
        //特性检查,被攻击的效果
        case SEQ_NORMAL_TOKUSEI_CHECK:
        {
            int seq_no;

            sp->swoam_seq_no++;
            if (ST_ServerWazaHitTokuseiCheck_Old(bw, sp, &seq_no) == TRUE)
            {
                ST_ServerSequenceLoad(sp, ARC_SUB_SEQ, seq_no);
                sp->next_server_seq_no = sp->server_seq_no;
                sp->server_seq_no = SERVER_WAZA_SEQUENCE_NO;
                return;
            }
        }
        //特性检查2，攻击方效果
        case SEQ_NORMAL_TOKUSEI_2_CHECK:
        {
            int seq_no;

            sp->swoam_seq_no++;
            if (AttackAbilityCheck(bw, sp, &seq_no) == TRUE)
            {
                ST_ServerSequenceLoad(sp, ARC_SUB_SEQ, seq_no);
                sp->next_server_seq_no = sp->server_seq_no;
                sp->server_seq_no = SERVER_WAZA_SEQUENCE_NO;
                return;
            }
        }
        //道具效果
        case SEQ_NORMAL_ITEM_CHECK:
        {
            int seq_no;

            sp->swoam_seq_no++;
            if (AttackItemCheck(bw, sp, &seq_no, FALSE) == TRUE)
            {
                ST_ServerSequenceLoad(sp, ARC_SUB_SEQ, seq_no);
                sp->next_server_seq_no = sp->server_seq_no;
                sp->server_seq_no = SERVER_WAZA_SEQUENCE_NO;
                return;
            }
        }
        case SEQ_NORMAL_HIRUMASERU_CHECK:
            sp->swoam_seq_no++;
            if (ServerHirumaseruCheck(bw, sp) == TRUE)
            {
                return;
            }
        default:
            break;
        }
    }
    else if(sp->swoam_type == SWOAM_LOOP)
    {
        switch (sp->swoam_seq_no)
        {
        case SEQ_LOOP_CRITICAL_MSG:
            sp->swoam_seq_no++;
            if (ServerCriticalMessage(bw, sp) == TRUE)
            {
                return;
            }
        case SEQ_LOOP_ADD_STATUS_MSG:
        {
            int seq_no;

            sp->swoam_seq_no++;
            if ((ST_ServerAddStatusCheck(bw, sp, &seq_no) == TRUE) && ((sp->waza_status_flag & WAZA_STATUS_FLAG_HAZURE) == 0))
            {
                ST_ServerSequenceLoad(sp, ARC_SUB_SEQ, seq_no);
                sp->next_server_seq_no = sp->server_seq_no;
                sp->server_seq_no = SERVER_WAZA_SEQUENCE_NO;
                return;
            }
        }
        case SEQ_LOOP_FORM_CHG_CHECK:
            sp->swoam_seq_no++;
            ST_ServerSequenceLoad(sp, ARC_SUB_SEQ, 0x125);
            sp->next_server_seq_no = sp->server_seq_no;
            sp->server_seq_no = SERVER_WAZA_SEQUENCE_NO;
            return;
        case SEQ_LOOP_IKARI_CHECK:
            sp->swoam_seq_no++;
            if (ServerIkariCheck(bw, sp) == TRUE)
            {
                return;
            }
        case SEQ_LOOP_TOKUSEI_CHECK:
        {
            int seq_no;

            sp->swoam_seq_no++;
            if (ST_ServerWazaHitTokuseiCheck_Old(bw, sp, &seq_no) == TRUE)
            {
                ST_ServerSequenceLoad(sp, ARC_SUB_SEQ, seq_no);
                sp->next_server_seq_no = sp->server_seq_no;
                sp->server_seq_no = SERVER_WAZA_SEQUENCE_NO;
                return;
            }
        }
        case SEQ_LOOP_TOKUSEI_2_CHECK:
        {
            int seq_no;

            sp->swoam_seq_no++;
            if (AttackAbilityCheck(bw, sp, &seq_no) == TRUE)
            {
                ST_ServerSequenceLoad(sp, ARC_SUB_SEQ, seq_no);
                sp->next_server_seq_no = sp->server_seq_no;
                sp->server_seq_no = SERVER_WAZA_SEQUENCE_NO;
                return;
            }
        }
        case SEQ_LOOP_ITEM_CHECK:
        {
            int seq_no;

            sp->swoam_seq_no++;
            if (AttackItemCheck(bw, sp, &seq_no,TRUE) == TRUE)
            {
                ST_ServerSequenceLoad(sp, ARC_SUB_SEQ, seq_no);
                sp->next_server_seq_no = sp->server_seq_no;
                sp->server_seq_no = SERVER_WAZA_SEQUENCE_NO;
                return;
            }
        }
        case SEQ_LOOP_WAZA_STATUS_MSG:
            sp->swoam_seq_no++;
            if (ServerWazaStatusMessage(bw, sp) == TRUE)
            {
                return;
            }
        case SEQ_LOOP_HIRUMASERU_CHECK:
            sp->swoam_seq_no++;
            if (ServerHirumaseruCheck(bw, sp) == TRUE)
            {
                return;
            }
        default:
            break;
        }
    }
    sp->swoam_seq_no = 0;
    sp->server_seq_no = 0x1F;
}

///***********************************天气效果扣血检查***********************************////
//沙暴
bool8 CheckStome(struct BattleStruct *sp, int client)
{
    if(GetTargetAbility(sp,client) == ABILITY_OVERCOAT || GetTargetAbility(sp,client) == ABILITY_SAND_FORCE || GetTargetAbility(sp,client) == ABILITY_SAND_RUSH)
        return TRUE;
    return FALSE;
}
//雪天
bool8 CheckStome2(struct BattleStruct *sp, int client)
{
    if(GetTargetAbility(sp,client) == ABILITY_OVERCOAT || GetTargetAbility(sp,client) == 81 || GetTargetAbility(sp,client) == ABILITY_SLUSH_RUSH)
        return TRUE;
    return FALSE;
}

///***********************************防御方检查***********************************////

void ServerDefenceCheck_2(struct BattleStruct *sp)
{
    u16 move = sp->movetype_now;

    //变幻自如
    if(GetTargetAbility(sp, sp->attack_client) == ABILITY_PROTEAN && move && move != 248 &&move!= 353)
    {
        sp->battlemon[sp->attack_client].type1 = sp->moveTbl[move].type;
        sp->battlemon[sp->attack_client].type2 = sp->moveTbl[move].type;
    }
    //魔法镜
    else if (CheckDefenceAbility(sp, sp->attack_client,sp->defence_client,ABILITY_MAGIC_BOUCE) == TRUE)
        sp->oneTurnFlag[sp->defence_client].magic_cort_flag = 1;

}