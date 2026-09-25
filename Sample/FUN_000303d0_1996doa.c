
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Battle_ResolveInteractionPriority(void)

{
  float10 fVar1;
  float10 fVar2;
  uint uVar3;
  DOA_ACTSTATE DVar4;
  DOA_ACTCODE_COMMON DVar5;
  byte bVar6;
  undefined4 unaff_pfp;
  undefined4 uVar7;
  undefined4 unaff_retaddr;
  uint uVar12;
  undefined1 in_register_0000000c [52];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined *puVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar11 [64];
  undefined1 auVar9 [64];
  
  auVar8._4_4_ = auStackX_0;
  auVar8._0_4_ = unaff_pfp;
  auVar8._8_4_ = unaff_retaddr;
  auVar8._12_52_ = in_register_0000000c;
  auVar9._28_36_ = in_register_0000000c._16_36_;
  auVar9._0_24_ = auVar8._0_24_;
  auVar9._24_4_ = &FLOAT_000b5f30;
  auVar10._0_16_ = auVar8._0_16_;
  auVar10._16_4_ = 0;
  auVar10._24_40_ = auVar9._24_40_;
  auVar10._20_4_ = &g_player1;
  do {
    uVar3 = ac;
    uVar12 = auVar10._16_4_;
    uVar14 = uVar12;
    if ((&g_player1)[uVar12].action_flag == '\x01') {
      uVar14 = uVar12 ^ 1;
    }
    bVar15 = (&g_player1)[uVar12].action_state - STATE_BLOCKSTUN;
    uVar16 = ac & 0xfffffff8 | (uint)(1 < bVar15) << 2 | (uint)(bVar15 == 1) << 1;
    ac = uVar16 | (&g_player1)[uVar12].action_state == STATE_BLOCKSTUN;
    if (((byte)ac & 1 | (byte)(uVar16 >> 1) & 1) == 1) {
LAB_00030444:
      DVar5 = (&g_player1)[uVar12].action_code;
      uVar3 = auVar10._4_4_ + 0x3fU & 0xffffffc0;
      auVar11._12_52_ = auVar10._12_52_;
      auVar11._0_8_ = auVar10._0_8_;
      auVar11._8_4_ = 0x30464;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar11;
      auVar10._8_56_ = auVar11._8_56_;
      auVar10._4_4_ = uVar3 + 0x40;
      auVar10._0_4_ = fp;
      puVar13 = FUN_00025680(uVar12,uVar14,DVar5);
      ac = ac & 0xfffffff8;
      fp = uVar3;
      if ((&g_player1)[uVar12 ^ 1].pose_state == '\x01') {
        bVar15 = puVar13[6];
      }
      else {
        bVar15 = puVar13[5];
      }
    }
    else {
      DVar4 = (&g_player1)[uVar12].action_state;
      uVar16 = uVar3 & 0xfffffff8 | (uint)(STATE_HITSTUN < DVar4) << 2 |
               (uint)(DVar4 == STATE_HITSTUN) << 1;
      ac = uVar16 | DVar4 < STATE_HITSTUN;
      if ((((byte)(uVar16 >> 1) & 1) == 1) ||
         (ac = uVar3 & 0xfffffff8 | (uint)(STATE_DOWNATTACKSTUN < DVar4) << 2 |
               (uint)(DVar4 == STATE_DOWNATTACKSTUN) << 1 | (uint)(DVar4 < STATE_DOWNATTACKSTUN),
         ((byte)ac & 1 | STATE_DOWNATTACKSTUN < DVar4) != 1)) goto LAB_00030444;
      uVar16 = uVar12 ^ 1;
      if (((&g_player1)[uVar16].action_state == STATE_GROUNDED) ||
         (((&g_player1)[uVar16].pose_state == '\x01' &&
          ((&g_player1)[uVar16].action_state != STATE_JUMPATTACK &&
           (&g_player1)[uVar16].action_state != STATE_ATTACK)))) {
        ac = uVar3 & 0xfffffff8;
        bVar15 = g_character_act_record_tables[(&g_player1)[uVar14].character_id]
                 [(uint)(&g_player1)[uVar12].action_code * 8 + 6];
      }
      else {
        ac = uVar3 & 0xfffffff8;
        bVar15 = g_character_act_record_tables[(&g_player1)[uVar14].character_id]
                 [(uint)(&g_player1)[uVar12].action_code * 8 + 5];
      }
    }
    uVar14 = ac;
    uVar7 = auVar10._0_4_;
    (&DAT_005647d2)[uVar12] = bVar15;
    auVar10._16_4_ = uVar12 + 1;
    uVar3 = ac | (uint)(auVar10._16_4_ == 1) << 1;
    ac = uVar3 | auVar10._16_4_ < 1;
    if (((byte)ac & 1 | (byte)(uVar3 >> 1) & 1) != 1) {
      ac = uVar14 | (uint)(DAT_005647d2 != 0xff) << 2 | (uint)(DAT_005647d2 == 0xff) << 1;
      if ((((byte)(ac >> 1) & 1) != 1) &&
         (ac = uVar14 | (uint)(DAT_005647d3 != 0xff) << 2 | (uint)(DAT_005647d3 == 0xff) << 1,
         ((byte)(ac >> 1) & 1) != 1)) {
        if (DAT_005647d3 < DAT_005647d2 || DAT_005647d2 < DAT_005647d3) {
          fVar2 = (float10)(int)(&FLOAT_000b5f30)[DAT_005647d3];
          fVar1 = (float10)(int)(&FLOAT_000b5f30)[DAT_005647d2];
          ac = uVar14;
          if (!NAN(fVar1) && !NAN(fVar2)) {
            ac = uVar14 | (uint)(fVar1 < fVar2) << 2;
            ac = ac | (uint)(fVar1 == fVar2) << 1;
            ac = ac | fVar2 < fVar1;
          }
          if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) {
            fp = uVar7;
            DAT_005647d0 = 2;
            DAT_005647d1 = g14;
            return;
          }
        }
        else {
          bVar15 = (&BYTE_000b60a0)[g_player1.character_id];
          bVar6 = (&BYTE_000b60a0)[g_player2.character_id];
          ac = uVar14 | (uint)(bVar15 < bVar6) << 2 | (uint)(bVar15 == bVar6) << 1 |
               (uint)(bVar6 < bVar15);
          if (((byte)ac & 1 | bVar15 < bVar6) != 1) {
            DAT_005647d0 = 1;
            DAT_005647d1 = 1;
            fp = uVar7;
            return;
          }
          bVar15 = (&BYTE_000b60a0)[g_player1.character_id];
          bVar6 = (&BYTE_000b60a0)[g_player2.character_id];
          ac = uVar14 | (uint)(bVar15 < bVar6) << 2 | (uint)(bVar15 == bVar6) << 1 |
               (uint)(bVar6 < bVar15);
          if (((byte)ac & 1) == 1) {
            DAT_005647d0 = 2;
            DAT_005647d1 = g14;
            fp = uVar7;
            return;
          }
        }
        DAT_005647d0 = g14;
        DAT_005647d1 = 2;
      }
      fp = uVar7;
      return;
    }
  } while( true );
}

