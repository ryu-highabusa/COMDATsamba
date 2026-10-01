
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000375d0(void)

{
  uint uVar1;
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  int iVar8;
  undefined1 *unaff_pfp;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [64];
  undefined4 unaff_r3;
  uint *puVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  uint *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint *puVar20;
  undefined8 in_register_00000038;
  uint uVar21;
  uint uVar22;
  undefined1 auStackX_0 [1000000];
  
  iVar15 = 0;
  puVar19 = &DAT_00565748;
  iVar14 = 0;
  puVar13 = &combocounter_candidate2;
  puVar18 = &DAT_00565740;
  puVar16 = &DAT_00565738;
  puVar17 = &DAT_00565730;
  puVar20 = &DAT_00565728;
  puVar9 = (undefined1 *)register0x00000004;
  uVar1 = ac;
  do {
    ac = uVar1;
    uVar1 = ac;
    if (g_player1.unknown_56[iVar14 + -4] == '\x01') {
      uVar22 = (uint)g_player1.unknown_56[iVar14 + -3];
      uVar21 = ac & 0xfffffff8 | (uint)(uVar22 == 1) << 1;
      ac = uVar21 | uVar22 == 0;
      puVar10 = puVar9;
      if (((byte)ac & 1 | (byte)(uVar21 >> 1) & 1) != 1) {
        uVar21 = *puVar13;
        uVar1 = uVar1 & 0xfffffff8 | (uint)((int)uVar21 < (int)uVar22) << 2 |
                (uint)(uVar21 == uVar22) << 1;
        ac = uVar1 | (int)uVar22 < (int)uVar21;
        if (((byte)(uVar1 >> 1) & 1) != 1) {
          *puVar20 = uVar22;
          auVar2._4_4_ = puVar9;
          auVar2._0_4_ = unaff_pfp;
          auVar2._8_4_ = 0x37640;
          auVar2._12_4_ = unaff_r3;
          auVar2._16_4_ = puVar13;
          auVar2._20_4_ = iVar14;
          auVar2._24_4_ = iVar15;
          auVar2._28_4_ = puVar16;
          auVar2._32_4_ = puVar17;
          auVar2._36_4_ = puVar18;
          auVar2._40_4_ = puVar19;
          auVar2._44_4_ = &g_player1;
          auVar2._48_4_ = puVar20;
          auVar2._52_4_ = 0x3c;
          auVar2._56_8_ = in_register_00000038;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar2;
          puVar10 = puVar9 + 0x40;
          FUN_00037880(iVar15);
          *puVar16 = g14;
          unaff_pfp = *fp;
          fp = (undefined1 (*) [64])puVar9;
        }
      }
      uVar21 = *puVar13;
      uVar1 = ac & 0xfffffff8 | (uint)(uVar21 == g_player1.unknown_56[iVar14 + -3]) << 1;
      puVar11 = puVar10;
      if (((byte)(uVar1 >> 1) & 1 | (int)uVar21 < (int)(uint)g_player1.unknown_56[iVar14 + -3]) != 1
         ) {
        uVar22 = ac & 0xfffffff8 | (uint)(1 < (int)uVar21) << 2 | (uint)(uVar21 == 1) << 1;
        ac = uVar22 | (int)uVar21 < 1;
        uVar1 = ac;
        if (((byte)ac & 1 | (byte)(uVar22 >> 1) & 1) != 1) {
          *puVar16 = 1;
          *puVar17 = uVar21;
          *puVar18 = 0x3c;
          auVar3._4_4_ = puVar10;
          auVar3._0_4_ = unaff_pfp;
          auVar3._8_4_ = 0x37670;
          auVar3._12_4_ = unaff_r3;
          auVar3._16_4_ = puVar13;
          auVar3._20_4_ = iVar14;
          auVar3._24_4_ = iVar15;
          auVar3._28_4_ = puVar16;
          auVar3._32_4_ = puVar17;
          auVar3._36_4_ = puVar18;
          auVar3._40_4_ = puVar19;
          auVar3._44_4_ = &g_player1;
          auVar3._48_4_ = puVar20;
          auVar3._52_4_ = 0x3c;
          auVar3._56_8_ = in_register_00000038;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar3;
          puVar11 = puVar10 + 0x40;
          FUN_00037880(iVar15);
          unaff_pfp = *fp;
          fp = (undefined1 (*) [64])puVar10;
          uVar1 = ac;
        }
      }
      ac = uVar1;
      *puVar13 = (uint)g_player1.unknown_56[iVar14 + -3];
    }
    else {
      ac = ac & 0xfffffff8 | (uint)((int)*puVar19 < 1);
      puVar11 = puVar9;
      if (((byte)ac & 1 | 1 < (int)*puVar19) != 1) {
        uVar21 = *puVar13;
        uVar1 = uVar1 & 0xfffffff8 | (uint)(1 < (int)uVar21) << 2 | (uint)(uVar21 == 1) << 1;
        ac = uVar1 | (int)uVar21 < 1;
        if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
          *puVar16 = 1;
          *puVar17 = uVar21;
          *puVar18 = 0x3c;
          auVar4._4_4_ = puVar9;
          auVar4._0_4_ = unaff_pfp;
          auVar4._8_4_ = 0x376a8;
          auVar4._12_4_ = unaff_r3;
          auVar4._16_4_ = puVar13;
          auVar4._20_4_ = iVar14;
          auVar4._24_4_ = iVar15;
          auVar4._28_4_ = puVar16;
          auVar4._32_4_ = puVar17;
          auVar4._36_4_ = puVar18;
          auVar4._40_4_ = puVar19;
          auVar4._44_4_ = &g_player1;
          auVar4._48_4_ = puVar20;
          auVar4._52_4_ = 0x3c;
          auVar4._56_8_ = in_register_00000038;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
          puVar11 = puVar9 + 0x40;
          FUN_00037880(iVar15);
          unaff_pfp = *fp;
          fp = (undefined1 (*) [64])puVar9;
        }
      }
      *puVar13 = g14;
    }
    iVar15 = iVar15 + 1;
    iVar8 = iVar14 + -4;
    uVar21 = ac & 0xfffffff8 | (uint)(iVar15 < 1) << 2;
    uVar1 = uVar21 | (uint)(iVar15 == 1) << 1;
    iVar14 = iVar14 + 0x58;
    puVar13 = puVar13 + 1;
    puVar18 = puVar18 + 1;
    puVar16 = puVar16 + 1;
    puVar17 = puVar17 + 1;
    puVar20 = puVar20 + 1;
    *puVar19 = (uint)g_player1.unknown_56[iVar8];
    uVar22 = DAT_00565728;
    puVar19 = puVar19 + 1;
    puVar9 = puVar11;
  } while (((byte)(uVar1 >> 1) & 1 | (byte)(uVar21 >> 2) & 1) == 1);
  uVar1 = ac & 0xfffffff8 | (uint)(0 < (int)DAT_00565728) << 2 | (uint)(DAT_00565728 == 0) << 1;
  ac = uVar1 | (int)DAT_00565728 < 0;
  pauVar12 = (undefined1 (*) [64])puVar11;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    auVar5._4_4_ = puVar11;
    auVar5._0_4_ = unaff_pfp;
    auVar5._8_4_ = 0x376f4;
    auVar5._12_4_ = unaff_r3;
    auVar5._16_4_ = puVar13;
    auVar5._20_4_ = iVar14;
    auVar5._24_4_ = iVar15;
    auVar5._28_4_ = puVar16;
    auVar5._32_4_ = puVar17;
    auVar5._36_4_ = puVar18;
    auVar5._40_4_ = puVar19;
    auVar5._44_4_ = &g_player1;
    auVar5._48_4_ = puVar20;
    auVar5._52_4_ = 0x3c;
    auVar5._56_8_ = in_register_00000038;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
    pauVar12 = (undefined1 (*) [64])(puVar11 + 0x40);
    FUN_00037730(0,uVar22);
    DAT_00565728 = g14;
    unaff_pfp = *fp;
    fp = (undefined1 (*) [64])puVar11;
  }
  auVar6._4_4_ = pauVar12;
  auVar6._0_4_ = unaff_pfp;
  auVar6._8_4_ = 0x37704;
  auVar6._12_4_ = unaff_r3;
  auVar6._16_4_ = puVar13;
  auVar6._20_4_ = iVar14;
  auVar6._24_4_ = iVar15;
  auVar6._28_4_ = puVar16;
  auVar6._32_4_ = puVar17;
  auVar6._36_4_ = puVar18;
  auVar6._40_4_ = puVar19;
  auVar6._44_4_ = &g_player1;
  auVar6._48_4_ = puVar20;
  auVar6._52_4_ = 0x3c;
  auVar6._56_8_ = in_register_00000038;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
  FUN_00037920(0);
  uVar21 = DAT_0056572c;
  uVar1 = ac & 0xfffffff8 | (uint)(0 < (int)DAT_0056572c) << 2 | (uint)(DAT_0056572c == 0) << 1;
  ac = uVar1 | (int)DAT_0056572c < 0;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    auVar7._4_4_ = pauVar12 + 1;
    auVar7._0_4_ = fp;
    auVar7._8_4_ = 0x37718;
    auVar7._12_4_ = unaff_r3;
    auVar7._16_4_ = puVar13;
    auVar7._20_4_ = iVar14;
    auVar7._24_4_ = iVar15;
    auVar7._28_4_ = puVar16;
    auVar7._32_4_ = puVar17;
    auVar7._36_4_ = puVar18;
    auVar7._40_4_ = puVar19;
    auVar7._44_4_ = &g_player1;
    auVar7._48_4_ = puVar20;
    auVar7._52_4_ = 0x3c;
    auVar7._56_8_ = in_register_00000038;
    *pauVar12 = auVar7;
    FUN_00037730(1,uVar21);
    DAT_0056572c = g14;
    pauVar12 = pauVar12 + 1;
  }
  fp = pauVar12;
  FUN_00037920(1);
  return;
}

