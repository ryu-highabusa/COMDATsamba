
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000095c0(uint param_1)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar1 [64];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar4 [64];
  
  auVar1._8_56_ = in_register_00000008;
  auVar1._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar2._0_16_ = auVar1._0_16_;
  auVar2._16_4_ = param_1;
  auVar2._24_40_ = in_register_00000008._16_40_;
  auVar2._20_4_ = &PTR_DAT_009c0000;
  PTR_DAT_009c0000 = (undefined *)(param_1 >> 0x10 & 0xff);
  auVar4._12_52_ = auVar2._12_52_;
  auVar4._8_4_ = 0x95e0;
  auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
  auVar3._8_56_ = auVar4._8_56_;
  auVar3._4_4_ = auStackX_0;
  auVar3._0_4_ = fp;
  FUN_00009640();
  PTR_DAT_009c0000 = (undefined *)(param_1 >> 8 & 0xff);
  auStackX_0._12_52_ = auVar3._12_52_;
  auStackX_0._0_8_ = auVar3._0_8_;
  auStackX_0._8_4_ = 0x95f4;
  FUN_00009640();
  PTR_DAT_009c0000 = (undefined *)(param_1 & 0xff);
  FUN_00009640();
  fp = auStack_40;
  return;
}

