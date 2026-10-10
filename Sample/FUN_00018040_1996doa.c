
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00018040(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  int iVar31;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar30 [64];
  undefined1 auStackX_0 [1000000];
  undefined1 auVar5 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar27 [64];
  undefined1 auVar29 [64];
  
  auVar3._4_4_ = auStackX_0;
  auVar3._0_4_ = unaff_pfp;
  auVar3._8_4_ = unaff_retaddr;
  auVar3._12_52_ = in_register_0000000c;
  auVar6._0_16_ = auVar3._0_16_;
  auVar6._16_4_ = 0xf0;
  auVar6._24_40_ = in_register_0000000c._12_40_;
  auVar6._20_4_ = 2;
  ac = ac & 0xfffffff8 | (uint)(4 < GameOverFlag____0054fcb4) << 2 |
       (uint)(GameOverFlag____0054fcb4 == 4) << 1 | (uint)(GameOverFlag____0054fcb4 < 4);
  if (((byte)ac & 1 | 4 < GameOverFlag____0054fcb4) != 1) {
    do {
      iVar31 = auVar6._16_4_;
      uVar1 = auVar6._4_4_ + 0x3fU & 0xffffffc0;
      auVar5._12_52_ = auVar6._12_52_;
      auVar5._0_8_ = auVar6._0_8_;
      auVar5._8_4_ = 0x1805c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
      auVar4._8_56_ = auVar5._8_56_;
      auVar4._4_4_ = uVar1 + 0x40;
      auVar4._0_4_ = fp;
      FUN_00008250(1);
      uVar2 = ac & 0xfffffff8 | (uint)(1 < iVar31) << 2;
      ac = uVar2 | (uint)(iVar31 == 1) << 1 | (uint)(iVar31 < 1);
      auVar6._20_44_ = auVar4._20_44_;
      auVar6._0_16_ = auVar4._0_16_;
      auVar6._16_4_ = iVar31 + -1;
      fp = (undefined1 (*) [64])uVar1;
    } while (((byte)ac & 1 | (byte)(uVar2 >> 2) & 1) == 1);
  }
  g_player1.rounds_won = (byte)g14;
  g_player2.rounds_won = (byte)g14;
  DAT_005555dc = (byte)g14;
  DAT_005555dd = (byte)g14;
  BYTE_0054fcfd = 5;
  SPRT_DAT = clear;
  FixDisp = (byte)g14;
  uVar1 = auVar6._4_4_ + 0x3f;
  uVar2 = uVar1 & 0xffffffc0;
  auVar8._12_52_ = auVar6._12_52_;
  auVar8._0_8_ = auVar6._0_8_;
  auVar8._8_4_ = 0x180a8;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
  auVar7._8_56_ = auVar8._8_56_;
  auVar7._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
  FUN_00018280();
  auVar10._12_52_ = auVar7._12_52_;
  auVar10._0_8_ = auVar7._0_8_;
  auVar10._8_4_ = 0x180ac;
  *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar10;
  auVar9._8_56_ = auVar10._8_56_;
  auVar9._0_8_ = CONCAT44(uVar2 + 0x40,uVar1) & 0xffffffffffffffc0;
  FUN_00018420();
  auVar12._12_52_ = auVar9._12_52_;
  auVar12._0_8_ = auVar9._0_8_;
  auVar12._8_4_ = 0x180b0;
  *(undefined1 (*) [64])(uVar2 + 0x40) = auVar12;
  auVar11._8_56_ = auVar12._8_56_;
  auVar11._4_4_ = uVar2 + 0x80;
  auVar11._0_4_ = uVar2 + 0x40;
  FUN_000184f0();
  auVar14._12_52_ = auVar11._12_52_;
  auVar14._0_8_ = auVar11._0_8_;
  auVar14._8_4_ = 0x180b4;
  *(undefined1 (*) [64])(uVar2 + 0x80) = auVar14;
  auVar13._8_56_ = auVar14._8_56_;
  auVar13._4_4_ = uVar2 + 0xc0;
  auVar13._0_4_ = uVar2 + 0x80;
  Match_ApplyConfiguredSetCount();
  auVar16._12_52_ = auVar13._12_52_;
  auVar16._0_8_ = auVar13._0_8_;
  auVar16._8_4_ = 0x180b8;
  *(undefined1 (*) [64])(uVar2 + 0xc0) = auVar16;
  auVar15._8_56_ = auVar16._8_56_;
  auVar15._4_4_ = uVar2 + 0x140;
  auVar15._0_4_ = uVar2 + 0xc0;
  FUN_000189b0();
  StageLoadFlag = 1;
  BYTE_005555e0 = (byte)g14;
  fp = (undefined1 (*) [64])(uVar2 + 0x100);
  do {
    uVar1 = auVar15._4_4_ + 0x3f;
    uVar2 = uVar1 & 0xffffffc0;
    auVar18._12_52_ = auVar15._12_52_;
    auVar18._0_8_ = auVar15._0_8_;
    auVar18._8_4_ = 0x180d4;
    *fp = auVar18;
    auVar17._8_56_ = auVar18._8_56_;
    auVar17._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
    FUN_00008250(1);
    auVar19._12_52_ = auVar17._12_52_;
    auVar19._0_8_ = auVar17._0_8_;
    auVar19._8_4_ = 0x180d8;
    *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar19;
    auVar15._8_56_ = auVar19._8_56_;
    auVar15._0_8_ = CONCAT44(uVar2 + 0x80,uVar1) & 0xffffffffffffffc0;
    FUN_00016e40();
    ac = ac & 0xfffffff8 | (uint)(1 < BYTE_005555e0) << 2 | (uint)(BYTE_005555e0 == 1) << 1 |
         (uint)(BYTE_005555e0 == 0);
    fp = (undefined1 (*) [64])(uVar2 + 0x40);
  } while (((byte)ac & 1 | 1 < BYTE_005555e0) == 1);
  BYTE_005555e0 = (byte)g14;
  fp = (undefined1 (*) [64])(uVar2 + 0x80);
  auVar21._12_52_ = auVar15._12_52_;
  auVar21._0_8_ = auVar15._0_8_;
  auVar21._8_4_ = 0x180f4;
  *(undefined1 (*) [64])(uVar2 + 0x40) = auVar21;
  auVar20._8_56_ = auVar21._8_56_;
  auVar20._4_4_ = uVar2 + 0xc0;
  auVar20._0_4_ = (undefined1 (*) [64])(uVar2 + 0x40);
  FUN_00008320(9);
  ac = ac & 0xfffffff8 | 4;
  do {
    iVar31 = auVar20._20_4_;
    uVar1 = auVar20._4_4_ + 0x3f;
    auVar23._12_52_ = auVar20._12_52_;
    auVar23._0_8_ = auVar20._0_8_;
    auVar23._8_4_ = 0x18100;
    *fp = auVar23;
    auVar22._8_56_ = auVar23._8_56_;
    auVar22._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
    FUN_00008250(1);
    fp = (undefined1 (*) [64])((uVar1 & 0xffffffc0) + 0x40);
    auVar25._12_52_ = auVar22._12_52_;
    auVar25._0_8_ = auVar22._0_8_;
    auVar25._8_4_ = 0x18104;
    *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar25;
    auVar24._8_56_ = auVar25._8_56_;
    auVar24._0_8_ = CONCAT44((uVar1 & 0xffffffc0) + 0x80,uVar1) & 0xffffffffffffffc0;
    FUN_00016e40();
    uVar1 = ac & 0xfffffff8 | (uint)(1 < iVar31) << 2;
    ac = uVar1 | (uint)(iVar31 == 1) << 1 | (uint)(iVar31 < 1);
    auVar20._24_40_ = auVar24._24_40_;
    auVar20._0_20_ = auVar24._0_20_;
    auVar20._20_4_ = iVar31 + -1;
  } while (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1);
  uVar1 = auVar24._4_4_ + 0x3f;
  auVar27._12_52_ = auVar20._12_52_;
  auVar27._0_8_ = auVar24._0_8_;
  auVar27._8_4_ = 0x18110;
  *fp = auVar27;
  auVar26._8_56_ = auVar27._8_56_;
  auVar26._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
  FUN_000189f0();
  fp = (undefined1 (*) [64])((uVar1 & 0xffffffc0) + 0x40);
  auVar29._12_52_ = auVar26._12_52_;
  auVar29._0_8_ = auVar26._0_8_;
  auVar29._8_4_ = 0x18114;
  *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar29;
  auVar28._8_56_ = auVar29._8_56_;
  auVar28._0_8_ = CONCAT44(fp,uVar1) & 0xffffffffffffffc0;
  FUN_000184b0();
  auVar30._12_52_ = auVar28._12_52_;
  auVar30._0_8_ = auVar28._0_8_;
  auVar30._8_4_ = 0x18118;
  *(undefined1 (*) [64])((uVar1 & 0xffffffc0) + 0x40) = auVar30;
  Battle_ResetBothPlayersForRound();
  if (GameOverFlag____0054fcb4 == 0) {
    ac = ac & 0xfffffff8 | (uint)(8 < BYTE_0054fceb) << 2 | (uint)(BYTE_0054fceb == 8) << 1 |
         (uint)(BYTE_0054fceb < 8);
    if (8 >= BYTE_0054fceb) {
      BYTE_005555e2 = BYTE_0054fceb;
      BYTE_005555e4 = 1;
      DAT_00557c44 = g14;
      return;
    }
  }
  else {
    ac = ac & 0xfffffff8 | (uint)(4 < GameOverFlag____0054fcb4) << 2 |
         (uint)(GameOverFlag____0054fcb4 == 4) << 1 | (uint)(GameOverFlag____0054fcb4 < 4);
    if (((byte)ac & 1 | 4 < GameOverFlag____0054fcb4) == 1) {
      BYTE_005555e4 = 1;
      DAT_00557c44 = g14;
      return;
    }
  }
  BYTE_005555e2 = 8;
  BYTE_005555e4 = 1;
  DAT_00557c44 = g14;
  return;
}

