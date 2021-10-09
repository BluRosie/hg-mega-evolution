#include "config.h"
#include "../include/types.h"
#include "../include/script.h"
#include "../include/pokemon.h"
#include "../include/window.h"
#include "../include/pokedex.h"
#include "../include/constants/item.h"

typedef BOOL (*ScriptFuction)(void *);
typedef struct Script_Struct ScriptContext;
typedef void (*SpecialFunc)(ScriptContext *ctx);

static void TryUseRepel(ScriptContext *ctx);
static void SetAllPokemonDex(ScriptContext *ctx);
static void ChangeMonAbility(ScriptContext *ctx);
static void BufferAbilityName(ScriptContext *ctx);
static void UseLure(ScriptContext *ctx);
static void GetLastLure(ScriptContext *ctx);

struct BagData
{
    void *save;
    /*...*/
};

struct BagStruct
{
    /*0x0*/ u8 unk[0x234];
    /*0x234*/ struct BagData *data;
    /*.....*/
};

#define ScriptReadByte(ctx) (*((ctx)->scriptPtr++))


const SpecialFunc gSpecials[] =
{
    [SPECIAL_TRY_USE_REPEL] = TryUseRepel,
    [SPECIAL_SET_DEX] = SetAllPokemonDex,
	[SPECIAL_CHANGE_MON_ABILITY] = ChangeMonAbility,
	[SPECIAL_BUFFER_ABILITY_NAME] = BufferAbilityName,
	[4] = UseLure,
	[5] = GetLastLure,
};

void BagSetRepelUse(struct BagStruct *Bag_Data, u8 repel)
{
    u8 *SaveData_Repel;

    void *event = SaveData_GetEventPtr(Bag_Data->data->save);
    u16 *vars = GetVarAdrs(event, UNUSED_VAR_TO_REPEL);

    u16 item = 0;

    if (repel == 100)
        item = 79;
    else if (repel == 200)
        item = 76;
    else if (repel == 250)
        item = 77;

    *vars = item;
    SaveData_Repel = SaveData_GetRepelPtr(GetBagSaveData(Bag_Data));
    *SaveData_Repel = repel;
}

//0x1DB
BOOL ScrCmd_special(ScriptContext *ctx)
{
    u8 index = ScriptReadByte(ctx);

    gSpecials[index](ctx);
    return 0;
}

static void TryUseRepel(ScriptContext *ctx)
{
    u8 *SaveData_Repel = SaveData_GetRepelPtr(EncDataSave_GetSaveDataPtr(ctx->fsys->savedata));
    u16 *Repel = VarGet(ctx->fsys,UNUSED_VAR_TO_REPEL);

    u8 step = 0;

    if (*Repel == 79)
        step = 100;
    else if (*Repel == 76)
        step = 200;
    else if (*Repel == 77)
        step = 250;

    *SaveData_Repel = step;
}

static void SetAllPokemonDex(ScriptContext *ctx)
{
    void *dexdata = SaveData_GetDexPtr(ctx->fsys->savedata);
    void *pm = PokemonParam_AllocWork(32);

	for (int i = 1; i < 948; i++)
	{
		PokeParaInit(pm);
		PokeParaSet(pm, i, 50, 32, 0, 0, 0, 0);
		SetPokemonSee(dexdata, pm);
		SetPokemonGet(dexdata, pm);
	}

	sys_FreeMemoryEz(pm);
}

//改变宠物的特性
static void ChangeMonAbility(ScriptContext *ctx)
{
    void *partydaya = SaveData_GetPlayerPartyPtr(ctx->fsys->savedata);
    u16 *select_mon = VarGet(ctx->fsys,0x800C);
	u16 *Var8004 = VarGet(ctx->fsys,0x8004);
	u16 *Var8005 = VarGet(ctx->fsys,0x8005);

	void *mon = PokeParty_GetMemberPointer(partydaya,*select_mon);

	u16 mon_no = GetMonData(mon,5,NULL);
	u8 from_no = GetMonData(mon,0x70,NULL);

	u8 ability1 = PokeFormNoPersonalParaGet(mon_no,from_no,0x18);
	u8 ability2 = PokeFormNoPersonalParaGet(mon_no,from_no,0x19);
	u32 rnd = GetMonData(mon,ID_PARA_personal_rnd,NULL);
	u8 nature;

	if(GetMonData(mon,76,NULL) == 0 && ability1 != ability2 && ability1 != 0 && ability2 != 0 )
	{
		nature = PokeNatureGet(rnd);
		if(GetMonData(mon,10,NULL) == ability1)
		{
			
			SetMonData(mon,10,&ability2);
			*Var8004 = ability1;
			*Var8005 = ability2;
			ChangePokemonPersonal(mon,1,nature,FALSE);
		}
		else if(GetMonData(mon,10,NULL) == ability2)
		{
			SetMonData(mon,10,&ability1);
			*Var8004 = ability2;
			*Var8005 = ability1;
			ChangePokemonPersonal(mon,0,nature,FALSE);
		}
		*select_mon = 1;
	}
	else
		*select_mon = 0;
}

//buff特性名字
static void BufferAbilityName(ScriptContext *ctx) 
{
	void **wordset = GetEvScriptWorkMemberAdrs(ctx->fsys, 16);//80402F0h
	u16 *id = VarGet(ctx->fsys,0x8005);
	u16 *ability = VarGet(ctx->fsys,0x8004);

	WORDSET_RegisterAbilityName(*wordset, *id, *ability);//0800C060
}

static void UseLure(ScriptContext *ctx) 
{
	struct Save_DexData *dexdata = SaveData_GetDexPtr(ctx->fsys->savedata);

	u16 *item = VarGet(ctx->fsys,0x800C);

	if(dexdata->count_lure > 0)
		*item = 0;
	else
	{
		if(*item == ITEM_MAX_LURE)
			dexdata->count_lure = 250;
		else if (*item == ITEM_SUPRE_LURE)
			dexdata->count_lure = 150;
		else if (*item == ITEM_LURE)
			dexdata->count_lure = 100;
		dexdata->lure = *item;
	}
}

static void GetLastLure(ScriptContext *ctx)
{
	struct Save_DexData *dexdata = SaveData_GetDexPtr(ctx->fsys->savedata);

	u16 *item = VarGet(ctx->fsys,0x800C);
	*item = dexdata->lure;
}

/***********************************透明框***********************************************************/
void Tr_TextBox(GF_BGL_BMPWIN *win)
{
    u8 type = 0;

    *(u16*)0x04000050 = 0x1b4f;
    *(u16*)0x04000052 = 0x0510;

    TalkWinGraphicSet(win->ini, GF_BGL_BmpWinGet_Frame(win),944, 10, 1, 4);
    
    if(GF_BGL_BmpWinGet_Frame(win) > 4)
        type = 4;
    ArcUtil_PalSet(38,51,type,10 * 0x20,0x20,4);

    FieldTalkWinClear(win);

    BmpTalkWinWrite(win, 0, 944, 10);
}

void FieldMsgPrintInit(u32 type, u32 init)
{
    if (init == 1)
    {
        MSG_PrintInit();
    }
    SystemFontPaletteLoad(type, 0x1a0, 4);

    ArcUtil_PalSet(16, 10, type, 0x180, 0x20, 4);
}


/*********************************************个体努力值显示******************************************/
#define MON_DATA_HP_MAX 164
#define MON_DATA_HP_EV 13
#define MON_DATA_HP_IV 70
#define MON_DATA_HP 163

struct windows{
	int unk0;
	int unk4;
	int unk5;
	int unk6;
};

struct unk_struct{
	void *unk0;
	void *unk4;
	void *unk8;
	u32 unkC;
	u8 unk10;
	u8 unk11;
	/*and more*/
	/*........*/
};

struct PokeSummary
{
	void * unk0;
	struct windows win[34];
	/*0x224*/ struct windows *Win0;
	u32	win_max;
	struct unk_struct *data;
	/*0x228*/u8 fill1[0x24];
	/*0x254*/u16 hp;
	u16 max_hp;
	/*0x258*/ u16 atk;
	u16 def;
	u16 spa;
	u16 spd;
	u16 spe;
};


static void PokeDataSet2(struct PokeSummary *poke,u8 mode)
{
	void *pokemon = PokeStatusPokeParamGet(poke);//89E48

	int start = MON_DATA_HP_MAX;

	if (mode == 1)
		start = MON_DATA_HP_EV;
	else if (mode == 2)
		start = MON_DATA_HP_IV;

	if(poke->data->unk11 == 2)
	{
		void *pokemon2 = PokemonParam_AllocWork(19);//6d76c
		PokeCopyPPtoPP(pokemon, pokemon2);//71214
		if(!mode)
			poke->hp =(u16)GetMonData(pokemon2, MON_DATA_HP, NULL);//6DF80
		else
			poke->hp = (u16)GetMonData(pokemon2, start, NULL);
		poke->atk = (u16)GetMonData(pokemon2, start+1, NULL);
		poke->def = (u16)GetMonData(pokemon2, start+2, NULL);
		poke->spa = (u16)GetMonData(pokemon2, start+4, NULL);
		poke->spd = (u16)GetMonData(pokemon2, start+5, NULL);
		poke->spe = (u16)GetMonData(pokemon2, start+3, NULL);
		sys_FreeMemoryEz(pokemon2);//1A7C0
	}
	else
	{
		if(!mode)
			poke->hp = (u16)GetMonData(pokemon, MON_DATA_HP, NULL);
		else
			poke->hp = (u16)GetMonData(pokemon, start, NULL);
		poke->atk = (u16)GetMonData(pokemon, start+1, NULL);
		poke->def = (u16)GetMonData(pokemon, start+2, NULL);
		poke->spa = (u16)GetMonData(pokemon, start+4, NULL);
		poke->spd = (u16)GetMonData(pokemon, start+5, NULL);
		poke->spe = (u16)GetMonData(pokemon, start+3, NULL);
	}
}

#define black_color	0x10200

void ChangeState(struct PokeSummary *poke ,u8 mode)
{
	FillWindowPixelBuffer(&poke->Win0[0], 0);//1D62C GF_BGL_BmpWinDataFill
	FillWindowPixelBuffer(&poke->Win0[1], 0);
	FillWindowPixelBuffer(&poke->Win0[2], 0);
	FillWindowPixelBuffer(&poke->Win0[3], 0);
	FillWindowPixelBuffer(&poke->Win0[4], 0);
	FillWindowPixelBuffer(&poke->Win0[5], 0);
	PokeDataSet2(poke, mode);
	ConvertNumToString(poke, 119, poke->hp, 3, 1);//8C190
	StringPut(poke, &poke->Win0[0], black_color, 2);//8C08C

	ConvertNumToString(poke, 0x79, poke->atk, 3, 0);
	StringPut(poke, &poke->Win0[1], black_color, 1);

	ConvertNumToString(poke, 0x7a, poke->def, 3, 0);
	StringPut(poke, &poke->Win0[2], black_color, 1);

	ConvertNumToString(poke, 0x7b, poke->spa, 3, 0);
	StringPut(poke, &poke->Win0[3], black_color, 1);

	ConvertNumToString(poke, 0x7c, poke->spd, 3, 0);
	StringPut(poke, &poke->Win0[4], black_color, 1);

	ConvertNumToString(poke, 0x7d, poke->spe, 3, 0);
	StringPut(poke, &poke->Win0[5], black_color, 1);

	PutWindows(&poke->Win0[0]);//1D27C GF_BGL_BmpWinOnVReqh
	PutWindows(&poke->Win0[1]);
	PutWindows(&poke->Win0[2]);
	PutWindows(&poke->Win0[3]);
	PutWindows(&poke->Win0[4]);
	PutWindows(&poke->Win0[5]);
	PokeDataSet2(poke, 0); //if you don't want recovery when you change page ,please delete this line
}
