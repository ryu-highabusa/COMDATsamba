
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00051cd0(int param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [20];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined1 in_register_00000020 [32];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined4 uVar13;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar10 [64];
  int iVar12;
  
  uVar1 = ac;
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._12_4_ = unaff_r3;
  auVar4._16_4_ = unaff_r4;
  auVar4._0_16_ = auVar3;
  auVar5._20_4_ = unaff_r5;
  auVar5._0_20_ = auVar4;
  auVar5._24_4_ = unaff_r6;
  auVar5._28_4_ = unaff_r7;
  auVar5._32_32_ = in_register_00000020;
  auVar6._24_40_ = auVar5._24_40_;
  auVar6._20_4_ = param_1;
  auVar6._0_20_ = auVar4;
  auVar7._0_32_ = auVar6._0_32_;
  auVar7._32_4_ = param_3;
  ac = ac & 0xfffffff8 | (uint)(DAT_0054fcfe == '\0') << 1 | (uint)(DAT_0054fcfe != '\0');
  auVar7._40_24_ = in_register_00000020._8_24_;
  auVar7._36_4_ = param_4;
  if (((byte)ac & 1) != 1) {
    bVar2 = (&BYTE_00589e00)[param_1];
    uVar1 = uVar1 & 0xfffffff8 | (uint)('\0' < (char)bVar2) << 2 | (uint)(bVar2 == 0) << 1;
    ac = uVar1 | (char)bVar2 < '\0';
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      auVar8._20_44_ = auVar7._20_44_;
      auVar8._16_4_ = (int)param_2;
      auVar8._0_16_ = auVar3;
      auVar10._12_52_ = auVar8._12_52_;
      auVar10._8_4_ = 0x51d08;
      auVar10._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
      auVar9._8_56_ = auVar10._8_56_;
      auVar9._4_4_ = auStack_40;
      auVar9._0_4_ = fp;
      FUN_00051d90(param_1,param_2);
      auVar11._0_24_ = auVar9._0_24_;
      auVar11._24_4_ = (&DAT_0058a830)[param_1 * 6];
      auVar11._32_32_ = auVar9._32_32_;
      auVar11._28_4_ = (&DAT_0058a834)[param_1 * 6];
      iVar12 = auVar9._20_4_;
      auStackX_0._12_52_ = auVar11._12_52_;
      auStackX_0._0_8_ = auVar9._0_8_;
      auStackX_0._8_4_ = 0x51d4c;
      uVar13 = FUN_00041370((&DAT_0058a830)[param_1 * 6],(&DAT_005882e8)[iVar12],
                            (&DAT_0058a838)[param_1 * 6],auVar9._32_4_,auVar9._36_4_,iVar12);
      (&DAT_0058a860)[iVar12] = (short)uVar13;
      fp = auStackX_0;
      return;
    }
    (&DAT_0058a860)[param_1] = (short)(char)(&DAT_000c24c0)[(&g_player1)[param_1].character_id];
  }
  fp = (undefined1 *)unaff_pfp;
  return;
}

