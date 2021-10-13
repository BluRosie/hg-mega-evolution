#include "../include/types.h"
#include "../include/battle.h"
#include "../include/pokemon.h"
#include "../include/mega.h"
#include "../include/sprite.h"
#include "../include/constants/ability.h"
#include "../include/constants/item.h"
#include "../include/constants/file.h"
#include "../include/constants/species.h"

struct MegaStrcut
{
    u16 monindex;
    u16 itemindex;
};

const struct MegaStrcut sMegaTable[] =
{
    {3,1},
    {6,1},
    {6,2},
    {9,1},
    {15,1},
    {18,1},
    {65,1},
    {199,1},
    {94,1},
    {115,1},
    {127,1},
    {130,1},
    {142,1},
    {150,1},
    {150,2},
    {SPECIES_SCEPTILE, 1},
    /*{181,0},
    {208,0},
    {212,0},
    {214,0},
    {229,0},
    {248,0},
    {254,0},
    {257,0},
    {260,0},
    {282,0},
    {302,0},
    {306,0},
    {308,0},
    {310,0},
    {319,0},
    {323,0},
    {334,0},
    {354,0},
    {359,0},
    {362,0},
    {373,0},
    {376,0},
    {380,0},
    {381,0},
    {428,0},
    {445,0},
    {448,0},
    {460,0},
    {475,0},
    {531+50,0},
    {719+50,0},*/
};

static BOOL CheckMegaData(u16 mon, u16 item);

BOOL CheckCanMega(struct BattleStruct *battle, int client)
{
    u16 mon = battle->battlemon[client].species;
    u16 item = battle->battlemon[client].item;

    if(battle->battlemon[client].canMega)
        return FALSE;

    if(newBS.SideMega[client&1])
        return FALSE;

    if(battle->battlemon[client].form_no)
        return FALSE;

    if(battle->client_act_work[client][3] != SELECT_FIGHT_COMMAND)
        return FALSE;

    return CheckMegaData(mon,item);
}

BOOL IsMegaSpecies(u16 mon)
{
    u8 i;
    for (i = 0; i < NELEMS(sMegaTable); i++)
    {
        if (sMegaTable[i].monindex == mon)
        {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL CheckIsMega(struct BI_PARAM *bip)
{
    void *pp;
    u16 form_no;
    u16 mon;

    pp = BattleWorkPokemonParamGet(bip->bw, bip->client_no, bip->sel_mons_no);
    mon = GetMonData(pp, 5, 0);
    form_no = GetMonData(pp, 112, 0);
    if (!form_no)
        return FALSE;

    return IsMegaSpecies(mon);
}

static BOOL CheckMegaData(u16 mon, u16 item)
{
    u8 i;
    for(i = 0; i < NELEMS(sMegaTable);i++)
    {
        if(sMegaTable[i].monindex == mon && sMegaTable[i].itemindex == item)
        {
            return TRUE;
        }
    }
    return FALSE;
}

BOOL CheckCanDrawMegaButton(struct BI_PARAM *bip)
{
    void *pp;
    u16 item;
    u16 mon;

    pp = BattleWorkPokemonParamGet(bip->bw, bip->client_no, bip->sel_mons_no);
    item = GetMonData(pp,6,0);
    mon = GetMonData(pp,5,0);

    return CheckMegaData(mon,item);
}