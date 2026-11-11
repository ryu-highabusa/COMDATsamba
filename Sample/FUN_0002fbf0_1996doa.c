
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0002fbf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 auVar6 [16];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined1 in_register_00000018 [40];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  uint uVar11;
  byte bVar12;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar10 [64];
  
  uVar11 = ac;
  auVar6._8_4_ = unaff_retaddr;
  auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar6._12_4_ = unaff_r3;
  auVar9._16_4_ = unaff_r4;
  auVar9._0_16_ = auVar6;
  auVar9._20_4_ = unaff_r5;
  auVar9._24_4_ = &g_player1;
  auVar9._32_32_ = in_register_00000018._8_32_;
  auVar9._28_4_ = &g_player2;
  bVar1 = DAT_005647c6 != 0;
  bVar2 = DAT_005647c6 == 0;
  if (bVar1) {
    uVar11 = (uint)DAT_005647c8;
    auVar10._12_52_ = auVar9._12_52_;
    auVar10._8_4_ = 0x2fdc4;
    auVar10._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar10;
    auVar9._8_56_ = auVar10._8_56_;
    auVar9._4_4_ = 0;
    auVar9._0_4_ = fp;
    ac = ac & 0xfffffff8 | (uint)bVar1 << 2 | (uint)bVar2 << 1;
    FUN_00031ff0(uVar11);
    DAT_005647c6 = DAT_005647c6 + -1;
    goto LAB_0002fddc;
  }
  uVar3 = ac & 0xfffffff8 | (uint)(0x4_THROW < DAT_005647c4) << 2 |
          (uint)(DAT_005647c4 == 0x4_THROW) << 1;
  ac = uVar3 | DAT_005647c4 < 0x4_THROW;
  if (((byte)(uVar3 >> 1) & 1) == 1) goto LAB_0002fddc;
  uVar3 = uVar11 & 0xfffffff8 | (uint)(0x6_HOLDSUCCESSFUL < DAT_005647c4) << 2 |
          (uint)(DAT_005647c4 == 0x6_HOLDSUCCESSFUL) << 1;
  ac = uVar3 | DAT_005647c4 < 0x6_HOLDSUCCESSFUL;
  if (((byte)(uVar3 >> 1) & 1) == 1) goto LAB_0002fddc;
  g13 = 0xff;
  uVar3 = uVar11 & 0xfffffff8 | (uint)(1 < (byte)(DAT_005647c4 - 0xA_THROWCAUGHT)) << 2 |
          (uint)((DOA_ACTSTATE)(DAT_005647c4 - 0xA_THROWCAUGHT) == 1) << 1;
  ac = uVar3 | DAT_005647c4 == 0xA_THROWCAUGHT;
  if (((byte)ac & 1 | (byte)(uVar3 >> 1) & 1) == 1) goto LAB_0002fddc;
  ac = uVar11 & 0xfffffff8 | (uint)(g_player1.action_state == 0x4_THROW) << 1;
  if (((byte)(ac >> 1) & 1) != 1) {
    ac = uVar11 & 0xfffffff8 | (uint)(g_player1.action_state == 0x6_HOLDSUCCESSFUL) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      bVar12 = g_player1.action_state - 0xA_THROWCAUGHT;
      ac = uVar11 & 0xfffffff8 | (uint)(1 < bVar12) << 2 | (uint)(bVar12 == 1) << 1 |
           (uint)(g_player1.action_state == 0xA_THROWCAUGHT);
      if (1 < bVar12) goto LAB_0002fddc;
    }
  }
  auVar7._16_4_ = 0;
  auVar7._0_16_ = auVar6;
  auVar7._24_40_ = auVar9._24_40_;
  auVar7._20_4_ = 0x40000000;
  fVar5 = (float10)CONCAT44(param_2,param_1);
  fVar4 = (float10)CONCAT44(param_8,param_7);
  ac = ac & 0xfffffff8;
  if (!NAN(fVar4) && !NAN(fVar5)) {
    ac = ac | (uint)(fVar4 < fVar5) << 2;
    ac = ac | (uint)(fVar4 == fVar5) << 1;
    ac = ac | fVar5 < fVar4;
  }
  if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) == 1) {
LAB_0002fcf4:
    DAT_005647c8 = g14;
  }
  else {
    fVar5 = (float10)(longlong)(CONCAT44(param_4,param_3) ^ 0x8000000000000000);
    fVar4 = (float10)CONCAT44(param_2,param_1);
    ac = ac & 0xfffffff8;
    if (!NAN(fVar4) && !NAN(fVar5)) {
      ac = ac | (uint)(fVar4 < fVar5) << 2;
      ac = ac | (uint)(fVar4 == fVar5) << 1;
      ac = ac | fVar5 < fVar4;
    }
    if (((byte)(ac >> 2) & 1) == 1) goto LAB_0002fcf4;
    fVar5 = (float10)CONCAT44(param_2,param_1);
    fVar4 = (float10)CONCAT44(param_8,param_7);
    ac = ac & 0xfffffff8;
    if (!NAN(fVar4) && !NAN(fVar5)) {
      ac = ac | (uint)(fVar4 < fVar5) << 2;
      ac = ac | (uint)(fVar4 == fVar5) << 1;
      ac = ac | fVar5 < fVar4;
    }
    if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) == 1) goto LAB_0002fcf4;
    fVar5 = (float10)(longlong)(CONCAT44(param_4,param_3) ^ 0x8000000000000000);
    fVar4 = (float10)CONCAT44(param_2,param_1);
    ac = ac & 0xfffffff8;
    if (!NAN(fVar4) && !NAN(fVar5)) {
      ac = ac | (uint)(fVar4 == fVar5) << 1;
      ac = ac | fVar5 < fVar4;
    }
    if (((byte)ac & 1 | (byte)(ac >> 1) & 1) != 1) {
      fVar5 = (float10)(longlong)(CONCAT44(param_4,g_player1.y_position) ^ 0x8000000000000000);
      fVar4 = (float10)'\x01';
      ac = ac & 0xfffffff8;
      if (!NAN(fVar4) && !NAN(fVar5)) {
        ac = ac | (uint)(fVar4 < fVar5) << 2;
        ac = ac | (uint)(fVar4 == fVar5) << 1;
        ac = ac | fVar5 < fVar4;
      }
      if (((byte)ac & 1 | (byte)(ac >> 2) & 1) != 1) goto LAB_0002fcf4;
    }
    auVar9._16_4_ = 0;
    auVar9._20_4_ = 0x40000000;
    auVar9._24_40_ = auVar7._24_40_;
    fVar5 = (float10)CONCAT44(param_2,param_1);
    fVar4 = (float10)CONCAT44(param_8,param_7);
    ac = ac & 0xfffffff8;
    if (!NAN(fVar4) && !NAN(fVar5)) {
      ac = ac | (uint)(fVar4 < fVar5) << 2;
      ac = ac | (uint)(fVar4 == fVar5) << 1;
      ac = ac | fVar5 < fVar4;
    }
    if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) {
      fVar5 = (float10)(longlong)(CONCAT44(param_4,param_3) ^ 0x8000000000000000);
      fVar4 = (float10)CONCAT44(param_2,param_1);
      ac = ac & 0xfffffff8;
      if (!NAN(fVar4) && !NAN(fVar5)) {
        ac = ac | (uint)(fVar4 < fVar5) << 2;
        ac = ac | (uint)(fVar4 == fVar5) << 1;
        ac = ac | fVar5 < fVar4;
      }
      if (((byte)(ac >> 2) & 1) != 1) {
        fVar5 = (float10)CONCAT44(param_2,param_1);
        fVar4 = (float10)CONCAT44(param_8,param_7);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar4) && !NAN(fVar5)) {
          ac = ac | (uint)(fVar4 < fVar5) << 2;
          ac = ac | (uint)(fVar4 == fVar5) << 1;
          ac = ac | fVar5 < fVar4;
        }
        if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) {
          fVar5 = (float10)(longlong)(CONCAT44(param_4,param_3) ^ 0x8000000000000000);
          fVar4 = (float10)CONCAT44(param_2,param_1);
          ac = ac & 0xfffffff8;
          if (!NAN(fVar4) && !NAN(fVar5)) {
            ac = ac | (uint)(fVar4 < fVar5) << 2;
            ac = ac | (uint)(fVar4 == fVar5) << 1;
            ac = ac | fVar5 < fVar4;
          }
          if (((byte)ac & 1 | (byte)(ac >> 1) & 1) == 1) goto LAB_0002fddc;
          fVar5 = (float10)(longlong)(CONCAT44(param_4,g_player2.y_position) ^ 0x8000000000000000);
          fVar4 = (float10)'\x01';
          ac = ac & 0xfffffff8;
          if (!NAN(fVar4) && !NAN(fVar5)) {
            ac = ac | (uint)(fVar4 < fVar5) << 2;
            ac = ac | (uint)(fVar4 == fVar5) << 1;
            ac = ac | fVar5 < fVar4;
          }
          if (((byte)ac & 1 | (byte)(ac >> 2) & 1) == 1) goto LAB_0002fddc;
        }
      }
    }
    DAT_005647c8 = 1;
    auVar7 = auVar9;
  }
  auVar8._24_40_ = auVar7._24_40_;
  auVar8._0_20_ = auVar7._0_20_;
  auVar8._20_4_ = 0x40000000;
  auVar9._20_44_ = auVar8._20_44_;
  auVar9._0_16_ = auVar7._0_16_;
  auVar9._16_4_ = 0;
  g13 = 10;
  DAT_005647c6 = 10;
LAB_0002fddc:
  DAT_005647c4 = g_player1.action_state;
  DAT_005647c5 = g_player2.action_state;
  fp = auVar9._0_4_;
  return;
}

