
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00044830(int param_1)

{
  uint uVar1;
  uint16_t uVar2;
  short sVar3;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auStackX_0 [1000000];
  undefined1 auVar6 [64];
  
  auVar4._8_4_ = unaff_retaddr;
  auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar4._12_52_ = in_register_0000000c;
  uVar2 = g_motion_frame_counter_P1[param_1];
  uVar1 = ac & 0xfffffff8 | (uint)(0 < (short)uVar2) << 2 | (uint)(uVar2 == 0) << 1;
  ac = uVar1 | (short)uVar2 < 0;
  auVar5._20_44_ = in_register_0000000c._8_44_;
  auVar5._0_16_ = auVar4._0_16_;
  auVar5._16_4_ = param_1;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    auVar6._12_52_ = auVar5._12_52_;
    auVar6._8_4_ = 0x44848;
    auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar6;
    auVar5._8_56_ = auVar6._8_56_;
    auVar5._4_4_ = 0;
    auVar5._0_4_ = fp;
    FUN_000448f0(param_1);
  }
  uVar1 = ac;
  uVar2 = g_motion_frame_counter_P1[param_1];
  ac = ac & 0xfffffff8 | (uint)(0 < (short)uVar2) << 2 | (uint)(uVar2 == 0) << 1 |
       (uint)((short)uVar2 < 0);
  if (((byte)ac & 1 | 0 < (short)uVar2) != 1) {
    sVar3 = (&DAT_005882b0)[param_1];
    uVar1 = uVar1 & 0xfffffff8 | (uint)(0 < sVar3) << 2 | (uint)(sVar3 == 0) << 1;
    ac = uVar1 | sVar3 < 0;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      g_motion_script_refresh_request_P1[param_1] = '\x01';
      g_motion_frame_counter_P1[param_1] = 1;
      DAT_00588744 = 1;
      (&g_player1)[param_1].animation_flag = (DOA_U8)g14;
      (&DAT_005882b0)[param_1] = g14;
    }
  }
  (&g_player1)[param_1].animation_speed = SUB104((float10)'\x01',0);
  fp = auVar5._0_4_;
  return;
}

