
/* WARNING: Removing unreachable block (ram,0x000632b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* sample floor-slope grid */

void FUN_00063160(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5,
                 undefined4 param_6,undefined4 param_7)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined1 auStackX_0 [16];
  undefined1 auStack_10 [48];
  undefined1 auStack_40 [15];
  undefined1 auStack_4f [113];
  undefined1 auStack_c0 [999808];
  undefined1 auVar8 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [60];
  
  puVar6 = PTR_DAT_000006a0;
  auVar7._4_4_ = auStackX_0;
  auVar7._0_4_ = unaff_pfp;
  auVar7._8_4_ = unaff_retaddr;
  auVar7._12_52_ = in_register_0000000c;
  auVar8._8_56_ = auVar7._8_56_;
  auVar8._0_8_ = CONCAT44(auStack_10,unaff_pfp);
  auVar9._24_40_ = in_register_0000000c._12_40_;
  auVar9._0_20_ = auVar8._0_20_;
  auVar9._20_4_ = param_1;
  auVar10._20_44_ = auVar9._20_44_;
  auVar10._0_16_ = auVar8._0_16_;
  auVar10._16_4_ = param_2;
  uVar1 = ac & 0xfffffff8;
  auVar11._28_36_ = in_register_0000000c._16_36_;
  auVar11._0_24_ = auVar10._0_24_;
  auVar11._24_4_ = param_5;
  if (DAT_005a6f22 == 0) {
    uVar20 = ((int)(float10)param_1 + 0xdU) / 2;
    uVar22 = (0xdU - (int)(float10)param_2) / 2;
    uVar1 = ac & 0xfffffff8;
    if (0xd < uVar20) {
      uVar20 = 0xd;
    }
    ac = uVar1 | (uint)(uVar22 != 0) << 2 | (uint)(uVar22 == 0) << 1;
    if (((byte)(ac >> 1) & 1 | uVar22 != 0) == 1) {
      uVar1 = uVar1 | (uint)(0xd < uVar22) << 2 | (uint)(uVar22 == 0xd) << 1;
      ac = uVar1 | uVar22 < 0xd;
      if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
        uVar22 = 0xd;
      }
    }
    else {
      uVar22 = 0;
    }
    g13 = (&DAT_005a6f30)[uVar20 * 0x1c + uVar22 * 2];
    *param_3 = g13;
    *param_4 = (&DAT_005a6f34)[uVar20 * 0x1c + uVar22 * 2];
    *param_5 = (uint)(byte)(&DAT_005a7550)[uVar20 * 0xe + uVar22];
    fp = (undefined1 *)unaff_pfp;
    return;
  }
  fVar2 = (float10)(int)param_5;
  fVar3 = (float10)'\0';
  ac = uVar1;
  if (!NAN(fVar3) && !NAN(fVar2)) {
    ac = uVar1 | (uint)(fVar3 < fVar2) << 2;
    ac = ac | (uint)(fVar3 == fVar2) << 1;
    ac = ac | fVar2 < fVar3;
  }
  if (((byte)ac & 1 | (byte)(ac >> 2) & 1) != 1) {
    fVar2 = (float10)(int)param_5;
    fVar3 = (float10)'\0';
    ac = ac & 0xfffffff8;
    if (!NAN(fVar3) && !NAN(fVar2)) {
      ac = ac | (uint)(fVar3 < fVar2) << 2;
      ac = ac | (uint)(fVar3 == fVar2) << 1;
      ac = ac | fVar2 < fVar3;
    }
    if (((byte)ac & 1 | (byte)(ac >> 2) & 1) != 1) {
      *param_3 = 0;
      *param_4 = 0;
      goto LAB_00063210;
    }
  }
  DAT_008800c0 = 0xc0c;
  *(undefined4 *)PTR_DAT_000006a0 = param_7;
  *(undefined4 *)puVar6 = 0;
  *(int *)puVar6 = param_2;
  uVar5 = *(undefined4 *)puVar6;
  uVar21 = *(undefined4 *)puVar6;
  uVar4 = *(undefined4 *)puVar6;
  *param_3 = uVar5;
  *(undefined4 *)((int)fp + 0x40) = uVar5;
  *(undefined4 *)((int)fp + 0x48) = uVar4;
  *(undefined4 *)((int)fp + 0x44) = uVar21;
  *param_4 = uVar4;
LAB_00063210:
  uVar5 = DAT_005a6f28;
  uVar4 = DAT_005a6f24;
  auVar13._12_52_ = auVar11._12_52_;
  auVar13._8_4_ = 0x63230;
  auVar13._0_8_ = auVar8._0_8_;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
  auVar12._8_56_ = auVar13._8_56_;
  auVar12._0_8_ = CONCAT44(auStack_4f,fp) & 0xffffffc0ffffffff;
  iVar19 = FUN_00006320(param_1,0,param_2,uVar4,0,uVar5);
  fVar3 = (float10)'\0';
  fVar2 = (float10)iVar19;
  ac = ac & 0xfffffff8;
  if (!NAN(fVar2) && !NAN(fVar3)) {
    ac = ac | (uint)(fVar2 < fVar3) << 2;
    ac = ac | (uint)(fVar2 == fVar3) << 1;
    ac = ac | fVar3 < fVar2;
  }
  auVar15._0_8_ = auVar12._0_8_;
  auVar15._12_52_ = auVar12._12_52_;
  if (((byte)ac & 1 | (byte)(ac >> 1) & 1) == 1) {
    auVar17._8_4_ = 0x63278;
    auVar17._0_8_ = auVar15._0_8_;
    auVar17._12_52_ = auVar15._12_52_;
    auVar16._4_56_ = auVar17._8_56_;
    auVar16._0_4_ = auStack_c0;
    auVar16._60_4_ = 0;
    auVar16 = auVar16 << 0x20;
    FUN_00006320(param_1,0,param_2,DAT_005a6f24,0,DAT_005a6f28);
    auVar18 = auVar16._4_60_;
  }
  else {
    auVar15._8_4_ = 0x6325c;
    auVar14._4_56_ = auVar15._8_56_;
    auVar14._0_4_ = auStack_c0;
    auVar14._60_4_ = 0;
    auVar14 = auVar14 << 0x20;
    FUN_00006320(param_1,0,param_2,DAT_005a6f24,0,DAT_005a6f28);
    auVar18 = auVar14._4_60_;
  }
  iVar19 = 10 - (int)(float10)0x40000000;
  ac = ac & 0xfffffff8 | (uint)(2 < iVar19) << 2 | (uint)(iVar19 == 2) << 1 | (uint)(iVar19 < 2);
  if (2 >= iVar19) {
    iVar19 = 3;
  }
  *auVar18._20_4_ = iVar19;
  fp = auStack_40;
  return;
}

