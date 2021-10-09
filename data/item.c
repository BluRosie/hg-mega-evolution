#include "../include/types.h"
#include "../include/item.h"

u32 __size = sizeof(struct ItemTable) - 2;

const struct ItemTable __data[] = {
     //0 无
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //1 大师球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //2 高级球
  {
      .price = 1200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //3 超级球
  {
      .price = 600,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 2,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //4 精灵球
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 3,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //5 狩猎球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 4,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //6 撒网球
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 5,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //7 潜水球
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 6,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //8 巢穴球
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 7,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //9 重复球
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 8,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //10 时间球
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 9,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //11 豪华球
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 10,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //12 赠品球
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 11,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //13 暗黑球
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 12,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //14 治愈球
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 13,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //15 快速球
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 14,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //16 珍贵球
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 15,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //17 伤药
  {
      .price = 300,
      .effect =  0,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 20,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //18 解毒药
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 2,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //19 烧伤药
  {
      .price = 250,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 4,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //20 解冻药
  {
      .price = 250,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 8,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //21 清醒药
  {
      .price = 250,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //22 解麻药
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 16,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //23 痊愈药
  {
      .price = 3000,
      .effect =  0,
      .damage =  255,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 12,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 255,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //24 全回复药
  {
      .price = 2500,
      .effect =  0,
      .damage =  255,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 255,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //25 高级伤药
  {
      .price = 1200,
      .effect =  0,
      .damage =  200,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 200,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //26 好伤药
  {
      .price = 700,
      .effect =  0,
      .damage =  50,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 50,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //27 万能药
  {
      .price = 600,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //28 元气碎片
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 1,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 254,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //29 元气块
  {
      .price = 4000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 1,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 255,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //30 美味水
  {
      .price = 200,
      .effect =  0,
      .damage =  50,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 50,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //31 苏打饮料
  {
      .price = 300,
      .effect =  0,
      .damage =  60,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 60,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //32 混合果汁
  {
      .price = 350,
      .effect =  0,
      .damage =  80,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 80,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //33 哞哞牛奶
  {
      .price = 500,
      .effect =  0,
      .damage =  100,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 100,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //34 力之粉
  {
      .price = 500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 50,
      .prm_pp_rcv = 0,
      .prm_friend1 = 251,
      .prm_friend2 = 251,
      .prm_friend3 = 246,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //35 力之根
  {
      .price = 800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 200,
      .prm_pp_rcv = 0,
      .prm_friend1 = 246,
      .prm_friend2 = 246,
      .prm_friend3 = 241,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //36 万能粉
  {
      .price = 450,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 251,
      .prm_friend2 = 251,
      .prm_friend3 = 246,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //37 复活草
  {
      .price = 2800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 1,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 255,
      .prm_pp_rcv = 0,
      .prm_friend1 = 241,
      .prm_friend2 = 241,
      .prm_friend3 = 236,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //38 ＰＰ小回复
  {
      .price = 1200,
      .effect =  0,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 16,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 1,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 10,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //39 ＰＰ大回复
  {
      .price = 2000,
      .effect =  0,
      .damage =  255,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 16,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 1,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 127,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //40 ＰＰ量回复
  {
      .price = 3000,
      .effect =  0,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 16,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 2,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 10,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //41 ＰＰ全回复
  {
      .price = 4500,
      .effect =  0,
      .damage =  255,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 16,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 2,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 127,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //42 飞音饼
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //43 树果汁
  {
      .price = 100,
      .effect =  1,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 20,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //44 圣灰
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 3,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 255,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //45 体力之源
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 8,//努力值
      .friend = 14,
      .prm_hp_exp = 10,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 5,
      .prm_friend2 = 3,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //46 攻击之源
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 16,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 10,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 5,
      .prm_friend2 = 3,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //47 防御之源
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 32,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 10,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 5,
      .prm_friend2 = 3,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //48 速度之源
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 64,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 10,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 5,
      .prm_friend2 = 3,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //49 特攻之源
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 128,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 10,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 5,
      .prm_friend2 = 3,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //50 神奇糖果
  {
      .price = 4800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 5,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 5,
      .prm_friend2 = 3,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //51 ＰＰ上升剂
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 64,
      .nulizhi = 0,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 5,
      .prm_friend2 = 3,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //52 特防之源
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 15,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 10,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 5,
      .prm_friend2 = 3,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //53 ＰＰ最大剂
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 128,
      .nulizhi = 0,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 5,
      .prm_friend2 = 3,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //54 森之羊羹
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MEDICINE,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //55 状态防御
  {
      .price = 700,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮 
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_MEDICINE1,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 128,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 6,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 1,
      .prm_friend2 = 1,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //56 会心之刃
  {
      .price = 650,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_MEDICINE1,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 16,
      .nulizhi = 0,//努力值
      .friend = 6,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 1,
      .prm_friend2 = 1,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //57 攻击增强
  {
      .price = 500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_MEDICINE1,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 16,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 6,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 1,
      .prm_friend2 = 1,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //58 防御增强
  {
      .price = 550,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_MEDICINE1,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 1,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 6,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 1,
      .prm_friend2 = 1,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //59 速度增强
  {
      .price = 350,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_MEDICINE1,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 16,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 6,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 1,
      .prm_friend2 = 1,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //60 命中增强
  {
      .price = 950,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_MEDICINE1,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 1,
      .nulizhi = 0,//努力值
      .friend = 6,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 1,
      .prm_friend2 = 1,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //61 特攻增强
  {
      .price = 350,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_MEDICINE1,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 16,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 6,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 1,
      .prm_friend2 = 1,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //62 特防增强
  {
      .price = 350,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_MEDICINE1,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 1,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 6,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 1,
      .prm_friend2 = 1,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //63 皮皮玩偶
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_MEDICINE1,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 3,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //64 玲珑猫尾
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_MEDICINE1,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 3,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //65 蓝哨子
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //66 黄哨子
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 32,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //67 红哨子
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 64,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //68 黑哨子
  {
      .price = 400,
      .effect =  0,
      .damage =  50,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 19,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //69 白哨子
  {
      .price = 500,
      .effect =  0,
      .damage =  150,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 19,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //70 浅水盐
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //71 浅水贝
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //72 红碎片
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //73 蓝碎片
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //74 黄碎片
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //75 绿碎片
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //76 银色喷雾器
  {
      .price = 500,
      .effect =  0,
      .damage =  200,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 19,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //77 金色喷雾器
  {
      .price = 700,
      .effect =  0,
      .damage =  250,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 19,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //78 穿洞绳
  {
      .price = 550,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 21,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //79 驱虫喷雾器
  {
      .price = 350,
      .effect =  0,
      .damage =  100,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 19,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //80 太阳石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //81 月之石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //82 火之石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //83 雷之石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //84 水之石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //85 叶之石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //86 小蘑菇
  {
      .price = 500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //87 大蘑菇
  {
      .price = 5000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //88 小珍珠
  {
      .price = 1400,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //89 大珍珠
  {
      .price = 7500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //90 星之砂
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //91 星之碎片
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //92 金珠
  {
      .price = 10000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //93 心之鳞片
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //94 蜂蜜
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 14,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //95 快快肥
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //96 湿湿肥
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //97 长长肥
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //98 粘粘肥
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //99 根之化石
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //100 爪之化石
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //101 贝之化石
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //102 壳之化石
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //103 神秘琥珀
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //104 盾之化石
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //105 头盖化石
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //106 贵重骨头
  {
      .price = 10000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //107 光之石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //108 暗之石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //109 觉醒石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //110 真丸石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //111 要石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //112 白金玉
  {
      .price = 10000,
      .effect =  2,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //113 ？？？
  {
      .price = 10000,
      .effect =  3,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //114 ？？？
  {
      .price = 10000,
      .effect =  4,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //115 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //116 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //117 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 2,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //118 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 3,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //119 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 4,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //120 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 5,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //121 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 6,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //122 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 7,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //123 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 8,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //124 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 9,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //125 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 10,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //126 ？？？
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_MAIL,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 11,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //127 ？？？
  {
      .price = 20,
      .effect =  5,
      .damage =  0,
      .pluck_effect =  1,
      .fling_effect =  1,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 10,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 16,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //128 ？？？
  {
      .price = 20,
      .effect =  6,
      .damage =  0,
      .pluck_effect =  2,
      .fling_effect =  2,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 11,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //129 ？？？
  {
      .price = 20,
      .effect =  7,
      .damage =  0,
      .pluck_effect =  3,
      .fling_effect =  3,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 13,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 2,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //130 ？？？
  {
      .price = 20,
      .effect =  8,
      .damage =  0,
      .pluck_effect =  4,
      .fling_effect =  4,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 12,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 4,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //131 ？？？
  {
      .price = 20,
      .effect =  9,
      .damage =  0,
      .pluck_effect =  5,
      .fling_effect =  5,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 15,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 8,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //132 ？？？
  {
      .price = 20,
      .effect =  10,
      .damage =  10,
      .pluck_effect =  6,
      .fling_effect =  6,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 1,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = 16,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 1,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 10,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //133 ？？？
  {
      .price = 20,
      .effect =  1,
      .damage =  10,
      .pluck_effect =  7,
      .fling_effect =  7,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 3,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 10,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //134 ？？？
  {
      .price = 20,
      .effect =  11,
      .damage =  0,
      .pluck_effect =  8,
      .fling_effect =  8,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 4,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 32,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //135 金刚石
  {
      .price = 20,
      .effect =  12,
      .damage =  0,
      .pluck_effect =  9,
      .fling_effect =  9,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 2,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = 8,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //136 白玉
  {
      .price = 20,
      .effect =  13,
      .damage =  25,
      .pluck_effect =  10,
      .fling_effect =  10,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 14,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = 4,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 253,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //137 草地信纸
  {
      .price = 20,
      .effect =  14,
      .damage =  8,
      .pluck_effect =  11,
      .fling_effect =  11,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 6,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //138 火焰信纸
  {
      .price = 20,
      .effect =  15,
      .damage =  8,
      .pluck_effect =  12,
      .fling_effect =  12,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 5,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //139 蓝色信纸
  {
      .price = 20,
      .effect =  16,
      .damage =  8,
      .pluck_effect =  13,
      .fling_effect =  13,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 7,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //140 花朵信纸
  {
      .price = 20,
      .effect =  17,
      .damage =  8,
      .pluck_effect =  14,
      .fling_effect =  14,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 16,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //141 隧道信纸
  {
      .price = 20,
      .effect =  18,
      .damage =  8,
      .pluck_effect =  15,
      .fling_effect =  15,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 17,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //142 蒸汽信纸
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 8,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //143 爱情信纸
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 10,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //144 吹雪信纸
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 11,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //145 宇宙信纸
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 13,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //146 天空信纸
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 12,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //147 马赛克信纸
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 15,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 8,//努力值
      .friend = 14,
      .prm_hp_exp = 246,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 10,
      .prm_friend2 = 5,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //148 砖块信纸
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 1,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 16,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 246,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 10,
      .prm_friend2 = 5,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //149 解麻果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 3,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 32,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 246,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 10,
      .prm_friend2 = 5,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //150 解睡果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 4,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 128,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 246,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 10,
      .prm_friend2 = 5,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //151 解毒果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 2,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 15,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 246,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 10,
      .prm_friend2 = 5,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //152 烧伤果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 14,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 64,//努力值
      .friend = 14,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 246,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 10,
      .prm_friend2 = 5,
      .prm_friend3 = 2,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //153 解冰果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 6,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //154 ＰＰ果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 5,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //155 橘果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 7,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //156 混乱果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 16,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //157 奇迹果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 17,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //158 大树果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 8,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //159 费拉果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 10,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //160 乌伊果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 11,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //161 麻枸果
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 13,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //162 邦吉果
  {
      .price = 20,
      .effect =  19,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 10,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //163 伊阿果
  {
      .price = 20,
      .effect =  20,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 11,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //164 兹利果
  {
      .price = 20,
      .effect =  21,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 13,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //165 布利果
  {
      .price = 20,
      .effect =  22,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 12,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //166 纳纳果
  {
      .price = 20,
      .effect =  23,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 15,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //167 塞西纳果
  {
      .price = 20,
      .effect =  24,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 1,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //168 派鲁果
  {
      .price = 20,
      .effect =  25,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 3,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //169 降体力果
  {
      .price = 20,
      .effect =  26,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 4,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //170 降物攻果
  {
      .price = 20,
      .effect =  27,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 2,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //171 降物防果
  {
      .price = 20,
      .effect =  28,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 14,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //172 降特攻果
  {
      .price = 20,
      .effect =  29,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 6,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //173 降特防果
  {
      .price = 20,
      .effect =  30,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 5,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //174 降速度果
  {
      .price = 20,
      .effect =  31,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 7,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //175 莫克西果
  {
      .price = 20,
      .effect =  32,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 16,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //176 枸斯果
  {
      .price = 20,
      .effect =  33,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 17,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //177 拉布塔果
  {
      .price = 20,
      .effect =  34,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 8,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //178 诺梅鲁果
  {
      .price = 20,
      .effect =  35,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 0,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //179 诺瓦基果
  {
      .price = 20,
      .effect =  36,
      .damage =  4,
      .pluck_effect =  16,
      .fling_effect =  16,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 12,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //180 西亚果
  {
      .price = 20,
      .effect =  37,
      .damage =  4,
      .pluck_effect =  17,
      .fling_effect =  17,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 15,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //181 凯斯果
  {
      .price = 20,
      .effect =  38,
      .damage =  4,
      .pluck_effect =  18,
      .fling_effect =  18,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 1,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //182 多利果
  {
      .price = 20,
      .effect =  39,
      .damage =  4,
      .pluck_effect =  19,
      .fling_effect =  19,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 3,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //183 百利布果
  {
      .price = 20,
      .effect =  40,
      .damage =  4,
      .pluck_effect =  20,
      .fling_effect =  20,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 4,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //184 抗火果
  {
      .price = 20,
      .effect =  41,
      .damage =  4,
      .pluck_effect =  21,
      .fling_effect =  21,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 2,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //185 抗水果
  {
      .price = 20,
      .effect =  42,
      .damage =  4,
      .pluck_effect =  22,
      .fling_effect =  22,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 14,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //186 抗雷果
  {
      .price = 20,
      .effect =  43,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 6,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //187 抗草果
  {
      .price = 20,
      .effect =  44,
      .damage =  4,
      .pluck_effect =  23,
      .fling_effect =  23,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 5,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //188 抗冰果
  {
      .price = 20,
      .effect =  45,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 7,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //189 抗斗果
  {
      .price = 20,
      .effect =  46,
      .damage =  8,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 16,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //190 抗毒果
  {
      .price = 20,
      .effect =  47,
      .damage =  8,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 17,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_BERRIES,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //191 抗地果
  {
      .price = 10,
      .effect =  48,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //192 抗飞果
  {
      .price = 100,
      .effect =  49,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  24,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //193 抗超果
  {
      .price = 3000,
      .effect =  50,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //194 抗虫果
  {
      .price = 3000,
      .effect =  51,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //195 抗岩果
  {
      .price = 100,
      .effect =  52,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //196 抗鬼果
  {
      .price = 100,
      .effect =  53,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //197 抗龙果
  {
      .price = 100,
      .effect =  54,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  25,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //198 抗恶果
  {
      .price = 100,
      .effect =  55,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //199 抗钢果
  {
      .price = 100,
      .effect =  56,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  26,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //200 抗普果
  {
      .price = 100,
      .effect =  57,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //201 物攻果
  {
      .price = 100,
      .effect =  58,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //202 物防果
  {
      .price = 200,
      .effect =  59,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //203 速度果
  {
      .price = 200,
      .effect =  60,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //204 特攻果
  {
      .price = 200,
      .effect =  61,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //205 特防果
  {
      .price = 200,
      .effect =  62,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //206 会心果
  {
      .price = 200,
      .effect =  63,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //207 星星果
  {
      .price = 200,
      .effect =  64,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //208 迷之果
  {
      .price = 200,
      .effect =  65,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //209 命中果
  {
      .price = 200,
      .effect =  66,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //210 先制果
  {
      .price = 200,
      .effect =  67,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //211 物伤果
  {
      .price = 100,
      .effect =  68,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //212 特伤果
  {
      .price = 200,
      .effect =  69,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //213 光粉
  {
      .price = 2100,
      .effect =  70,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //214 白色香草
  {
      .price = 100,
      .effect =  71,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  27,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //215 竞争背心
  {
      .price = 100,
      .effect =  72,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //216 学习装置
  {
      .price = 100,
      .effect =  73,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //217 先制之爪
  {
      .price = 100,
      .effect =  74,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //218 安闲铃
  {
      .price = 100,
      .effect =  75,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //219 精神香草
  {
      .price = 100,
      .effect =  76,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //220 专爱头巾
  {
      .price = 100,
      .effect =  77,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //221 王者之证
  {
      .price = 100,
      .effect =  78,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //222 银粉
  {
      .price = 100,
      .effect =  79,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  50,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //223 护身金币
  {
      .price = 100,
      .effect =  80,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  28,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //224 清净符
  {
      .price = 100,
      .effect =  81,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //225 心之水滴
  {
      .price = 100,
      .effect =  82,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //226 深海之牙
  {
      .price = 100,
      .effect =  83,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //227 深海之鳞
  {
      .price = 9800,
      .effect =  84,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //228 烟雾弹
  {
      .price = 100,
      .effect =  85,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //229 不变石
  {
      .price = 100,
      .effect =  86,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //230 气息头巾
  {
      .price = 2100,
      .effect =  87,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //231 幸福蛋
  {
      .price = 200,
      .effect =  88,
      .damage =  8,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //232 焦点镜片
  {
      .price = 9600,
      .effect =  78,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //233 金属外套
  {
      .price = 9600,
      .effect =  48,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //234 剩饭
  {
      .price = 10,
      .effect =  89,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  40,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //235 龙鳞
  {
      .price = 10,
      .effect =  90,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //236 电气珠
  {
      .price = 500,
      .effect =  91,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //237 软沙
  {
      .price = 200,
      .effect =  92,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //238 坚硬石头
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //239 奇迹种
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //240 黑眼镜
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //241 黑带
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //242 磁铁
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //243 神秘水滴
  {
      .price = 200,
      .effect =  93,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //244 尖嘴
  {
      .price = 200,
      .effect =  94,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //245 毒针
  {
      .price = 200,
      .effect =  95,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //246 不融冰
  {
      .price = 200,
      .effect =  96,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //247 诅咒符
  {
      .price = 200,
      .effect =  97,
      .damage =  3,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //248 弯勺
  {
      .price = 200,
      .effect =  98,
      .damage =  30,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //249 木炭
  {
      .price = 100,
      .effect =  99,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //250 龙牙
  {
      .price = 100,
      .effect =  100,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  29,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //251 丝巾
  {
      .price = 100,
      .effect =  101,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  30,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //252 升级补丁
  {
      .price = 10,
      .effect =  102,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //253 空贝铃
  {
      .price = 200,
      .effect =  103,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //254 漩涡香炉
  {
      .price = 200,
      .effect =  104,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //255 畅气香炉
  {
      .price = 200,
      .effect =  105,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //256 幸运拳套
  {
      .price = 200,
      .effect =  106,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  130,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //257 金属粉末
  {
      .price = 200,
      .effect =  107,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //258 粗骨棒
  {
      .price = 200,
      .effect =  108,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //259 长葱
  {
      .price = 200,
      .effect =  109,
      .damage =  16,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //260 红色头巾
  {
      .price = 200,
      .effect =  110,
      .damage =  3,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  40,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //261 蓝色头巾
  {
      .price = 200,
      .effect =  111,
      .damage =  3,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //262 粉红头巾
  {
      .price = 200,
      .effect =  112,
      .damage =  3,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //263 绿色头巾
  {
      .price = 200,
      .effect =  113,
      .damage =  3,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //264 黄色头巾
  {
      .price = 200,
      .effect =  114,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //265 广角镜片
  {
      .price = 200,
      .effect =  115,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //266 力量头巾
  {
      .price = 200,
      .effect =  116,
      .damage =  8,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //267 博闻眼镜
  {
      .price = 3000,
      .effect =  117,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //268 达人腰带
  {
      .price = 3000,
      .effect =  118,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //269 光之粘土
  {
      .price = 3000,
      .effect =  119,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //270 生命玉
  {
      .price = 3000,
      .effect =  120,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //271 力量香草
  {
      .price = 3000,
      .effect =  121,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //272 剧毒珠
  {
      .price = 3000,
      .effect =  122,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //273 火焰珠
  {
      .price = 100,
      .effect =  123,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //274 速度粉末
  {
      .price = 200,
      .effect =  124,
      .damage =  30,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //275 气息腰带
  {
      .price = 200,
      .effect =  125,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //276 聚焦镜片
  {
      .price = 1000,
      .effect =  126,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //277 节拍器
  {
      .price = 1000,
      .effect =  127,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //278 黑铁球
  {
      .price = 1000,
      .effect =  128,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //279 后攻之尾
  {
      .price = 1000,
      .effect =  129,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //280 红线
  {
      .price = 1000,
      .effect =  130,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //281 黑色淤泥
  {
      .price = 1000,
      .effect =  131,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //282 冰冷岩石
  {
      .price = 1000,
      .effect =  132,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //283 粉碎岩石
  {
      .price = 1000,
      .effect =  133,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //284 灼热岩石
  {
      .price = 1000,
      .effect =  134,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //285 湿润岩石
  {
      .price = 1000,
      .effect =  135,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //286 粘性勾爪
  {
      .price = 1000,
      .effect =  136,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //287 专爱围巾
  {
      .price = 1000,
      .effect =  137,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //288 接合针
  {
      .price = 1000,
      .effect =  138,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //289 力量手饰
  {
      .price = 1000,
      .effect =  139,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //290 力量腰带
  {
      .price = 1000,
      .effect =  140,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //291 力量镜片
  {
      .price = 1000,
      .effect =  141,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //292 力量衣带
  {
      .price = 9600,
      .effect =  83,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //293 力量护膝
  {
      .price = 9600,
      .effect =  73,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //294 力量护具
  {
      .price = 9600,
      .effect =  107,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //295 绮丽外壳
  {
      .price = 9600,
      .effect =  78,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //296 大根
  {
      .price = 9600,
      .effect =  74,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //297 专爱眼镜
  {
      .price = 9600,
      .effect =  58,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //298 火球石板
  {
      .price = 9600,
      .effect =  59,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //299 水滴石板
  {
      .price = 2100,
      .effect =  142,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //300 雷电石板
  {
      .price = 2100,
      .effect =  143,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //301 草绿石板
  {
      .price = 2100,
      .effect =  144,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //302 冰柱石板
  {
      .price = 2100,
      .effect =  145,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  50,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //303 拳击石板
  {
      .price = 2100,
      .effect =  146,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //304 剧毒石板
  {
      .price = 2100,
      .effect =  67,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //305 大地石板
  {
      .price = 2100,
      .effect =  56,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  26,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //306 青空石板
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //307 神奇石板
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //308 玉虫石板
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //309 岩石石板
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //310 阴魂石板
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //311 龙之石板
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //312 恐怖石板
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //313 钢铁石板
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //314 怪异香炉
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //315 岩石香炉
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //316 满腹香炉
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //317 水波香炉
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //318 鲜花香炉
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //319 幸运香炉
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //320 清净香炉
  {
      .price = 7500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //321 护身防具
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //322 电力驱动器
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //323 岩浆驱动器
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //324 怪异补丁
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //325 灵界之布
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //326 尖锐之爪
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //327 尖锐之牙
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //328 技能机０１
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //329 技能机０２
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //330 技能机０３
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //331 技能机０４
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //332 技能机０５
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //333 技能机０６
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //334 技能机０７
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //335 技能机０８
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //336 技能机０９
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //337 技能机１０
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //338 技能机１１
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //339 技能机１２
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //340 技能机１３
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //341 技能机１４
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //342 技能机１５
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //343 技能机１６
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //344 技能机１７
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //345 技能机１８
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //346 技能机１９
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //347 技能机２０
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //348 技能机２１
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //349 技能机２２
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //350 技能机２３
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //351 技能机２４
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //352 技能机２５
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //353 技能机２６
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //354 技能机２７
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //355 技能机２８
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //356 技能机２９
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //357 技能机３０
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //358 技能机３１
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //359 技能机３２
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //360 技能机３３
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //361 技能机３４
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //362 技能机３５
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //363 技能机３６
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //364 技能机３７
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //365 技能机３８
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //366 技能机３９
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //367 技能机４０
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //368 技能机４１
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //369 技能机４２
  {
      .price = 7500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //370 技能机４３
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //371 技能机４４
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //372 技能机４５
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //373 技能机４６
  {
      .price = 7500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //374 技能机４７
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //375 技能机４８
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //376 技能机４９
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //377 技能机５０
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //378 技能机５１
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //379 技能机５２
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //380 技能机５３
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //381 技能机５４
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //382 技能机５５
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //383 技能机５６
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //384 技能机５７
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //385 技能机５８
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //386 技能机５９
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //387 技能机６０
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //388 技能机６１
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //389 技能机６２
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //390 技能机６３
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //391 技能机６４
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //392 技能机６５
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //393 技能机６６
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //394 技能机６７
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //395 技能机６８
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //396 技能机６９
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //397 技能机７０
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //398 技能机７１
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //399 技能机７２
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //400 技能机７３
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //401 技能机７４
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //402 技能机７５
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //403 技能机７６
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //404 技能机７７
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //405 技能机７８
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_TMHMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //406 技能机７９
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //407 技能机８０
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //408 技能机８１
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 11,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //409 技能机８２
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 19,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //410 技能机８３
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 5,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //411 技能机８４
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 19,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //412 技能机８５
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 19,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //413 技能机８６
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //414 技能机８７
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 10,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //415 技能机８８
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //416 技能机８９
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //417 技能机９０
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //418 技能机９１
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //419 技能机９２
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 2,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //420 秘传机０１
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 15,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //421 秘传机０２
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 19,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //422 秘传机０３
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 16,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //423 秘传机０４
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 17,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //424 秘传机０５
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 18,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 2,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //425 秘传机０６
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 12,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //426 秘传机０７
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 9,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //427 秘传机０８
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 4,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //428 ？？？
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //429 宝物袋
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //430 规则之书
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //431 精灵探测器
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //432 点数卡
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 22,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //433 冒险笔记
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //434 贴纸盒
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //435 饰品盒
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //436 贴纸袋
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //437 朋友手册
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //438 发电厂钥匙
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //439 古代护符
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //440 银河团钥匙
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //441 红草绳
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //442 地图
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 29,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //443 战斗搜索机
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 28,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //444 代币盒
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //445 破钓竿
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 23,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //446 好钓竿
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 25,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //447 高级钓竿
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 24,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //448 可达鸭喷壶
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 26,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //449 松饼盒
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //450 自行车
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //451 房间钥匙
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //452 大木博士的信
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //453 新月之羽
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //454 会员卡
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //455 天海之笛
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //456 船票
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //457 选美通行证
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //458 火山巨石
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //459 委托物品
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //460 兑换券１
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //461 兑换券２
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //462 兑换券３
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //463 仓库钥匙
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //464 秘药
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //465 战斗记录器
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //466 冰空花束
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //467 秘密钥匙
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //468 柑果盒
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //469 安侬笔记
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 16,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //470 树果培养皿
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 17,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //471 道具探测器
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 18,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //472 蓝卡
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 19,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //473 美味的尾巴
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 20,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //474 透明铃铛
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 21,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //475 钥匙卡
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 22,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //476 地下钥匙
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 23,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //477 杰尼龟喷壶
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_POKEBALLS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_POKEBALL,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //478 红色鳞片
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //479 遗失物品
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 1,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 27,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //480 列车票
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //481 机械零件
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //482 银色羽毛
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //483 彩虹羽毛
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //484 不可思议的蛋
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //485 红柑果
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //486 黄柑果
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //487 蓝柑果
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //488 绿柑果
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //489 桃柑果
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //490 白柑果
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //491 黑柑果
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //492 速度球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //493 等级球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //494 诱饵球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //495 重量球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //496 爱情球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //497 朋友球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //498 月亮球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //499 竞技球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //500 公园球
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //501 相册
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //502 ＧＢ播放器
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //503 海鸣铃铛
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //504 愤怒馒头
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //505 资料卡０１
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //506 资料卡０２
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //507 资料卡０３
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //508 资料卡０４
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //509 资料卡０５
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //510 资料卡０６
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //511 资料卡０７
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //512 资料卡０８
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //513 资料卡０９
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 1,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_KEYITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
   //514 冰之石
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
   //515 酸酸苹果
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
   //516 甜甜苹果
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //517 破裂的茶壶
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //518 腐朽的剑
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //519 腐朽的盾
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },

  //520 特性胶囊
    {
      .price = 20000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 41,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //521 引虫香水
    {
      .price = 400,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 42,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //522 白银香水
    {
      .price = 700,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 43,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //523 黄金香水
    {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//自然恩惠
      .imp = 0,//重要道具
      .cnv_btn = 0,//快捷按钮
      .feild_pocket = ITEMPOCKET_ITEMS,//野外时的道具口袋
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//战斗时的道具口袋
      .field_func = 44,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//努力值
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
};
