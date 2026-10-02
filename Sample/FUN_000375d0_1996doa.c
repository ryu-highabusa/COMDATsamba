
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FixDisp_UpdateComboCounter(void)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  int iVar9;
  undefined1 *unaff_pfp;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [64];
  undefined4 unaff_r3;
  uint32_t *puVar14;
  int iVar15;
  int iVar16;
  uint32_t *puVar17;
  uint32_t *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  uint32_t *puVar21;
  undefined8 in_register_00000038;
  uint32_t uVar22;
  uint uVar23;
  undefined1 auStackX_0 [1000000];
  
  iVar16 = 0;
  puVar20 = &DAT_00565748;
  iVar15 = 0;
  puVar14 = &g_comboDisplayLastCount;
  puVar19 = &DAT_00565740;
  puVar17 = &DAT_00565738;
  puVar18 = &DAT_00565730;
  puVar21 = &DAT_00565728;
  puVar10 = (undefined1 *)register0x00000004;
  uVar1 = ac;
  do {
    ac = uVar1;
    uVar1 = ac;
    if (g_player1.unknown_56[iVar15 + -4] == '\x01') {
      uVar23 = (uint)g_player1.unknown_56[iVar15 + -3];
      uVar2 = ac & 0xfffffff8 | (uint)(uVar23 == 1) << 1;
      ac = uVar2 | uVar23 == 0;
      puVar11 = puVar10;
      if (((byte)ac & 1 | (byte)(uVar2 >> 1) & 1) != 1) {
        uVar22 = *puVar14;
        uVar1 = uVar1 & 0xfffffff8 | (uint)((int)uVar22 < (int)uVar23) << 2 |
                (uint)(uVar22 == uVar23) << 1;
        ac = uVar1 | (int)uVar23 < (int)uVar22;
        if (((byte)(uVar1 >> 1) & 1) != 1) {
          *puVar21 = uVar23;
          auVar3._4_4_ = puVar10;
          auVar3._0_4_ = unaff_pfp;
          auVar3._8_4_ = 0x37640;
          auVar3._12_4_ = unaff_r3;
          auVar3._16_4_ = puVar14;
          auVar3._20_4_ = iVar15;
          auVar3._24_4_ = iVar16;
          auVar3._28_4_ = puVar17;
          auVar3._32_4_ = puVar18;
          auVar3._36_4_ = puVar19;
          auVar3._40_4_ = puVar20;
          auVar3._44_4_ = &g_player1;
          auVar3._48_4_ = puVar21;
          auVar3._52_4_ = 0x3c;
          auVar3._56_8_ = in_register_00000038;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar3;
          puVar11 = puVar10 + 0x40;
          FUN_00037880(iVar16);
          *puVar17 = g14;
          unaff_pfp = *fp;
          fp = (undefined1 (*) [64])puVar10;
        }
      }
      uVar22 = *puVar14;
      uVar1 = ac & 0xfffffff8 | (uint)(uVar22 == g_player1.unknown_56[iVar15 + -3]) << 1;
      puVar12 = puVar11;
      if (((byte)(uVar1 >> 1) & 1 | (int)uVar22 < (int)(uint)g_player1.unknown_56[iVar15 + -3]) != 1
         ) {
        uVar2 = ac & 0xfffffff8 | (uint)(1 < (int)uVar22) << 2 | (uint)(uVar22 == 1) << 1;
        ac = uVar2 | (int)uVar22 < 1;
        uVar1 = ac;
        if (((byte)ac & 1 | (byte)(uVar2 >> 1) & 1) != 1) {
          *puVar17 = 1;
          *puVar18 = uVar22;
          *puVar19 = 0x3c;
          auVar4._4_4_ = puVar11;
          auVar4._0_4_ = unaff_pfp;
          auVar4._8_4_ = 0x37670;
          auVar4._12_4_ = unaff_r3;
          auVar4._16_4_ = puVar14;
          auVar4._20_4_ = iVar15;
          auVar4._24_4_ = iVar16;
          auVar4._28_4_ = puVar17;
          auVar4._32_4_ = puVar18;
          auVar4._36_4_ = puVar19;
          auVar4._40_4_ = puVar20;
          auVar4._44_4_ = &g_player1;
          auVar4._48_4_ = puVar21;
          auVar4._52_4_ = 0x3c;
          auVar4._56_8_ = in_register_00000038;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
          puVar12 = puVar11 + 0x40;
          FUN_00037880(iVar16);
          unaff_pfp = *fp;
          fp = (undefined1 (*) [64])puVar11;
          uVar1 = ac;
        }
      }
      ac = uVar1;
      *puVar14 = (uint)g_player1.unknown_56[iVar15 + -3];
    }
    else {
      ac = ac & 0xfffffff8 | (uint)((int)*puVar20 < 1);
      puVar12 = puVar10;
      if (((byte)ac & 1 | 1 < (int)*puVar20) != 1) {
        uVar22 = *puVar14;
        uVar1 = uVar1 & 0xfffffff8 | (uint)(1 < (int)uVar22) << 2 | (uint)(uVar22 == 1) << 1;
        ac = uVar1 | (int)uVar22 < 1;
        if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
          *puVar17 = 1;
          *puVar18 = uVar22;
          *puVar19 = 0x3c;
          auVar5._4_4_ = puVar10;
          auVar5._0_4_ = unaff_pfp;
          auVar5._8_4_ = 0x376a8;
          auVar5._12_4_ = unaff_r3;
          auVar5._16_4_ = puVar14;
          auVar5._20_4_ = iVar15;
          auVar5._24_4_ = iVar16;
          auVar5._28_4_ = puVar17;
          auVar5._32_4_ = puVar18;
          auVar5._36_4_ = puVar19;
          auVar5._40_4_ = puVar20;
          auVar5._44_4_ = &g_player1;
          auVar5._48_4_ = puVar21;
          auVar5._52_4_ = 0x3c;
          auVar5._56_8_ = in_register_00000038;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
          puVar12 = puVar10 + 0x40;
          FUN_00037880(iVar16);
          unaff_pfp = *fp;
          fp = (undefined1 (*) [64])puVar10;
        }
      }
      *puVar14 = g14;
    }
    iVar16 = iVar16 + 1;
    iVar9 = iVar15 + -4;
    uVar2 = ac & 0xfffffff8 | (uint)(iVar16 < 1) << 2;
    uVar1 = uVar2 | (uint)(iVar16 == 1) << 1;
    iVar15 = iVar15 + 0x58;
    puVar14 = puVar14 + 1;
    puVar19 = puVar19 + 1;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
    puVar21 = puVar21 + 1;
    *puVar20 = (uint)g_player1.unknown_56[iVar9];
    uVar22 = DAT_00565728;
    puVar20 = puVar20 + 1;
    puVar10 = puVar12;
  } while (((byte)(uVar1 >> 1) & 1 | (byte)(uVar2 >> 2) & 1) == 1);
  uVar1 = ac & 0xfffffff8 | (uint)(0 < (int)DAT_00565728) << 2 | (uint)(DAT_00565728 == 0) << 1;
  ac = uVar1 | (int)DAT_00565728 < 0;
  pauVar13 = (undefined1 (*) [64])puVar12;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    auVar6._4_4_ = puVar12;
    auVar6._0_4_ = unaff_pfp;
    auVar6._8_4_ = 0x376f4;
    auVar6._12_4_ = unaff_r3;
    auVar6._16_4_ = puVar14;
    auVar6._20_4_ = iVar15;
    auVar6._24_4_ = iVar16;
    auVar6._28_4_ = puVar17;
    auVar6._32_4_ = puVar18;
    auVar6._36_4_ = puVar19;
    auVar6._40_4_ = puVar20;
    auVar6._44_4_ = &g_player1;
    auVar6._48_4_ = puVar21;
    auVar6._52_4_ = 0x3c;
    auVar6._56_8_ = in_register_00000038;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
    pauVar13 = (undefined1 (*) [64])(puVar12 + 0x40);
    FUN_00037730(0,uVar22);
    DAT_00565728 = g14;
    unaff_pfp = *fp;
    fp = (undefined1 (*) [64])puVar12;
  }
  auVar7._4_4_ = pauVar13;
  auVar7._0_4_ = unaff_pfp;
  auVar7._8_4_ = 0x37704;
  auVar7._12_4_ = unaff_r3;
  auVar7._16_4_ = puVar14;
  auVar7._20_4_ = iVar15;
  auVar7._24_4_ = iVar16;
  auVar7._28_4_ = puVar17;
  auVar7._32_4_ = puVar18;
  auVar7._36_4_ = puVar19;
  auVar7._40_4_ = puVar20;
  auVar7._44_4_ = &g_player1;
  auVar7._48_4_ = puVar21;
  auVar7._52_4_ = 0x3c;
  auVar7._56_8_ = in_register_00000038;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
  FUN_00037920(0);
  uVar22 = DAT_0056572c;
  uVar1 = ac & 0xfffffff8 | (uint)(0 < (int)DAT_0056572c) << 2 | (uint)(DAT_0056572c == 0) << 1;
  ac = uVar1 | (int)DAT_0056572c < 0;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    auVar8._4_4_ = pauVar13 + 1;
    auVar8._0_4_ = fp;
    auVar8._8_4_ = 0x37718;
    auVar8._12_4_ = unaff_r3;
    auVar8._16_4_ = puVar14;
    auVar8._20_4_ = iVar15;
    auVar8._24_4_ = iVar16;
    auVar8._28_4_ = puVar17;
    auVar8._32_4_ = puVar18;
    auVar8._36_4_ = puVar19;
    auVar8._40_4_ = puVar20;
    auVar8._44_4_ = &g_player1;
    auVar8._48_4_ = puVar21;
    auVar8._52_4_ = 0x3c;
    auVar8._56_8_ = in_register_00000038;
    *pauVar13 = auVar8;
    FUN_00037730(1,uVar22);
    DAT_0056572c = g14;
    pauVar13 = pauVar13 + 1;
  }
  fp = pauVar13;
  FUN_00037920(1);
  return;
}

