
void FUN_00030630(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_pfp;
  undefined4 uVar1;
  
  *(undefined4 *)PTR_DAT_000006a4 = param_2;
  *(undefined4 *)PTR_DAT_000006a0 = param_3;
  uVar1 = *(undefined4 *)PTR_DAT_000006a0;
  DAT_008801e0 = 0x1e1e;
  *(undefined4 *)PTR_DAT_000006a4 = param_1;
  *(undefined4 *)PTR_DAT_000006a0 = uVar1;
  DAT_00564810 = *(undefined4 *)PTR_DAT_000006a0;
  *(undefined4 *)PTR_DAT_000006a4 = param_2;
  *(undefined4 *)PTR_DAT_000006a0 = param_3;
  DAT_00564814 = *(undefined4 *)PTR_DAT_000006a0;
  DAT_008801d0 = 0x1d1d;
  *(undefined4 *)PTR_DAT_000006a4 = param_1;
  *(undefined4 *)PTR_DAT_000006a0 = uVar1;
  DAT_00564818 = *(undefined4 *)PTR_DAT_000006a0;
  fp = unaff_pfp;
  return;
}

