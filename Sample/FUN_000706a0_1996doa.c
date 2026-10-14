
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000706a0(void)

{
  float *pfVar1;
  undefined1 auVar2 [24];
  undefined1 auVar3 [36];
  undefined4 unaff_pfp;
  undefined1 (*pauVar19) [64];
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar22;
  undefined1 in_register_00000018 [12];
  undefined1 in_register_00000028 [24];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  int iVar23;
  undefined1 auVar7 [64];
  int iVar21;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  float fVar24;
  code *pcVar25;
  float fVar26;
  int iVar27;
  float *pfVar28;
  byte bVar29;
  float *pfVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar17 [64];
  undefined1 auVar20 [60];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._8_4_ = unaff_retaddr;
  auVar2._12_4_ = unaff_r3;
  auVar2._16_4_ = unaff_r4;
  auVar2._20_4_ = unaff_r5;
  auVar3._24_12_ = in_register_00000018;
  auVar3._0_24_ = auVar2;
  DAT_005b973c = g14;
  DAT_005b976f = (COLORXLAT_PENDING)g14;
  g_stage_backdrop_ready = (COLORXLAT_PENDING)g14;
  if (GameMode != MODE_LOAD) {
    DAT_005b974f = 1;
  }
  DAT_005a7620 = g14;
  DAT_005b9750 = g14;
  DAT_005b9754 = g14;
  DAT_005a6f0d = (COLORXLAT_PENDING)g14;
  if (g_current_stage == STAGE_SCREENSPLASH) {
    DAT_005b9759 = (COLORXLAT_PENDING)g14;
  }
  else {
    DAT_005b9759 = COLORXLAT_PENDING_P1;
  }
  if (GameMode == MODE_LOAD) {
    g_texture_upload_pending_flags_candidate = '\x03';
  }
  else {
    g_texture_upload_pending_flags_candidate = '\a';
  }
  g_texture_upload_state = (COLORXLAT_PENDING)g14;
  if (GameMode == MODE_LOAD) {
    g_colorxlat_pending_mask = COLORXLAT_PENDING_P2|COLORXLAT_PENDING_P1;
  }
  else {
    g_colorxlat_pending_mask = (COLORXLAT_PENDING)g14;
  }
  DAT_005af711 = 1;
  auVar4._36_4_ = 3;
  auVar4._0_36_ = auVar3;
  auVar4._40_24_ = in_register_00000028;
  DAT_005b975c = 3;
  g_colorxlat_changed_latch_candidate = (COLORXLAT_PENDING)g14;
  DAT_005b975f = (COLORXLAT_PENDING)g14;
  DAT_005b9760 = (COLORXLAT_PENDING)g14;
  DAT_005a7698 = g14;
  DAT_005a769c = (COLORXLAT_PENDING)g14;
  DAT_005b9761 = (COLORXLAT_PENDING)g14;
  DAT_005a769d = (COLORXLAT_PENDING)g14;
  DAT_005b9762 = (COLORXLAT_PENDING)g14;
  DAT_005b9763 = (COLORXLAT_PENDING)g14;
  DAT_005b9764 = (undefined2)g14;
  iVar33 = 0;
  auVar5._36_28_ = auVar4._36_28_;
  auVar5._0_32_ = auVar3._0_32_;
  auVar5._32_4_ = &DAT_005a6f30;
  auVar6._32_32_ = auVar5._32_32_;
  auVar6._0_28_ = auVar3._0_28_;
  auVar6._28_4_ = &DAT_005a7550;
  DAT_005b9766 = 0xff;
  DAT_005b9768 = DAT_005b976f;
  DAT_0181c000 = 0xff;
  auVar10._28_36_ = auVar6._28_36_;
  auVar10[0x18] = g_current_stage;
  auVar10._0_24_ = auVar2;
  auVar10._25_3_ = 0;
  DAT_005b9758 = DAT_005b9759;
  do {
    iVar23 = auVar10._32_4_;
    iVar27 = auVar10._28_4_;
    pfVar30 = &FLOAT_000cb790;
    auVar7._0_16_ = auVar10._0_16_;
    auVar7._16_4_ = &BYTE_000cc3d0;
    auVar7._24_40_ = auVar10._24_40_;
    auVar7._20_4_ = 0;
    g13 = &BYTE_000cc494;
    pfVar28 = &FLOAT_000cbdb0;
    do {
      uVar32 = ac;
      auVar4 = auVar7;
      ac = uVar32 & 0xfffffff8;
      iVar22 = auVar4._24_4_;
      iVar21 = auVar4._16_4_;
      if ((iVar22 == 2) || (iVar22 == 5)) {
        fVar24 = pfVar28[iVar33 * 2];
        fVar26 = (pfVar28 + iVar33 * 2)[1];
        bVar29 = g13[iVar33];
      }
      else {
        fVar24 = pfVar30[iVar33 * 2];
        fVar26 = (pfVar30 + iVar33 * 2)[1];
        bVar29 = *(byte *)(iVar33 + iVar21);
      }
      pfVar1 = (float *)(iVar33 * 8 + iVar23);
      *pfVar1 = fVar24;
      pfVar1[1] = fVar26;
      *(byte *)(iVar33 + iVar27) = bVar29;
      auVar8._0_16_ = auVar4._0_16_;
      auVar8._16_4_ = iVar21 + 0xe;
      auVar8._24_40_ = auVar4._24_40_;
      if ((iVar22 == 2) || (iVar22 == 5)) {
        fVar24 = pfVar28[iVar33 * 2 + 0x1c];
        fVar26 = (pfVar28 + iVar33 * 2 + 0x1c)[1];
        bVar29 = g13[iVar33 + 0xe];
      }
      else {
        fVar24 = pfVar30[iVar33 * 2 + 0x1c];
        fVar26 = (pfVar30 + iVar33 * 2 + 0x1c)[1];
        bVar29 = *(byte *)(iVar33 + auVar8._16_4_);
      }
      pauVar19 = auVar4._4_4_;
      pfVar1 = (float *)(iVar33 * 8 + iVar23 + 0x70);
      *pfVar1 = fVar24;
      pfVar1[1] = fVar26;
      *(byte *)(iVar33 + iVar27 + 0xe) = bVar29;
      auVar8._20_4_ = auVar4._20_4_ + 0xe;
      auVar9._40_24_ = auVar4._40_24_;
      auVar9._0_36_ = auVar8._0_36_;
      auVar9._36_4_ = 0x5b;
      auVar10._20_44_ = auVar9._20_44_;
      auVar10._16_4_ = iVar21 + 0x1c;
      auVar10._0_16_ = auVar8._0_16_;
      iVar27 = iVar27 + 0x1c;
      pfVar30 = pfVar30 + 0x38;
      iVar23 = iVar23 + 0xe0;
      g13 = g13 + 0x1c;
      pfVar28 = pfVar28 + 0x38;
      auVar7 = auVar10;
    } while (auVar8._20_4_ < 0x5c);
    iVar33 = iVar33 + 1;
  } while (iVar33 < 0xe);
  DAT_005b976e = DAT_005b976f;
  DAT_005b976d = DAT_005b976f;
  uVar31 = uVar32 & 0xfffffff8 | (uint)(GameMode < MODE_CHARSEL) << 2;
  ac = uVar31 | (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(MODE_CHARSEL < GameMode);
  DAT_005b976c = DAT_005b976f;
  auVar12._0_8_ = auVar4._0_8_;
  auVar12._12_52_ = auVar10._12_52_;
  if ((((byte)ac & 1 | (byte)(uVar31 >> 2) & 1) == 1) ||
     (ac = uVar32 & 0xfffffff8 | (uint)(1 < DAT_005555eb) << 2 | (uint)(DAT_005555eb == 1) << 1 |
           (uint)(DAT_005555eb == 0), ((byte)ac & 1 | 1 < DAT_005555eb) == 1)) {
    auVar14._8_4_ = 0x70920;
    auVar14._0_8_ = auVar12._0_8_;
    auVar14._12_52_ = auVar12._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
    auVar13._4_56_ = auVar14._8_56_;
    auVar13._0_4_ = pauVar19 + 1;
    auVar13._60_4_ = 0;
    auVar13 = auVar13 << 0x20;
    Stage_UpdateDangerZoneSizeLevel_candidate();
    auVar20 = auVar13._4_60_;
  }
  else {
    DAT_005b9770 = g14;
    auVar12._8_4_ = 0x70918;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
    auVar11._4_56_ = auVar12._8_56_;
    auVar11._0_4_ = pauVar19 + 1;
    auVar11._60_4_ = 0;
    auVar11 = auVar11 << 0x20;
    FUN_00070a70();
    auVar20 = auVar11._4_60_;
  }
  uVar32 = ac;
  auVar15._4_60_ = auVar20;
  auVar15._0_4_ = fp;
  DAT_005b9774 = (COLORXLAT_PENDING)g14;
  ac = ac & 0xfffffff8 | (uint)(GameMode == MODE_LOAD) << 1 | (uint)(GameMode != MODE_LOAD);
  StageLoadFlag = (COLORXLAT_PENDING)g14;
  if (((byte)ac & 1) != 1) {
    return;
  }
  uVar31 = (uint)g_current_stage;
  auVar16._20_44_ = auVar20._16_44_;
  auVar16._0_16_ = auVar15._0_16_;
  auVar16._16_4_ = 0xff;
  uVar32 = uVar32 & 0xfffffff8 | (uint)(uVar31 < 0xff) << 2 | (uint)(uVar31 == 0xff) << 1;
  ac = uVar32 | 0xff < uVar31;
  fp = pauVar19;
  if (((byte)(uVar32 >> 1) & 1) != 1) {
    pcVar25 = (code *)(&PTR_LAB_000704f0)[uVar31];
    fp = (undefined1 (*) [64])(auVar20._0_4_ + 0x3fU & 0xffffffc0);
    auVar17._12_52_ = auVar16._12_52_;
    auVar17._0_8_ = auVar15._0_8_;
    auVar17._8_4_ = 0x70960;
    *pauVar19 = auVar17;
    auVar16._8_56_ = auVar17._8_56_;
    auVar16._4_4_ = fp + 1;
    auVar16._0_4_ = pauVar19;
    (*pcVar25)();
  }
  auVar18._12_52_ = auVar16._12_52_;
  auVar18._0_8_ = auVar16._0_8_;
  auVar18._8_4_ = 0x70964;
  *fp = auVar18;
  FUN_00070eb0();
  uVar32 = ac;
  ac = ac & 0xfffffff8 | (uint)(GameMode == MODE_LOAD);
  if ((((byte)ac & 1 | MODE_FIGHT < GameMode) == 1) ||
     (ac = uVar32 & 0xfffffff8 | (uint)(g_current_stage != STAGE_SCREENSPLASH) << 2 |
           (uint)(g_current_stage == STAGE_SCREENSPLASH) << 1, g_current_stage == STAGE_SCREENSPLASH
     )) {
    uVar32 = ac;
    ac = ac & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
         (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL);
    if (((byte)ac & 1 | MODE_CHARSEL < GameMode) == 1) {
      DAT_005b9778 = 0;
      DAT_005b977c = 0;
      DAT_005b9780 = 0;
      return;
    }
    bVar29 = DAT_005555eb - 3;
    ac = uVar32 & 0xfffffff8 | (uint)(1 < bVar29) << 2 | (uint)(bVar29 == 1) << 1 |
         (uint)(DAT_005555eb == 3);
    if (1 < bVar29) {
      DAT_005b9778 = 0;
      DAT_005b977c = 0;
      DAT_005b9780 = 0;
      return;
    }
  }
  uVar32 = (uint)g_current_stage;
  DAT_005555d8 = (&FLOAT_000cb6d8)[uVar32 * 3];
  DAT_005555d4 = (&FLOAT_000cb6d4)[uVar32 * 3];
  DAT_005555d0 = (&FLOAT_000cb6d0)[uVar32 * 3];
  DAT_005b9778 = 0;
  DAT_005b977c = 0;
  DAT_005b9780 = 0;
  return;
}

