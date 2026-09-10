
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00003670(void)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 *unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auStackX_0 [1000000];
  
  uVar2 = ac;
  uVar1 = CONCAT44(auStackX_0,unaff_pfp);
  ac = ac & 0xfffffff8 | (uint)(1 < DAT_0054fcff) << 2 | (uint)(DAT_0054fcff == 1) << 1 |
       (uint)(DAT_0054fcff == 0);
  if (((byte)ac & 1 | 1 < DAT_0054fcff) != 1) {
    DAT_0054fcff = g14;
    GameMode = MODE_FIGHT;
    auVar3._8_4_ = 0x3698;
    auVar3._0_8_ = uVar1;
    auVar3._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar3;
    FUN_00008290(2);
    FUN_00008220(&LAB_00016a60,2);
    fp = auStackX_0;
    return;
  }
  if (g_player1.controller_type == MAN) {
    ac = uVar2 & 0xfffffff8 | (uint)(g_player2.controller_type != COM) << 2 |
         (uint)(g_player2.controller_type == COM) << 1;
    if (g_player2.controller_type == COM) {
      ac = uVar2 & 0xfffffff8 | (uint)(1 < DAT_0054fcf8) << 2 | (uint)(DAT_0054fcf8 == 1) << 1 |
           (uint)(DAT_0054fcf8 == 0);
      if (((byte)ac & 1 | 1 < DAT_0054fcf8) != 1) {
        DAT_0054fcf8 = g14;
        GameOverFlag____0054fcb4 = 1;
        g_player2.controller_type = MAN;
        DAT_0054fd01 = 1;
        auVar4._8_4_ = 0x36fc;
        auVar4._0_8_ = uVar1;
        auVar4._12_52_ = in_register_0000000c;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
        FUN_00004640(1);
        unaff_pfp = (undefined1 *)register0x00000004;
        FUN_00004840(1);
      }
    }
    fp = unaff_pfp;
    return;
  }
  ac = uVar2 & 0xfffffff8 | (uint)(1 < DAT_0054fcee) << 2 | (uint)(DAT_0054fcee == 1) << 1 |
       (uint)(DAT_0054fcee == 0);
  if (((byte)ac & 1 | 1 < DAT_0054fcee) != 1) {
    DAT_0054fcee = g14;
    GameOverFlag____0054fcb4 = 1;
    g_player1.controller_type = MAN;
    DAT_0054fd00 = 1;
    auVar5._8_4_ = 0x3740;
    auVar5._0_8_ = uVar1;
    auVar5._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
    FUN_00004640(1);
    unaff_pfp = (undefined1 *)register0x00000004;
    FUN_00004840(0);
  }
  fp = unaff_pfp;
  return;
}

