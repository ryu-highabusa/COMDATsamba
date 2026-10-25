
void FUN_82520488(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  dword *pdVar4;
  dword *pdVar5;
  
  if (*(int *)(param_1 + 0x7c) == -1) {
    pdVar5 = &DAT_83b6d9d4;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    uVar3 = 0;
    pdVar4 = pdVar5;
    do {
      if (*pdVar4 == selection_owner_slot_candidate) {
        uVar2 = uVar3;
        if ((int)uVar3 < 0) {
          iVar1 = 0;
          goto LAB_82520514;
        }
        break;
      }
      pdVar4 = pdVar4 + 1;
      uVar3 = uVar3 + 1;
      uVar2 = 4;
    } while ((int)pdVar4 < -0x7c49261c);
    if (uVar2 < *(uint *)(param_1 + 0x90)) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4);
    }
    else {
      iVar1 = 0;
    }
LAB_82520514:
    if ((iVar1 != 0) && (iVar1 = FUN_826236d8(param_1,selection_owner_slot_candidate,4), iVar1 != 0)
       ) {
      character_select_demo_limit(iVar1);
      Function_82514910();
    }
    uVar3 = 4;
    uVar2 = 0;
    do {
      if (*pdVar5 == DWORD_829aac40) {
        uVar3 = uVar2;
        if ((int)uVar2 < 0) {
          return;
        }
        break;
      }
      pdVar5 = pdVar5 + 1;
      uVar2 = uVar2 + 1;
    } while ((int)pdVar5 < -0x7c49261c);
    if ((uVar3 < *(uint *)(param_1 + 0xa0)) &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0xa8) + uVar3 * 4), iVar1 != 0)) {
      *(undefined1 *)(iVar1 + 0xa8) = 1;
    }
  }
  return;
}

