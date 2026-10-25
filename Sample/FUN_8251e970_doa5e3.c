
/* WARNING: Heritage AFTER dead removal. Example location: r3 : 0x8251eb38 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_8251e970(int *param_1,uint param_2)

{
  undefined8 uVar1;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar2;
  dword dVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  
  uVar1 = Function_821CA310();
  if ((*(int *)((int)uVar1 + 0x3c) == param_1[1]) &&
     (piVar3 = FUN_826219d0((int)param_1,param_2), piVar3 != (int *)0x0)) {
    uVar7 = 4;
    puVar9 = &DAT_83b6d9d4;
    uVar8 = 0;
    do {
      if (*puVar9 == param_2) {
        uVar7 = uVar8;
        if ((int)uVar8 < 0) {
          return;
        }
        break;
      }
      puVar9 = puVar9 + 1;
      uVar8 = uVar8 + 1;
    } while ((int)puVar9 < -0x7c49261c);
    if (((uVar7 < (uint)param_1[0x24]) && (*(int *)(param_1[0x26] + uVar7 * 4) != 0)) &&
       (iVar4 = FUN_82623730((int)param_1,param_2,4), iVar4 != 0)) {
      Function_8251C8B0();
      if (uVar7 < (uint)param_1[0x28]) {
        iVar5 = *(int *)(param_1[0x2a] + uVar7 * 4);
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0xa4) = 0;
        }
      }
      else {
        iVar5 = 0;
      }
      uVar1 = character_select_demo_limit(iVar4);
      Function_8251BDE0((int)param_1,(uint)uVar1,uVar7);
      if (iVar5 != 0) {
        Function_82517480();
      }
      character_select_demo_limit(iVar4);
      Function_82514910();
      Function_82520AE8();
      Function_8251C4A0(param_1,param_2);
      if (((param_1[0x1f] == 3) &&
          (dVar6 = selection_owner_slot_candidate,
          piVar3 = FUN_826219d0((int)param_1,selection_owner_slot_candidate), piVar3 != (int *)0x0))
         && (((int *)piVar3[1] != (int *)0x0 && (*(int *)piVar3[1] == 4)))) {
        piVar3 = FUN_826219d0((int)param_1,dVar6);
        if ((piVar3 == (int *)0x0) || ((int *)piVar3[1] == (int *)0x0)) {
          iVar4 = -1;
        }
        else {
          iVar4 = *(int *)piVar3[1];
        }
        iVar4 = FUN_82623730((int)param_1,dVar6,iVar4);
        uVar1 = character_select_demo_limit(iVar4);
        uVar1 = FUN_82513508(uVar1,uVar1);
        if (((char)uVar1 != '\0') && (param_1[0x2f] != 0)) {
          Function_82519BD8();
        }
      }
      Function_82438A50();
      uVar1 = Function_821CA310();
      iVar4 = *(int *)((int)uVar1 + 0x20);
      iVar5 = FUN_8261eec0(iVar4,param_2);
      if (iVar5 != 0) {
        uVar2 = Function_8261FF68(iVar4);
        *(int *)(iVar5 + 0x14) = (int)uVar2;
      }
    }
  }
  return;
}

