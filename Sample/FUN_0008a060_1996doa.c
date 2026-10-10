
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0008a060(byte param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auStackX_0 [1000000];
  
  uVar3 = ac;
  uVar2 = CONCAT44(auStackX_0,unaff_pfp);
  uVar1 = ac & 0xfffffff8 | (uint)(1 < param_1) << 2 | (uint)(param_1 == 1) << 1;
  ac = uVar1 | param_1 == 0;
  if (((byte)(uVar1 >> 1) & 1) == 1) {
    auVar5._8_4_ = 0x8a0a0;
    auVar5._0_8_ = uVar2;
    auVar5._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar5;
    thunk_FUN_00008b0c(s_EASY_0008a030);
    return;
  }
  if (param_1 < 2) {
    ac = uVar3 & 0xfffffff8 | (uint)(param_1 != 0) << 2 | (uint)(param_1 == 0) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      fp = unaff_pfp;
      return;
    }
    auVar4._8_4_ = 0x8a090;
    auVar4._0_8_ = uVar2;
    auVar4._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar4;
    thunk_FUN_00008b0c(s_NORMAL_0008a020);
    return;
  }
  uVar1 = uVar3 & 0xfffffff8 | (uint)(2 < param_1) << 2 | (uint)(param_1 == 2) << 1;
  ac = uVar1 | param_1 < 2;
  if (((byte)(uVar1 >> 1) & 1) == 1) {
    auVar6._8_4_ = 0x8a0b0;
    auVar6._0_8_ = uVar2;
    auVar6._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar6;
    thunk_FUN_00008b0c(s_HARD_0008a040);
    return;
  }
  uVar1 = uVar3 & 0xfffffff8 | (uint)(3 < param_1) << 2 | (uint)(param_1 == 3) << 1;
  ac = uVar1 | param_1 < 3;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    fp = unaff_pfp;
    return;
  }
  auVar7._8_4_ = 0x8a0c0;
  auVar7._0_8_ = uVar2;
  auVar7._12_52_ = in_register_0000000c;
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar7;
  thunk_FUN_00008b0c(s_VERY_HARD_0008a050);
  return;
}

