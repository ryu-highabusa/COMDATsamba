
void Function_825205F0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  dword *pdVar4;
  
  if (*(int *)(param_1 + 0x7c) == -1) {
    pdVar4 = &DAT_83b6d9d4;
    *(undefined4 *)(param_1 + 0x7c) = 3;
    uVar3 = 0;
    do {
      if (*pdVar4 == selection_owner_slot_candidate) {
        uVar2 = uVar3;
        if ((int)uVar3 < 0) {
          iVar1 = 0;
          goto LAB_82520688;
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
LAB_82520688:
    if ((iVar1 != 0) && (iVar1 = FUN_826236d8(param_1,selection_owner_slot_candidate,4), iVar1 != 0)
       ) {
      character_select_demo_limit(iVar1);
      Function_82514910();
    }
  }
  return;
}

