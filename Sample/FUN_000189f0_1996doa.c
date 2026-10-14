
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000189f0(void)

{
  undefined1 auVar1 [64];
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [999744];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  auVar1._8_4_ = 0x189f8;
  auVar1._12_52_ = in_register_0000000c;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar1;
  FUN_00008320(4);
  auStackX_0._4_4_ = auStackX_0;
  auStackX_0._0_4_ = fp;
  auStackX_0._8_4_ = 0x18a00;
  auStackX_0._12_52_ = in_register_0000000c;
  FUN_00008320(6);
  auStack_40._4_4_ = auStack_40;
  auStack_40._0_4_ = auStackX_0;
  auStack_40._8_4_ = 0x18a08;
  auStack_40._12_52_ = in_register_0000000c;
  FUN_00008320(5);
  auStack_80._4_4_ = auStack_80;
  auStack_80._0_4_ = auStack_40;
  auStack_80._8_4_ = 0x18a10;
  auStack_80._12_52_ = in_register_0000000c;
  FUN_00008320(7);
  auStack_c0._4_4_ = auStack_c0;
  auStack_c0._0_4_ = auStack_80;
  auStack_c0._8_4_ = 0x18a18;
  auStack_c0._12_52_ = in_register_0000000c;
  fp = auStack_100;
  FUN_00008320(0xb);
  FUN_00008320(0xc);
  return;
}

