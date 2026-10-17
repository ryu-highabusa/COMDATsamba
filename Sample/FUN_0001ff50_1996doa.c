
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0001ff50(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  int iVar24;
  undefined4 unaff_retaddr;
  uint uVar26;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined4 extraout_g1_01;
  undefined4 extraout_g1_02;
  undefined4 extraout_g1_03;
  undefined4 extraout_g1_04;
  undefined4 extraout_g1_05;
  undefined4 extraout_g1_06;
  undefined4 extraout_g1_07;
  uint uVar27;
  undefined *puVar28;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar25 [60];
  
  auVar3._4_4_ = auStackX_0;
  auVar3._0_4_ = unaff_pfp;
  auVar3._8_4_ = unaff_retaddr;
  auVar3._12_52_ = in_register_0000000c;
  DAT_00557f28 = g14;
  auVar4._20_44_ = in_register_0000000c._8_44_;
  auVar4._0_16_ = auVar3._0_16_;
  auVar4._16_4_ = 0;
  do {
    uVar1 = fp;
    uVar26 = auVar4._16_4_;
    iVar24 = auVar4._4_4_;
    uVar27 = (uint)(&g_player1)[uVar26].action_state;
    ac = ac & 0xfffffff8 | (uint)(0xe < uVar27) << 2 | (uint)(uVar27 == 0xe) << 1 |
         (uint)(uVar27 < 0xe);
    auVar6._0_8_ = auVar4._0_8_;
    auVar6._12_52_ = auVar4._12_52_;
    if (0xe < uVar27) {
switchD_0001ff80_caseD_5:
      auVar22._8_4_ = 0x20028;
      auVar22._0_8_ = auVar6._0_8_;
      auVar22._12_52_ = auVar6._12_52_;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar22;
      auVar21._4_56_ = auVar22._8_56_;
      auVar21._0_4_ = (iVar24 + 0x3fU & 0xffffffc0) + 0x40;
      auVar21._60_4_ = 0;
      auVar21 = auVar21 << 0x20;
      FUN_000213b0(uVar26);
      auVar25 = auVar21._4_60_;
      param_2 = extraout_g1_07;
      fp = iVar24 + 0x3fU & 0xffffffc0;
    }
    else {
      puVar28 = (&switchD_0001ff80::switchdataD_0001ff84)[uVar27];
      switch(uVar27) {
      case 0:
        auVar6._8_4_ = 0x1ffc8;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar6;
        auVar5._4_56_ = auVar6._8_56_;
        auVar5._0_4_ = (iVar24 + 0x3fU & 0xffffffc0) + 0x40;
        auVar5._60_4_ = 0;
        auVar5 = auVar5 << 0x20;
        FUN_00020040(uVar26);
        auVar25 = auVar5._4_60_;
        param_2 = extraout_g1;
        fp = iVar24 + 0x3fU & 0xffffffc0;
        break;
      case 1:
      case 2:
        auVar14._8_4_ = 0x1fff8;
        auVar14._0_8_ = auVar6._0_8_;
        auVar14._12_52_ = auVar6._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar14;
        auVar13._4_56_ = auVar14._8_56_;
        auVar13._0_4_ = (iVar24 + 0x3fU & 0xffffffc0) + 0x40;
        auVar13._60_4_ = 0;
        auVar13 = auVar13 << 0x20;
        FUN_00020590(uVar26);
        auVar25 = auVar13._4_60_;
        param_2 = extraout_g1_03;
        fp = iVar24 + 0x3fU & 0xffffffc0;
        break;
      case 3:
        auVar8._8_4_ = 0x1ffd4;
        auVar8._0_8_ = auVar6._0_8_;
        auVar8._12_52_ = auVar6._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar8;
        auVar7._4_56_ = auVar8._8_56_;
        auVar7._0_4_ = (iVar24 + 0x3fU & 0xffffffc0) + 0x40;
        auVar7._60_4_ = 0;
        auVar7 = auVar7 << 0x20;
        FUN_00020750(uVar26);
        auVar25 = auVar7._4_60_;
        param_2 = extraout_g1_00;
        fp = iVar24 + 0x3fU & 0xffffffc0;
        break;
      default:
        auVar16._8_4_ = 0x20004;
        auVar16._0_8_ = auVar6._0_8_;
        auVar16._12_52_ = auVar6._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar16;
        auVar15._4_56_ = auVar16._8_56_;
        auVar15._0_4_ = (iVar24 + 0x3fU & 0xffffffc0) + 0x40;
        auVar15._60_4_ = 0;
        auVar15 = auVar15 << 0x20;
        FUN_000207f0(uVar26);
        auVar25 = auVar15._4_60_;
        param_2 = extraout_g1_04;
        fp = iVar24 + 0x3fU & 0xffffffc0;
        break;
      case 5:
      case 0xd:
        goto switchD_0001ff80_caseD_5;
      case 7:
        auVar10._8_4_ = 0x1ffe0;
        auVar10._0_8_ = auVar6._0_8_;
        auVar10._12_52_ = auVar6._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar10;
        auVar9._4_56_ = auVar10._8_56_;
        auVar9._0_4_ = (iVar24 + 0x3fU & 0xffffffc0) + 0x40;
        auVar9._60_4_ = 0;
        auVar9 = auVar9 << 0x20;
        FUN_00020b40(uVar26);
        auVar25 = auVar9._4_60_;
        param_2 = extraout_g1_01;
        fp = iVar24 + 0x3fU & 0xffffffc0;
        break;
      case 8:
      case 9:
        auVar12._8_4_ = 0x1ffec;
        auVar12._0_8_ = auVar6._0_8_;
        auVar12._12_52_ = auVar6._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar12;
        auVar11._4_56_ = auVar12._8_56_;
        auVar11._0_4_ = (iVar24 + 0x3fU & 0xffffffc0) + 0x40;
        auVar11._60_4_ = 0;
        auVar11 = auVar11 << 0x20;
        FUN_00020cb0(uVar26);
        auVar25 = auVar11._4_60_;
        param_2 = extraout_g1_02;
        fp = iVar24 + 0x3fU & 0xffffffc0;
        break;
      case 0xc:
        auVar20._8_4_ = 0x2001c;
        auVar20._0_8_ = auVar6._0_8_;
        auVar20._12_52_ = auVar6._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar20;
        auVar19._4_56_ = auVar20._8_56_;
        auVar19._0_4_ = (iVar24 + 0x3fU & 0xffffffc0) + 0x40;
        auVar19._60_4_ = 0;
        auVar19 = auVar19 << 0x20;
        FUN_000212d0(uVar26);
        auVar25 = auVar19._4_60_;
        param_2 = extraout_g1_06;
        fp = iVar24 + 0x3fU & 0xffffffc0;
        break;
      case 0xe:
        auVar18._8_4_ = 0x20010;
        auVar18._0_8_ = auVar6._0_8_;
        auVar18._12_52_ = auVar6._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar18;
        auVar17._4_56_ = auVar18._8_56_;
        auVar17._0_4_ = (iVar24 + 0x3fU & 0xffffffc0) + 0x40;
        auVar17._60_4_ = 0;
        auVar17 = auVar17 << 0x20;
        FUN_00021060(uVar26,param_2,param_3,param_4,puVar28,param_6,param_7,param_8);
        auVar25 = auVar17._4_60_;
        param_2 = extraout_g1_05;
        fp = iVar24 + 0x3fU & 0xffffffc0;
      }
    }
    uVar2 = ac;
    auVar23._4_60_ = auVar25;
    auVar23._0_4_ = uVar1;
    uVar27 = ac & 0xfffffff8 | (uint)(1 < DAT_00557f28) << 2 | (uint)(DAT_00557f28 == 1) << 1;
    ac = uVar27 | DAT_00557f28 < 1;
    if (((byte)(uVar27 >> 1) & 1) == 1) {
      fp = uVar1;
      return;
    }
    auVar4._20_44_ = auVar25._16_44_;
    auVar4._0_16_ = auVar23._0_16_;
    auVar4._16_4_ = uVar26 + 1;
    uVar26 = uVar2 & 0xfffffff8 | (uint)(1 < auVar4._16_4_) << 2 | (uint)(auVar4._16_4_ == 1) << 1;
    ac = uVar26 | auVar4._16_4_ < 1;
    if (((byte)ac & 1 | (byte)(uVar26 >> 1) & 1) != 1) {
      fp = uVar1;
      return;
    }
  } while( true );
}

