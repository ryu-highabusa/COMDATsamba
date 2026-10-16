
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00071ad0(void)

{
  float10 fVar1;
  float10 fVar2;
  byte *pbVar3;
  char cVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined1 in_register_00000024 [28];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  code *pcVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [128];
  undefined1 auStack_140 [999680];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar14 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar30 [64];
  undefined1 auVar32 [64];
  char *pcVar35;
  
  uVar38 = ac;
  iVar37 = DAT_005555cc;
  uVar6 = DAT_005555c8;
  puVar5 = PTR_DAT_000006a0;
  auVar7._8_4_ = unaff_retaddr;
  auVar7._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar7._12_4_ = unaff_r3;
  auVar7._16_4_ = unaff_r4;
  auVar7._20_4_ = unaff_r5;
  auVar7._24_4_ = unaff_r6;
  auVar7._28_4_ = unaff_r7;
  auVar7._32_4_ = unaff_r8;
  auVar7._36_28_ = in_register_00000024;
  uVar41 = ac & 0xfffffff8 | (uint)(5 < BYTE_0054fcfd) << 2 | (uint)(BYTE_0054fcfd == 5) << 1;
  ac = uVar41 | BYTE_0054fcfd < 5;
  if (((byte)(uVar41 >> 1) & 1) == 1) {
    fp = (undefined1 (*) [64])unaff_pfp;
    return;
  }
  uVar41 = (uint)Camera_Angle;
  ac = uVar38 & 0xfffffff8 | (uint)(uVar41 < 0x20) << 2 | (uint)(uVar41 == 0x20) << 1 |
       (uint)(0x20 < uVar41);
  if (((byte)ac & 1 | uVar41 < 0x20) != 1) {
    fp = (undefined1 (*) [64])unaff_pfp;
    return;
  }
  if ((DAT_005a6f22 != 0) && (uVar41 = (uint)BYTE_0054fcfe, uVar41 == 0)) {
    DAT_005a6f22 = DAT_005a6f22 + -1;
  }
  if ((DAT_005b9784 != 0) && (uVar41 = (uint)BYTE_0054fcfe, uVar41 == 0)) {
    iVar39 = DAT_005b9784 + -1;
    DAT_005b9784 = (short)iVar39;
    uVar41 = iVar39 * 0x10000;
    if (uVar41 == 0) {
      DAT_005555d0 = DAT_005b9894;
      uVar41 = 0;
      DAT_005b9778 = 0;
      DAT_005555d4 = DAT_005b9898;
      DAT_005b977c = 0;
      DAT_005b9780 = 0;
      DAT_005555d8 = DAT_005b989c;
    }
  }
  fVar1 = (float10)(int)uVar41;
  fVar2 = (float10)'\0';
  ac = uVar38 & 0xfffffff8;
  if (!NAN(fVar2) && !NAN(fVar1)) {
    ac = ac | (uint)(fVar2 < fVar1) << 2;
    ac = ac | (uint)(fVar2 == fVar1) << 1;
    ac = ac | fVar1 < fVar2;
  }
  if (((byte)ac & 1 | (byte)(ac >> 2) & 1) != 1) {
    fVar1 = (float10)(int)uVar41;
    fVar2 = (float10)'\0';
    ac = ac & 0xfffffff8;
    if (!NAN(fVar2) && !NAN(fVar1)) {
      ac = ac | (uint)(fVar2 < fVar1) << 2;
      ac = ac | (uint)(fVar2 == fVar1) << 1;
      ac = ac | fVar1 < fVar2;
    }
    if (((byte)ac & 1 | (byte)(ac >> 2) & 1) != 1) {
      fVar1 = (float10)DAT_005555cc;
      fVar2 = (float10)'\0';
      ac = ac & 0xfffffff8;
      if (!NAN(fVar2) && !NAN(fVar1)) {
        ac = ac | (uint)(fVar2 < fVar1) << 2;
        ac = ac | (uint)(fVar2 == fVar1) << 1;
        ac = ac | fVar1 < fVar2;
      }
      if (((byte)ac & 1 | (byte)(ac >> 2) & 1) != 1) {
        DAT_005b98a0 = 0;
        DAT_005b98a4 = 0;
        DAT_005b98a8 = 0;
        goto LAB_00071c70;
      }
    }
  }
  DAT_008800c0 = 0xc0c;
  *(undefined4 *)PTR_DAT_000006a0 = DAT_005555c4;
  *(undefined4 *)(puVar5 + 4) = uVar6;
  *(int *)puVar5 = iVar37;
  DAT_005b98a8 = *(undefined4 *)puVar5;
  DAT_005b98a4 = *(undefined4 *)puVar5;
  DAT_005b98a0 = *(undefined4 *)puVar5;
LAB_00071c70:
  pcVar36 = (code *)g_stage_draw_routines[g_current_stage];
  auVar9._12_52_ = auVar7._12_52_;
  auVar9._8_4_ = 0x71c84;
  auVar9._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
  auVar8._8_56_ = auVar9._8_56_;
  auVar8._4_4_ = auStack_40;
  auVar8._0_4_ = fp;
  (*pcVar36)();
  uVar41 = ac;
  DAT_0054fbe1 = (&DAT_000ca130)[DAT_005a6f0d];
  ac = ac & 0xfffffff8 | (uint)(BYTE_0054fcfd != 0);
  if ((((byte)ac & 1) != 1) &&
     (uVar41 = uVar41 & 0xfffffff8 | (uint)(MODE_FIGHT < GameMode) << 2 |
               (uint)(GameMode == MODE_FIGHT) << 1, ac = uVar41 | GameMode == MODE_LOAD,
     ((byte)(uVar41 >> 1) & 1) == 1)) {
    return;
  }
  uVar41 = ac;
  ac = ac & 0xfffffff8 | (uint)(4 < BYTE_0054fcfd) << 2 | (uint)(BYTE_0054fcfd == 4) << 1 |
       (uint)(BYTE_0054fcfd < 4);
  if ((((byte)ac & 1 | 4 < BYTE_0054fcfd) != 1) &&
     (ac = uVar41 & 0xfffffff8 | (uint)(MODE_FIGHT < GameMode) << 2 |
           (uint)(GameMode == MODE_FIGHT) << 1 | (uint)(GameMode == MODE_LOAD),
     ((byte)ac & 1 | MODE_FIGHT < GameMode) != 1)) {
    return;
  }
  auVar11._12_52_ = auVar8._12_52_;
  auVar11._0_8_ = auVar8._0_8_;
  auVar11._8_4_ = 0x71cd0;
  auVar10._4_56_ = auVar11._8_56_;
  auVar10._0_4_ = auStack_40;
  auVar10._60_4_ = 0;
  auVar10 = auVar10 << 0x20;
  iVar37 = FUN_00072390();
  auVar12._20_44_ = auVar10._20_44_;
  auVar12._0_16_ = auVar10._0_16_;
  auVar12._16_4_ = iVar37;
  fp = &auStack_80;
  auVar14._12_52_ = auVar12._12_52_;
  auVar14._0_8_ = auVar10._0_8_;
  auVar14._8_4_ = 0x71cd8;
  auVar13._8_56_ = auVar14._8_56_;
  auVar13._4_4_ = auStack_c0;
  auVar13._0_4_ = auStack_40;
  FUN_00071ff0();
  uVar41 = ac;
  ac = ac & 0xfffffff8 | (uint)(0 < iVar37) << 2 | (uint)(iVar37 == 0) << 1 | (uint)(iVar37 < 0);
  auVar17._0_16_ = auVar13._0_16_;
  if (((byte)ac & 1 | 0 < iVar37) == 1) {
    DAT_005b9850 = 0xffff;
    FUN_0005da50(&DAT_005b9850);
    DAT_005b9860 = 0xffff;
    FUN_0005da50(&DAT_005b9860);
    DAT_005b9870 = 0xffff;
    fp = (undefined1 (*) [64])auStack_140;
    FUN_0005da50(&DAT_005b9870);
    DAT_005b9880 = 0xffff;
    FUN_0005da50(&DAT_005b9880);
    return;
  }
  uVar38 = uVar41 & 0xfffffff8 | (uint)(STAGE_UNKNOWN_07 < g_current_stage) << 2 |
           (uint)(g_current_stage == STAGE_UNKNOWN_07) << 1;
  ac = uVar38 | g_current_stage < STAGE_UNKNOWN_07;
  if ((((byte)(uVar38 >> 1) & 1) != 1) &&
     (ac = uVar41 & 0xfffffff8 | (uint)(STAGE_GAMEOVERSCREEN < g_current_stage) << 2 |
           (uint)(g_current_stage == STAGE_GAMEOVERSCREEN) << 1 |
           (uint)(g_current_stage < STAGE_GAMEOVERSCREEN),
     ((byte)ac & 1 | STAGE_GAMEOVERSCREEN < g_current_stage) == 1)) {
    uVar41 = uVar41 & 0xfffffff8 | (uint)(0xC_GROUNDED < g_player1.action_state) << 2 |
             (uint)(g_player1.action_state == 0xC_GROUNDED) << 1;
    ac = uVar41 | g_player1.action_state < 0xC_GROUNDED;
    if (((byte)(uVar41 >> 1) & 1) != 1) {
      auVar15._28_36_ = auVar13._28_36_;
      auVar15._0_24_ = auVar13._0_24_;
      auVar15._24_4_ = 0;
      auVar16._36_28_ = auVar13._36_28_;
      auVar16._0_32_ = auVar15._0_32_;
      auVar16._32_4_ = &DAT_005552d0;
      auVar17._20_44_ = auVar16._20_44_;
      auVar17._16_4_ = 0;
      auVar13._32_32_ = auVar16._32_32_;
      auVar13._0_28_ = auVar17._0_28_;
      auVar13._28_4_ = &DAT_005b976c;
      do {
        pcVar35 = auVar13._28_4_;
        iVar37 = auVar13._16_4_;
        pbVar3 = &BYTE_000cc560 + auVar13._24_4_;
        auVar18._24_40_ = auVar13._24_40_;
        auVar18._0_20_ = auVar13._0_20_;
        auVar18._20_4_ = pbVar3;
        uVar38 = *(uint *)(&DAT_005552d0 + (uint)*pbVar3 * 0xc);
        uVar40 = *(uint *)(&DAT_005552d8 + (uint)*pbVar3 * 0xc);
        uVar41 = auVar13._4_4_ + 0x3f;
        auVar20._12_52_ = auVar18._12_52_;
        auVar20._0_8_ = auVar13._0_8_;
        auVar20._8_4_ = 0x71e70;
        *fp = auVar20;
        auVar19._8_56_ = auVar20._8_56_;
        auVar19._0_8_ = CONCAT44(uVar41,fp) & 0xffffffc0ffffffff;
        iVar39 = Stage_IsPointInDangerZone_candidate(uVar38,uVar40);
        uVar38 = ac;
        ac = ac & 0xfffffff8 | (uint)(1 < iVar39) << 2 | (uint)(iVar39 == 1) << 1 |
             (uint)(iVar39 < 1);
        if (((byte)ac & 1 | 1 < iVar39) == 1) {
          *(undefined2 *)((int)&DAT_005b9850 + iVar37) = g14;
          *pcVar35 = (char)g14;
        }
        else {
          fVar1 = (float10)*(int *)(&DAT_005552d4 + (uint)*pbVar3 * 0xc);
          fVar2 = (float10)0x3ff4cccccccccccd;
          ac = uVar38 & 0xfffffff8;
          if (!NAN(fVar1) && !NAN(fVar2)) {
            ac = ac | (uint)(fVar1 < fVar2) << 2;
            ac = ac | (uint)(fVar1 == fVar2) << 1;
            ac = ac | fVar2 < fVar1;
          }
          if (((byte)ac & 1 | (byte)(ac >> 1) & 1) == 1) {
            *(undefined2 *)((int)&DAT_005b9850 + iVar37) = g14;
          }
          else {
            cVar4 = *pcVar35;
            ac = ac & 0xfffffff8 | (uint)(cVar4 != '\0') << 2 | (uint)(cVar4 == '\0') << 1;
            if (cVar4 != '\0') {
              *(undefined2 *)((int)&DAT_005b9850 + iVar37) = 1;
            }
            else {
              *(undefined2 *)((int)&DAT_005b9850 + iVar37) = 2;
              *pcVar35 = '\x01';
            }
          }
        }
        fp = (undefined1 (*) [64])((uVar41 & 0xffffffc0) + 0x40);
        auVar22._12_52_ = auVar19._12_52_;
        auVar22._0_8_ = auVar19._0_8_;
        auVar22._8_4_ = 0x71ef4;
        *(undefined1 (*) [64])(uVar41 & 0xffffffc0) = auVar22;
        auVar21._8_56_ = auVar22._8_56_;
        auVar21._0_8_ = CONCAT44((uVar41 & 0xffffffc0) + 0x80,uVar41) & 0xffffffffffffffc0;
        FUN_0005da50((short *)((int)&DAT_005b9850 + iVar37));
        auVar23._28_36_ = auVar21._28_36_;
        auVar23._0_24_ = auVar21._0_24_;
        auVar23._24_4_ = auVar13._24_4_ + 1;
        uVar41 = ac & 0xfffffff8 | (uint)(1 < auVar23._24_4_) << 2 |
                 (uint)(auVar23._24_4_ == 1) << 1;
        ac = uVar41 | auVar23._24_4_ < 1;
        auVar24._20_44_ = auVar23._20_44_;
        auVar24._0_16_ = auVar21._0_16_;
        auVar24._16_4_ = iVar37 + 0x10;
        auVar13._32_32_ = auVar21._32_32_;
        auVar13._0_28_ = auVar24._0_28_;
        auVar13._28_4_ = pcVar35 + 1;
      } while (((byte)ac & 1 | (byte)(uVar41 >> 1) & 1) == 1);
    }
    uVar41 = ac & 0xfffffff8 | (uint)(0xC_GROUNDED < g_player2.action_state) << 2 |
             (uint)(g_player2.action_state == 0xC_GROUNDED) << 1;
    ac = uVar41 | g_player2.action_state < 0xC_GROUNDED;
    if (((byte)(uVar41 >> 1) & 1) != 1) {
      auVar25._28_36_ = auVar13._28_36_;
      auVar25._0_24_ = auVar13._0_24_;
      auVar25._24_4_ = 2;
      auVar26._36_28_ = auVar13._36_28_;
      auVar26._0_32_ = auVar25._0_32_;
      auVar26._32_4_ = &DAT_005552d0;
      auVar27._20_44_ = auVar26._20_44_;
      auVar27._0_16_ = auVar13._0_16_;
      auVar27._16_4_ = 0x20;
      auVar13._32_32_ = auVar26._32_32_;
      auVar13._0_28_ = auVar27._0_28_;
      auVar13._28_4_ = &DAT_005b976e;
      do {
        pcVar35 = auVar13._28_4_;
        iVar37 = auVar13._16_4_;
        pbVar3 = &BYTE_000cc560 + auVar13._24_4_;
        auVar28._24_40_ = auVar13._24_40_;
        auVar28._0_20_ = auVar13._0_20_;
        auVar28._20_4_ = pbVar3;
        uVar38 = *(uint *)(&DAT_00555384 + (uint)*pbVar3 * 0xc);
        uVar40 = *(uint *)(&DAT_0055538c + (uint)*pbVar3 * 0xc);
        uVar41 = auVar13._4_4_ + 0x3f;
        auVar30._12_52_ = auVar28._12_52_;
        auVar30._0_8_ = auVar13._0_8_;
        auVar30._8_4_ = 0x71f54;
        *fp = auVar30;
        auVar29._8_56_ = auVar30._8_56_;
        auVar29._0_8_ = CONCAT44(uVar41,fp) & 0xffffffc0ffffffff;
        iVar39 = Stage_IsPointInDangerZone_candidate(uVar38,uVar40);
        uVar38 = ac;
        ac = ac & 0xfffffff8 | (uint)(1 < iVar39) << 2 | (uint)(iVar39 == 1) << 1 |
             (uint)(iVar39 < 1);
        if (((byte)ac & 1 | 1 < iVar39) == 1) {
          *(undefined2 *)((int)&DAT_005b9850 + iVar37) = g14;
          *pcVar35 = (char)g14;
        }
        else {
          fVar1 = (float10)*(int *)(&DAT_00555388 + (uint)*pbVar3 * 0xc);
          fVar2 = (float10)0x3ff4cccccccccccd;
          ac = uVar38 & 0xfffffff8;
          if (!NAN(fVar1) && !NAN(fVar2)) {
            ac = ac | (uint)(fVar1 < fVar2) << 2;
            ac = ac | (uint)(fVar1 == fVar2) << 1;
            ac = ac | fVar2 < fVar1;
          }
          if (((byte)ac & 1 | (byte)(ac >> 1) & 1) == 1) {
            *(undefined2 *)((int)&DAT_005b9850 + iVar37) = g14;
          }
          else {
            cVar4 = *pcVar35;
            ac = ac & 0xfffffff8 | (uint)(cVar4 != '\0') << 2 | (uint)(cVar4 == '\0') << 1;
            if (cVar4 != '\0') {
              *(undefined2 *)((int)&DAT_005b9850 + iVar37) = 1;
            }
            else {
              *(undefined2 *)((int)&DAT_005b9850 + iVar37) = 2;
              *pcVar35 = '\x01';
            }
          }
        }
        fp = (undefined1 (*) [64])((uVar41 & 0xffffffc0) + 0x40);
        auVar32._12_52_ = auVar29._12_52_;
        auVar32._0_8_ = auVar29._0_8_;
        auVar32._8_4_ = 0x71fd8;
        *(undefined1 (*) [64])(uVar41 & 0xffffffc0) = auVar32;
        auVar31._8_56_ = auVar32._8_56_;
        auVar31._0_8_ = CONCAT44((uVar41 & 0xffffffc0) + 0x80,uVar41) & 0xffffffffffffffc0;
        FUN_0005da50((short *)((int)&DAT_005b9850 + iVar37));
        auVar33._28_36_ = auVar31._28_36_;
        auVar33._0_24_ = auVar31._0_24_;
        auVar33._24_4_ = auVar13._24_4_ + 1;
        uVar41 = ac & 0xfffffff8 | (uint)(3 < auVar33._24_4_) << 2 |
                 (uint)(auVar33._24_4_ == 3) << 1;
        ac = uVar41 | auVar33._24_4_ < 3;
        auVar34._20_44_ = auVar33._20_44_;
        auVar34._0_16_ = auVar31._0_16_;
        auVar34._16_4_ = iVar37 + 0x10;
        auVar13._32_32_ = auVar31._32_32_;
        auVar13._0_28_ = auVar34._0_28_;
        auVar13._28_4_ = pcVar35 + 1;
      } while (((byte)ac & 1 | (byte)(uVar41 >> 1) & 1) == 1);
    }
    fp = (undefined1 (*) [64])auVar13._0_4_;
    return;
  }
  fp = &auStack_40;
  return;
}

