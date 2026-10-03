
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000059fc(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  uVar1 = ac;
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._12_52_ = in_register_0000000c;
  ac = ac & 0xfffffff8 | (uint)(1 < DAT_0054f3e8) << 2 | (uint)(DAT_0054f3e8 == 1) << 1 |
       (uint)(DAT_0054f3e8 == 0);
  if (((byte)ac & 1 | 1 < DAT_0054f3e8) == 1) {
    ac = uVar1 & 0xfffffff8 | (uint)(g_championWinCount == 'c') << 1;
    if (((byte)(ac >> 1) & 1 | g_championWinCount < 99) != 1) {
      DAT_0054f3e6 = -1;
    }
  }
  else {
    auVar4._8_4_ = 0x5a0c;
    auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    auVar4._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
    auVar3._8_56_ = auVar4._8_56_;
    auVar3._4_4_ = auStack_40;
    auVar3._0_4_ = fp;
    FUN_00005b90();
    fp = (undefined1 *)register0x00000004;
  }
  uVar2 = ac;
  uVar1 = ac & 0xfffffff8 | (uint)(1 < (byte)(DAT_0054f3e6 + 2U)) << 2 |
          (uint)((byte)(DAT_0054f3e6 + 2U) == 1) << 1;
  ac = uVar1 | DAT_0054f3e6 == -2;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    ac = uVar2 & 0xfffffff8 | (uint)(1 < DAT_0054f3e8) << 2 | (uint)(DAT_0054f3e8 == 1) << 1 |
         (uint)(DAT_0054f3e8 == 0);
    if (((byte)ac & 1 | 1 < DAT_0054f3e8) != 1) {
      auVar5._12_52_ = auVar3._12_52_;
      auVar5._0_8_ = auVar3._0_8_;
      auVar5._8_4_ = 0x5ac4;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
      auVar3._8_56_ = auVar5._8_56_;
      auVar3._4_4_ = (undefined1 *)0x0;
      auVar3._0_4_ = fp;
      FUN_00005ad0();
    }
  }
  fp = (undefined1 *)auVar3._0_4_;
  return;
}

