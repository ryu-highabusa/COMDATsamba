
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00070530(void)

{
  uint uVar1;
  undefined4 unaff_pfp;
  undefined8 in_register_00000008;
  undefined4 unaff_r4;
  undefined1 in_register_00000014 [44];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_140 [64];
  undefined1 auStack_180 [64];
  undefined1 auStack_1c0 [64];
  undefined1 auStack_200 [64];
  undefined1 auStack_240 [999424];
  undefined1 auVar4 [64];
  
  auVar2._8_8_ = in_register_00000008;
  auVar2._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar2._16_4_ = unaff_r4;
  auVar2._20_44_ = in_register_00000014;
  DAT_00543140 = 0x447a0000;
  DAT_005b973c = g14;
  DAT_005b9740 = g14;
  DAT_005a6f10 = g14;
  DAT_005a6f14 = g14;
  DAT_005a6f18 = g14;
  DAT_005a6f00 = 0;
  DAT_005a6f04 = 0;
  DAT_005b9744 = 0xff;
  DAT_005b9745 = 0xff;
  DAT_005b9746 = 0xff;
  DAT_005a769e = 0xff;
  DAT_005a6f20 = 0xff;
  DAT_005a6f21 = 0xff;
  DAT_005b9748 = 0xff;
  DAT_005b974a = 0xff;
  DAT_005b9749 = 0xff;
  DAT_005b974b = 0xff;
  DAT_005a6f0a = 0xff;
  DAT_005a6f0b = 0xff;
  DAT_005b974c = (undefined1)g14;
  DAT_005a6f0c = 0xff;
  auVar4._12_52_ = auVar2._12_52_;
  auVar4._8_4_ = 0x705fc;
  auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
  auVar3._8_56_ = auVar4._8_56_;
  auVar3._4_4_ = auStackX_0;
  auVar3._0_4_ = fp;
  FUN_000740b0(0,-1,0);
  auStackX_0._12_52_ = auVar3._12_52_;
  auStackX_0._0_8_ = auVar3._0_8_;
  auStackX_0._8_4_ = 0x7060c;
  auVar5._8_56_ = auStackX_0._8_56_;
  auVar5._4_4_ = auStack_40;
  auVar5._0_4_ = auStackX_0;
  FUN_000740b0(1,-1,0);
  auStack_40._12_52_ = auVar5._12_52_;
  auStack_40._0_8_ = auVar5._0_8_;
  auStack_40._8_4_ = 0x7061c;
  auVar6._8_56_ = auStack_40._8_56_;
  auVar6._4_4_ = auStack_80;
  auVar6._0_4_ = auStack_40;
  FUN_000740b0(2,-1,0);
  fp = &auStack_c0;
  auStack_80._12_52_ = auVar6._12_52_;
  auStack_80._0_8_ = auVar6._0_8_;
  auStack_80._8_4_ = 0x7062c;
  auVar7._8_56_ = auStack_80._8_56_;
  auVar7._4_4_ = auStack_100;
  auVar7._0_4_ = auStack_80;
  FUN_000740b0(3,-1,0);
  uVar1 = ac;
  ac = ac & 0xfffffff8 | (uint)(1 < DAT_005b974d) << 2 | (uint)(DAT_005b974d == 1) << 1 |
       (uint)(DAT_005b974d == 0);
  if (((byte)ac & 1 | 1 < DAT_005b974d) != 1) {
    fp = &auStack_80;
    return;
  }
  uVar1 = uVar1 & 0xfffffff8 | (uint)(0 < DAT_005af6b0) << 2;
  ac = uVar1 | (uint)(DAT_005af6b0 == 0) << 1 | (uint)(DAT_005af6b0 < 0);
  auVar12._20_44_ = auVar7._20_44_;
  auVar12._0_16_ = auVar7._0_16_;
  auVar12._16_4_ = &DAT_005af6b0;
  if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
    auStack_c0._12_52_ = auVar12._12_52_;
    auStack_c0._0_8_ = auVar7._0_8_;
    auStack_c0._8_4_ = 0x7065c;
    auVar8._8_56_ = auStack_c0._8_56_;
    auVar8._4_4_ = auStack_100;
    auVar8._0_4_ = fp;
    FUN_00008d10(&DAT_005af6b0);
    auStack_100._12_52_ = auVar8._12_52_;
    auStack_100._0_8_ = auVar8._0_8_;
    auStack_100._8_4_ = 0x70664;
    auVar9._8_56_ = auStack_100._8_56_;
    auVar9._4_4_ = auStack_140;
    auVar9._0_4_ = auStack_100;
    FUN_00008d10(&DAT_005af6bc);
    auStack_140._12_52_ = auVar9._12_52_;
    auStack_140._0_8_ = auVar9._0_8_;
    auStack_140._8_4_ = 0x7066c;
    auVar10._8_56_ = auStack_140._8_56_;
    auVar10._4_4_ = auStack_180;
    auVar10._0_4_ = auStack_140;
    FUN_00008d10(&DAT_005af6c8);
    auStack_180._12_52_ = auVar10._12_52_;
    auStack_180._0_8_ = auVar10._0_8_;
    auStack_180._8_4_ = 0x70674;
    auVar11._8_56_ = auStack_180._8_56_;
    auVar11._4_4_ = auStack_1c0;
    auVar11._0_4_ = auStack_180;
    FUN_00008d10(&DAT_005af6d4);
    fp = &auStack_200;
    auStack_1c0._12_52_ = auVar11._12_52_;
    auStack_1c0._0_8_ = auVar11._0_8_;
    auStack_1c0._8_4_ = 0x7067c;
    auVar12._8_56_ = auStack_1c0._8_56_;
    auVar12._4_4_ = auStack_240;
    auVar12._0_4_ = auStack_1c0;
    FUN_00008d10((undefined4 *)&DAT_005af6e0);
  }
  auVar13._12_52_ = auVar12._12_52_;
  auVar13._0_8_ = auVar12._0_8_;
  auVar13._8_4_ = 0x70680;
  *fp = auVar13;
  FUN_00070e30();
  DAT_005b974e = 1;
  DAT_005b974d = 1;
  return;
}

