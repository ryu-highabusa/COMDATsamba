
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00013790(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  int *piVar2;
  word wVar3;
  short sVar4;
  uint uVar5;
  undefined4 unaff_pfp;
  short *psVar12;
  int iVar13;
  undefined1 in_register_00000008 [56];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  short *psVar14;
  int iVar15;
  short *psVar16;
  short *psVar17;
  int iVar18;
  short *psVar19;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar10 [64];
  undefined1 auVar6 [20];
  
  auVar7._8_56_ = in_register_00000008;
  auVar7._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar8._0_16_ = auVar7._0_16_;
  auVar8._16_4_ = param_1;
  auVar8._24_40_ = in_register_00000008._16_40_;
  wVar3 = (&WORD_00090a70)[param_1];
  piVar2 = (int *)(&DAT_005556a0 + param_1 * 0xc);
  auVar8._20_4_ = piVar2;
  auVar10._12_52_ = auVar8._12_52_;
  auVar10._8_4_ = 0x137b4;
  auVar10._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar10;
  auVar9._4_56_ = auVar10._8_56_;
  auVar9._0_4_ = auStack_40;
  auVar9._60_4_ = 0;
  auVar9 = auVar9 << 0x20;
  FUN_00039240(piVar2,(int)(short)wVar3,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,param_11,param_12);
  iVar18 = param_1 * 0x200;
  auVar11._0_16_ = auVar9._0_16_;
  auVar11._16_4_ = &DAT_00555770 + iVar18;
  g13 = (short *)(&DAT_005557f0 + iVar18);
  psVar17 = (short *)(&DAT_00555870 + iVar18);
  psVar19 = (short *)(&DAT_005558f0 + iVar18);
  auVar11._24_40_ = auVar9._24_40_;
  auVar11._20_4_ = 0;
  sVar4 = (short)*piVar2 * 0x80 + -0x8000;
  psVar14 = (short *)(PTR_ARRAY_020c0008[(short)(&WORD_00090a70)[param_1] * 3] + 4);
  do {
    iVar13 = auVar11._20_4_;
    iVar18 = 0;
    psVar16 = psVar14;
    uVar1 = ac;
    do {
      auVar9 = auVar11;
      ac = uVar1;
      psVar12 = auVar9._16_4_;
      *psVar12 = sVar4 + *psVar16;
      *g13 = sVar4 + psVar14[iVar18 + 8];
      *psVar17 = sVar4 + psVar14[iVar18 + 0x10];
      *psVar19 = sVar4 + psVar14[iVar18 + 0x18];
      psVar12[1] = sVar4 + psVar16[1];
      g13[1] = sVar4 + psVar14[iVar18 + 9];
      psVar17[1] = sVar4 + psVar14[iVar18 + 0x11];
      psVar19[1] = sVar4 + psVar14[iVar18 + 0x19];
      psVar12[2] = sVar4 + psVar16[2];
      g13[2] = sVar4 + psVar14[iVar18 + 10];
      psVar17[2] = sVar4 + psVar14[iVar18 + 0x12];
      psVar19[2] = sVar4 + psVar14[iVar18 + 0x1a];
      psVar12[3] = sVar4 + psVar16[3];
      g13[3] = sVar4 + psVar14[iVar18 + 0xb];
      psVar16 = psVar16 + 4;
      psVar17[3] = sVar4 + psVar14[iVar18 + 0x13];
      iVar15 = iVar18 + 4;
      uVar5 = ac & 0xfffffff8 | (uint)(iVar15 < 7) << 2;
      uVar1 = uVar5 | (uint)(iVar15 == 7) << 1;
      auVar11._20_44_ = auVar9._20_44_;
      auVar6._0_16_ = auVar9._0_16_;
      auVar6._16_4_ = psVar12 + 4;
      auVar11._0_20_ = auVar6;
      g13 = g13 + 4;
      psVar17 = psVar17 + 4;
      psVar19[3] = sVar4 + psVar14[iVar18 + 0x1b];
      psVar19 = psVar19 + 4;
      iVar18 = iVar15;
    } while (((byte)(uVar1 >> 1) & 1 | (byte)(uVar5 >> 2) & 1) == 1);
    auVar11._24_40_ = auVar9._24_40_;
    auVar11._20_4_ = iVar13 + 1;
    uVar1 = ac & 0xfffffff8 | (uint)(7 < auVar11._20_4_) << 2 | (uint)(auVar11._20_4_ == 7) << 1;
    ac = uVar1 | auVar11._20_4_ < 7;
    psVar14 = psVar14 + 0x20;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1);
  return;
}

