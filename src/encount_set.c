#include "../include/types.h"
#include "../include/pokedex.h"
#include "../include/pokemon.h"
#include "../include/battle.h"
#include "../include/script.h"
#include "../include/constants/ability.h"

u32 caught_num = 0;
u16 LinkCaughtPoke = 0;
u16 linkNum = 0;

static void AddPokemonParam_Shiny(struct POKEMON_PARAM *ioPokeParam, struct BATTLE_PARAM  *ioBattleParam);
static void AddPokemonParam_Iv(struct POKEMON_PARAM *ioPokeParam, struct BATTLE_PARAM  *ioBattleParam);

bool8 random_pokemon(u16 num)
{
	int i = num;
	if ((i > 143 && i <= 151) ||
		(i > 242 && i <= 251) ||
		(i > 376 && i <= 386) ||
		(i > 479 && i <= 493))
		{return TRUE;}
	return FALSE;
}

u16 random(void)
{
	int i = 0;

	if(gf_rand() % 50 == 0 || caught_num > 50)
	{
		caught_num = 0;

		for(;;)
		{
			i = gf_rand() % 494;
			if(random_pokemon(i))
				break;
		}	
	}
	else if (LinkCaughtPoke && gf_rand() % 4 == 0 && !random_pokemon(LinkCaughtPoke))
		return LinkCaughtPoke;
	else
	{

		caught_num++;
		for (;;)
		{
			i = gf_rand() % 945;
			if (i > 0 && (!(i > 493 && i < 544)) && i < 945 && !random_pokemon(i))
				break;
		}
	}

	if (i <= 0)
		i = 1;

	if (i > 946)
		i = 946;

	if (i > 493 && i < 544)
		i = 1;

    return i;
}

bool8 GetMonLinkMessage(struct tcb_skill_intp_work *tbc,int get_client_no)
{
	struct Save_DexData *dex_data = BattleWorkZukanWorkGet(tbc->bw);
	struct POKEMON_PARAM *pp=BattleWorkPokemonParamGet(tbc->bw,get_client_no,tbc->sp->sel_mons_no[get_client_no]);

	u8 form_no = GetMonData(pp,ID_PARA_form_no,NULL);

	u16 mon = GetMonData(pp,ID_PARA_monsno,NULL);
	//切回正常形态
	ReverFormChange(pp, mon,form_no);

	//如果捕捉的是上次的精灵，计数+1
	if(LinkCaughtPoke == mon && dex_data->count_lure)
		dex_data->link_caught_count++;
	else
	{
		//如果不是，重新计数
		dex_data->link_caught_count = 1;
		LinkCaughtPoke = 0;
		if(dex_data->count_lure)
			LinkCaughtPoke = mon;
		return FALSE;
	}

	linkNum = dex_data->link_caught_count;

	if(linkNum > 1)
	{
		return TRUE;
	}
	return FALSE;
}

void AddPokemonParam(struct POKEMON_PARAM *ioPokeParam, struct BATTLE_PARAM *ioBattleParam)
{
	if(ioBattleParam->savedata > (void*)0x02FFFFFF)
		return;
	
	if(ioBattleParam->savedata < (void*)0x02000000)
		return;

	AddPokemonParam_Shiny(ioPokeParam,ioBattleParam);
	AddPokemonParam_Iv(ioPokeParam,ioBattleParam);
}


static void AddPokemonParam_Shiny(struct POKEMON_PARAM *ioPokeParam, struct BATTLE_PARAM  *ioBattleParam)
{
	u32 rnd = GetMonData(ioPokeParam,0,NULL);
	u32 id = GetMonData(ioPokeParam,ID_PARA_id_no,NULL);
	u8 level = GetMonData(ioPokeParam,ID_PARA_level,NULL);

	u8 ability_num = rnd &1;
	u8 nature = PokeNatureGet(rnd);
	u16 mon = GetMonData(ioPokeParam,ID_PARA_monsno,NULL);

	/*int form = 1;
	if(mon == 144)
	{
		SetMonData(ioPokeParam,ID_PARA_form_no,&form);
		PokeSetMove(&ioPokeParam->boxMonData);
	}*/

	struct Save_DexData *dex_data = SaveData_GetDexPtr(ioBattleParam->savedata);

	//dex_data->link_caught_count = 200;

	u8 time = 0;
	u16 link = dex_data->link_caught_count;
	//已经是闪光
	if(IsMonShiny(id,rnd))
		return;

	//存在引虫香水步数
	if(dex_data->count_lure)
	{
		level += 5;
		//SetMonData(ioPokeParam,ID_PARA_level,&level);
	
		time += 1;
	}

	//拥有闪符
	if(dex_data->shiny_flag)
	{
		time += 2;
	}

	//连锁捕捉
	if( link > 10 && link <= 20)
	{
		time += 4;
	}
	else if ( link > 20 && link <= 30)
	{
		time += 9;
	}
	else if (link > 31)
	{
		time += 13;
	}

	//最终计算
	if(gf_rand() % 4096 < time)
	{
		ChangePokemonPersonal(ioPokeParam,ability_num,nature, TRUE);
	}
}

static void AddPokemonParam_Iv(struct POKEMON_PARAM *ioPokeParam, struct BATTLE_PARAM *ioBattleParam)
{
	struct Save_DexData *dex_data = SaveData_GetDexPtr(ioBattleParam->savedata);

	u16 link = dex_data->link_caught_count;
	u8 max_iv = 31;
	u16 hide = 0x7f;
	u8 iv1,iv2,iv3,iv4;

	iv1 = gf_rand() % 6;
	
    do
    {
        iv2 = gf_rand() % 6;
    } while (iv1 == iv2);
    do
    {
        iv3 = gf_rand() % 6;
    } while (iv1 == iv2 || iv1 == iv3 || iv3 == iv2);
    do
    {
        iv4 = gf_rand() % 6;
    } while (iv1 == iv2 || iv1 == iv3 || iv3 == iv2 || iv1 == iv4 ||iv2 == iv4 ||iv3 == iv4);

	//连锁捕捉
	if( link > 4 && link <= 9)
	{
		SetMonData(ioPokeParam,ID_PARA_hp_rnd + iv1,&max_iv);
	}
	else if ( link > 9 && link <= 19)
	{
		if(gf_rand() % 100 < 5)
			SetMonData(ioPokeParam,ID_PARA_dummy_p2_2,&hide);

		SetMonData(ioPokeParam,ID_PARA_hp_rnd + iv1,&max_iv);
		SetMonData(ioPokeParam,ID_PARA_hp_rnd + iv2,&max_iv);
	}
	else if (link > 19 && link <= 29)
	{
		if(gf_rand() % 100 < 10)
			SetMonData(ioPokeParam,ID_PARA_dummy_p2_2,&hide);

		SetMonData(ioPokeParam,ID_PARA_hp_rnd + iv1,&max_iv);
		SetMonData(ioPokeParam,ID_PARA_hp_rnd + iv2,&max_iv);
		SetMonData(ioPokeParam,ID_PARA_hp_rnd + iv3,&max_iv);
	}
	else if (link > 29)
	{
		if(gf_rand() % 100 < 15)
			SetMonData(ioPokeParam,ID_PARA_dummy_p2_2,&hide);

		SetMonData(ioPokeParam,ID_PARA_hp_rnd + iv1,&max_iv);
		SetMonData(ioPokeParam,ID_PARA_hp_rnd + iv2,&max_iv);
		SetMonData(ioPokeParam,ID_PARA_hp_rnd + iv3,&max_iv);
		SetMonData(ioPokeParam,ID_PARA_hp_rnd + iv4,&max_iv);
	}
	PokeParaCalc(ioPokeParam);
	PokePasoParaSpeabiSet(&ioPokeParam->boxMonData);
}

bool8 LureCheck(struct Unkstruct *fsys)
{
	struct Save_DexData *dex_data = SaveData_GetDexPtr(fsys->savedata);

	if(dex_data->count_lure > 0)
	{
		dex_data->count_lure--;
		if(dex_data->count_lure == 0)
		{
			EventSet_Script(fsys, 2074, NULL);
			return TRUE;
		}
	}
	return FALSE;
}
