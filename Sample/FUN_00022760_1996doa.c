
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00022760(uint param_1)

{
  uint uVar1;
  char cVar2;
  float10 fVar3;
  float10 fVar4;
  uint uVar5;
  uint uVar6;
  DOA_U8 DVar7;
  DOA_ACTCODE_COMMON DVar8;
  undefined1 auVar9 [40];
  undefined4 unaff_pfp;
  undefined1 auVar10 [44];
  undefined1 auVar11 [48];
  uint uVar35;
  undefined1 in_register_00000008 [32];
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 in_register_00000030 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  bool bVar36;
  undefined1 uVar37;
  DOA_ACTSTATE DVar38;
  int iVar39;
  undefined3 extraout_var;
  byte bVar40;
  undefined *puVar41;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar18 [64];
  undefined1 auVar21 [64];
  undefined1 auVar27 [64];
  undefined1 auVar31 [64];
  undefined1 auVar34 [64];
  undefined1 auVar12 [64];
  undefined1 auVar22 [64];
  
  auVar9._8_32_ = in_register_00000008;
  auVar9._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar12._40_4_ = unaff_r10;
  auVar12._0_40_ = auVar9;
  auVar12._44_4_ = unaff_r11;
  auVar12._48_16_ = in_register_00000030;
  auVar13._24_40_ = auVar12._24_40_;
  auVar13._0_20_ = auVar9._0_20_;
  auVar13._20_4_ = param_1;
  auVar14._0_28_ = auVar13._0_28_;
  auVar14._28_4_ = param_1 ^ 1;
  auVar14._36_28_ = auVar12._36_28_;
  auVar14._32_4_ = &g_player1 + param_1;
  auVar15._20_44_ = auVar14._20_44_;
  auVar15._0_16_ = auVar9._0_16_;
  auVar15._16_4_ = &g_player1 + auVar14._28_4_;
  auVar16._28_36_ = auVar14._28_36_;
  auVar16._0_24_ = auVar15._0_24_;
  auVar16._24_4_ = 0;
  auVar18._12_52_ = auVar16._12_52_;
  auVar18._8_4_ = 0x227a4;
  auVar18._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
  auVar17._8_56_ = auVar18._8_56_;
  auVar17._4_4_ = auStack_40;
  auVar17._0_4_ = fp;
  iVar39 = FUN_00023b80(auVar14._28_4_);
  uVar1 = ac;
  ac = ac & 0xfffffff8 | (uint)(1 < iVar39) << 2 | (uint)(iVar39 == 1) << 1 | (uint)(iVar39 < 1);
  auVar19._0_24_ = auVar17._0_24_;
  auVar19._28_36_ = auVar17._28_36_;
  if (((byte)ac & 1 | 1 < iVar39) == 1) {
    if ((&g_player1)[auVar14._28_4_].down_state == '\x01') {
      auVar17._24_4_ = 3;
      auVar17._0_24_ = auVar19._0_24_;
      auVar17._28_36_ = auVar19._28_36_;
    }
    if ((&g_player1)[auVar14._28_4_].down_hit == '\x01') {
      auVar17._24_4_ = auVar17._24_4_ + 1;
    }
    else if ((&g_player1)[auVar14._28_4_].down_hit == '\x02') {
      auVar17._24_4_ = auVar17._24_4_ + 2;
    }
    DVar38 = (&g_player1)[auVar14._28_4_].action_state;
    ac = uVar1 & 0xfffffff8 | (uint)(0xD_SPECIALMOVE < DVar38) << 2 |
         (uint)(DVar38 == 0xD_SPECIALMOVE) << 1 | (uint)(DVar38 < 0xD_SPECIALMOVE);
    fp = (undefined1 (*) [64])register0x00000004;
    if (((byte)ac & 1 | 0xD_SPECIALMOVE < DVar38) != 1) {
      DVar8 = (&g_player1)[auVar14._28_4_].action_code;
      auVar17._40_4_ = 0xff;
      if (((DVar8 == CMD_SIDE_UP_H || DVar8 == CMD_SIDE_UP_F) ||
          (DVar8 == CMD_SIT_SIDE_UP_H || DVar8 == CMD_SIT_SIDE_UP_F)) ||
         ((byte)(DVar8 + CMD_REAR_UP_H_K) < 4)) {
        bVar40 = (&g_player1)[auVar14._28_4_].down_state;
        ac = uVar1 & 0xfffffff8 | (uint)(1 < bVar40) << 2 | (uint)(bVar40 == 1) << 1 |
             (uint)(bVar40 == 0);
        auVar12 = auVar17;
        if (((byte)ac & 1 | 1 < bVar40) == 1) goto LAB_00022878;
      }
      else {
        DVar8 = (&g_player1)[auVar14._28_4_].action_code;
        auVar17._40_4_ = 0xff;
        uVar5 = uVar1 & 0xfffffff8 | (uint)(DVar8 == CMD_SIDE_DOWN_F) << 1;
        ac = uVar5 | DVar8 == CMD_SIDE_DOWN_H;
        if ((((byte)ac & 1 | (byte)(uVar5 >> 1) & 1) != 1) &&
           (uVar5 = uVar1 & 0xfffffff8 | (uint)(DVar8 == CMD_SIT_SIDE_DOWN_F) << 1,
           ac = uVar5 | DVar8 == CMD_SIT_SIDE_DOWN_H, ((byte)ac & 1 | (byte)(uVar5 >> 1) & 1) != 1))
        {
          bVar40 = DVar8 + CMD_SIDE_DOWN_H_K;
          ac = uVar1 & 0xfffffff8 | (uint)(3 < bVar40) << 2 | (uint)(bVar40 == 3) << 1 |
               (uint)(bVar40 < 3);
          if (3 < bVar40) goto LAB_00022878;
        }
        DVar7 = (&g_player1)[auVar14._28_4_].down_state;
        ac = ac & 0xfffffff8 | (uint)(DVar7 != '\0') << 2 | (uint)(DVar7 == '\0') << 1;
        auVar12 = auVar17;
        if (DVar7 != '\0') goto LAB_00022878;
      }
      auVar17._0_40_ = auVar12._0_40_;
      auVar17._40_4_ = 0xff;
      auVar17._48_16_ = auVar12._48_16_;
      auVar17._44_4_ = 0xffff;
      (&g_player1)[auVar14._28_4_].facing_direction =
           (&g_player1)[auVar14._28_4_].facing_direction + 0x8000U & 0xffff;
    }
  }
  else {
    auVar19._24_4_ = 6;
    fp = &auStack_40;
    auStackX_0._12_52_ = auVar19._12_52_;
    auStackX_0._0_8_ = auVar17._0_8_;
    auStackX_0._8_4_ = 0x227b4;
    auVar17._8_56_ = auStackX_0._8_56_;
    auVar17._4_4_ = auStack_80;
    auVar17._0_4_ = auStackX_0;
    bVar36 = FUN_00025790(auVar14._28_4_);
    iVar39 = CONCAT31(extraout_var,bVar36);
    ac = ac & 0xfffffff8 | (uint)(1 < iVar39) << 2 | (uint)(iVar39 == 1) << 1 | (uint)(iVar39 < 1);
    if (((byte)ac & 1 | 1 < iVar39) != 1) {
      auVar17._24_4_ = 7;
    }
  }
LAB_00022878:
  uVar35 = auVar17._24_4_;
  uVar5 = auVar17._4_4_ + 0x3f;
  uVar6 = uVar5 & 0xffffffc0;
  auVar21._12_52_ = auVar17._12_52_;
  auVar21._0_8_ = auVar17._0_8_;
  auVar21._8_4_ = 0x22880;
  *fp = auVar21;
  auVar20._8_56_ = auVar21._8_56_;
  auVar20._0_8_ = CONCAT44(uVar5,fp) & 0xffffffc0ffffffff;
  uVar37 = FUN_000241e0(param_1);
  (&DAT_00557f82)[param_1] = uVar37;
  (&DAT_00557f24)[param_1] = (&g_player1)[param_1].action_code;
  puVar41 = PTR_ARRAY_0009cdf0[(&g_player1)[param_1].character_id];
  bVar40 = g_character_combat_record_table_candidate[(&g_player1)[param_1].character_id]
           [(uint)(byte)(&DAT_00557f82)[param_1] * 0x14 + 0x12];
  (&g_player1)[auVar14._28_4_].animation_flag = g14;
  (&g_player1)[auVar14._28_4_].action_code = puVar41[uVar35 + (uint)bVar40 * 8];
  DVar8 = (&g_player1)[auVar14._28_4_].action_code;
  auVar22._44_20_ = auVar20._44_20_;
  auVar10._0_40_ = auVar20._0_40_;
  auVar10._40_4_ = 0xb7;
  auVar22._0_44_ = auVar10;
  uVar1 = ac & 0xfffffff8 | (uint)(DVar8 < (CMD_SIDE_DOWN_F_LK|0x37)) << 2 |
          (uint)(DVar8 == (CMD_SIDE_DOWN_F_LK|0x37)) << 1;
  ac = uVar1 | (CMD_SIDE_DOWN_F_LK|0x37) < DVar8;
  auVar24._0_20_ = auVar20._0_20_;
  if (((byte)(uVar1 >> 1) & 1 | DVar8 < (CMD_SIDE_DOWN_F_LK|0x37)) == 1) {
    (&g_player1)[auVar14._28_4_].action_flag = g14;
    auVar24._24_40_ = auVar22._24_40_;
    auVar24._20_4_ = auVar14._28_4_;
  }
  else {
    auVar23._48_16_ = auVar20._48_16_;
    auVar23._44_4_ = 1;
    auVar23._0_44_ = auVar10;
    (&g_player1)[auVar14._28_4_].action_flag = '\x01';
    auVar24._24_40_ = auVar23._24_40_;
    auVar24._20_4_ = param_1;
  }
  auVar25._44_20_ = auVar24._44_20_;
  auVar25._0_40_ = auVar24._0_40_;
  auVar25._40_4_ = 0xff;
  (&g_player1)[auVar14._28_4_].action_request = 0xff;
  iVar39 = uVar6 + 0x40;
  auVar27._12_52_ = auVar25._12_52_;
  auVar27._0_8_ = auVar24._0_8_;
  auVar27._8_4_ = 0x22904;
  *(undefined1 (*) [64])(uVar5 & 0xffffffc0) = auVar27;
  auVar26._8_56_ = auVar27._8_56_;
  auVar26._0_8_ = CONCAT44(uVar6 + 0x80,uVar5) & 0xffffffffffffffc0;
  DVar38 = FUN_00024310(auVar14._28_4_);
  uVar1 = ac;
  (&g_player1)[auVar14._28_4_].action_state = DVar38;
  auVar28._48_16_ = auVar26._48_16_;
  auVar28._0_44_ = auVar26._0_44_;
  auVar28._44_4_ = 1;
  (&g_player1)[auVar14._28_4_].animation_request = '\x01';
  auVar32._44_20_ = auVar28._44_20_;
  auVar29._0_40_ = auVar26._0_40_;
  auVar29._40_4_ = 1;
  (&g_player1)[auVar14._28_4_].beat_hit_state = '\x01';
  (&g_player1)[auVar14._28_4_].sky_state = g14;
  ac = ac & 0xfffffff8 | (uint)(6 < uVar35) << 2 | (uint)(uVar35 == 6) << 1 | (uint)(uVar35 < 6);
  auVar31._0_8_ = auVar26._0_8_;
  if (((byte)ac & 1 | 6 < uVar35) == 1) {
    ac = uVar1 & 0xfffffff8 | (uint)(7 < uVar35) << 2 | (uint)(uVar35 == 7) << 1 |
         (uint)(uVar35 < 7);
    fp = (undefined1 (*) [64])iVar39;
    if (((byte)ac & 1 | 7 < uVar35) != 1) {
      auVar32._40_4_ = 9;
      auVar32._0_40_ = auVar29._0_40_;
      (&g_player1)[auVar14._28_4_].beat_state = '\t';
      DVar8 = (&g_player1)[auVar14._28_4_].action_code;
      fp = (undefined1 (*) [64])(uVar6 + 0x80);
      auVar34._12_52_ = auVar32._12_52_;
      auVar34._8_4_ = 0x2296c;
      auVar34._0_8_ = auVar31._0_8_;
      *(undefined1 (*) [64])(uVar6 + 0x40) = auVar34;
      auVar33._8_56_ = auVar34._8_56_;
      auVar33._4_4_ = uVar6 + 0xc0;
      auVar33._0_4_ = iVar39;
      puVar41 = FUN_00025680(auVar14._28_4_,auVar24._20_4_,DVar8);
      auVar29._0_40_ = auVar33._0_40_;
      ac = ac & 0xfffffff8 | (uint)(puVar41[0xc] == -1) << 1;
      if (((byte)(ac >> 1) & 1) != 1) {
        (&g_player1)[auVar14._28_4_].sky_state = '\x01';
      }
    }
  }
  else {
    auVar29._44_4_ = 8;
    auVar29._48_16_ = auVar28._48_16_;
    (&g_player1)[auVar14._28_4_].beat_state = '\b';
    DVar8 = (&g_player1)[auVar14._28_4_].action_code;
    auVar31._12_52_ = auVar29._12_52_;
    auVar31._8_4_ = 0x22938;
    *(undefined1 (*) [64])(uVar6 + 0x40) = auVar31;
    auVar30._8_56_ = auVar31._8_56_;
    auVar30._4_4_ = uVar6 + 0xc0;
    auVar30._0_4_ = iVar39;
    puVar41 = FUN_00025680(auVar14._28_4_,auVar24._20_4_,DVar8);
    auVar29._0_40_ = auVar30._0_40_;
    ac = ac & 0xfffffff8 | (uint)(puVar41[0xc] == -1) << 1;
    fp = (undefined1 (*) [64])(uVar6 + 0x80);
    if (((byte)(ac >> 1) & 1) != 1) {
      (&g_player1)[auVar14._28_4_].sky_state = '\x01';
    }
  }
  uVar1 = ac;
  bVar40 = (&g_player1)[auVar14._28_4_].action_code + (CMD_SIDE_DOWN_F_LK|CMD_SIT_DOWN_H);
  ac = ac & 0xfffffff8 | (uint)(1 < bVar40) << 2 | (uint)(bVar40 == 1) << 1 |
       (uint)((&g_player1)[auVar14._28_4_].action_code == CMD_SIT_K);
  if (1 >= bVar40) {
    auVar11._40_4_ = 0x66666666;
    auVar11._0_40_ = auVar29._0_40_;
    auVar11._44_4_ = 0x3ff66666;
    fVar4 = (float10)auVar11._40_8_;
    fVar3 = (float10)CONCAT44(auVar14._28_4_ * 0x2d,
                              *(undefined4 *)(&DAT_005552d4 + auVar14._28_4_ * 0xb4));
    ac = uVar1 & 0xfffffff8;
    if (!NAN(fVar3) && !NAN(fVar4)) {
      ac = ac | (uint)(fVar3 < fVar4) << 2;
      ac = ac | (uint)(fVar3 == fVar4) << 1;
      ac = ac | fVar4 < fVar3;
    }
    if (((byte)ac & 1 | (byte)(ac >> 1) & 1) != 1) {
      bVar40 = (&g_player1)[auVar14._28_4_].beat_state;
      uVar1 = ac & 0xfffffff8 | (uint)(8 < bVar40) << 2;
      ac = uVar1 | (uint)(bVar40 == 8) << 1 | (uint)(bVar40 < 8);
      cVar2 = '\x1c';
      if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
        cVar2 = '\x1b';
      }
      FUN_00024f80(cVar2 + 0x1f,auVar14._28_4_);
      return;
    }
  }
  fp = (undefined1 (*) [64])auVar29._0_4_;
  return;
}

