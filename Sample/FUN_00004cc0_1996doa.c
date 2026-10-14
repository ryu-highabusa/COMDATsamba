
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00004cc0(void)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [999808];
  undefined1 auVar1 [64];
  
  auVar2._4_4_ = auStackX_0;
  auVar2._0_4_ = unaff_pfp;
  auVar2._12_52_ = in_register_00000008._4_52_;
  auVar2._8_4_ = 0x4cc8;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar2;
  auVar1._8_56_ = auVar2._8_56_;
  auVar1._4_4_ = auStackX_0;
  auVar1._0_4_ = fp;
  FUN_00008320(2);
  auStackX_0._12_52_ = auVar1._12_52_;
  auStackX_0._0_8_ = auVar1._0_8_;
  auStackX_0._8_4_ = 0x4cd0;
  auVar3._8_56_ = auStackX_0._8_56_;
  auVar3._4_4_ = auStack_40;
  auVar3._0_4_ = auStackX_0;
  FUN_00008320(6);
  auStack_40._12_52_ = auVar3._12_52_;
  auStack_40._0_8_ = auVar3._0_8_;
  auStack_40._8_4_ = 0x4cd8;
  auVar4._8_56_ = auStack_40._8_56_;
  auVar4._4_4_ = auStack_80;
  auVar4._0_4_ = auStack_40;
  FUN_00008320(4);
  auStack_80._12_52_ = auVar4._12_52_;
  auStack_80._0_8_ = auVar4._0_8_;
  auStack_80._8_4_ = 0x4ce0;
  FUN_00008320(0xb);
  FUN_00008320(7);
  BYTE_0054fcfe = (byte)g14;
  DWORD_0054f3c0 = g14;
  fp = auStack_c0;
  return;
}

