#include "../include/types.h"
#include "../include/item.h"
#include "../include/constants/item.h"

#define NEW_ITEM_MAX 546
#define ITEM_DATA_MAX 536

u16 GetItemIndex(u16 item, u16 type)
{
    u16 ret = 0;
    switch (type)
    {
    case ITEM_GET_DATA:
        if (item == ITEM_DUMMY_ID || item == ITEM_RETURN_ID)
        {
            break;
        }
        if (item > ITEM_DATA_MAX)
            ret = 513 + (item - ITEM_DATA_MAX);
        else
            ret = ItemDataIndex[item].arc_data;
        return ret;

    case ITEM_GET_ICON_CGX:
        if (item == ITEM_DUMMY_ID)
        {
            return 793;
        }
        if (item == ITEM_RETURN_ID)
        {
            return 795;
        }
        if (item > ITEM_DATA_MAX)
            ret = 803 + (item - ITEM_DATA_MAX - 1) * 2;
        else
            ret = ItemDataIndex[item].arc_cgx;
        return ret;

    case ITEM_GET_ICON_PAL:
        if (item == ITEM_DUMMY_ID)
        {
            return 794;
        }
        if (item == ITEM_RETURN_ID)
        {
            return 796;
        }
        if (item > ITEM_DATA_MAX)
            ret = 804 + (item - ITEM_DATA_MAX - 1) * 2;
        else
            ret = ItemDataIndex[item].arc_pal;
        return ret;

    case ITEM_GET_AGB_NUM:
        if (item == ITEM_DUMMY_ID || item == ITEM_RETURN_ID)
        {
            break;
        }
        if (item > ITEM_DATA_MAX)
            ret = 0;
        else
            ret = ItemDataIndex[item].agb_id;
        return ret;
    }
    return 0;
}

void *GetItemArcData(u16 item, u16 type, u32 heap_id)
{
    int dataid, picid,palid;

    if (item > ITEM_DATA_MAX)
    {
        dataid = 513 + (item - ITEM_DATA_MAX);
        picid = 803 + (item - ITEM_DATA_MAX - 1) * 2;
        palid = 804 + (item - ITEM_DATA_MAX - 1) * 2;
    }
    else
    {
        dataid = ItemDataIndex[item].arc_data;
        picid = ItemDataIndex[item].arc_cgx;
        palid = ItemDataIndex[item].arc_pal;
    }

    switch (type)
    {
    case ITEM_GET_DATA:
        return ArchiveDataLoadMalloc(0x11, dataid, heap_id);
    case ITEM_GET_ICON_CGX:
        return ArchiveDataLoadMalloc(0x12, picid, heap_id);
    case ITEM_GET_ICON_PAL:
        return ArchiveDataLoadMalloc(0x12, palid, heap_id);
    }
    return NULL;
}

bool8 CheckItemByThief(u16 item)
{
    if(item == ITEM_RUSTED_SHEILD || item == ITEM_RUSTED_SWORD || item == 0x70)
        return TRUE;
    return FALSE;
}

void *ItemDataTableLoad(int heapID)
{
    int max;

    max = GetItemIndex(NEW_ITEM_MAX, ITEM_GET_DATA);

    return ArchiveDataLoadMallocOfs(0x11, 0, heapID, 0, 36 * max);//800757Ch
}
/*-----------------------------------------------------------*/
/*---------------------------道具使用-------------------------*/
/*-----------------------------------------------------------*/
static void ItemUse_EXP(void *a1, void *a2);
static void ItemUse_LURE(void *a1, void *a2);
static void ItemUse_LURE_1(void *a1, void *a2);
static void ItemUse_LURE_2(void *a1, void *a2);

typedef u32 (*ITEMCHECK_FUNC)(void *);
typedef void (*ITEMUSE_FUNC)(void *, void *);
typedef BOOL (*ITEMCNV_FUNC)(void *);

struct item_func
{
    //使用程序
    ITEMUSE_FUNC use_func;
    //登录程序
    ITEMCNV_FUNC reg_func;
    //检查程序
    ITEMCHECK_FUNC check_func;
};

#define Old_ItemFuncTable ((struct item_func *)0x020FE264)

static const struct item_func new_ItemFuncTable[] =
{
    //新的道具使用程序表格
    {
        // 041:特性胶囊
        ItemUse_EXP,
        NULL,
        NULL,
    },
    {
        // 042:引虫香水
        ItemUse_LURE,
        NULL,
        NULL,
    },
    {
        // 043:白银香水
        ItemUse_LURE_1,
        NULL,
        NULL,
    },
    {
        // 044:黄金香水
        ItemUse_LURE_2,
        NULL,
        NULL,
    },
};

//扩充表格
u32 ItemUse_FuncGet(u16 prm, u16 id)
{
    if (id <= 40)
    {
        if (prm == 0)
            return (u32)Old_ItemFuncTable[id].use_func;
        else if (prm == 1)
            return (u32)Old_ItemFuncTable[id].reg_func;
        return (u32)Old_ItemFuncTable[id].check_func;
    }
    else
    {
        id -= 41;
        if (prm == 0)
            return (u32)new_ItemFuncTable[id].use_func;
        else if (prm == 1)
            return (u32)new_ItemFuncTable[id].reg_func;
        return (u32)new_ItemFuncTable[id].check_func;
    }
}

static void ItemUse_EXP(void *a1, void *a2)
{
    SetUpItemScript(a1, a2, 2072);
}

static void ItemUse_LURE(void *a1, void *a2)
{
    SetUpItemScript(a1, a2, 2073);
}

static void ItemUse_LURE_1(void *a1, void *a2)
{
    SetUpItemScript(a1, a2, 2075);
}

static void ItemUse_LURE_2(void *a1, void *a2)
{
    SetUpItemScript(a1, a2, 2076);
}