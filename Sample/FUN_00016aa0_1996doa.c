
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00016aa0(void)

{
  uint uVar1;
  undefined1 (*pauVar2) [64];
  undefined1 auVar3 [64];
  undefined1 *puVar4;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  DOA_SOUND_COMMAND sound_id;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar9 [64];
  
  auVar5._8_4_ = unaff_retaddr;
  auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar5._12_52_ = in_register_0000000c;
  ac = ac & 0xfffffff8 | (uint)(MAN < DAT_0054fd04) << 2 | (uint)(DAT_0054fd04 == MAN) << 1 |
       (uint)(DAT_0054fd04 == COM);
  if (((byte)ac & 1 | MAN < DAT_0054fd04) != 1) {
    BYTE_0054fd02 = 1;
    GameOverFlag____0054fcb4 = 2;
    FixDisp = g14;
    ContinueCounter_005555e5 = g14;
    DAT_0054fce0 = g14;
    SPRT_DAT = clear;
    g_player1.controller_type = g14;
    g_player2.controller_type = g14;
    auVar6._8_4_ = 0x16b04;
    auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    auVar6._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
    auVar5._8_56_ = auVar6._8_56_;
    auVar5._4_4_ = auStack_40;
    auVar5._0_4_ = fp;
    Sound_Request(0xa00350);
    FUN_00018670();
    fp = (undefined1 (*) [64])register0x00000004;
  }
  uVar1 = ac;
  puVar4 = *fp;
  ac = ac & 0xfffffff8 | (uint)(0 < DAT_00557c48) << 2 | (uint)(DAT_00557c48 == 0) << 1 |
       (uint)(DAT_00557c48 < 0);
  auVar7._0_8_ = auVar5._0_8_;
  auVar7._12_52_ = auVar5._12_52_;
  if (((byte)ac & 1 | 0 < DAT_00557c48) != 1) {
    BYTE_0054fd02 = 1;
    GameOverFlag____0054fcb4 = 2;
    auVar7._8_4_ = 0x16b30;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
    FUN_00018670();
    DAT_0054fd04 = g14;
    return;
  }
  ac = uVar1 & 0xfffffff8 | (uint)(DAT_00557c48 == 300) << 1;
  if (((byte)(ac >> 1) & 1) != 1) {
    ac = uVar1 & 0xfffffff8 | (uint)(DAT_00557c48 < 0xb4) << 2 | (uint)(DAT_00557c48 == 0xb4) << 1 |
         (uint)(0xb4 < DAT_00557c48);
    if (((byte)ac & 1 | DAT_00557c48 < 0xb4) == 1) goto LAB_00016c14;
    ac = uVar1 & 0xfffffff8 | (uint)(0 < DAT_00557c54) << 2 | (uint)(DAT_00557c54 == 0) << 1 |
         (uint)(DAT_00557c54 < 0);
    if (((byte)ac & 1 | 0 < DAT_00557c54) == 1) goto LAB_00016c14;
  }
  g_player1.controller_type = g14;
  g_player2.controller_type = g14;
  FixDisp = g14;
  ContinueCounter_005555e5 = g14;
  DAT_0054fce0 = g14;
  SPRT_DAT = gameover;
  uVar1 = ac & 0xfffffff8 | (uint)(g_effective_vs_finish != '\0') << 2 |
          (uint)(g_effective_vs_finish == '\0') << 1;
  if (((byte)(uVar1 >> 1) & 1) == 1) {
LAB_00016bbc:
    ac = uVar1;
    uVar1 = auVar5._4_4_ + 0x3f;
    pauVar2 = (undefined1 (*) [64])(uVar1 & 0xffffffc0);
    auVar10._8_4_ = 0x16bc8;
    auVar10._0_8_ = auVar7._0_8_;
    auVar10._12_52_ = auVar7._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
    auVar8._8_56_ = auVar10._8_56_;
    auVar8._4_4_ = pauVar2 + 1;
    auVar8._0_4_ = fp;
    Sound_Request(0xa00350);
    ac = ac & 0xfffffff8 | (uint)(MAN < DAT_0054fd04) << 2 | (uint)(DAT_0054fd04 == MAN) << 1 |
         (uint)(DAT_0054fd04 == COM);
    fp = pauVar2;
    if (((byte)ac & 1 | MAN < DAT_0054fd04) == 1) {
      sound_id = (&g_lose_voice_command_by_character_id)
                 [(&g_player1)[g_selectedPlayerSide_candidate ^ 1].character_id];
      auVar13._12_52_ = auVar8._12_52_;
      auVar13._0_8_ = auVar8._0_8_;
      auVar13._8_4_ = 0x16c14;
      *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar13;
      auVar5._8_56_ = auVar13._8_56_;
      auVar5._4_4_ = (undefined1 *)0x0;
      auVar5._0_4_ = pauVar2;
      Sound_Request(sound_id);
      goto LAB_00016c14;
    }
  }
  else {
    ac = ac & 0xfffffff8 | (uint)(g_championWinCount < g_effective_vs_finish) << 2 |
         (uint)(g_championWinCount == g_effective_vs_finish) << 1 |
         (uint)(g_effective_vs_finish < g_championWinCount);
    uVar1 = ac;
    if (g_championWinCount < g_effective_vs_finish) goto LAB_00016bbc;
    pauVar2 = (undefined1 (*) [64])(auVar5._4_4_ + 0x3fU & 0xffffffc0);
    auVar9._8_4_ = 0x16bb8;
    auVar9._0_8_ = auVar7._0_8_;
    auVar9._12_52_ = auVar7._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
    auVar3._4_56_ = auVar9._8_56_;
    auVar3._0_4_ = pauVar2 + 1;
    auVar3._60_4_ = 0;
    auVar8 = auVar3 << 0x20;
    Sound_Request(0xa00350);
    fp = pauVar2;
  }
  auVar11._4_60_ = auVar8._4_60_;
  auVar11._0_4_ = puVar4;
  auVar12._12_52_ = auVar8._12_52_;
  auVar12._0_8_ = auVar11._0_8_;
  auVar12._8_4_ = 0x16be0;
  *fp = auVar12;
  auVar5._8_56_ = auVar12._8_56_;
  auVar5._4_4_ = (undefined1 *)0x0;
  auVar5._0_4_ = fp;
  Sound_Request(SE_GAMEOVER);
LAB_00016c14:
  DAT_00557c48 = DAT_00557c48 + -1;
  fp = (undefined1 (*) [64])auVar5._0_4_;
  return;
}

