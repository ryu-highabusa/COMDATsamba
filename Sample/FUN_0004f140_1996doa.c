
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004f140(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 auVar1 [64];
  undefined4 unaff_pfp;
  undefined4 unaff_r3;
  undefined1 in_register_00000014 [44];
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined4 extraout_g1_01;
  undefined4 extraout_g1_02;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [999744];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  auVar1._8_4_ = 0x4f150;
  auVar1._12_4_ = unaff_r3;
  auVar1._16_4_ = param_1;
  auVar1._20_44_ = in_register_00000014;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
  FUN_00008870(0xf,5);
  auStackX_0._4_4_ = auStackX_0;
  auStackX_0._0_4_ = fp;
  auStackX_0._8_4_ = 0x4f15c;
  auStackX_0._12_4_ = unaff_r3;
  auStackX_0._16_4_ = param_1;
  auStackX_0._20_44_ = in_register_00000014;
  FUN_0008e740(s_Motion_Initialize_Err___0004f090,extraout_g1,param_3,param_4,param_5,param_6,
               param_7,param_8,param_9,param_10,param_11,param_12);
  auStack_40._4_4_ = auStack_40;
  auStack_40._0_4_ = auStackX_0;
  auStack_40._8_4_ = 0x4f174;
  auStack_40._12_4_ = unaff_r3;
  auStack_40._16_4_ = param_1;
  auStack_40._20_44_ = in_register_00000014;
  FUN_0008e740(s_ERR_ANIME___0x_04X_0004f0b0,param_1 & 0xffff,param_3,param_4,param_5,param_6,
               param_7,param_8,param_9,param_10,param_11,param_12);
  auStack_80._4_4_ = auStack_80;
  auStack_80._0_4_ = auStack_40;
  auStack_80._8_4_ = 0x4f180;
  auStack_80._12_4_ = unaff_r3;
  auStack_80._16_4_ = param_1;
  auStack_80._20_44_ = in_register_00000014;
  FUN_0008e740(s_real_anime_name_exit_on_ACODE_DE_0004f0d0,extraout_g1_00,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  auStack_c0._4_4_ = auStack_c0;
  auStack_c0._0_4_ = auStack_80;
  auStack_c0._8_4_ = 0x4f18c;
  auStack_c0._12_4_ = unaff_r3;
  auStack_c0._16_4_ = param_1;
  auStack_c0._20_44_ = in_register_00000014;
  fp = auStack_100;
  FUN_0008e740(s_PUSH_H_or_P_or_K___0004f100,extraout_g1_01,param_3,param_4,param_5,param_6,param_7,
               param_8,param_9,param_10,param_11,param_12);
  FUN_0008e740(s_then_NEXT_ANIME_Initialize____0004f120,extraout_g1_02,param_3,param_4,param_5,
               param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  return;
}

