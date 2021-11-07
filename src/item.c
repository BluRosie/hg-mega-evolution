#include "../include/types.h"
#include "../include/item.h"
#include "../include/constants/item.h"

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
        /*if (item > ITEM_DATA_MAX)
            ret = 513 + (item - ITEM_DATA_MAX);
        else
            */ret = ItemDataIndex[item].arc_data;
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

    case ITEM_GET_AGB_NUM: // for pal park purposes
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
        dataid = ITEM_SHOAL_SALT; // shoal salt item data == index //513 + (item - ITEM_DATA_MAX);
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
