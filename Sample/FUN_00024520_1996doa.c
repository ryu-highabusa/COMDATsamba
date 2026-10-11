
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Battle_UpdatePlayerDirectionAdjustments_candidate(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined4 unaff_pfp;
  undefined4 uVar4;
  int iVar10;
  undefined4 unaff_retaddr;
  uint player_index;
  undefined1 in_register_0000000c [52];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  uint32_t uVar11;
  int iVar12;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar7 [64];
  
  auVar5._4_4_ = auStackX_0;
  auVar5._0_4_ = unaff_pfp;
  auVar5._8_4_ = unaff_retaddr;
  auVar5._12_52_ = in_register_0000000c;
  auVar6._20_44_ = in_register_0000000c._8_44_;
  auVar6._0_16_ = auVar5._0_16_;
  auVar6._16_4_ = 0;
  do {
    uVar1 = ac;
    player_index = auVar6._16_4_;
    iVar10 = auVar6._4_4_;
    auVar7._0_8_ = auVar6._0_8_;
    auVar7._12_52_ = auVar6._12_52_;
    if ((&g_player1)[player_index].action_state == 0x0_NEUTRAL) {
      if ((byte)((&g_player1)[player_index].action_code - CMD_DASH_FRONT) < 4) goto LAB_00024580;
      if ((byte)((&g_player1)[player_index].action_code - CMD_LO_DASH_F1) < 2) goto LAB_00024580;
      uVar11 = g_auto_facing_adjustment_pending[player_index];
      ac = ac & 0xfffffff8 | (uint)(1 < (int)uVar11) << 2 | (uint)(uVar11 == 1) << 1 |
           (uint)((int)uVar11 < 1);
      if (((byte)ac & 1 | 1 < (int)uVar11) == 1) {
        ac = uVar1 & 0xfffffff8 | (uint)((&g_player1)[player_index].hit_body == '\x01') << 1;
        if (((byte)(ac >> 1) & 1) != 1) {
          iVar12 = player_index * 2;
          if (2 < (byte)(&DAT_00557f78)[iVar12]) {
            if (8 < (byte)((&DAT_00557f78)[iVar12] - 7)) {
              uVar2 = uVar1 & 0xfffffff8 |
                      (uint)((&g_player1)[player_index].action_code == CMD_BACK) << 1;
              ac = uVar2 | (&g_player1)[player_index].action_code < CMD_BACK;
              if (((byte)ac & 1 | (byte)(uVar2 >> 1) & 1) != 1) {
                ac = uVar1 & 0xfffffff8;
                if (8 < (byte)((&g_player1)[player_index].action_code - CMD_SITDOWN))
                goto LAB_00024674;
              }
              g_auto_facing_adjustment_pending[player_index] = 1;
              goto LAB_00024674;
            }
          }
          ac = uVar1 & 0xfffffff8;
          if (!NAN((float10)CONCAT44(iVar12,g_interplayer_xz_distance)) &&
              !NAN((float10)0x3fe0000000000000)) {
            ac = ac | (uint)((float10)CONCAT44(iVar12,g_interplayer_xz_distance) <
                            (float10)0x3fe0000000000000) << 2;
          }
          if (((byte)(ac >> 2) & 1) != 1) {
            ac = ac & 0xfffffff8 | (uint)((&g_player1)[player_index].action_request != 0xff) << 2 |
                 (uint)((&g_player1)[player_index].action_request == 0xff) << 1;
            if (((byte)(ac >> 1) & 1) != 1) {
              auVar9._8_4_ = 0x24648;
              auVar9._0_8_ = auVar7._0_8_;
              auVar9._12_52_ = auVar7._12_52_;
              *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar9;
              auVar6._8_56_ = auVar9._8_56_;
              auVar6._4_4_ = (iVar10 + 0x3fU & 0xffffffc0) + 0x40;
              auVar6._0_4_ = fp;
              Player_AlignFacingToInterplayerAxis(player_index,0);
              fp = iVar10 + 0x3fU & 0xffffffc0;
            }
          }
        }
      }
      else {
        uVar1 = iVar10 + 0x3fU & 0xffffffc0;
        auVar8._8_4_ = 0x245cc;
        auVar8._0_8_ = auVar7._0_8_;
        auVar8._12_52_ = auVar7._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar8;
        auVar6._8_56_ = auVar8._8_56_;
        auVar6._4_4_ = uVar1 + 0x40;
        auVar6._0_4_ = fp;
        uVar11 = Player_AlignFacingToInterplayerAxis(player_index,1);
        ac = ac & 0xfffffff8 | (uint)((int)uVar11 < 0);
        fp = uVar1;
        if (((byte)ac & 1 | 0 < (int)uVar11) != 1) {
          g_auto_facing_adjustment_pending[player_index] = g14;
        }
      }
    }
    else {
LAB_00024580:
      g_auto_facing_adjustment_pending[player_index] = g14;
      ac = ac & 0xfffffff8 | (uint)((&g_player1)[player_index ^ 1].action_state < 0xD_SPECIALMOVE);
      if (((byte)ac & 1 | 0xD_SPECIALMOVE < (&g_player1)[player_index ^ 1].action_state) != 1) {
        ac = uVar1 & 0xfffffff8 |
             (uint)((&g_player1)[player_index ^ 1].action_code == (0x90|CMD_SITDOWN_FRONT)) << 1;
        if (((byte)(ac >> 1) & 1) == 1) goto LAB_00024674;
      }
      bVar3 = (&g_player1)[player_index].direction_adjust;
      ac = ac & 0xfffffff8 | (uint)(1 < bVar3) << 2 | (uint)(bVar3 == 1) << 1 | (uint)(bVar3 == 0);
      if (((byte)ac & 1 | 1 < bVar3) != 1) {
        auVar7._8_4_ = 0x245b0;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar7;
        auVar6._8_56_ = auVar7._8_56_;
        auVar6._4_4_ = (iVar10 + 0x3fU & 0xffffffc0) + 0x40;
        auVar6._0_4_ = fp;
        Player_AlignFacingToInterplayerAxis(player_index,1);
        fp = iVar10 + 0x3fU & 0xffffffc0;
      }
    }
LAB_00024674:
    uVar4 = auVar6._0_4_;
    auVar6._16_4_ = player_index + 1;
    uVar1 = ac & 0xfffffff8 | (uint)(1 < auVar6._16_4_) << 2 | (uint)(auVar6._16_4_ == 1) << 1;
    ac = uVar1 | auVar6._16_4_ < 1;
    if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
      fp = uVar4;
      return;
    }
  } while( true );
}

