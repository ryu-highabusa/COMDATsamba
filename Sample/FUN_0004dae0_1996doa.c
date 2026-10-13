
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004dae0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_pfp;
  undefined1 in_register_00000008 [56];
  undefined1 auVar1 [64];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  undefined1 auStackX_0 [1000000];
  
  auVar1._8_56_ = in_register_00000008;
  auVar1._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar2._20_44_ = in_register_00000008._12_44_;
  auVar2._0_16_ = auVar1._0_16_;
  auVar2._16_4_ = param_1;
  DAT_00589de1 = (byte)DAT_0054b178 & 1;
  auVar3._12_52_ = auVar2._12_52_;
  auVar3._8_4_ = 0x4dafc;
  auVar3._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar3;
  FUN_00041b00(param_1,param_2,param_3,param_4);
  Player_RenderModelParts(param_1);
  (&DAT_005882fc)[param_1] = 1;
  fp = auStackX_0;
  return;
}

