
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004db20(void)

{
  undefined1 auVar1 [64];
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  auVar1._8_4_ = 0x4db24;
  auVar1._12_52_ = in_register_0000000c;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
  FUN_000556f0();
  auStackX_0._4_4_ = auStackX_0;
  auStackX_0._0_4_ = fp;
  auStackX_0._8_4_ = 0x4db2c;
  auStackX_0._12_52_ = in_register_0000000c;
  fp = auStack_40;
  FUN_00055730(0);
  FUN_00055730(1);
  return;
}

