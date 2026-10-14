
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0001b1d0(void)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar1 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = unaff_pfp;
  auVar1._12_52_ = in_register_00000008._4_52_;
  auVar1._8_4_ = 0x1b1d4;
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar1;
  FUN_00070eb0();
  DAT_00557ca1 = g14;
  DAT_00557c70 = DAT_00557c70 + 2;
  return;
}

