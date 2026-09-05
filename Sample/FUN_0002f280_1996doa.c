
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

uint FUN_0002f280(undefined4 param_1)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar1 [64];
  undefined1 auVar3 [64];
  uint uVar4;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar2 [64];
  
  auVar1._8_56_ = in_register_00000008;
  auVar1._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar2._20_44_ = in_register_00000008._12_44_;
  auVar2._0_16_ = auVar1._0_16_;
  auVar2._16_4_ = param_1;
  auVar3._12_52_ = auVar2._12_52_;
  auVar3._8_4_ = 0x2f288;
  auVar3._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar3;
  uVar4 = FUN_0008e6f0();
  return (int)uVar4 % (int)uVar4 & 0xff;
}

