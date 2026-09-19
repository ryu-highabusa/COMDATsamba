
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00055e30(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  
  uVar30 = ac;
  uVar2 = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = uVar2;
  auVar3._12_52_ = in_register_0000000c;
  if (Camera_Angle == Standard Battle Camera) {
LAB_00055e54:
    ac = ac & 0xfffffff8 | (uint)('\0' < (char)DAT_0058bc0d) << 2 | (uint)(DAT_0058bc0d == 0) << 1 |
         (uint)((char)DAT_0058bc0d < '\0');
    if (((byte)ac & 1 | '\0' < (char)DAT_0058bc0d) != 1) {
      auVar4._8_4_ = 0x55e64;
      auVar4._0_8_ = uVar2;
      auVar4._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
      auVar3._8_56_ = auVar4._8_56_;
      auVar3._4_4_ = auStack_40;
      auVar3._0_4_ = fp;
      FUN_00051cc0();
      fp = (undefined1 *)register0x00000004;
    }
    uVar30 = auVar3._4_4_ + 0x3f;
    uVar29 = uVar30 & 0xffffffc0;
    auVar6._12_52_ = auVar3._12_52_;
    auVar6._0_8_ = auVar3._0_8_;
    auVar6._8_4_ = 0x55e68;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
    auVar5._8_56_ = auVar6._8_56_;
    auVar5._0_8_ = CONCAT44(uVar30,fp) & 0xffffffc0ffffffff;
    FUN_00051b70();
    auVar8._12_52_ = auVar5._12_52_;
    auVar8._0_8_ = auVar5._0_8_;
    auVar8._8_4_ = 0x55e6c;
    *(undefined1 (*) [64])(uVar30 & 0xffffffc0) = auVar8;
    auVar7._8_56_ = auVar8._8_56_;
    auVar7._0_8_ = CONCAT44(uVar29 + 0x40,uVar30) & 0xffffffffffffffc0;
    FUN_00051c00();
    auVar9._12_52_ = auVar7._12_52_;
    auVar9._0_8_ = auVar7._0_8_;
    auVar9._8_4_ = 0x55e70;
    *(undefined1 (*) [64])(uVar29 + 0x40) = auVar9;
    auVar3._8_56_ = auVar9._8_56_;
    auVar3._4_4_ = (undefined1 *)(uVar29 + 0xc0);
    auVar3._0_4_ = uVar29 + 0x40;
    FUN_00051ac0();
    fp = (undefined1 *)(uVar29 + 0x80);
  }
  else {
    if (DAT_00588302 == 2) {
      g13 = 0xfa;
      if (Camera_Angle == ~Loads 0x6) goto LAB_00055e54;
    }
    g13 = 0xfa;
    ac = ac & 0xfffffff8 | (uint)(~Loads 0x6 < Camera_Angle);
    if (((byte)ac & 1 | Camera_Angle < ~Loads 0x6) != 1) {
      ac = uVar30 & 0xfffffff8 | (uint)('\0' < (char)DAT_0058bc0d) << 2 |
           (uint)(DAT_0058bc0d == 0) << 1 | (uint)((char)DAT_0058bc0d < '\0');
      if (((byte)ac & 1 | '\0' < (char)DAT_0058bc0d) != 1) {
        auVar10._8_4_ = 0x55e8c;
        auVar10._0_8_ = uVar2;
        auVar10._12_52_ = in_register_0000000c;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
        auVar3._8_56_ = auVar10._8_56_;
        auVar3._4_4_ = auStack_40;
        auVar3._0_4_ = fp;
        FUN_00051cc0();
        fp = (undefined1 *)register0x00000004;
      }
      uVar30 = auVar3._4_4_ + 0x3f;
      puVar1 = (undefined1 *)(uVar30 & 0xffffffc0);
      auVar11._12_52_ = auVar3._12_52_;
      auVar11._0_8_ = auVar3._0_8_;
      auVar11._8_4_ = 0x55e90;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
      auVar3._8_56_ = auVar11._8_56_;
      auVar3._4_4_ = puVar1 + 0x40;
      auVar3._0_4_ = fp;
      FUN_00051b60();
      ac = ac & 0xfffffff8 | (uint)(4 < DAT_00588302) << 2 | (uint)(DAT_00588302 == 4) << 1 |
           (uint)(DAT_00588302 < 4);
      fp = puVar1;
      if (((byte)ac & 1 | 4 < DAT_00588302) != 1) {
        fp = puVar1 + 0x40;
        auVar12._12_52_ = auVar3._12_52_;
        auVar12._0_8_ = auVar3._0_8_;
        auVar12._8_4_ = 0x55ea0;
        *(undefined1 (*) [64])(uVar30 & 0xffffffc0) = auVar12;
        auVar3._8_56_ = auVar12._8_56_;
        auVar3._0_8_ = CONCAT44(puVar1 + 0x80,uVar30) & 0xffffffffffffffc0;
        FUN_00051b10();
      }
    }
  }
  uVar31 = (uint)CHAR_NUM_P1_00589e02;
  uVar29 = (uint)g_player1._0_4_ >> 8 & 0xff;
  uVar30 = ac & 0xfffffff8 | (uint)(uVar31 < uVar29) << 2 | (uint)(uVar31 == uVar29) << 1;
  ac = uVar30 | uVar29 < uVar31;
  auVar19._20_44_ = auVar3._20_44_;
  auVar19._0_16_ = auVar3._0_16_;
  auVar19._16_4_ = 0xff;
  if (((byte)(uVar30 >> 1) & 1) != 1) {
    uVar30 = auVar3._4_4_ + 0x3f;
    uVar31 = uVar30 & 0xffffffc0;
    auVar14._12_52_ = auVar19._12_52_;
    auVar14._0_8_ = auVar3._0_8_;
    auVar14._8_4_ = 0x55ec4;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
    auVar13._8_56_ = auVar14._8_56_;
    auVar13._0_8_ = CONCAT44(uVar30,fp) & 0xffffffc0ffffffff;
    FUN_00040850(uVar29,0);
    auVar16._12_52_ = auVar13._12_52_;
    auVar16._0_8_ = auVar13._0_8_;
    auVar16._8_4_ = 0x55ecc;
    *(undefined1 (*) [64])(uVar30 & 0xffffffc0) = auVar16;
    auVar15._8_56_ = auVar16._8_56_;
    auVar15._0_8_ = CONCAT44(uVar31 + 0x40,uVar30) & 0xffffffffffffffc0;
    FUN_0004f9e0(0);
    uVar30 = (uint)g_player1._0_4_ >> 8;
    auVar18._12_52_ = auVar15._12_52_;
    auVar18._0_8_ = auVar15._0_8_;
    auVar18._8_4_ = 0x55edc;
    *(undefined1 (*) [64])(uVar31 + 0x40) = auVar18;
    auVar17._8_56_ = auVar18._8_56_;
    auVar17._4_4_ = uVar31 + 0x80;
    auVar17._0_4_ = uVar31 + 0x40;
    FUN_000419b0(0,uVar30 & 0xff);
    uVar30 = (uint)g_player2.character_id;
    fp = (undefined1 *)(uVar31 + 0xc0);
    auVar20._12_52_ = auVar17._12_52_;
    auVar20._0_8_ = auVar17._0_8_;
    auVar20._8_4_ = 0x55eec;
    *(undefined1 (*) [64])(uVar31 + 0x80) = auVar20;
    auVar19._8_56_ = auVar20._8_56_;
    auVar19._4_4_ = uVar31 + 0x100;
    auVar19._0_4_ = uVar31 + 0x80;
    FUN_000419b0(1,uVar30);
  }
  uVar29 = (uint)g_player2.character_id;
  uVar31 = (uint)CHAR_NUM_P2_00589e03;
  uVar30 = ac & 0xfffffff8 | (uint)(uVar31 < uVar29) << 2 | (uint)(uVar31 == uVar29) << 1;
  ac = uVar30 | uVar29 < uVar31;
  if (((byte)(uVar30 >> 1) & 1) != 1) {
    uVar30 = auVar19._4_4_ + 0x3f;
    uVar31 = uVar30 & 0xffffffc0;
    auVar22._12_52_ = auVar19._12_52_;
    auVar22._0_8_ = auVar19._0_8_;
    auVar22._8_4_ = 0x55f0c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar22;
    auVar21._8_56_ = auVar22._8_56_;
    auVar21._0_8_ = CONCAT44(uVar30,fp) & 0xffffffc0ffffffff;
    FUN_00040850(uVar29,1);
    auVar24._12_52_ = auVar21._12_52_;
    auVar24._0_8_ = auVar21._0_8_;
    auVar24._8_4_ = 0x55f14;
    *(undefined1 (*) [64])(uVar30 & 0xffffffc0) = auVar24;
    auVar23._8_56_ = auVar24._8_56_;
    auVar23._0_8_ = CONCAT44(uVar31 + 0x40,uVar30) & 0xffffffffffffffc0;
    FUN_0004f9e0(1);
    uVar30 = (uint)g_player1._0_4_ >> 8;
    auVar26._12_52_ = auVar23._12_52_;
    auVar26._0_8_ = auVar23._0_8_;
    auVar26._8_4_ = 0x55f24;
    *(undefined1 (*) [64])(uVar31 + 0x40) = auVar26;
    auVar25._8_56_ = auVar26._8_56_;
    auVar25._4_4_ = uVar31 + 0x80;
    auVar25._0_4_ = uVar31 + 0x40;
    FUN_000419b0(0,uVar30 & 0xff);
    uVar30 = (uint)g_player2.character_id;
    fp = (undefined1 *)(uVar31 + 0xc0);
    auVar27._12_52_ = auVar25._12_52_;
    auVar27._0_8_ = auVar25._0_8_;
    auVar27._8_4_ = 0x55f34;
    *(undefined1 (*) [64])(uVar31 + 0x80) = auVar27;
    auVar19._8_56_ = auVar27._8_56_;
    auVar19._4_4_ = uVar31 + 0x100;
    auVar19._0_4_ = uVar31 + 0x80;
    FUN_000419b0(1,uVar30);
  }
  uVar30 = ac & 0xfffffff8;
  ac = uVar30 | 2;
  if ((ButtonCoinTestServiceStart_0054fcd4 & P2 START) == OFF) {
    DAT_0058bc0d = DAT_0058bc0d ^ 1;
    ac = uVar30;
  }
  auVar28._12_52_ = auVar19._12_52_;
  auVar28._0_8_ = auVar19._0_8_;
  auVar28._8_4_ = 0x55f58;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar28;
  func_0x00051b00();
  DAT_008800a0 = 0xa0a;
  DAT_00884000 = g_player2.x_position;
  DAT_00884004 = g_player2.z_position;
  DAT_005555a8 = *(undefined4 *)PTR_DAT_000006a4;
  uVar30 = ac & 0xfffffff8 | (uint)((char)DAT_0058bc0d < '\0') << 2 | (uint)(DAT_0058bc0d == 0) << 1
  ;
  ac = uVar30 | '\0' < (char)DAT_0058bc0d;
  if (((byte)(uVar30 >> 1) & 1) != 1) {
    FUN_000085f0(&TMAPBASE_01000000);
    fp = (undefined1 *)(auVar19._4_4_ + 0x3fU & 0xffffffc0);
    return;
  }
  fp = fp;
  return;
}

