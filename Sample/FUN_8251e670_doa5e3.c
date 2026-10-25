
void FUN_8251e670(int param_1)

{
  int iVar1;
  charids *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  Function_82504FD8();
  for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 0x279c); uVar6 = uVar6 + 1) {
    uVar3 = FUN_82514478(*(charids *)(*(int *)(param_1 + 0x27a4) + uVar6));
    if ((int)uVar3 != 0x139) {
      Function_825B2608(uVar3);
      (&DAT_83e6c420)[(int)uVar3] = 0;
    }
  }
  Function_825082E0(param_1 + 0x2798);
  for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 0x27ac); uVar6 = uVar6 + 1) {
    uVar3 = FUN_82514478(*(charids *)(*(int *)(param_1 + 0x27b4) + uVar6));
    if ((int)uVar3 != 0x139) {
      Function_825B2460();
    }
  }
  Function_825082E0(param_1 + 0x27a8);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x90);
  if (0 < (int)*(uint *)(param_1 + 0x90)) {
    iVar7 = 0;
    do {
      iVar1 = *(int *)(iVar7 + *(int *)(param_1 + 0x98));
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == 1)) {
        plVar4 = FUN_822943a8(*(uint *)(iVar1 + 4) & 0xff);
        if (plVar4 != (longlong *)0x0) {
          Function_82458520(plVar4);
        }
        pcVar2 = &CHAR_SEL_P1_83e739b3 + (*(uint *)(iVar1 + 4) & 0xff) * 8;
        pcVar2[0] = char_zack;
        pcVar2[1] = char_zack;
        pcVar2[2] = char_zack;
        pcVar2[3] = char_zack;
        pcVar2[4] = char_zack;
        pcVar2[5] = char_zack;
        pcVar2[6] = char_zack;
        pcVar2[7] = char_zack;
        Function_82514870(iVar1);
        *(undefined4 *)(iVar1 + 0xc) = 2;
        *(undefined4 *)(iVar1 + 0x18) = 2;
      }
      uVar5 = uVar5 - 1;
      iVar7 = iVar7 + 4;
    } while (uVar5 != 0);
  }
  return;
}

