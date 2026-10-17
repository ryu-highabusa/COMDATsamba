
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00020cb0(uint param_1)

{
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [64];
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [24];
  undefined4 unaff_pfp;
  uint player_index;
  undefined1 auVar11 [40];
  int iVar34;
  undefined4 unaff_retaddr;
  int iVar37;
  undefined1 in_register_0000000c [12];
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 in_register_00000030 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar27 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  int iVar35;
  undefined1 auVar33 [64];
  byte bVar38;
  bool bVar39;
  uint8_t uVar40;
  uint uVar41;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar43;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar17 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar12 [64];
  undefined1 auVar21 [64];
  undefined1 auVar36 [60];
  int iVar42;
  
  uVar41 = ac;
  uVar9 = CONCAT44(auStackX_0,unaff_pfp);
  auVar10._8_4_ = unaff_retaddr;
  auVar10._0_8_ = uVar9;
  auVar10._12_12_ = in_register_0000000c;
  auVar12._24_4_ = unaff_r6;
  auVar12._0_24_ = auVar10;
  auVar12._28_4_ = unaff_r7;
  auVar12._32_4_ = unaff_r8;
  auVar12._36_4_ = unaff_r9;
  auVar12._40_4_ = unaff_r10;
  auVar12._44_4_ = unaff_r11;
  auVar12._48_16_ = in_register_00000030;
  auVar13._24_40_ = auVar12._24_40_;
  auVar13._0_20_ = auVar10._0_20_;
  auVar13._20_4_ = param_1;
  auVar14._32_32_ = auVar12._32_32_;
  auVar14._0_28_ = auVar13._0_28_;
  auVar14._28_4_ = param_1 ^ 1;
  auVar15._20_44_ = auVar14._20_44_;
  auVar15._0_16_ = auVar10._0_16_;
  auVar15._16_4_ = &g_player1 + param_1;
  auVar16._52_12_ = in_register_00000030._4_12_;
  auVar16._0_48_ = auVar15._0_48_;
  auVar16._48_4_ = &g_player1 + auVar14._28_4_;
  bVar38 = (&g_player1)[param_1].animation_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar38) << 2 | (uint)(bVar38 == 1) << 1 | (uint)(bVar38 == 0);
  auVar17._12_52_ = auVar16._12_52_;
  if (((byte)ac & 1 | 1 < bVar38) == 1) {
    bVar38 = (&g_player1)[param_1].sky_state;
    ac = uVar41 & 0xfffffff8 | (uint)(4 < bVar38) << 2 | (uint)(bVar38 == 4) << 1 |
         (uint)(bVar38 < 4);
    uVar41 = param_1;
    if (((byte)ac & 1 | 4 < bVar38) != 1) {
      (&g_player1)[param_1].sky_state = g14;
      auVar18._8_4_ = 0x20d14;
      auVar18._0_8_ = uVar9;
      auVar18._12_52_ = auVar17._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
      auVar16._8_56_ = auVar18._8_56_;
      auVar16._4_4_ = auStack_40;
      auVar16._0_4_ = fp;
      uVar41 = FUN_00023da0(param_1);
      fp = (undefined1 (*) [64])register0x00000004;
    }
  }
  else {
    (&g_player1)[param_1].sky_state = g14;
    (&g_player1)[param_1].animation_flag = g14;
    auVar17._8_4_ = 0x20cfc;
    auVar17._0_8_ = uVar9;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
    auVar16._8_56_ = auVar17._8_56_;
    auVar16._4_4_ = auStack_40;
    auVar16._0_4_ = fp;
    uVar41 = FUN_00023da0(param_1);
    fp = (undefined1 (*) [64])register0x00000004;
  }
  uVar8 = ac;
  ac = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].action_cancel == 0);
  if ((((byte)ac & 1 | 1 < (&g_player1)[param_1].action_cancel) != 1) &&
     (ac = uVar8 & 0xfffffff8 | (uint)((&g_player1)[param_1].action_request != 0xff) << 2 |
           (uint)((&g_player1)[param_1].action_request == 0xff) << 1, ((byte)(ac >> 1) & 1) != 1)) {
    (&g_player1)[param_1].action_flag = g14;
    (&g_player1)[param_1].cancel_use = '\x01';
    puVar4 = (undefined1 *)(auVar16._4_4_ + 0x3fU & 0xffffffc0);
    auVar19._12_52_ = auVar16._12_52_;
    auVar19._0_8_ = auVar16._0_8_;
    auVar19._8_4_ = 0x20d3c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar19;
    auVar16._8_56_ = auVar19._8_56_;
    auVar16._4_4_ = puVar4 + 0x40;
    auVar16._0_4_ = fp;
    uVar41 = Player_ProcessNeutralActionRequest(param_1);
    fp = (undefined1 (*) [64])puVar4;
  }
  uVar8 = ac;
  ac = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].hit_stage == 0);
  if ((((byte)ac & 1 | 1 < (&g_player1)[param_1].hit_stage) != 1) &&
     (ac = uVar8 & 0xfffffff8, (byte)((&g_player1)[param_1].action_code + CMD_REAR_UP_F_LK) < 2)) {
    (&g_player1)[param_1].animation_flag = g14;
    (&g_player1)[param_1].sky_state = '\x01';
    (&g_player1)[param_1].beat_state = g14;
    uVar41 = uVar8 & 0xfffffff8 | (uint)((&g_player1)[param_1].down_state != '\0') << 2;
    ac = uVar41 | (uint)((&g_player1)[param_1].down_state == '\0') << 1;
    cVar6 = '\x1a';
    if (((byte)(uVar41 >> 2) & 1) != 1) {
      cVar6 = '\x19';
    }
    puVar4 = (undefined1 *)(auVar16._4_4_ + 0x3fU & 0xffffffc0);
    auVar20._12_52_ = auVar16._12_52_;
    auVar20._0_8_ = auVar16._0_8_;
    auVar20._8_4_ = 0x20d84;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar20;
    auVar16._8_56_ = auVar20._8_56_;
    auVar16._4_4_ = puVar4 + 0x40;
    auVar16._0_4_ = fp;
    uVar41 = FUN_00024f80(cVar6 + 0x1f,param_1);
    fp = (undefined1 (*) [64])puVar4;
  }
  uVar8 = ac;
  puVar4 = *fp;
  ac = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].danger_flag == 0);
  if (((byte)ac & 1 | 1 < (&g_player1)[param_1].danger_flag) == 1) goto LAB_00020f8c;
  uVar8 = uVar8 & 0xfffffff8;
  if ((&g_player1)[param_1].down_state == '\0') {
    DAT_00884004 = param_1 * 0xb4;
  }
  else {
    DAT_00884004 = (&DAT_005552e4)[param_1 * 0x2d];
  }
  player_index = auVar16._20_4_;
  iVar37 = auVar16._16_4_;
  iVar34 = auVar16._4_4_;
  DAT_008800a0 = 0xa0a;
  auVar11._0_32_ = auVar16._0_32_;
  auVar11._32_4_ = uVar41;
  auVar21._40_24_ = auVar16._40_24_;
  auVar11._36_4_ = DAT_00884004;
  auVar21._0_40_ = auVar11;
  uVar43 = *(uint *)PTR_DAT_000006a4;
  DAT_00884000 = uVar41;
  *(uint *)(iVar37 + 0x14) = uVar43 & 0xffff;
  *(uint *)(iVar37 + 0x1c) = uVar43 & 0xffff;
  auVar22._0_8_ = auVar16._0_8_;
  if ((*(char *)(iVar37 + 0x50) == '\0') ||
     (*(ushort *)(iVar37 + 0x20) <= *(ushort *)(iVar37 + 0x22))) {
    *(uint8_t *)(iVar37 + 0x35) = g14;
    *(undefined1 *)(iVar37 + 0x3f) = 1;
    *(uint8_t *)(iVar37 + 0x3e) = g14;
    if ((*(ushort *)(iVar37 + 0x20) == 0) ||
       ((BYTE_0054fcfd == 1 && (*(ushort *)(iVar37 + 0x20) <= *(ushort *)(iVar37 + 0x22))))) {
      uVar8 = uVar8 | (uint)(*(char *)(iVar37 + 0x2f) != '\0') << 2;
      ac = uVar8 | (uint)(*(char *)(iVar37 + 0x2f) == '\0') << 1;
      bVar38 = 0x7d;
      if (((byte)(uVar8 >> 2) & 1) != 1) {
        bVar38 = 0x7c;
      }
    }
    else {
      uVar8 = uVar8 | (uint)(*(char *)(iVar37 + 0x2f) != '\0') << 2;
      ac = uVar8 | (uint)(*(char *)(iVar37 + 0x2f) == '\0') << 1;
      bVar38 = 0x7b;
      if (((byte)(uVar8 >> 2) & 1) != 1) {
        bVar38 = 0x7a;
      }
    }
    auVar22._12_52_ = auVar21._12_52_;
    auVar22._8_4_ = 0x20ec8;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar22;
    auVar16._8_56_ = auVar22._8_56_;
    auVar16._4_4_ = (undefined1 *)(iVar34 + 0x3fU & 0xffffffc0) + 0x40;
    auVar16._0_4_ = fp;
    FUN_00024f80(bVar38,player_index);
    fp = (undefined1 (*) [64])(iVar34 + 0x3fU & 0xffffffc0);
    goto LAB_00020f8c;
  }
  *(uint8_t *)(iVar37 + 0x35) = g14;
  DAT_008800a0 = 0xa0a;
  auVar23._40_4_ = *(uint *)(iVar37 + 4) ^ 0x80000000;
  auVar23._0_40_ = auVar11;
  auVar23._48_16_ = auVar16._48_16_;
  auVar23._44_4_ = *(uint *)(iVar37 + 0xc) ^ 0x80000000;
  auVar24._28_36_ = auVar23._28_36_;
  auVar24._0_24_ = auVar16._0_24_;
  bVar1 = (*(int *)(iVar37 + 0x14) - (*(uint *)PTR_DAT_000006a4 & 0xffff) & 0xffff) < 0x8000;
  auVar24[0x18] = bVar1;
  auVar24._25_3_ = 0;
  cVar6 = *(char *)(iVar37 + 0x2f);
  ac = uVar8 | (uint)(cVar6 != '\0') << 2 | (uint)(cVar6 == '\0') << 1;
  auVar26._12_52_ = auVar24._12_52_;
  DAT_00884000 = auVar23._40_4_;
  DAT_00884004 = auVar23._44_4_;
  if (cVar6 != '\0') {
    pauVar5 = (undefined1 (*) [64])(iVar34 + 0x3fU & 0xffffffc0);
    auVar28._8_4_ = 0x20f60;
    auVar28._0_8_ = auVar22._0_8_;
    auVar28._12_52_ = auVar26._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar28;
    auVar27._4_56_ = auVar28._8_56_;
    auVar27._0_4_ = pauVar5 + 1;
    auVar27._60_4_ = 0;
    auVar27 = auVar27 << 0x20;
    bVar39 = FUN_00025790(player_index);
    auVar36 = auVar27._4_60_;
    iVar42 = CONCAT31(extraout_var_00,bVar39);
    ac = ac & 0xfffffff8 | (uint)(1 < iVar42) << 2 | (uint)(iVar42 == 1) << 1 | (uint)(iVar42 < 1);
    if (((byte)ac & 1 | 1 < iVar42) == 1) {
      uVar40 = ' ';
      fp = pauVar5;
      goto LAB_00020f80;
    }
    uVar40 = '!';
    fp = pauVar5;
  }
  else {
    pauVar5 = (undefined1 (*) [64])(iVar34 + 0x3fU & 0xffffffc0);
    auVar26._8_4_ = 0x20f44;
    auVar26._0_8_ = auVar22._0_8_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar26;
    auVar25._4_56_ = auVar26._8_56_;
    auVar25._0_4_ = pauVar5 + 1;
    auVar25._60_4_ = 0;
    auVar25 = auVar25 << 0x20;
    bVar39 = FUN_00025790(player_index);
    auVar36 = auVar25._4_60_;
    iVar42 = CONCAT31(extraout_var,bVar39);
    ac = ac & 0xfffffff8 | (uint)(1 < iVar42) << 2 | (uint)(iVar42 == 1) << 1 | (uint)(iVar42 < 1);
    if (((byte)ac & 1 | 1 < iVar42) == 1) {
      uVar40 = '\x1f';
      fp = pauVar5;
LAB_00020f80:
      auVar31._4_60_ = auVar36;
      auVar31._0_4_ = puVar4;
      puVar4 = (undefined1 *)(auVar36._0_4_ + 0x3fU & 0xffffffc0);
      auVar32._12_52_ = auVar36._8_52_;
      auVar32._0_8_ = auVar31._0_8_;
      auVar32._8_4_ = 0x20f88;
      *fp = auVar32;
      auVar16._8_56_ = auVar32._8_56_;
      auVar16._4_4_ = puVar4 + 0x40;
      auVar16._0_4_ = fp;
      Player_SetActCode(uVar40,player_index);
      *(bool *)(iVar37 + 0x34) = bVar1;
      fp = (undefined1 (*) [64])puVar4;
      goto LAB_00020f8c;
    }
    uVar40 = '\x1e';
    fp = pauVar5;
  }
  auVar29._4_60_ = auVar36;
  auVar29._0_4_ = puVar4;
  puVar4 = (undefined1 *)(auVar36._0_4_ + 0x3fU & 0xffffffc0);
  auVar30._12_52_ = auVar36._8_52_;
  auVar30._0_8_ = auVar29._0_8_;
  auVar30._8_4_ = 0x20f70;
  *fp = auVar30;
  auVar16._8_56_ = auVar30._8_56_;
  auVar16._4_4_ = puVar4 + 0x40;
  auVar16._0_4_ = fp;
  Player_SetActCode(uVar40,player_index);
  *(bool *)(iVar37 + 0x34) = !bVar1;
  fp = (undefined1 (*) [64])puVar4;
LAB_00020f8c:
  uVar41 = ac;
  iVar37 = auVar16._16_4_;
  iVar35 = auVar16._4_4_;
  bVar38 = *(byte *)(iVar37 + 0x2d);
  ac = ac & 0xfffffff8 | (uint)(9 < bVar38) << 2 | (uint)(bVar38 == 9) << 1 | (uint)(bVar38 < 9);
  if (((byte)ac & 1 | 9 < bVar38) != 1) {
    bVar38 = *(byte *)(iVar37 + 0x2a);
    ac = uVar41 & 0xfffffff8 | (uint)(bVar38 < 0x2f) << 2 | (uint)(bVar38 == 0x2f) << 1 |
         (uint)(0x2f < bVar38);
    if ((((byte)ac & 1) != 1) &&
       (cVar6 = *(char *)(iVar37 + 0x41),
       ac = uVar41 & 0xfffffff8 | (uint)(cVar6 != '\0') << 2 | (uint)(cVar6 == '\0') << 1,
       cVar6 == '\0')) {
      bVar38 = (&DAT_00557f24)[auVar16._28_4_];
      bVar7 = *(byte *)(auVar16._48_4_ + 1);
      auVar33._12_52_ = auVar16._12_52_;
      auVar33._0_8_ = auVar16._0_8_;
      auVar33._8_4_ = 0x20fb8;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar33;
      auVar16._8_56_ = auVar33._8_56_;
      auVar16._4_4_ = (undefined1 *)((iVar35 + 0x3fU & 0xffffffc0) + 0x40);
      auVar16._0_4_ = fp;
      FUN_00025600((uint)bVar38,(uint)bVar7);
      ac = ac & 0xfffffff8;
      uVar41 = (uint)(byte)(&DAT_00557f20)[auVar16._20_4_];
      if ((byte)(&DAT_00557f20)[auVar16._20_4_] < 2) {
        uVar41 = DAT_0009d8b0;
      }
      fVar3 = (float10)0x4000000000000000;
      fVar2 = (float10)CONCAT24(DAT_00555600,uVar41);
      if (!NAN(fVar2) && !NAN(fVar3)) {
        ac = ac | (uint)(fVar2 < fVar3) << 2;
        ac = ac | (uint)(fVar2 == fVar3) << 1;
        ac = ac | fVar3 < fVar2;
      }
      if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) {
        *(undefined4 *)(auVar16._16_4_ + 0x10) = 0x41e80000;
        fp = (undefined1 (*) [64])auVar16._0_4_;
        return;
      }
      *(undefined4 *)(auVar16._16_4_ + 0x10) = 0x41f00000;
    }
  }
  fp = (undefined1 (*) [64])auVar16._0_4_;
  return;
}

