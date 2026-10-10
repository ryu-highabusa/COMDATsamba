
void FUN_000085f0(undefined2 *param_1)

{
  undefined4 unaff_pfp;
  int iVar1;
  
  iVar1 = 0x1000;
  do {
    *param_1 = g14;
    param_1 = param_1 + 1;
    iVar1 = iVar1 + -1;
    ac = ac & 0xfffffff8 | (uint)(0 < iVar1) << 2 | (uint)(iVar1 == 0) << 1 | (uint)(iVar1 < 0);
  } while (0 < iVar1);
  fp = unaff_pfp;
  return;
}

