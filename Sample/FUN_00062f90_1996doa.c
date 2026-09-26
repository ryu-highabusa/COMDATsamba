
undefined4
FUN_00062f90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  uint uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  int iVar3;
  
  uVar2 = ac;
  iVar3 = param_1 + (uint)(byte)(&DAT_005a6f1c)[param_1] * 3;
  uVar1 = ac & 0xfffffff8 | (uint)(1 < iVar3) << 2 | (uint)(iVar3 == 1) << 1;
  ac = uVar1 | iVar3 < 1;
  if (((byte)(uVar1 >> 1) & 1) == 1) {
    fp = unaff_pfp;
    return param_3;
  }
  if (iVar3 < 2) {
    uVar1 = uVar2 & 0xfffffff8 | (uint)(0 < iVar3) << 2 | (uint)(iVar3 == 0) << 1;
    ac = uVar1 | iVar3 < 0;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      fp = unaff_pfp;
      return param_2;
    }
  }
  else {
    uVar1 = uVar2 & 0xfffffff8 | (uint)(3 < iVar3) << 2 | (uint)(iVar3 == 3) << 1;
    ac = uVar1 | iVar3 < 3;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      fp = unaff_pfp;
      return param_4;
    }
    uVar1 = uVar2 & 0xfffffff8 | (uint)(4 < iVar3) << 2 | (uint)(iVar3 == 4) << 1;
    ac = uVar1 | iVar3 < 4;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
      fp = unaff_pfp;
      return param_5;
    }
  }
  fp = unaff_pfp;
  return 0xffffffff;
}

