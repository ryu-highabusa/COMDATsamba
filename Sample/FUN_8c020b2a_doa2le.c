
void FUN_8c020b2a(int param_1)

{
  short sVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  short *psVar5;
  short *psVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  char in_FPSCR_SZ;
  
  puVar4 = PTR_FLOAT_8c020c0c;
  psVar6 = *(short **)(param_1 + 8);
  *(short **)(param_1 + 8) = psVar6 + 1;
  psVar5 = *(short **)(param_1 + 8);
  sVar1 = *psVar6;
  *(short **)(param_1 + 8) = psVar5 + 1;
  puVar3 = PTR_MANCOM_P1_8c020c08;
  puVar7 = (undefined8 *)(puVar4 + *psVar5 * 0x18);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(PTR_MANCOM_P1_8c020c08 + sVar1 * 0x68 + 4) = *(undefined4 *)puVar7;
    pcVar2 = (code *)PTR_FUN_8c020c10;
    uVar8 = *(undefined4 *)(puVar7 + 1);
    *(undefined4 *)(puVar3 + sVar1 * 0x68 + 0xc) = uVar8;
    uVar9 = CONCAT44(*(undefined4 *)(puVar3 + sVar1 * 0x68 + 4),uVar8);
  }
  else {
    *(undefined8 *)(PTR_MANCOM_P1_8c020c08 + sVar1 * 0x68 + 4) = *puVar7;
    pcVar2 = (code *)PTR_FUN_8c020c10;
    *(undefined8 *)(puVar3 + sVar1 * 0x68 + 0xc) = puVar7[1];
    uVar9 = *(undefined8 *)(puVar3 + sVar1 * 0x68 + 4);
  }
  uVar9 = (*pcVar2)(uVar9);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(puVar3 + sVar1 * 0x68 + 8) = (int)((ulonglong)uVar9 >> 0x20);
  }
  else {
    *(undefined8 *)(puVar3 + sVar1 * 0x68 + 8) = uVar9;
  }
  *(undefined4 *)(puVar3 + sVar1 * 0x68 + 0x14) = *(undefined4 *)((int)puVar7 + 0xc);
  *(undefined4 *)(puVar3 + sVar1 * 0x68 + 0x18) = *(undefined4 *)(puVar7 + 2);
  *(undefined4 *)(puVar3 + sVar1 * 0x68 + 0x1c) = *(undefined4 *)((int)puVar7 + 0x14);
  return;
}

