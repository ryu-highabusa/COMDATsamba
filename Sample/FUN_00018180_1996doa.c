
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00018180_investigatemaybe(void)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_140 [64];
  undefined1 auStack_180 [64];
  undefined1 auStack_1c0 [999552];
  undefined1 auVar1 [64];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._12_52_ = in_register_00000008._4_52_;
  auVar2._8_4_ = 0x18190;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar2;
  auVar1._8_56_ = auVar2._8_56_;
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = fp;
  FUN_00008220(&LAB_0001ec70,4);
  auStackX_0._12_52_ = auVar1._12_52_;
  auStackX_0._0_8_ = auVar1._0_8_;
  auStackX_0._8_4_ = 0x181a0;
  auVar3._8_56_ = auStackX_0._8_56_;
  auVar3._4_4_ = auStack_40;
  auVar3._0_4_ = auStackX_0;
  FUN_00008220(&LAB_0001f7e0,6);
  auStack_40._12_52_ = auVar3._12_52_;
  auStack_40._0_8_ = auVar3._0_8_;
  auStack_40._8_4_ = 0x181b0;
  auVar4._8_56_ = auStack_40._8_56_;
  auVar4._4_4_ = auStack_80;
  auVar4._0_4_ = auStack_40;
  FUN_00008220(&LAB_00025ca0,5);
  auStack_80._12_52_ = auVar4._12_52_;
  auStack_80._0_8_ = auVar4._0_8_;
  auStack_80._8_4_ = 0x181c0;
  auVar5._8_56_ = auStack_80._8_56_;
  auVar5._4_4_ = auStack_c0;
  auVar5._0_4_ = auStack_80;
  FUN_00008220(&LAB_0002f5a0,7);
  auStack_c0._12_52_ = auVar5._12_52_;
  auStack_c0._0_8_ = auVar5._0_8_;
  auStack_c0._8_4_ = 0x181d0;
  auVar6._8_56_ = auStack_c0._8_56_;
  auVar6._4_4_ = auStack_100;
  auVar6._0_4_ = auStack_c0;
  FUN_00008220(&LAB_000646f0,8);
  auStack_100._12_52_ = auVar6._12_52_;
  auStack_100._0_8_ = auVar6._0_8_;
  auStack_100._8_4_ = 0x181e0;
  auVar7._8_56_ = auStack_100._8_56_;
  auVar7._4_4_ = auStack_140;
  auVar7._0_4_ = auStack_100;
  FUN_00008220(Debug_AnimationViewerMain,9);
  auStack_140._12_52_ = auVar7._12_52_;
  auStack_140._0_8_ = auVar7._0_8_;
  auStack_140._8_4_ = 0x181f0;
  auVar8._8_56_ = auStack_140._8_56_;
  auVar8._4_4_ = auStack_180;
  auVar8._0_4_ = auStack_140;
  FUN_00008220(&LAB_00064710,10);
  auStack_180._12_52_ = auVar8._12_52_;
  auStack_180._0_8_ = auVar8._0_8_;
  auStack_180._8_4_ = 0x18200;
  FUN_00008220(&LAB_0003e270,0xb);
  FUN_00008220(&LAB_0007d200,0xc);
  ContinueCounter_005555e5 = 10;
  DAT_0054fce0 = g14;
  DAT_005555e4 = 1;
  DAT_00557c44 = 5;
  DAT_0054fcfd = 5;
  DAT_00557c40 = 0x3c;
  DAT_00557c4c = DAT_0054fdac;
  DAT_00557c50 = DAT_0054fdb0;
  fp = auStack_1c0;
  return;
}

