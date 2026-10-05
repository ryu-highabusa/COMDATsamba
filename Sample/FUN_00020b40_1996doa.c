
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00020b40(uint param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 *puVar4;
  byte bVar5;
  DOA_ACTSTATE DVar6;
  DOA_ACTCODE_COMMON DVar7;
  DOA1_CHARACTER_ID DVar8;
  DOA_ARCADE_PLAYER *pDVar9;
  uint uVar10;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  uint uVar18;
  uint uVar19;
  undefined *puVar20;
  undefined1 auStackX_0 [64];
  
  auVar11._8_4_ = unaff_retaddr;
  auVar11._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar11._12_52_ = in_register_0000000c;
  auVar12._0_20_ = auVar11._0_20_;
  auVar12._20_4_ = param_1;
  auVar12._28_36_ = in_register_0000000c._16_36_;
  auVar12._24_4_ = param_1 ^ 1;
  auVar13._20_44_ = auVar12._20_44_;
  auVar13._0_16_ = auVar11._0_16_;
  auVar13._16_4_ = &g_player1 + param_1;
  auVar14._32_32_ = in_register_0000000c._20_32_;
  auVar14._0_28_ = auVar13._0_28_;
  auVar14._28_4_ = &g_player1 + auVar12._24_4_;
  bVar5 = (&g_player1)[param_1].animation_flag;
  uVar19 = ac & 0xfffffff8 | (uint)(1 < bVar5) << 2;
  ac = uVar19 | (uint)(bVar5 == 1) << 1 | (uint)(bVar5 == 0);
  if (((byte)ac & 1 | (byte)(uVar19 >> 2) & 1) != 1) {
    (&g_player1)[param_1].animation_flag = g14;
    auVar15._12_52_ = auVar14._12_52_;
    auVar15._8_4_ = 0x20b88;
    auVar15._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
    auVar14._8_56_ = auVar15._8_56_;
    auVar14._4_4_ = &stack0x00000040;
    auVar14._0_4_ = fp;
    FUN_00023da0(param_1);
    fp = (undefined1 *)register0x00000004;
  }
  uVar10 = ac;
  uVar19 = ac & 0xfffffff8 | (uint)(1 < (&g_player1)[param_1].action_cancel) << 2;
  ac = uVar19 | (&g_player1)[param_1].action_cancel == 0;
  if (((byte)ac & 1 | (byte)(uVar19 >> 2) & 1) != 1) {
    ac = uVar10 & 0xfffffff8 | (uint)((&g_player1)[param_1].action_request == 0xff) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      pDVar9 = &g_player1 + param_1;
      uVar18._0_1_ = pDVar9->action_request;
      uVar18._1_1_ = pDVar9->action_state;
      uVar18._2_1_ = pDVar9->pose_state;
      uVar18._3_1_ = pDVar9->down_state;
      uVar19 = uVar10 & 0xfffffff8 | (uint)(2 < (uVar18 & 0xff00ff)) << 2;
      ac = uVar19 | (uVar18 & 0xff00ff) < 2;
      if (((byte)ac & 1 | (byte)(uVar19 >> 2) & 1) == 1) {
        pDVar9 = &g_player1 + param_1;
        uVar19._0_1_ = pDVar9->action_request;
        uVar19._1_1_ = pDVar9->action_state;
        uVar19._2_1_ = pDVar9->pose_state;
        uVar19._3_1_ = pDVar9->down_state;
        puVar20 = (undefined *)(uVar19 & 0xff00ff);
        uVar19 = uVar10 & 0xfffffff8 | (uint)(puVar20 < &DAT_0001000c) << 2;
        ac = uVar19 | (uint)(puVar20 == &DAT_0001000c) << 1 | (uint)(&DAT_0001000c < puVar20);
        if (((byte)ac & 1 | (byte)(uVar19 >> 2) & 1) == 1) {
          (&g_player1)[param_1].action_flag = g14;
          (&g_player1)[param_1].cancel_use = 1;
          puVar4 = (undefined1 *)(auVar14._4_4_ + 0x3fU & 0xffffffc0);
          auVar16._12_52_ = auVar14._12_52_;
          auVar16._0_8_ = auVar14._0_8_;
          auVar16._8_4_ = 0x20bf4;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
          auVar14._8_56_ = auVar16._8_56_;
          auVar14._4_4_ = puVar4 + 0x40;
          auVar14._0_4_ = fp;
          FUN_00020040(param_1);
          fp = puVar4;
        }
        else {
          (&g_player1)[param_1].action_request = 0xff;
        }
      }
      else {
        (&g_player1)[param_1].action_request = 0xff;
      }
    }
  }
  uVar10 = ac;
  DVar6 = (&g_player1)[param_1].action_state;
  uVar19 = ac & 0xfffffff8 | (uint)(0x7_BLOCKSTUN < DVar6) << 2;
  ac = uVar19 | (uint)(DVar6 == 0x7_BLOCKSTUN) << 1 | (uint)(DVar6 < 0x7_BLOCKSTUN);
  if (((byte)ac & 1 | (byte)(uVar19 >> 2) & 1) != 1) {
    DVar7 = (&g_player1)[param_1].action_code;
    ac = uVar10 & 0xfffffff8 | (uint)(DVar7 < CMD_SIT_REAR_UP_F) << 2 |
         (uint)(DVar7 == CMD_SIT_REAR_UP_F) << 1 | (uint)(CMD_SIT_REAR_UP_F < DVar7);
    if (((byte)ac & 1) != 1) {
      uVar19 = uVar10 & 0xfffffff8 | (uint)((&g_player1)[param_1].action_cancel != '\0') << 2;
      ac = uVar19 | (uint)((&g_player1)[param_1].action_cancel == '\0') << 1;
      if (((byte)(uVar19 >> 2) & 1) != 1) {
        bVar5 = (&DAT_00557f24)[auVar12._24_4_];
        DVar8 = (&g_player1)[auVar12._24_4_].character_id;
        auVar17._12_52_ = auVar14._12_52_;
        auVar17._0_8_ = auVar14._0_8_;
        auVar17._8_4_ = 0x20c20;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
        auVar14._8_56_ = auVar17._8_56_;
        auVar14._4_4_ = (undefined1 *)0x0;
        auVar14._0_4_ = fp;
        FUN_00025600((uint)bVar5,(uint)DVar8);
        fVar3 = (float10)(int)((DAT_005555fe - 1) + (uint)DAT_00555600);
        fVar2 = (float10)0x4000000000000000;
        fVar1 = (float10)SUB108(fVar3,0);
        ac = ac & 0xfffffff8;
        if (!NAN(fVar1) && !NAN(fVar2)) {
          ac = ac | (uint)(fVar1 < fVar2) << 2;
          ac = ac | (uint)(fVar1 == fVar2) << 1;
          ac = ac | fVar2 < fVar1;
        }
        if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) {
          (&g_player1)[param_1].animation_speed =
               SUB104((float10)39.0 /
                      (float10)SUB104((float10)SUB104((float10)SUB104(fVar3,0) -
                                                      (float10)CONCAT22((short)((unkuint10)
                                                                                (float10)(int)(char)
                                                  g_attack_metadata_table_by_character
                                                  [(&g_player1)[auVar12._24_4_].character_id]
                                                  [(uint)(byte)(&DAT_00557f82)[auVar12._24_4_] *
                                                   0x14 + 0xe] >> 0x10),
                                                  (short)((unkuint10)fVar3 >> 0x40)),0) - (float10)1
                                      ,0),0);
          return;
        }
        (&g_player1)[param_1].animation_speed = 40.0;
      }
    }
  }
  fp = (undefined1 *)auVar14._0_4_;
  return;
}

