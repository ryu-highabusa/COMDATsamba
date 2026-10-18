
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00021060(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 fVar1;
  float10 fVar2;
  bool bVar3;
  DOA_ACTSTATE DVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined1 auVar7 [24];
  undefined1 auVar8 [64];
  uint uVar9;
  undefined4 unaff_pfp;
  undefined1 auVar10 [32];
  undefined1 auVar11 [48];
  undefined1 auVar12 [48];
  undefined1 auVar13 [50];
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [12];
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 in_register_00000030 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  uint8_t uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  uint uVar32;
  DOA_F32 DVar33;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar25 [64];
  undefined1 auVar14 [64];
  undefined1 auVar17 [64];
  undefined1 auVar20 [64];
  undefined1 auVar27 [64];
  
  uVar29 = (uint)fp;
  uVar6 = CONCAT44(auStackX_0,unaff_pfp);
  auVar7._8_4_ = unaff_retaddr;
  auVar7._0_8_ = uVar6;
  auVar7._12_12_ = in_register_0000000c;
  auVar14._24_4_ = unaff_r6;
  auVar14._0_24_ = auVar7;
  auVar14._28_4_ = unaff_r7;
  auVar14._32_4_ = unaff_r8;
  auVar14._36_4_ = unaff_r9;
  auVar14._40_4_ = unaff_r10;
  auVar14._44_4_ = unaff_r11;
  auVar14._48_16_ = in_register_00000030;
  auVar15._24_40_ = auVar14._24_40_;
  auVar15._0_20_ = auVar7._0_20_;
  auVar15._20_4_ = param_1;
  uVar32 = param_1 ^ 1;
  auVar16._20_44_ = auVar15._20_44_;
  auVar16._0_16_ = auVar7._0_16_;
  auVar16._16_4_ = &g_player1 + param_1;
  auVar17._32_32_ = auVar14._32_32_;
  auVar10._0_28_ = auVar16._0_28_;
  auVar10._28_4_ = &g_player1 + uVar32;
  auVar17._0_32_ = auVar10;
  auVar19._36_28_ = auVar14._36_28_;
  if (((&g_player1)[param_1].animation_flag != '\x01') &&
     ((&g_player1)[param_1].jump_state != '\x03')) {
    iVar31 = *(int *)(&DAT_00557f40 + param_1 * 4);
    ac = ac & 0xfffffff8 | (uint)(0 < iVar31) << 2 | (uint)(iVar31 == 0) << 1 | (uint)(iVar31 < 0);
    if (((byte)ac & 1 | 0 < iVar31) == 1) {
LAB_000212cc:
      fp = (undefined1 *)auVar17._0_4_;
      return;
    }
    auVar23._32_4_ = g_attack_property_tables_by_character[(&g_player1)[param_1].character_id];
    auVar23._0_32_ = auVar10;
    auVar23._36_28_ = auVar19._36_28_;
    auVar25._12_52_ = auVar23._12_52_;
    auVar25._8_4_ = 0x21150;
    auVar25._0_8_ = uVar6;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar25;
    fp = auStackX_0;
    auVar24._8_56_ = auVar25._8_56_;
    auVar24._4_4_ = auStack_40;
    auVar24._0_4_ = uVar29;
    uVar30 = FUN_000241e0(param_1);
    uVar9 = ac;
    auVar17._44_20_ = auVar24._44_20_;
    auVar17._0_40_ = auVar24._0_40_;
    auVar17._40_4_ = 0xff;
    bVar5 = auVar23._32_4_[(uVar30 & 0xff) * 0x14 + 3];
    ac = ac & 0xfffffff8 | (uint)(1 < bVar5) << 2 | (uint)(bVar5 == 1) << 1 | (uint)(bVar5 == 0);
    if ((((byte)ac & 1 | 1 < bVar5) == 1) ||
       (ac = uVar9 & 0xfffffff8 | (uint)(auVar23._32_4_[(uVar30 & 0xff) * 0x14 + 0x10] != -1) << 2 |
             (uint)(auVar23._32_4_[(uVar30 & 0xff) * 0x14 + 0x10] == -1) << 1,
       ((byte)(ac >> 1) & 1) == 1)) goto LAB_000212cc;
    DVar4 = (&g_player1)[uVar32].action_state;
    ac = uVar9 & 0xfffffff8 | (uint)(0xF_DOWNATTACKSTUN < DVar4) << 2 |
         (uint)(DVar4 == 0xF_DOWNATTACKSTUN) << 1 | (uint)(DVar4 < 0xF_DOWNATTACKSTUN);
    if (((byte)ac & 1 | 0xF_DOWNATTACKSTUN < DVar4) == 1) goto LAB_000212cc;
    bVar5 = (&g_player1)[param_1].jump_state;
    ac = uVar9 & 0xfffffff8 | (uint)(2 < bVar5) << 2 | (uint)(bVar5 == 2) << 1 | (uint)(bVar5 < 2);
    if (((byte)ac & 1 | 2 < bVar5) == 1) goto LAB_000212cc;
    DVar33 = (&g_player1)[param_1].y_position;
    fVar2 = (float10)(int)(&g_player1)[uVar32].y_position;
    fVar1 = (float10)(int)DVar33;
    ac = uVar9 & 0xfffffff8;
    if (!NAN(fVar1) && !NAN(fVar2)) {
      ac = ac | (uint)(fVar1 < fVar2) << 2;
      ac = ac | (uint)(fVar1 == fVar2) << 1;
      ac = ac | fVar2 < fVar1;
    }
    if (((byte)(ac >> 2) & 1) == 1) goto LAB_000212cc;
    auVar26._0_24_ = auVar24._0_24_;
    auVar26._24_4_ = 0;
    auVar26._32_32_ = auVar17._32_32_;
    auVar26._28_4_ = 0x40000000;
    ac = ac & 0xfffffff8;
    auVar11._0_40_ = auVar26._0_40_;
    auVar17._48_16_ = auVar24._48_16_;
    if (((((float10)CONCAT44(param_4,param_3) <= (float10)CONCAT44(param_8,param_7)) ||
         (DVar33 = -(float)param_4,
         (float10)CONCAT44(param_8,param_7) <
         (float10)(longlong)(CONCAT44(param_4,param_3) ^ 0x8000000000000000))) ||
        ((float10)CONCAT44(param_4,param_3) <= (float10)CONCAT44(param_8,param_7))) ||
       (DVar33 = -(float)param_4,
       (float10)CONCAT44(param_8,param_7) <
       (float10)(longlong)(CONCAT44(param_4,param_3) ^ 0x8000000000000000))) {
      auVar11._40_4_ = 0x9999999a;
      auVar11._44_4_ = 0x3fc99999;
      fVar2 = (float10)auVar11._40_8_;
      fVar1 = (float10)CONCAT44(DVar33,(&g_player1)[param_1].y_position);
      if (!NAN(fVar1) && !NAN(fVar2)) {
        ac = ac | (uint)(fVar1 < fVar2) << 2;
        ac = ac | (uint)(fVar1 == fVar2) << 1;
        ac = ac | fVar2 < fVar1;
      }
      if (((byte)ac & 1) != 1) {
        *(undefined4 *)(&DAT_00557f40 + param_1 * 4) = 1;
        (&g_player1)[param_1].y_position = g14;
        uVar28 = auVar23._32_4_[(uVar30 & 0xff) * 0x14 + 0x10];
        (&g_player1)[param_1].animation_flag = g14._0_1_;
        Player_SetActCode(uVar28,param_1);
        return;
      }
      fp = (undefined1 *)uVar29;
      return;
    }
    auVar12._40_4_ = 0x33333333;
    auVar12._0_40_ = auVar11._0_40_;
    auVar12._44_4_ = 0x3ff33333;
    auVar17._0_48_ = auVar12;
    fVar2 = (float10)auVar12._40_8_;
    fVar1 = (float10)(longlong)
                     (CONCAT44(param_4,(&g_player1)[param_1].y_position) ^ 0x8000000000000000);
    if (!NAN(fVar1) && !NAN(fVar2)) {
      ac = ac | (uint)(fVar1 < fVar2) << 2;
      ac = ac | (uint)(fVar1 == fVar2) << 1;
      ac = ac | fVar2 < fVar1;
    }
    if (((byte)ac & 1) == 1) goto LAB_000212cc;
    *(undefined4 *)(&DAT_00557f40 + param_1 * 4) = 1;
    auVar27._50_14_ = auVar24._50_14_;
    auVar13._40_10_ = (float10)'\x01';
    auVar13._0_40_ = auVar11._0_40_;
    auVar27._0_50_ = auVar13;
    *(int *)(auVar24._16_4_ + 8) = SUB104((float10)'\x01',0);
    auVar22._48_16_ = auVar27._48_16_;
    auVar22._0_44_ = auVar13._0_44_;
    auVar22._44_4_ = 0xff;
    uVar28 = *(uint8_t *)(auVar24._32_4_ + 0x10 + (uVar30 & 0xff) * 0x14);
    *(DOA_U8 *)(auVar24._16_4_ + 0x35) = g14._0_1_;
    goto LAB_000212c0;
  }
  (&g_player1)[param_1].animation_flag = g14._0_1_;
  (&g_player1)[param_1].jump_state = g14._0_1_;
  auVar18._28_36_ = auVar17._28_36_;
  auVar18._0_24_ = auVar16._0_24_;
  DVar4 = (&g_player1)[uVar32].action_state;
  ac = ac & 0xfffffff8 | (uint)(0xF_DOWNATTACKSTUN < DVar4) << 2 |
       (uint)(DVar4 == 0xF_DOWNATTACKSTUN) << 1 | (uint)(DVar4 < 0xF_DOWNATTACKSTUN);
  bVar3 = ((byte)ac & 1 | 0xF_DOWNATTACKSTUN < DVar4) != 1;
  auVar18[0x18] = bVar3;
  auVar18._25_3_ = 0;
  auVar19._0_32_ = auVar18._0_32_;
  auVar19._32_4_ = g_attack_property_tables_by_character[(&g_player1)[param_1].character_id];
  auVar21._12_52_ = auVar19._12_52_;
  auVar21._8_4_ = 0x210d4;
  auVar21._0_8_ = uVar6;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar21;
  fp = auStackX_0;
  auVar8._4_56_ = auVar21._8_56_;
  auVar8._0_4_ = auStack_40;
  auVar8._60_4_ = 0;
  auVar20 = auVar8 << 0x20;
  uVar29 = FUN_000241e0(param_1);
  if (bVar3 && bVar3 < true) {
    auVar20._40_4_ = 0xff;
    if (auVar19._32_4_[(uVar29 & 0xff) * 0x14 + 3] == '\x01') goto LAB_00021100;
    uVar28 = auVar19._32_4_[(uVar29 & 0xff) * 0x14 + 0x10];
  }
  else {
LAB_00021100:
    auVar20._44_4_ = 0xff;
    uVar28 = auVar19._32_4_[(uVar29 & 0xff) * 0x14 + 0x11];
  }
  auVar22._0_40_ = auVar20._0_40_;
  auVar22._40_4_ = 0xff;
  ac = ac & 0xfffffff8 | (uint)(uVar28 != 0xff) << 2 | (uint)(uVar28 == 0xff) << 1;
  if (uVar28 == 0xff) {
    FUN_00023da0(param_1);
    return;
  }
  auVar22._48_16_ = auVar20._48_16_;
  auVar22._44_4_ = 0xff;
LAB_000212c0:
  Player_SetActCode(uVar28,auVar22._20_4_);
  fp = auStackX_0;
  return;
}

