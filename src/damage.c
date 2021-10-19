#include "../include/types.h"
#include "../include/battle.h"
#include "../include/constants/ability.h"
#include "../include/constants/item.h"



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