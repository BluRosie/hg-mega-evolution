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
    //{SPECIES_VENUSAUR, 1},
    //{SPECIES_CHARIZARD, 1}, // x
    //{SPECIES_CHARIZARD, 2}, // y
    //{SPECIES_BLASTOISE, 1},
    //{SPECIES_BEEDRILL, 1},
    //{SPECIES_PIDGEOT, 1},
    //{SPECIES_ALAKAZAM, 1},
    //{SPECIES_SLOWBRO, 1},
    //{SPECIES_GENGAR, 1},
    //{SPECIES_KANGASKHAN, 1},
    //{SPECIES_PINSIR, 1},
    //{SPECIES_GYARADOS, 1},
    //{SPECIES_AERODACTYL, 1},
    //{SPECIES_MEWTWO, 1}, // x
    //{SPECIES_MEWTWO, 2}, // y
    //{SPECIES_AMPHAROS, 1},
    //{SPECIES_STEELIX, 1},
    //{SPECIES_SCIZOR, 1},
    //{SPECIES_HERACROSS, 1},
    //{SPECIES_HOUNDOOM, 1},
    //{SPECIES_TYRANITAR, 1},
    {SPECIES_SCEPTILE, 1},
    //{SPECIES_BLAZIKEN, 1},
    //{SPECIES_SWAMPERT, 1},
    //{SPECIES_GARDEVOIR, 1},
    //{SPECIES_SABLEYE, 1},
    //{SPECIES_MAWILE, 1},
    //{SPECIES_AGGRON, 1},
    //{SPECIES_MEDICHAM, 1},
    //{SPECIES_MANECTRIC, 1},
    //{SPECIES_SHARPEDO, 1},
    //{SPECIES_CAMERUPT, 1},
    //{SPECIES_ALTARIA, 1},
    //{SPECIES_BANETTE, 1},
    //{SPECIES_ABSOL, 1},
    //{SPECIES_GLALIE, 1},
    //{SPECIES_SALAMENCE, 1},
    //{SPECIES_METAGROSS, 1},
    //{SPECIES_LATIAS, 1},
    //{SPECIES_LATIOS, 1},
    //{SPECIES_RAYQUAZA, 1},
    //{SPECIES_LOPUNNY, 1},
    //{SPECIES_GARCHOMP, 1},
    //{SPECIES_LUCARIO, 1},
    //{SPECIES_ABOMASNOW, 1},
    //{SPECIES_GALLADE, 1},
    //{SPECIES_AUDINO, 1},
    //{SPECIES_DIANCIE, 1},
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