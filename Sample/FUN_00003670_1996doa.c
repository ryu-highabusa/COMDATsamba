
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00003670(void)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auStackX_0 [1000000];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  
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
    Task_RegisterOrReplace(&LAB_00016a60,2);
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
        auVar5._8_4_ = 0x36fc;
        auVar5._0_8_ = uVar1;
        auVar5._12_52_ = in_register_0000000c;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
        auVar4._8_56_ = auVar5._8_56_;
        auVar4._4_4_ = auStackX_0;
        auVar4._0_4_ = fp;
        FUN_00004640(1);
        auVar7._12_52_ = auVar4._12_52_;
        auVar7._0_8_ = auVar4._0_8_;
        auVar7._8_4_ = 0x3704;
        auVar6._8_56_ = auVar7._8_56_;
        auVar6._4_4_ = 0;
        auVar6._0_4_ = auStackX_0;
        FUN_00004840(1);
        unaff_pfp = auVar6._0_4_;
      }
    }
    fp = (undefined1 *)unaff_pfp;
    return;
  }
  ac = uVar2 & 0xfffffff8 | (uint)(1 < DAT_0054fcee) << 2 | (uint)(DAT_0054fcee == 1) << 1 |
       (uint)(DAT_0054fcee == 0);
  if (((byte)ac & 1 | 1 < DAT_0054fcee) != 1) {
    DAT_0054fcee = g14;
    GameOverFlag____0054fcb4 = 1;
    g_player1.controller_type = MAN;
    DAT_0054fd00 = 1;
    auVar9._8_4_ = 0x3740;
    auVar9._0_8_ = uVar1;
    auVar9._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
    auVar8._8_56_ = auVar9._8_56_;
    auVar8._4_4_ = auStackX_0;
    auVar8._0_4_ = fp;
    FUN_00004640(1);
    auVar11._12_52_ = auVar8._12_52_;
    auVar11._0_8_ = auVar8._0_8_;
    auVar11._8_4_ = 0x3748;
    auVar10._8_56_ = auVar11._8_56_;
    auVar10._4_4_ = 0;
    auVar10._0_4_ = auStackX_0;
    FUN_00004840(0);
    unaff_pfp = auVar10._0_4_;
  }
  fp = (undefined1 *)unaff_pfp;
  return;
}

