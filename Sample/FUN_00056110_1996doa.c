
uint FUN_00056110(undefined4 param_1,int param_2)

{
  undefined4 unaff_pfp;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(DAT_0058ba64 + (param_2 * 3 + 0x2d) * 4);
  DAT_008800a0 = 0xa0a;
  DAT_00884000 = *puVar1;
  DAT_00884004 = puVar1[2];
  fp = unaff_pfp;
  return *(int *)PTR_DAT_000006a4 - *(int *)(param_2 * 4 + DAT_0058ba6c) & 0xffff;
}

