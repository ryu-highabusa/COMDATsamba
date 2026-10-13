
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00016790(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined1 auStackX_0 [1000000];
  
  uVar2 = ac;
  uVar1 = ac & 0xfffffff8 | (uint)(BYTE_005555e0 != 0) << 2 | (uint)(BYTE_005555e0 == 0) << 1;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    ac = ac & 0xfffffff8 | (uint)(1 < StageLoadFlag) << 2 | (uint)(StageLoadFlag == 1) << 1 |
         (uint)(StageLoadFlag == 0);
    uVar1 = ac;
    if (((byte)ac & 1 | 1 < StageLoadFlag) == 1) {
      ac = uVar2 & 0xfffffff8 | (uint)(0 < param_1) << 2 | (uint)(param_1 == 0) << 1 |
           (uint)(param_1 < 0);
      if (((byte)ac & 1 | 0 < param_1) != 1) {
        auVar3._8_4_ = 0x167b4;
        auVar3._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
        auVar3._12_52_ = in_register_0000000c;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar3;
        fp = auStackX_0;
        FUN_00016610();
        FUN_0004dae0(0,extraout_g1,param_3,param_4);
        return;
      }
      auVar4._8_4_ = 0x167c0;
      auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
      auVar4._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
      fp = auStackX_0;
      FUN_000166d0();
      FUN_0004dae0(1,extraout_g1_00,param_3,param_4);
      return;
    }
  }
  ac = uVar1;
  fp = (undefined1 *)unaff_pfp;
  return;
}

