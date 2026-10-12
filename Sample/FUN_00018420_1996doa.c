
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00018420(void)

{
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar2 [64];
  uint uVar3;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar1 [64];
  
  uVar3 = ac;
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  if (GameOverFlag____0054fcb4 != 0) {
    ac = ac & 0xfffffff8 | (uint)(4 < GameOverFlag____0054fcb4) << 2 |
         (uint)(GameOverFlag____0054fcb4 == 4) << 1 | (uint)(GameOverFlag____0054fcb4 < 4);
    if (((byte)ac & 1 | 4 < GameOverFlag____0054fcb4) == 1) {
      StageNumber = OrderStagesVsMAN_00090ca0[DAT_0054fd8d];
      DAT_0054fd8d = DAT_0054fd8d + 1;
      uVar3 = uVar3 & 0xfffffff8 | (uint)(8 < DAT_0054fd8d) << 2 | (uint)(DAT_0054fd8d == 8) << 1;
      ac = uVar3 | DAT_0054fd8d < 8;
      if (((byte)ac & 1 | (byte)(uVar3 >> 1) & 1) != 1) {
        DAT_0054fd8d = g14;
      }
    }
    else {
      auVar2._8_4_ = 0x18450;
      auVar2._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar2;
      auVar1._8_56_ = auVar2._8_56_;
      auVar1._4_4_ = 0;
      auVar1._0_4_ = fp;
      uVar3 = FUN_0008e6f0();
      unaff_pfp = auVar1._0_4_;
      StageNumber = OrderStagesVsCOM_00090c90[(int)uVar3 % (int)uVar3];
    }
  }
  else {
    StageNumber = OrderStagesVsCOM_00090c90[BYTE_0054fceb];
    ac = ac & 0xfffffff8 | (uint)(GameOverFlag____0054fcb4 != 0) << 2 |
         (uint)(GameOverFlag____0054fcb4 == 0) << 1;
  }
  fp = unaff_pfp;
  return;
}

