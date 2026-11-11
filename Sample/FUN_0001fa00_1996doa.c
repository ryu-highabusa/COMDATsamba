
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0001fa00(void)

{
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar1 [64];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  auVar1._8_4_ = unaff_retaddr;
  auVar1._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar1._12_52_ = in_register_0000000c;
  if (DAT_00557f2c != 0) goto LAB_0001fb2c;
  DAT_00557f2c = 1;
  g_player1.animation_flag = g14;
  g_player2.animation_flag = g14;
  if (GameOverFlag____0054fcb4 == 4) {
LAB_0001fab8:
    g_player1.action_code = g14;
LAB_0001fac0:
    g_player2.action_code = g14;
  }
  else {
    if (BYTE_005555e4 != 1) goto LAB_0001fab8;
    if (GameOverFlag____0054fcb4 == 0) {
      if (g_player1._0_2_ != 0xb00) goto LAB_0001fa6c;
      g_player1.action_code = 0x8b;
      goto LAB_0001fac0;
    }
LAB_0001fa6c:
    if (GameOverFlag____0054fcb4 == 0) {
      if (g_player2._0_2_ != 0xb00) goto LAB_0001faa0;
      g_player1.action_code = g14;
      g_player2.action_code = 0x8b;
    }
    else {
LAB_0001faa0:
      g_player1.action_code = 0x8b;
      g_player2.action_code = 0x8b;
    }
  }
  g_player1.action_state = g14;
  g_player2.action_state = g14;
  DAT_00557f78 = g14;
  DAT_00557f79 = g14;
  DAT_00557f7a = g14;
  DAT_00557f7b = g14;
  DAT_00557f7c = g14;
  DAT_00557f7d = g14;
  DAT_00557f7e = g14;
  DAT_00557f7f = g14;
  g_player1.animation_request = '\x01';
  g_player2.animation_request = '\x01';
LAB_0001fb2c:
  ac = ac & 0xfffffff8 | (uint)(1 < g_player1.animation_flag) << 2 |
       (uint)(g_player1.animation_flag == '\x01') << 1 | (uint)(g_player1.animation_flag == '\0');
  if (((byte)ac & 1 | 1 < g_player1.animation_flag) != 1) {
    g_player1.animation_flag = g14;
    auVar2._8_4_ = 0x1fb48;
    auVar2._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    auVar2._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar2;
    auVar1._8_56_ = auVar2._8_56_;
    auVar1._4_4_ = auStack_40;
    auVar1._0_4_ = fp;
    FUN_00023da0(0);
    fp = (undefined1 *)register0x00000004;
  }
  ac = ac & 0xfffffff8 | (uint)(1 < g_player2.animation_flag) << 2 |
       (uint)(g_player2.animation_flag == '\x01') << 1 | (uint)(g_player2.animation_flag == '\0');
  if (((byte)ac & 1 | 1 < g_player2.animation_flag) != 1) {
    g_player2.animation_flag = g14;
    auVar3._12_52_ = auVar1._12_52_;
    auVar3._0_8_ = auVar1._0_8_;
    auVar3._8_4_ = 0x1fb64;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar3;
    auVar1._8_56_ = auVar3._8_56_;
    auVar1._4_4_ = (undefined1 *)0x0;
    auVar1._0_4_ = fp;
    FUN_00023da0(1);
  }
  g_player1.action_request = 0xff;
  g_player2.action_request = 0xff;
  fp = (undefined1 *)auVar1._0_4_;
  return;
}

