
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00023540(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined auVar4 [20];
  undefined auVar5 [24];
  undefined4 unaff_pfp;
  undefined auVar6 [20];
  undefined4 unaff_retaddr;
  undefined8 in_register_0000000c;
  undefined4 unaff_r5;
  undefined in_register_00000018 [40];
  undefined auVar8 [64];
  undefined auVar10 [64];
  undefined auVar12 [64];
  undefined auVar13 [64];
  undefined auVar14 [64];
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  undefined auStackX_0 [64];
  undefined auStack_40 [999936];
  undefined auVar15 [64];
  undefined auVar11 [64];
  undefined auVar9 [64];
  undefined auVar7 [32];
  
  auVar4._8_4_ = unaff_retaddr;
  auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar4._12_8_ = in_register_0000000c;
  auVar5._20_4_ = unaff_r5;
  auVar5._0_20_ = auVar4;
  auVar8._24_40_ = in_register_00000018;
  auVar8._0_24_ = auVar5;
  auVar9._32_32_ = in_register_00000018._8_32_;
  auVar9._0_28_ = auVar8._0_28_;
  auVar9._28_4_ = param_1;
  auVar10._28_36_ = auVar9._28_36_;
  auVar10._24_4_ = 0;
  auVar10._0_24_ = auVar5;
  iVar3 = param_1 * 0x58;
  auVar11._20_44_ = auVar10._20_44_;
  auVar6._0_16_ = auVar4._0_16_;
  auVar6._16_4_ = &MAN_COM_P1_0054fc00_ + iVar3;
  auVar11._0_20_ = auVar6;
  auVar7 = auVar11._0_32_;
  bVar2 = (&RING_HIT_P1_0054fc47)[iVar3];
  auVar12._24_40_ = auVar10._24_40_;
  if (bVar2 == 5) {
    if (((((&ACT_STA_P1_0054fc2d)[iVar3] == 7 || (&ACT_STA_P1_0054fc2d)[iVar3] == 8) ||
         ((&ACT_STA_P1_0054fc2d)[iVar3] == 9)) || ((&ACT_STA_P1_0054fc2d)[iVar3] == 0xf)) &&
       ((byte)((&DAT_00557f79)[param_1 * 2] - 0x30) < 0x71)) {
      ac = ac & 0xfffffff8 | (uint)((&DOWN_STA_P1_0054fc2f)[iVar3] != 0) << 2;
      auVar12._20_4_ = 0x3f;
      auVar12._0_20_ = auVar6;
      if (((byte)(ac >> 2) & 1) != 1) {
        auVar12._20_4_ = 0x3d;
      }
    }
    else {
      ac = ac & 0xfffffff8;
      ac = ac | (uint)((&DOWN_STA_P1_0054fc2f)[iVar3] != 0) << 2;
      auVar12._20_4_ = 0x3b;
      auVar12._0_20_ = auVar6;
      if (((byte)(ac >> 2) & 1) != 1) {
        auVar12._20_4_ = 0x39;
      }
    }
LAB_00023654:
    auVar13._28_36_ = auVar12._28_36_;
    auVar13._0_24_ = auVar12._0_24_;
    auVar13._24_4_ = 1;
    auVar7 = auVar13._0_32_;
  }
  else {
    if (bVar2 < 6) {
      uVar1 = ac & 0xfffffff8 | (uint)(4 < bVar2) << 2 | (uint)(bVar2 == 4) << 1;
      ac = uVar1 | bVar2 < 4;
      bVar2 = (byte)(uVar1 >> 1);
    }
    else {
      if (bVar2 == 6) {
        if (((((&ACT_STA_P1_0054fc2d)[iVar3] == 7 || (&ACT_STA_P1_0054fc2d)[iVar3] == 8) ||
             ((&ACT_STA_P1_0054fc2d)[iVar3] == 9)) || ((&ACT_STA_P1_0054fc2d)[iVar3] == 0xf)) &&
           ((byte)((&DAT_00557f79)[param_1 * 2] - 0x30) < 0x71)) {
          ac = ac & 0xfffffff8 | (uint)((&DOWN_STA_P1_0054fc2f)[iVar3] != 0) << 2;
          auVar12._20_4_ = 0x3e;
          auVar12._0_20_ = auVar6;
          if (((byte)(ac >> 2) & 1) != 1) {
            auVar12._20_4_ = 0x3c;
          }
        }
        else {
          ac = ac & 0xfffffff8;
          ac = ac | (uint)((&DOWN_STA_P1_0054fc2f)[iVar3] != 0) << 2;
          auVar12._20_4_ = 0x3a;
          auVar12._0_20_ = auVar6;
          if (((byte)(ac >> 2) & 1) != 1) {
            auVar12._20_4_ = 0x38;
          }
        }
        goto LAB_00023654;
      }
      uVar1 = ac & 0xfffffff8 | (uint)(7 < bVar2) << 2 | (uint)(bVar2 == 7) << 1;
      ac = uVar1 | bVar2 < 7;
      bVar2 = (byte)(uVar1 >> 1);
    }
    if ((bVar2 & 1) == 1) {
      auVar15._12_52_ = auVar11._12_52_;
      auVar15._8_4_ = 0x23664;
      auVar15._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
      *(undefined (*) [64])((uint)fp & 0xffffffc0) = auVar15;
      auVar14._8_56_ = auVar15._8_56_;
      auVar14._4_4_ = auStack_40;
      auVar14._0_4_ = fp;
      auVar7 = auVar14._0_32_;
      FUN_00023750(param_1,param_2,param_3,param_4);
      fp = (undefined *)register0x00000004;
    }
  }
  uVar1 = ac;
  uVar19 = auVar7._24_4_;
  ac = ac & 0xfffffff8 | (uint)(1 < uVar19) << 2 | (uint)(uVar19 == 1) << 1 | (uint)(uVar19 == 0);
  if (((byte)ac & 1 | 1 < uVar19) == 1) {
    fp = (undefined *)auVar7._0_4_;
    return;
  }
  uVar19 = *(uint *)(&DIRECT_P1_0054fc14 + param_1 * 0x2c);
  fVar18 = (&XPOS_P1_0054fc04)[param_1 * 0x16];
  if ((float10)(int)fVar18 < (float10)'\0') {
    fVar18 = (float)((uint)fVar18 ^ 0x80000000);
  }
  fVar17 = (&ZPOS_P1_0054fc0c)[param_1 * 0x16];
  if ((float10)(int)fVar17 < (float10)'\0') {
    fVar17 = (float)((uint)fVar17 ^ 0x80000000);
  }
  if ((float10)(int)fVar18 < (float10)(int)fVar17) {
    if ((float10)CONCAT44(fVar18,(&ZPOS_P1_0054fc0c)[param_1 * 0x16]) < (float10)'\0') {
      uVar19 = uVar19 - 0xc000;
    }
    else {
      uVar19 = uVar19 - 0x4000;
    }
  }
  else {
    if ((float10)'\0' <= (float10)CONCAT44(fVar18,(&XPOS_P1_0054fc04)[param_1 * 0x16]))
    goto LAB_000236e8;
    uVar19 = uVar19 - 0x8000;
  }
  uVar19 = uVar19 & 0xffff;
LAB_000236e8:
  uVar19 = uVar19 + 0x4000 & 0xffff;
  uVar16 = 0x8000;
  ac = uVar1 & 0xfffffff8 | (uint)(uVar19 < 0x8000) << 2 | (uint)(uVar19 == 0x8000) << 1 |
       (uint)(0x8000 < uVar19);
  if (((byte)ac & 1) != 1) {
    uVar16 = 0xffff;
    *(uint *)(&DIRECT_P1_0054fc14 + param_1 * 0x2c) =
         *(int *)(&DIRECT_P1_0054fc14 + param_1 * 0x2c) + 0x8000U & 0xffff;
  }
  *(undefined4 *)(auVar7._16_4_ + 8) = uVar16;
  *(undefined *)(auVar7._16_4_ + 0x35) = g14;
  FUN_00024ee0(auVar7[0x14],auVar7._28_4_);
  return;
}

