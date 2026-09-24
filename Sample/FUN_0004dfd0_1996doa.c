
/* WARNING: Switch with 1 destination removed at 0x0004e3a0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004dfd0(void)

{
  float10 fVar1;
  float10 fVar2;
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  DOA_F32 DVar8;
  DOA_F32 DVar9;
  DOA_F32 DVar10;
  DOA_F32 DVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 (*unaff_pfp) [64];
  undefined1 (*pauVar14) [64];
  undefined1 (*pauVar15) [64];
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined1 in_register_00000020 [32];
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  
  uVar19 = (uint)g_player1.player_display;
  uVar18 = (uint)PLYR_DISP_P1_00589e04;
  uVar17 = ac & 0xfffffff8 | (uint)((int)uVar19 < (int)uVar18) << 2 | (uint)(uVar19 == uVar18) << 1;
  ac = uVar17 | (int)uVar18 < (int)uVar19;
  pauVar14 = (undefined1 (*) [64])register0x00000004;
  if (((byte)(uVar17 >> 1) & 1) != 1) {
    uVar17 = (uint)g_player1._0_4_ >> 8;
    DAT_005882fc = (undefined1)g14;
    auVar3._4_4_ = auStackX_0;
    auVar3._0_4_ = unaff_pfp;
    auVar3._8_4_ = 0x4dffc;
    auVar3._12_4_ = unaff_r3;
    auVar3._16_4_ = unaff_r4;
    auVar3._20_4_ = unaff_r5;
    auVar3._24_4_ = unaff_r6;
    auVar3._28_4_ = unaff_r7;
    auVar3._32_32_ = in_register_00000020;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar3;
    FUN_000419b0_kasumicostumecheckmaybe(0,uVar17 & 0xff);
    auStackX_0._4_4_ = auStackX_0;
    auStackX_0._0_4_ = fp;
    auStackX_0._8_4_ = 0x4e00c;
    auStackX_0._12_4_ = unaff_r3;
    auStackX_0._16_4_ = unaff_r4;
    auStackX_0._20_4_ = unaff_r5;
    auStackX_0._24_4_ = unaff_r6;
    auStackX_0._28_4_ = unaff_r7;
    auStackX_0._32_32_ = in_register_00000020;
    pauVar14 = (undefined1 (*) [64])auStack_80;
    FUN_000419b0_kasumicostumecheckmaybe(1,(uint)g_player2.character_id);
    unaff_pfp = (undefined1 (*) [64])register0x00000004;
    fp = &auStack_40;
  }
  uVar19 = (uint)g_player2.player_display;
  uVar18 = (uint)PLYR_DISP_P2_00589e05;
  uVar17 = ac & 0xfffffff8 | (uint)((int)uVar19 < (int)uVar18) << 2 | (uint)(uVar19 == uVar18) << 1;
  ac = uVar17 | (int)uVar18 < (int)uVar19;
  pauVar15 = pauVar14;
  if (((byte)(uVar17 >> 1) & 1) != 1) {
    uVar17 = (uint)g_player1._0_4_ >> 8;
    DAT_005882fd = (undefined1)g14;
    auVar4._4_4_ = pauVar14;
    auVar4._0_4_ = unaff_pfp;
    auVar4._8_4_ = 0x4e038;
    auVar4._12_4_ = unaff_r3;
    auVar4._16_4_ = unaff_r4;
    auVar4._20_4_ = unaff_r5;
    auVar4._24_4_ = unaff_r6;
    auVar4._28_4_ = unaff_r7;
    auVar4._32_32_ = in_register_00000020;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
    FUN_000419b0_kasumicostumecheckmaybe(0,uVar17 & 0xff);
    uVar17 = (uint)g_player2.character_id;
    auVar5._4_4_ = pauVar14;
    auVar5._0_4_ = fp;
    auVar5._8_4_ = 0x4e048;
    auVar5._12_4_ = unaff_r3;
    auVar5._16_4_ = unaff_r4;
    auVar5._20_4_ = unaff_r5;
    auVar5._24_4_ = unaff_r6;
    auVar5._28_4_ = unaff_r7;
    auVar5._32_32_ = in_register_00000020;
    *pauVar14 = auVar5;
    pauVar15 = pauVar14 + 2;
    FUN_000419b0_kasumicostumecheckmaybe(1,uVar17);
    unaff_pfp = pauVar14;
    fp = pauVar14 + 1;
  }
  DVar10 = g_player1.z_position;
  DVar9 = g_player1.y_position;
  DVar8 = g_player1.x_position;
  if ((GameMode == MODE_CHARSEL) && (GameOverFlag____0054fcb4 != 4)) {
    fVar21 = -1.8336914e-28;
    fVar20 = 1.6624999;
    DAT_00589df8 = -107374184.0;
  }
  else {
    fVar20 = (&FLOAT_000c6d98)[(uint)StageNumber * 3];
    fVar21 = (&FLOAT_000c6d90)[(uint)StageNumber * 3];
    DAT_00589df8 = fVar20;
  }
  fVar2 = (float10)DAT_00589df4;
  fVar1 = (float10)'\0';
  ac = ac & 0xfffffff8;
  if (!NAN(fVar1) && !NAN(fVar2)) {
    ac = ac | (uint)(fVar1 < fVar2) << 2;
    ac = ac | (uint)(fVar1 == fVar2) << 1;
    ac = ac | fVar2 < fVar1;
  }
  if (((byte)ac & 1 | (byte)(ac >> 2) & 1) != 1) {
    DAT_00589df4 = 0x3a83126f;
  }
  auVar6._4_4_ = pauVar15;
  auVar6._0_4_ = unaff_pfp;
  auVar6._8_4_ = 0x4e168;
  auVar6._12_4_ = unaff_r3;
  auVar6[0x10] = g_player1.controller_type;
  auVar6[0x11] = g_player1.character_id;
  auVar6[0x12] = g_player1.costume_id;
  auVar6[0x13] = g_player1.rounds_won;
  auVar6._20_4_ = g_player1.x_position;
  auVar6._24_4_ = g_player1.y_position;
  auVar6._28_4_ = g_player1.z_position;
  auVar6._32_32_ = in_register_00000020;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
  FUN_00063160((int)DVar8,(int)DVar10,&DAT_0056aa60,&DAT_0056aa68,&DAT_0056abe0,fVar20,fVar21);
  uVar13 = DAT_0056aa68;
  uVar12 = DAT_0056aa60;
  DVar11 = g_player2.z_position;
  DVar8 = g_player2.x_position;
  DAT_0056abe8 = DAT_0056abe0;
  auVar7._4_4_ = pauVar15 + 1;
  auVar7._0_4_ = fp;
  auVar7._8_4_ = 0x4e1f4;
  auVar7._12_4_ = unaff_r3;
  auVar7._16_4_ = 0xbc6a7efa;
  auVar7._20_4_ = 0x3f789374;
  auVar7._24_4_ = DVar9;
  auVar7._28_4_ = DVar10;
  auVar7._32_32_ = in_register_00000020;
  *pauVar15 = auVar7;
  FUN_00063160((int)DVar8,(int)DVar11,&DAT_0056aa64,&DAT_0056aa6c,&DAT_0056abe4,uVar13,uVar12);
  iVar16 = 0;
  do {
    (&DAT_00589bb0)[iVar16] =
         (&FLOAT_000c2e00)
         [(uint)(&g_player1)[iVar16].character_id * 0x10 +
          ((int)(uint)(ushort)(&DAT_0056a810)[iVar16 * 0x3c] >> 0xc)];
    iVar16 = 1;
  } while( true );
}

