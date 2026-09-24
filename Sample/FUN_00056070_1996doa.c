
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00056070(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 unaff_pfp;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = DAT_00589df0;
  uVar3 = *(undefined4 *)(DAT_0058ba68 + param_2 * 0xc + 4);
  puVar2 = (undefined4 *)(DAT_0058ba64 + param_2 * 0xc);
  puVar2[1] = g14;
  *puVar2 = uVar1;
  puVar2[2] = uVar3;
  fp = unaff_pfp;
  return;
}

