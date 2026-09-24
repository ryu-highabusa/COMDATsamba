
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000318d0(uint param_1,undefined4 param_2,DOA_F32 param_3)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  int iVar5;
  undefined1 auVar6 [20];
  byte *pbVar7;
  uint uVar8;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined8 in_register_0000000c;
  int iVar22;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 in_register_00000030 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  DOA_F32 DVar23;
  undefined2 uVar25;
  undefined2 uVar26;
  uint uVar24;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar16 [64];
  undefined1 auVar10 [64];
  undefined1 auVar9 [32];
  
  auVar6._8_4_ = unaff_retaddr;
  auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar6._12_8_ = in_register_0000000c;
  auVar10._20_4_ = unaff_r5;
  auVar10._0_20_ = auVar6;
  auVar10._24_4_ = unaff_r6;
  auVar10._28_4_ = unaff_r7;
  auVar10._32_4_ = unaff_r8;
  auVar10._36_4_ = unaff_r9;
  auVar10._40_4_ = unaff_r10;
  auVar10._44_4_ = unaff_r11;
  auVar10._48_16_ = in_register_00000030;
  auVar11._20_44_ = auVar10._20_44_;
  auVar11._0_16_ = auVar6._0_16_;
  auVar11._16_4_ = param_1;
  ac = ac & 0xfffffff8;
  uVar24 = param_1;
  if ((&g_player1)[param_1].action_flag == '\x01') {
    uVar24 = param_1 ^ 1;
  }
  pbVar7 = g_character_combat_record_table_candidate[(&g_player1)[param_1].character_id] +
           (uint)(byte)g_character_act_record_tables[(&g_player1)[uVar24].character_id]
                       [(uint)(&g_player1)[param_1].action_code * 8 + 4] * 0x14;
  auVar12._46_18_ = auVar10._46_18_;
  auVar12._0_36_ = auVar11._0_36_;
  auVar12._36_10_ = (float10)*pbVar7;
  auVar13._0_28_ = auVar11._0_28_;
  auVar13._28_4_ = *(undefined4 *)(pbVar7 + 4);
  auVar13._36_28_ = auVar12._36_28_;
  auVar13._32_4_ = FLOAT_0009cde8;
  auVar14._44_20_ = auVar12._44_20_;
  auVar14._0_40_ = auVar13._0_40_;
  auVar14._40_4_ = *(undefined4 *)(pbVar7 + 0xc);
  iVar22 = *(int *)(pbVar7 + 8);
  fVar2 = (float10)DAT_005555a4;
  auVar17._34_30_ = auVar14._34_30_;
  auVar17._0_24_ = auVar11._0_24_;
  auVar17._24_10_ = fVar2 + (float10)iVar22;
  uVar24 = param_1 ^ 1;
  uVar25 = (undefined2)(param_1 >> 0x10);
  DVar23 = (&g_player1)[uVar24].y_position;
  fVar4 = (float10)CONCAT26(uVar25,CONCAT24((short)uVar24,DVar23));
  fVar3 = (float10)'\x01';
  if (!NAN(fVar3) && !NAN(fVar4)) {
    ac = ac | (uint)(fVar3 == fVar4) << 1;
    ac = ac | fVar4 < fVar3;
  }
  uVar8 = ac;
  if (((byte)ac & 1 | (byte)(ac >> 1) & 1) != 1) {
    auVar17._44_4_ = 0xff;
    auVar17._48_16_ = in_register_00000030;
    uVar1 = ac & 0xfffffff8 | (uint)((&g_player1)[uVar24].action_state == STATE_THROWCAUGHT) << 1;
    ac = uVar1 | (&g_player1)[uVar24].action_state == STATE_HITSTUN;
    if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
      DVar23 = (DOA_F32)(uint)(&g_player1)[uVar24].action_state;
      ac = uVar8 & 0xfffffff8 | (uint)(DVar23 == 1.54143e-44) << 1;
      if ((((byte)(ac >> 1) & 1) != 1) &&
         (ac = uVar8 & 0xfffffff8 | (uint)((uint)DVar23 < 0xf),
         ((byte)ac & 1 | 0xf < (uint)DVar23) == 1)) goto LAB_00031acc;
    }
    iVar5 = (param_1 ^ 1) * 0xb;
    uVar26 = (undefined2)((uint)iVar5 >> 0x10);
    fVar4 = (float10)CONCAT26(uVar26,CONCAT24((short)iVar5,CONCAT22(uVar25,(short)(param_1 ^ 1))));
    fVar3 = (float10)'\x01';
    ac = ac & 0xfffffff8;
    if (!NAN(fVar3) && !NAN(fVar4)) {
      ac = ac | (uint)(fVar3 < fVar4) << 2;
      ac = ac | (uint)(fVar3 == fVar4) << 1;
      ac = ac | fVar4 < fVar3;
    }
    if (((byte)ac & 1 | (byte)(ac >> 1) & 1) != 1) {
      do {
        fVar4 = (float10)(longlong)(CONCAT26(uVar26,CONCAT44(iVar5,CONCAT24(uVar25,param_1))) ^ 1);
        fVar3 = (float10)'\x01';
        ac = ac & 0xfffffff8;
        if (!NAN(fVar3) && !NAN(fVar4)) {
          ac = ac | (uint)(fVar3 < fVar4) << 2;
          ac = ac | (uint)(fVar3 == fVar4) << 1;
          ac = ac | fVar4 < fVar3;
        }
      } while (((byte)(ac >> 2) & 1) == 1);
    }
    DVar23 = (&g_player1)[param_1 ^ 1].x_position;
    param_3 = (&g_player1)[param_1 ^ 1].z_position;
    auVar16._12_52_ = auVar17._12_52_;
    auVar16._8_4_ = 0x31aa4;
    auVar16._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar16;
    auVar15._8_56_ = auVar16._8_56_;
    auVar15._4_4_ = auStack_40;
    auVar15._0_4_ = fp;
    FUN_00006320(DVar23,0,param_3,DVar23,0,iVar5);
    DVar23 = 0.0;
    uVar24 = 0;
    uVar25 = 0x3fe0;
    auVar17._34_30_ = auVar15._34_30_;
    auVar17._0_24_ = auVar15._0_24_;
    auVar17._24_10_ = (float10)SUB104(fVar2 + (float10)iVar22,0);
  }
LAB_00031acc:
  iVar22 = auVar17._16_4_;
  ac = ac & 0xfffffff8;
  if ((float10)'\0' <= (float10)CONCAT26(uVar25,CONCAT44(uVar24,(uint)(uint)DVar23))) {
    if ((float10)auVar17._28_4_ < (float10)auVar17._24_4_) {
      auVar17._24_4_ = auVar17._28_4_;
    }
  }
  else {
    auVar17._24_4_ = 0;
  }
  auVar18._0_20_ = auVar17._0_20_;
  auVar18._24_40_ = auVar17._24_40_;
  if (iVar22 == 0) {
    auVar18._20_4_ = DAT_005555a8 & 0xffff;
    auVar9 = auVar18._0_32_;
  }
  else {
    auVar19._20_4_ = DAT_005555a8 + 0x8000;
    auVar19._0_20_ = auVar18._0_20_;
    auVar19._24_40_ = auVar18._24_40_;
    auVar20._48_16_ = auVar17._48_16_;
    auVar20._0_44_ = auVar19._0_44_;
    auVar20._44_4_ = 0xffff;
    auVar21._24_40_ = auVar20._24_40_;
    auVar21._20_4_ = DAT_005555a8 + 0x8000 & 0xffff;
    auVar21._0_20_ = auVar18._0_20_;
    auVar9 = auVar21._0_32_;
    DVar23 = (DOA_F32)DAT_005555a8;
  }
  fVar3 = (float10)CONCAT26((short)((unkuint10)((float10)auVar9._24_4_ / (float10)auVar9._28_4_) >>
                                   0x30),CONCAT44(uVar24,(uint)(uint)DVar23));
  fVar2 = (float10)'\0';
  if (!NAN(fVar2) && !NAN(fVar3)) {
    ac = ac | (uint)(fVar2 < fVar3) << 2;
    ac = ac | (uint)(fVar2 == fVar3) << 1;
    ac = ac | fVar3 < fVar2;
  }
  if (((byte)ac & 1 | (byte)(ac >> 2) & 1) != 1) {
    param_3 = 0.0;
  }
  iVar22 = auVar9._16_4_;
  DAT_008801e0 = 0x1e1e;
  *(int *)PTR_DAT_000006a4 = auVar9._20_4_;
  *(DOA_F32 *)PTR_DAT_000006a0 = param_3;
  (&DAT_005647e0)[iVar22] = *(undefined4 *)PTR_DAT_000006a0;
  (&DAT_005647e8)[iVar22] = g13;
  DAT_008801d0 = 0x1d1d;
  *(int *)PTR_DAT_000006a4 = auVar9._20_4_;
  *(DOA_F32 *)PTR_DAT_000006a0 = param_3;
  (&DAT_005647f0)[iVar22] = *(undefined4 *)PTR_DAT_000006a0;
  fp = auVar9._0_4_;
  return;
}

