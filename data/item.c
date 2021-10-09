#include "../include/types.h"
#include "../include/item.h"

u32 __size = sizeof(struct ItemTable) - 2;

const struct ItemTable __data[] = {
     //0 ��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //1 ��ʦ��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //2 �߼���
  {
      .price = 1200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //3 ������
  {
      .price = 600,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 2,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //4 ������
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 3,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //5 ������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 4,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //6 ������
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 5,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //7 Ǳˮ��
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 6,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //8 ��Ѩ��
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 7,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //9 �ظ���
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 8,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //10 ʱ����
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 9,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //11 ������
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 10,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //12 ��Ʒ��
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 11,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //13 ������
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 12,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //14 ������
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 13,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //15 ������
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 14,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //16 �����
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 15,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //17 ��ҩ
  {
      .price = 300,
      .effect =  0,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //18 �ⶾҩ
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 2,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //19 ����ҩ
  {
      .price = 250,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 4,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //20 �ⶳҩ
  {
      .price = 250,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 8,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //21 ����ҩ
  {
      .price = 250,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //22 ����ҩ
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 16,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //23 Ȭ��ҩ
  {
      .price = 3000,
      .effect =  0,
      .damage =  255,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 12,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //24 ȫ�ظ�ҩ
  {
      .price = 2500,
      .effect =  0,
      .damage =  255,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //25 �߼���ҩ
  {
      .price = 1200,
      .effect =  0,
      .damage =  200,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //26 ����ҩ
  {
      .price = 700,
      .effect =  0,
      .damage =  50,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //27 ����ҩ
  {
      .price = 600,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //28 Ԫ����Ƭ
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 1,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //29 Ԫ����
  {
      .price = 4000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 1,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //30 ��ζˮ
  {
      .price = 200,
      .effect =  0,
      .damage =  50,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //31 �մ�����
  {
      .price = 300,
      .effect =  0,
      .damage =  60,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //32 ��Ϲ�֭
  {
      .price = 350,
      .effect =  0,
      .damage =  80,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //33 ����ţ��
  {
      .price = 500,
      .effect =  0,
      .damage =  100,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //34 ��֮��
  {
      .price = 500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //35 ��֮��
  {
      .price = 800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //36 ���ܷ�
  {
      .price = 450,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
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
     //37 �����
  {
      .price = 2800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 1,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //38 �У�С�ظ�
  {
      .price = 1200,
      .effect =  0,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 16,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 1,//Ŭ��ֵ
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
     //39 �Уд�ظ�
  {
      .price = 2000,
      .effect =  0,
      .damage =  255,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 16,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 1,//Ŭ��ֵ
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
     //40 �У����ظ�
  {
      .price = 3000,
      .effect =  0,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 16,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 2,//Ŭ��ֵ
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
     //41 �У�ȫ�ظ�
  {
      .price = 4500,
      .effect =  0,
      .damage =  255,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 16,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 2,//Ŭ��ֵ
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
     //42 ������
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //43 ����֭
  {
      .price = 100,
      .effect =  1,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //44 ʥ��
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 3,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //45 ����֮Դ
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 8,//Ŭ��ֵ
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
     //46 ����֮Դ
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 16,//Ŭ��ֵ
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
     //47 ����֮Դ
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 32,//Ŭ��ֵ
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
     //48 �ٶ�֮Դ
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 64,//Ŭ��ֵ
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
     //49 �ع�֮Դ
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 128,//Ŭ��ֵ
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
     //50 �����ǹ�
  {
      .price = 4800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 5,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
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
     //51 �У�������
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 64,
      .nulizhi = 0,//Ŭ��ֵ
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
     //52 �ط�֮Դ
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
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
     //53 �У�����
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 128,
      .nulizhi = 0,//Ŭ��ֵ
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
     //54 ɭ֮���
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MEDICINE,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 1,
      .battle_func = 2,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //55 ״̬����
  {
      .price = 700,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť 
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_MEDICINE1,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 128,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
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
     //56 ����֮��
  {
      .price = 650,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_MEDICINE1,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 16,
      .nulizhi = 0,//Ŭ��ֵ
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
     //57 ������ǿ
  {
      .price = 500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_MEDICINE1,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 16,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
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
     //58 ������ǿ
  {
      .price = 550,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_MEDICINE1,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 1,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
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
     //59 �ٶ���ǿ
  {
      .price = 350,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_MEDICINE1,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 16,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
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
     //60 ������ǿ
  {
      .price = 950,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_MEDICINE1,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 1,
      .nulizhi = 0,//Ŭ��ֵ
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
     //61 �ع���ǿ
  {
      .price = 350,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_MEDICINE1,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 16,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
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
     //62 �ط���ǿ
  {
      .price = 350,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_MEDICINE1,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 1,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
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
     //63 ƤƤ��ż
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_MEDICINE1,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 3,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //64 ����èβ
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_MEDICINE1,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 3,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //65 ������
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //66 ������
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 32,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //67 ������
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BATTLEITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 64,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //68 ������
  {
      .price = 400,
      .effect =  0,
      .damage =  50,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 19,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //69 ������
  {
      .price = 500,
      .effect =  0,
      .damage =  150,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 19,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //70 ǳˮ��
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //71 ǳˮ��
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //72 ����Ƭ
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //73 ����Ƭ
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //74 ����Ƭ
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //75 ����Ƭ
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //76 ��ɫ������
  {
      .price = 500,
      .effect =  0,
      .damage =  200,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 19,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //77 ��ɫ������
  {
      .price = 700,
      .effect =  0,
      .damage =  250,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 19,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //78 ������
  {
      .price = 550,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 21,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //79 ����������
  {
      .price = 350,
      .effect =  0,
      .damage =  100,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 19,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //80 ̫��ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //81 ��֮ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //82 ��֮ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //83 ��֮ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //84 ˮ֮ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //85 Ҷ֮ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //86 СĢ��
  {
      .price = 500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //87 ��Ģ��
  {
      .price = 5000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //88 С����
  {
      .price = 1400,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //89 ������
  {
      .price = 7500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //90 ��֮ɰ
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //91 ��֮��Ƭ
  {
      .price = 9800,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //92 ����
  {
      .price = 10000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //93 ��֮��Ƭ
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //94 ����
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 14,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //95 ����
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //96 ʪʪ��
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //97 ������
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //98 ճճ��
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //99 ��֮��ʯ
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //100 צ֮��ʯ
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //101 ��֮��ʯ
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //102 ��֮��ʯ
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //103 ��������
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //104 ��֮��ʯ
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //105 ͷ�ǻ�ʯ
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //106 ���ع�ͷ
  {
      .price = 10000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //107 ��֮ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //108 ��֮ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //109 ����ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //110 ����ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //111 Ҫʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //112 �׽���
  {
      .price = 10000,
      .effect =  2,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //113 ������
  {
      .price = 10000,
      .effect =  3,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //114 ������
  {
      .price = 10000,
      .effect =  4,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //115 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //116 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //117 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 2,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //118 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 3,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //119 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 4,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //120 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 5,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //121 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 6,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //122 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 7,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //123 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 8,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //124 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 9,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //125 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 10,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //126 ������
  {
      .price = 50,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_MAIL,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 7,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 11,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //127 ������
  {
      .price = 20,
      .effect =  5,
      .damage =  0,
      .pluck_effect =  1,
      .fling_effect =  1,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 10,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 16,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //128 ������
  {
      .price = 20,
      .effect =  6,
      .damage =  0,
      .pluck_effect =  2,
      .fling_effect =  2,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 11,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //129 ������
  {
      .price = 20,
      .effect =  7,
      .damage =  0,
      .pluck_effect =  3,
      .fling_effect =  3,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 13,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 2,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //130 ������
  {
      .price = 20,
      .effect =  8,
      .damage =  0,
      .pluck_effect =  4,
      .fling_effect =  4,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 12,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 4,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //131 ������
  {
      .price = 20,
      .effect =  9,
      .damage =  0,
      .pluck_effect =  5,
      .fling_effect =  5,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 15,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 8,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //132 ������
  {
      .price = 20,
      .effect =  10,
      .damage =  10,
      .pluck_effect =  6,
      .fling_effect =  6,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 1,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 16,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 1,//Ŭ��ֵ
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
     //133 ������
  {
      .price = 20,
      .effect =  1,
      .damage =  10,
      .pluck_effect =  7,
      .fling_effect =  7,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 3,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //134 ������
  {
      .price = 20,
      .effect =  11,
      .damage =  0,
      .pluck_effect =  8,
      .fling_effect =  8,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 4,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 32,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //135 ���ʯ
  {
      .price = 20,
      .effect =  12,
      .damage =  0,
      .pluck_effect =  9,
      .fling_effect =  9,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 2,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 8,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 63,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //136 ����
  {
      .price = 20,
      .effect =  13,
      .damage =  25,
      .pluck_effect =  10,
      .fling_effect =  10,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 14,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = 4,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 4,//Ŭ��ֵ
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
     //137 �ݵ���ֽ
  {
      .price = 20,
      .effect =  14,
      .damage =  8,
      .pluck_effect =  11,
      .fling_effect =  11,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 6,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //138 ������ֽ
  {
      .price = 20,
      .effect =  15,
      .damage =  8,
      .pluck_effect =  12,
      .fling_effect =  12,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 5,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //139 ��ɫ��ֽ
  {
      .price = 20,
      .effect =  16,
      .damage =  8,
      .pluck_effect =  13,
      .fling_effect =  13,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 7,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //140 ������ֽ
  {
      .price = 20,
      .effect =  17,
      .damage =  8,
      .pluck_effect =  14,
      .fling_effect =  14,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 16,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //141 �����ֽ
  {
      .price = 20,
      .effect =  18,
      .damage =  8,
      .pluck_effect =  15,
      .fling_effect =  15,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 17,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //142 ������ֽ
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 8,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //143 ������ֽ
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 10,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //144 ��ѩ��ֽ
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 11,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //145 ������ֽ
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 13,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //146 �����ֽ
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 12,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //147 ��������ֽ
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 15,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 8,//Ŭ��ֵ
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
     //148 ש����ֽ
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 1,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 16,//Ŭ��ֵ
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
     //149 �����
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 3,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 32,//Ŭ��ֵ
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
     //150 ��˯��
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 4,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 128,//Ŭ��ֵ
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
     //151 �ⶾ��
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 2,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
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
     //152 ���˹�
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 14,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 64,//Ŭ��ֵ
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
     //153 �����
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 6,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //154 �Уй�
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 5,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //155 �ٹ�
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 7,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //156 ���ҹ�
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 16,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //157 �漣��
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 17,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //158 ������
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  70,
      .natural_gift_type = 8,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //159 ������
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 10,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //160 ������
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 11,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //161 ���۹�
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 13,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //162 ���
  {
      .price = 20,
      .effect =  19,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 10,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //163 ������
  {
      .price = 20,
      .effect =  20,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 11,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //164 ������
  {
      .price = 20,
      .effect =  21,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 13,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //165 ������
  {
      .price = 20,
      .effect =  22,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 12,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //166 ���ɹ�
  {
      .price = 20,
      .effect =  23,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 15,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //167 �����ɹ�
  {
      .price = 20,
      .effect =  24,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 1,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //168 ��³��
  {
      .price = 20,
      .effect =  25,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 3,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //169 ��������
  {
      .price = 20,
      .effect =  26,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 4,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //170 ���﹥��
  {
      .price = 20,
      .effect =  27,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 2,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //171 �������
  {
      .price = 20,
      .effect =  28,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 14,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //172 ���ع���
  {
      .price = 20,
      .effect =  29,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 6,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //173 ���ط���
  {
      .price = 20,
      .effect =  30,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 5,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //174 ���ٶȹ�
  {
      .price = 20,
      .effect =  31,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 7,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //175 Ī������
  {
      .price = 20,
      .effect =  32,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 16,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //176 ��˹��
  {
      .price = 20,
      .effect =  33,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 17,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //177 ��������
  {
      .price = 20,
      .effect =  34,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 8,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //178 ŵ÷³��
  {
      .price = 20,
      .effect =  35,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  60,
      .natural_gift_type = 0,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //179 ŵ�߻���
  {
      .price = 20,
      .effect =  36,
      .damage =  4,
      .pluck_effect =  16,
      .fling_effect =  16,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 12,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //180 ���ǹ�
  {
      .price = 20,
      .effect =  37,
      .damage =  4,
      .pluck_effect =  17,
      .fling_effect =  17,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 15,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //181 ��˹��
  {
      .price = 20,
      .effect =  38,
      .damage =  4,
      .pluck_effect =  18,
      .fling_effect =  18,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 1,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //182 ������
  {
      .price = 20,
      .effect =  39,
      .damage =  4,
      .pluck_effect =  19,
      .fling_effect =  19,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 3,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //183 ��������
  {
      .price = 20,
      .effect =  40,
      .damage =  4,
      .pluck_effect =  20,
      .fling_effect =  20,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 4,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //184 �����
  {
      .price = 20,
      .effect =  41,
      .damage =  4,
      .pluck_effect =  21,
      .fling_effect =  21,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 2,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //185 ��ˮ��
  {
      .price = 20,
      .effect =  42,
      .damage =  4,
      .pluck_effect =  22,
      .fling_effect =  22,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 14,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //186 ���׹�
  {
      .price = 20,
      .effect =  43,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 6,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //187 ���ݹ�
  {
      .price = 20,
      .effect =  44,
      .damage =  4,
      .pluck_effect =  23,
      .fling_effect =  23,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 5,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //188 ������
  {
      .price = 20,
      .effect =  45,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 7,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //189 ������
  {
      .price = 20,
      .effect =  46,
      .damage =  8,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 16,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //190 ������
  {
      .price = 20,
      .effect =  47,
      .damage =  8,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  80,
      .natural_gift_type = 17,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_BERRIES,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 8,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //191 ���ع�
  {
      .price = 10,
      .effect =  48,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //192 ���ɹ�
  {
      .price = 100,
      .effect =  49,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  24,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //193 ������
  {
      .price = 3000,
      .effect =  50,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //194 �����
  {
      .price = 3000,
      .effect =  51,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //195 ���ҹ�
  {
      .price = 100,
      .effect =  52,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //196 �����
  {
      .price = 100,
      .effect =  53,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //197 ������
  {
      .price = 100,
      .effect =  54,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  25,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //198 �����
  {
      .price = 100,
      .effect =  55,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //199 ���ֹ�
  {
      .price = 100,
      .effect =  56,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  26,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //200 ���չ�
  {
      .price = 100,
      .effect =  57,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //201 �﹥��
  {
      .price = 100,
      .effect =  58,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //202 �����
  {
      .price = 200,
      .effect =  59,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //203 �ٶȹ�
  {
      .price = 200,
      .effect =  60,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //204 �ع���
  {
      .price = 200,
      .effect =  61,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //205 �ط���
  {
      .price = 200,
      .effect =  62,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //206 ���Ĺ�
  {
      .price = 200,
      .effect =  63,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //207 ���ǹ�
  {
      .price = 200,
      .effect =  64,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //208 ��֮��
  {
      .price = 200,
      .effect =  65,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //209 ���й�
  {
      .price = 200,
      .effect =  66,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //210 ���ƹ�
  {
      .price = 200,
      .effect =  67,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //211 ���˹�
  {
      .price = 100,
      .effect =  68,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //212 ���˹�
  {
      .price = 200,
      .effect =  69,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //213 ���
  {
      .price = 2100,
      .effect =  70,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //214 ��ɫ���
  {
      .price = 100,
      .effect =  71,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  27,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //215 ��������
  {
      .price = 100,
      .effect =  72,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //216 ѧϰװ��
  {
      .price = 100,
      .effect =  73,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  100,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //217 ����֮צ
  {
      .price = 100,
      .effect =  74,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //218 ������
  {
      .price = 100,
      .effect =  75,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //219 �������
  {
      .price = 100,
      .effect =  76,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //220 ר��ͷ��
  {
      .price = 100,
      .effect =  77,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //221 ����֤֮
  {
      .price = 100,
      .effect =  78,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //222 ����
  {
      .price = 100,
      .effect =  79,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  50,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //223 ������
  {
      .price = 100,
      .effect =  80,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  28,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //224 �徻��
  {
      .price = 100,
      .effect =  81,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //225 ��֮ˮ��
  {
      .price = 100,
      .effect =  82,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //226 �֮��
  {
      .price = 100,
      .effect =  83,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //227 �֮��
  {
      .price = 9800,
      .effect =  84,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //228 ����
  {
      .price = 100,
      .effect =  85,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //229 ����ʯ
  {
      .price = 100,
      .effect =  86,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //230 ��Ϣͷ��
  {
      .price = 2100,
      .effect =  87,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //231 �Ҹ���
  {
      .price = 200,
      .effect =  88,
      .damage =  8,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //232 ���㾵Ƭ
  {
      .price = 9600,
      .effect =  78,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //233 ��������
  {
      .price = 9600,
      .effect =  48,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //234 ʣ��
  {
      .price = 10,
      .effect =  89,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  40,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //235 ����
  {
      .price = 10,
      .effect =  90,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //236 ������
  {
      .price = 500,
      .effect =  91,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //237 ��ɳ
  {
      .price = 200,
      .effect =  92,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //238 ��Ӳʯͷ
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //239 �漣��
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //240 ���۾�
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //241 �ڴ�
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //242 ����
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //243 ����ˮ��
  {
      .price = 200,
      .effect =  93,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //244 ����
  {
      .price = 200,
      .effect =  94,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //245 ����
  {
      .price = 200,
      .effect =  95,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //246 ���ڱ�
  {
      .price = 200,
      .effect =  96,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //247 �����
  {
      .price = 200,
      .effect =  97,
      .damage =  3,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //248 ����
  {
      .price = 200,
      .effect =  98,
      .damage =  30,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //249 ľ̿
  {
      .price = 100,
      .effect =  99,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //250 ����
  {
      .price = 100,
      .effect =  100,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  29,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //251 ˿��
  {
      .price = 100,
      .effect =  101,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  30,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //252 ��������
  {
      .price = 10,
      .effect =  102,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //253 �ձ���
  {
      .price = 200,
      .effect =  103,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //254 ������¯
  {
      .price = 200,
      .effect =  104,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //255 ������¯
  {
      .price = 200,
      .effect =  105,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //256 ����ȭ��
  {
      .price = 200,
      .effect =  106,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  130,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //257 ������ĩ
  {
      .price = 200,
      .effect =  107,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //258 �ֹǰ�
  {
      .price = 200,
      .effect =  108,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //259 ����
  {
      .price = 200,
      .effect =  109,
      .damage =  16,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //260 ��ɫͷ��
  {
      .price = 200,
      .effect =  110,
      .damage =  3,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  40,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //261 ��ɫͷ��
  {
      .price = 200,
      .effect =  111,
      .damage =  3,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //262 �ۺ�ͷ��
  {
      .price = 200,
      .effect =  112,
      .damage =  3,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //263 ��ɫͷ��
  {
      .price = 200,
      .effect =  113,
      .damage =  3,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  60,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //264 ��ɫͷ��
  {
      .price = 200,
      .effect =  114,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //265 ��Ǿ�Ƭ
  {
      .price = 200,
      .effect =  115,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //266 ����ͷ��
  {
      .price = 200,
      .effect =  116,
      .damage =  8,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //267 �����۾�
  {
      .price = 3000,
      .effect =  117,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //268 ��������
  {
      .price = 3000,
      .effect =  118,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //269 ��֮ճ��
  {
      .price = 3000,
      .effect =  119,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //270 ������
  {
      .price = 3000,
      .effect =  120,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //271 �������
  {
      .price = 3000,
      .effect =  121,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //272 �綾��
  {
      .price = 3000,
      .effect =  122,
      .damage =  4,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  70,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //273 ������
  {
      .price = 100,
      .effect =  123,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //274 �ٶȷ�ĩ
  {
      .price = 200,
      .effect =  124,
      .damage =  30,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //275 ��Ϣ����
  {
      .price = 200,
      .effect =  125,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //276 �۽���Ƭ
  {
      .price = 1000,
      .effect =  126,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //277 ������
  {
      .price = 1000,
      .effect =  127,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //278 ������
  {
      .price = 1000,
      .effect =  128,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //279 ��֮β
  {
      .price = 1000,
      .effect =  129,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //280 ����
  {
      .price = 1000,
      .effect =  130,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //281 ��ɫ����
  {
      .price = 1000,
      .effect =  131,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //282 ������ʯ
  {
      .price = 1000,
      .effect =  132,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //283 ������ʯ
  {
      .price = 1000,
      .effect =  133,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //284 ������ʯ
  {
      .price = 1000,
      .effect =  134,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //285 ʪ����ʯ
  {
      .price = 1000,
      .effect =  135,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //286 ճ�Թ�צ
  {
      .price = 1000,
      .effect =  136,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //287 ר��Χ��
  {
      .price = 1000,
      .effect =  137,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //288 �Ӻ���
  {
      .price = 1000,
      .effect =  138,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //289 ��������
  {
      .price = 1000,
      .effect =  139,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //290 ��������
  {
      .price = 1000,
      .effect =  140,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //291 ������Ƭ
  {
      .price = 1000,
      .effect =  141,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  90,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //292 �����´�
  {
      .price = 9600,
      .effect =  83,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //293 ������ϥ
  {
      .price = 9600,
      .effect =  73,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //294 ��������
  {
      .price = 9600,
      .effect =  107,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //295 ������
  {
      .price = 9600,
      .effect =  78,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //296 ���
  {
      .price = 9600,
      .effect =  74,
      .damage =  20,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //297 ר���۾�
  {
      .price = 9600,
      .effect =  58,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //298 ����ʯ��
  {
      .price = 9600,
      .effect =  59,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //299 ˮ��ʯ��
  {
      .price = 2100,
      .effect =  142,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //300 �׵�ʯ��
  {
      .price = 2100,
      .effect =  143,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //301 ����ʯ��
  {
      .price = 2100,
      .effect =  144,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //302 ����ʯ��
  {
      .price = 2100,
      .effect =  145,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  50,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //303 ȭ��ʯ��
  {
      .price = 2100,
      .effect =  146,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  10,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //304 �綾ʯ��
  {
      .price = 2100,
      .effect =  67,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  80,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //305 ���ʯ��
  {
      .price = 2100,
      .effect =  56,
      .damage =  10,
      .pluck_effect =  0,
      .fling_effect =  26,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //306 ���ʯ��
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //307 ����ʯ��
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //308 ���ʯ��
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //309 ��ʯʯ��
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //310 ����ʯ��
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //311 ��֮ʯ��
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //312 �ֲ�ʯ��
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //313 ����ʯ��
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //314 ������¯
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //315 ��ʯ��¯
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //316 ������¯
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //317 ˮ����¯
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //318 �ʻ���¯
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //319 ������¯
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //320 �徻��¯
  {
      .price = 7500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //321 �������
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //322 ����������
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //323 �ҽ�������
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //324 ���첹��
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //325 ���֮��
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //326 ����֮צ
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //327 ����֮��
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //328 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //329 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //330 ���ܻ�����
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //331 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //332 ���ܻ�����
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //333 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //334 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //335 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //336 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //337 ���ܻ�����
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //338 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //339 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //340 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //341 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //342 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //343 ���ܻ�����
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //344 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //345 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //346 ���ܻ�����
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //347 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //348 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //349 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //350 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //351 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //352 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //353 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //354 ���ܻ�����
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //355 ���ܻ�����
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //356 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //357 ���ܻ�����
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //358 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //359 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //360 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //361 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //362 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //363 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //364 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //365 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //366 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //367 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //368 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //369 ���ܻ�����
  {
      .price = 7500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //370 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //371 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //372 ���ܻ�����
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //373 ���ܻ�����
  {
      .price = 7500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //374 ���ܻ�����
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //375 ���ܻ�����
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //376 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //377 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //378 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //379 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //380 ���ܻ�����
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //381 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //382 ���ܻ�����
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //383 ���ܻ�����
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //384 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //385 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //386 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //387 ���ܻ�����
  {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //388 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //389 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //390 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //391 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //392 ���ܻ�����
  {
      .price = 1500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //393 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //394 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //395 ���ܻ�����
  {
      .price = 2000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //396 ���ܻ�����
  {
      .price = 3000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //397 ���ܻ�����
  {
      .price = 5500,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //398 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //399 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //400 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //401 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //402 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //403 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //404 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //405 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_TMHMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 6,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //406 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //407 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //408 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 11,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //409 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 19,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //410 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 5,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //411 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 19,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //412 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 19,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //413 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //414 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 10,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //415 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //416 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //417 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //418 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //419 ���ܻ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 2,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //420 �ش�������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 15,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //421 �ش�������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 19,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //422 �ش�������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 16,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //423 �ش�������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 17,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 1,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //424 �ش�������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 18,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 2,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //425 �ش�������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 12,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //426 �ش�������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 9,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //427 �ش�������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 4,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //428 ������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //429 �����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //430 ����֮��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //431 ����̽����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //432 ������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 22,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //433 ð�ձʼ�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //434 ��ֽ��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //435 ��Ʒ��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //436 ��ֽ��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //437 �����ֲ�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //438 ���糧Կ��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //439 �Ŵ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //440 ������Կ��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //441 �����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //442 ��ͼ
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 29,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //443 ս��������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 28,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //444 ���Һ�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //445 �Ƶ���
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 23,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //446 �õ���
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 25,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //447 �߼�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 24,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //448 �ɴ�Ѽ���
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 26,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //449 �ɱ���
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //450 ���г�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //451 ����Կ��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //452 ��ľ��ʿ����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //453 ����֮��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //454 ��Ա��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //455 �캣֮��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //456 ��Ʊ
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //457 ѡ��ͨ��֤
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //458 ��ɽ��ʯ
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //459 ί����Ʒ
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //460 �һ�ȯ��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //461 �һ�ȯ��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //462 �һ�ȯ��
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //463 �ֿ�Կ��
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //464 ��ҩ
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //465 ս����¼��
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //466 ���ջ���
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //467 ����Կ��
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //468 �̹���
  {
      .price = 20,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //469 ��ٯ�ʼ�
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 16,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //470 ����������
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 17,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //471 ����̽����
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 18,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //472 ����
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 19,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //473 ��ζ��β��
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 20,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //474 ͸������
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 21,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //475 Կ�׿�
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 22,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //476 ����Կ��
  {
      .price = 300,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 1,
      .work_type = 0,
      .dmy = 0,

      .reciver = 23,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //477 ��������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_POKEBALLS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_POKEBALL,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //478 ��ɫ��Ƭ
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //479 ��ʧ��Ʒ
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 1,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 27,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //480 �г�Ʊ
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //481 ��е���
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //482 ��ɫ��ë
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //483 �ʺ���ë
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //484 ����˼��ĵ�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //485 ��̹�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //486 �Ƹ̹�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //487 ���̹�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //488 �̸̹�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //489 �Ҹ̹�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //490 �׸̹�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //491 �ڸ̹�
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //492 �ٶ���
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //493 �ȼ���
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //494 �ն���
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //495 ������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //496 ������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //497 ������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //498 ������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //499 ������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //500 ��԰��
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //501 ���
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //502 �ǣ²�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //503 ��������
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //504 ��ŭ��ͷ
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //505 ���Ͽ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //506 ���Ͽ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //507 ���Ͽ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //508 ���Ͽ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //509 ���Ͽ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //510 ���Ͽ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //511 ���Ͽ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //512 ���Ͽ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
     //513 ���Ͽ�����
  {
      .price = 0,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 1,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_KEYITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
   //514 ��֮ʯ
  {
      .price = 2100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
   //515 ����ƻ��
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
   //516 ����ƻ��
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //517 ���ѵĲ��
  {
      .price = 200,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  30,
      .natural_gift =  0,
      .natural_gift_type = 31,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 20,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //518 ����Ľ�
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //519 ����Ķ�
  {
      .price = 100,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 0,
      .battle_func = 0,
      .work_type = 0,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 0,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },

  //520 ���Խ���
    {
      .price = 20000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 41,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //521 ������ˮ
    {
      .price = 400,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 42,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //522 ������ˮ
    {
      .price = 700,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 43,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
      .prm_spd_exp = 0,
      .prm_hp_rcv = 0,
      .prm_pp_rcv = 0,
      .prm_friend1 = 0,
      .prm_friend2 = 0,
      .prm_friend3 = 0,
      .dummy1 = 0,
      .dummy2 = 0,
  },
  //523 �ƽ���ˮ
    {
      .price = 1000,
      .effect =  0,
      .damage =  0,
      .pluck_effect =  0,
      .fling_effect =  0,
      .fling_damage =  0,
      .natural_gift =  0,
      .natural_gift_type = 0,//��Ȼ����
      .imp = 0,//��Ҫ����
      .cnv_btn = 0,//��ݰ�ť
      .feild_pocket = ITEMPOCKET_ITEMS,//Ұ��ʱ�ĵ��߿ڴ�
      .battle_pocket = ITEMPOCKET_HP_ITEMS,//ս��ʱ�ĵ��߿ڴ�
      .field_func = 44,
      .battle_func = 0,
      .work_type = ITEM_WORK_TYPE_CAN_USED_IN_PARTY,
      .dmy = 0,

      .reciver = 0,
      .feild_recive = 8,
      .exp_up1 = 0,
      .exp_up2 = 0,
      .exp_up3 = 0,
      .nulizhi = 0,//Ŭ��ֵ
      .friend = 0,
      .prm_hp_exp = 0,
      .prm_pow_exp = 0,
      .prm_def_exp = 0,
      .prm_agi_exp = 0,
      .prm_spa_exp = 0,
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
