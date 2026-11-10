
void FUN_0c10f870(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  
  puVar5 = PTR_DAT_0c10f924;
  puVar3 = PTR_DAT_0c10f91c;
  puVar2 = PTR_DAT_0c10f918;
  *(undefined4 *)PTR_DAT_0c10f914 = param_1;
  puVar4 = PTR_DAT_0c10f920;
  *(undefined4 *)puVar2 = 0;
  puVar2 = PTR_FUN_0c10f928;
  iVar7 = (int)DAT_0c10f90e;
  *(undefined4 *)puVar3 = 1;
  *(undefined4 *)puVar4 = 0;
  (*(code *)puVar2)(puVar5,0,iVar7);
  if ((param_3 != 0) && (param_2 != 0)) {
    *(undefined4 *)PTR_DAT_0c10f918 = 1;
    (*(code *)PTR_FUN_0c10f92c)(param_2,param_3);
  }
  puVar2 = PTR_DAT_0c10f930;
  iVar7 = 0;
  do {
    puVar8 = (undefined4 *)(puVar5 + iVar7 * 0x34);
    uVar6 = (*(code *)PTR_FUN_0c10f934)(iVar7);
    puVar8[0xc] = uVar6;
    FUN_0c10f9ee(puVar8);
    *(undefined4 *)(puVar2 + iVar7 * 4) = 0;
    PTR_DAT_0c10f938[iVar7] = 0;
    PTR_DAT_0c10f93c[iVar7] = 0;
    puVar3 = PTR_DAT_0c10f944;
    uVar1 = DAT_0c10f912;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x18);
  *PTR_DAT_0c10f940 = (char)DAT_0c10f910;
  *puVar3 = (char)uVar1;
  return;
}

