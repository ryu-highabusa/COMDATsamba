
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_0004c660(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined1 in_register_00000014 [44];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  int iVar9;
  undefined1 auVar7 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar8 [64];
  
  uVar4 = ac;
  auVar3._4_4_ = auStackX_0;
  auVar3._0_4_ = unaff_pfp;
  auVar3._8_4_ = unaff_retaddr;
  auVar3._12_4_ = unaff_r3;
  auVar5._16_4_ = unaff_r4;
  auVar5._0_16_ = auVar3;
  auVar5._20_4_ = param_1;
  uVar2 = ac & 0xfffffff8 | (uint)((char)g_motion_debug_render_mode < '\0') << 2;
  ac = uVar2 | '\0' < (char)g_motion_debug_render_mode;
  auVar5._28_36_ = in_register_00000014._8_36_;
  auVar5._24_4_ = param_2;
  if ((((byte)ac & 1 | (byte)(uVar2 >> 2) & 1) != 1) &&
     (ac = uVar4 & 0xfffffff8 | (uint)(DAT_0054fcfd != '\0') << 2 |
           (uint)(DAT_0054fcfd == '\0') << 1, DAT_0054fcfd == '\0')) {
    fp = (undefined1 *)unaff_pfp;
    return 0;
  }
  uVar2 = ac;
  ac = ac & 0xfffffff8 | (uint)(1 < DAT_0054fcfe) << 2 | (uint)(DAT_0054fcfe == 1) << 1 |
       (uint)(DAT_0054fcfe == 0);
  if (((byte)ac & 1 | 1 < DAT_0054fcfe) != 1) {
    fp = (undefined1 *)unaff_pfp;
    return 0;
  }
  DAT_00589dd9 = 8 < param_2;
  sVar1 = (&DAT_00550144)[param_1];
  ac = uVar2 & 0xfffffff8 | (uint)(sVar1 < -1) << 2 | (uint)(sVar1 == -1) << 1 | (uint)(-1 < sVar1);
  auVar6._20_44_ = auVar5._20_44_;
  if (((byte)ac & 1 | sVar1 < -1) == 1) {
    auVar6._16_4_ = param_2;
    auVar6._0_16_ = auVar3;
  }
  else {
    ac = uVar2 & 0xfffffff8 | (uint)(param_2 < 2) << 2 | (uint)(param_2 == 2) << 1 |
         (uint)(2 < param_2);
    auVar6._16_4_ = (&DWORD_000c5730)[param_2];
    auVar6._0_16_ = auVar3;
    if (((byte)ac & 1) != 1) {
      DAT_00589dd9 = true;
    }
  }
  iVar9 = auVar6._16_4_;
  auVar8._12_52_ = auVar6._12_52_;
  auVar8._0_8_ = auVar6._0_8_;
  auVar8._8_4_ = 0x4c6ec;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
  auVar7._8_56_ = auVar8._8_56_;
  auVar7._4_4_ = auStackX_0;
  auVar7._0_4_ = fp;
  FUN_0004c8c0(param_1,param_2,iVar9);
  auStackX_0._12_52_ = auVar7._12_52_;
  auStackX_0._0_8_ = auVar7._0_8_;
  auStackX_0._8_4_ = 0x4c6fc;
  FUN_0004c720(param_1,param_2,iVar9);
  FUN_0004c9c0(param_1,param_2,iVar9);
  fp = auStack_40;
  return 0;
}

