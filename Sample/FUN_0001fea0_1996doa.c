
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0001fea0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar3 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar3._4_4_ = auStackX_0;
  auVar3._0_4_ = unaff_pfp;
  auVar3._12_52_ = in_register_00000008._4_52_;
  auVar3._8_4_ = 0x1fea4;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar3;
  Battle_UpdatePlayerDirectionAdjustments_candidate();
  FUN_00023800();
  uVar2 = ac;
  g_player1.danger_flag = g14;
  g_player2.danger_flag = g14;
  g_player1.beat_hit_state = g14;
  g_player2.beat_hit_state = g14;
  g_player1.combo_start = g14;
  g_player2.combo_start = g14;
  g_player1.cancel_use = g14;
  g_player2.cancel_use = g14;
  if (g_player1.action_state != 0x8_CRITICALSTUN && g_player1.action_state != 0x9_HITSTUN) {
    if (g_player1.action_state != 0xA_THROWCAUGHT && g_player1.action_state != 0xB_HOLDCAUGHT) {
      g_player2.combo_flag = g14;
    }
  }
  uVar1 = ac & 0xfffffff8 | (uint)(1 < (byte)(g_player2.action_state - 0x8_CRITICALSTUN)) << 2 |
          (uint)((DOA_ACTSTATE)(g_player2.action_state - 0x8_CRITICALSTUN) == 1) << 1;
  ac = uVar1 | g_player2.action_state == 0x8_CRITICALSTUN;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    uVar2 = uVar2 & 0xfffffff8 | (uint)(1 < (byte)(g_player2.action_state - 0xA_THROWCAUGHT)) << 2 |
            (uint)((DOA_ACTSTATE)(g_player2.action_state - 0xA_THROWCAUGHT) == 1) << 1;
    ac = uVar2 | g_player2.action_state == 0xA_THROWCAUGHT;
    if (((byte)ac & 1 | (byte)(uVar2 >> 1) & 1) != 1) {
      g_player1.combo_flag = g14;
    }
  }
  fp = auStackX_0;
  return;
}

