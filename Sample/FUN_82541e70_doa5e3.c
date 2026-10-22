
void FUN_82541e70(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar5;
  int iVar6;
  undefined8 uVar3;
  undefined4 *puVar7;
  ulonglong uVar4;
  float fStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  
  piVar5 = FUN_826219d0(param_1,param_2);
  if ((piVar5 == (int *)0x0) || ((int *)piVar5[1] == (int *)0x0)) {
    iVar6 = -1;
  }
  else {
    iVar6 = *(int *)piVar5[1];
  }
  iVar6 = FUN_826236d8(param_1,param_2,iVar6);
  if (iVar6 == 0) {
    return;
  }
  piVar5 = FUN_826219d0(param_1,param_2);
  if (piVar5 == (int *)0x0) {
    return;
  }
  if ((int *)piVar5[1] == (int *)0x0) {
    return;
  }
  iVar2 = *(int *)piVar5[1];
  if (iVar2 == -1) {
    return;
  }
  iVar6 = *(int *)(iVar6 + 4);
  uVar3 = MainMenu_IsDemoLocked(iVar6);
  if ((char)uVar3 == '\0') {
    switch(iVar6 + -0x39) {
    case 0:
      Function_821CA538(1);
      iVar6 = *(int *)(param_1 + 0x84);
      *(undefined1 *)(iVar6 + 0x1823) = 0;
      (**(code **)(*(int *)(iVar6 + 0x1730) + 8))(iVar6 + 0x1730,0x21001f);
      *(undefined1 *)(param_1 + 0x69) = 1;
      uVar3 = Function_821CA310();
      iVar6 = FUN_8261eec0(*(int *)((int)uVar3 + 0x20),0);
      if (iVar6 != 0) {
        *(undefined1 *)(iVar6 + 0x9a) = 1;
      }
      *(int *)(param_1 + 0x90) = iVar2;
      Function_82438A50();
      uVar3 = Function_821CA310();
      puVar7 = (undefined4 *)FUN_8261eec0(*(int *)((int)uVar3 + 0x20),param_2);
      BYTE_83e6c55a = 0xff;
      if (puVar7 != (undefined4 *)0x0) {
        BYTE_83e6c55a = (byte)*puVar7;
      }
      break;
    case 1:
      Function_821CA538(1);
      uVar3 = Function_821D1F58();
      *(undefined4 *)((int)uVar3 + 0xc) = 0xffffffff;
      uVar3 = Function_821D1F58();
      *(undefined4 *)((int)uVar3 + 0x14) = 0x16;
      Function_8253F1B8();
      Function_8253EDF0();
      Function_82438A50();
      break;
    default:
      uVar4 = Menu_GetSelectedDestinationId(param_1,param_2);
      if ((int)uVar4 != -1) {
        Function_826231E0(param_1,param_2,(int)uVar4);
        Function_8253F1B8();
        if (iVar2 == 0xb) {
          Function_82541768();
          *(undefined4 *)(param_1 + 0x80) = 2;
          *(undefined4 *)(*(int *)(param_1 + 0x84) + 4) = 2;
          *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = 2;
          *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4) = 2;
        }
        Function_82438A50();
        uVar3 = Function_8222AC80();
        if ((*(char *)((int)uVar3 + 4) != '\0') &&
           (bVar1 = *(byte *)((int)uVar3 + 6), bVar1 != 0xff)) {
          FUN_8224c6b8((uint)bVar1);
          Function_82215068((longlong)DAT_82ac4885);
          FUN_82215000((int)DAT_82ac4885);
          uStack_4c = 0;
          uStack_48 = 0;
          fStack_50 = 8.0;
          Function_822B3AC0(&fStack_50);
        }
        Function_8222AC80();
        DAT_83e6b814 = 1;
        Function_821CA408();
        Function_8261F990();
        return;
      }
      goto LAB_8254269c;
    case 5:
      Function_821CA538(1);
      uVar3 = Function_821D1F58();
      *(undefined4 *)((int)uVar3 + 0xc) = 10;
      Function_82540890();
      *(int *)(param_1 + 0x90) = iVar2;
      Function_826235B8(param_1,0,iVar2);
      Function_82541038();
      *(undefined1 *)(*(int *)(param_1 + 0x84) + 0xc) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x88) + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x80) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x84) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4) = 3;
      uVar3 = Function_8222AC80();
      Function_8224D2A8((int)uVar3);
      Function_82438A50();
      break;
    case 6:
      Function_821CA538(1);
      uVar3 = Function_821D1F58();
      *(undefined4 *)((int)uVar3 + 0xc) = 0x1d;
      Function_82540890();
      *(int *)(param_1 + 0x90) = iVar2;
      Function_826235B8(param_1,0,iVar2);
      Function_82541038();
      *(undefined1 *)(*(int *)(param_1 + 0x84) + 0xc) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x88) + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x80) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x84) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4) = 3;
      uVar3 = Function_8222AC80();
      Function_8224D2A8((int)uVar3);
      Function_82438A50();
      break;
    case 7:
      Function_821CA538(1);
      uVar3 = Function_821D1F58();
      *(undefined4 *)((int)uVar3 + 0xc) = 0x1e;
      Function_82540890();
      *(int *)(param_1 + 0x90) = iVar2;
      Function_826235B8(param_1,0,iVar2);
      Function_82541038();
      *(undefined1 *)(*(int *)(param_1 + 0x84) + 0xc) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x88) + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x80) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x84) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4) = 3;
      uVar3 = Function_8222AC80();
      Function_8224D2A8((int)uVar3);
      Function_82438A50();
      break;
    case 8:
      Function_821CA538(1);
      uVar3 = Function_821D1F58();
      *(undefined4 *)((int)uVar3 + 0xc) = 0x1f;
      Function_82540890();
      *(int *)(param_1 + 0x90) = iVar2;
      Function_826235B8(param_1,0,iVar2);
      Function_82541038();
      *(undefined1 *)(*(int *)(param_1 + 0x84) + 0xc) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x88) + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x80) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x84) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4) = 3;
      uVar3 = Function_8222AC80();
      Function_8224D2A8((int)uVar3);
      Function_82438A50();
      break;
    case 9:
      Function_821CA538(1);
      iVar6 = *(int *)(param_1 + 0x84);
      *(undefined1 *)(iVar6 + 0x1823) = 0;
      (**(code **)(*(int *)(iVar6 + 0x1730) + 8))(iVar6 + 0x1730,0x21001f);
      *(undefined1 *)(param_1 + 0x69) = 1;
      uVar3 = Function_821CA310();
      iVar6 = FUN_8261eec0(*(int *)((int)uVar3 + 0x20),0);
      if (iVar6 != 0) {
        *(undefined1 *)(iVar6 + 0x9a) = 1;
      }
      *(int *)(param_1 + 0x90) = iVar2;
      Function_82438A50();
      uVar3 = Function_821CA310();
      iVar6 = *(int *)((int)uVar3 + 0x20);
      puVar7 = (undefined4 *)FUN_8261eec0(iVar6,param_2);
      BYTE_83e6c55a = 0xff;
      if (puVar7 != (undefined4 *)0x0) {
        BYTE_83e6c55a = (byte)*puVar7;
      }
      Function_8230F1C0();
      Function_8230F2A0(0,(byte)param_2,0xff);
      puVar7 = (undefined4 *)FUN_8261eec0(iVar6,0);
      DAT_83b6d808 = 0xff;
      if (puVar7 != (undefined4 *)0x0) {
        DAT_83b6d808 = (undefined1)*puVar7;
      }
      DAT_83b6d73c = 0;
      break;
    case 10:
      Function_821CA538(1);
      uVar3 = Function_821CA310();
      iVar6 = *(int *)((int)uVar3 + 0x20);
      puVar7 = (undefined4 *)FUN_8261eec0(iVar6,param_2);
      BYTE_83e6c55a = 0xff;
      if (puVar7 != (undefined4 *)0x0) {
        BYTE_83e6c55a = (byte)*puVar7;
      }
      uVar3 = Function_821D1F58();
      *(undefined4 *)((int)uVar3 + 0xc) = 0xc;
      Function_82540890();
      *(int *)(param_1 + 0x90) = iVar2;
      Function_826235B8(param_1,param_2,iVar2);
      Function_82541038();
      *(undefined1 *)(*(int *)(param_1 + 0x84) + 0xc) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x88) + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x80) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x84) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4) = 3;
      uVar3 = Function_8222AC80();
      Function_8224D2A8((int)uVar3);
      Function_82438A50();
      puVar7 = (undefined4 *)FUN_8261eec0(iVar6,param_2);
      BYTE_83e6c55a = 0xff;
      if (puVar7 != (undefined4 *)0x0) {
        BYTE_83e6c55a = (byte)*puVar7;
      }
      break;
    case 0xc:
      Function_821CA538(1);
      uVar3 = Function_821D1F58();
      *(undefined4 *)((int)uVar3 + 0xc) = 0x10;
      Function_82540890();
      *(int *)(param_1 + 0x90) = iVar2;
      Function_826235B8(param_1,param_2,iVar2);
      Function_82541038();
      *(undefined1 *)(*(int *)(param_1 + 0x84) + 0xc) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x88) + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x80) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x84) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4) = 3;
      uVar3 = Function_8222AC80();
      Function_8224D2A8((int)uVar3);
      Function_82438A50();
      uVar3 = Function_821CA310();
      puVar7 = (undefined4 *)FUN_8261eec0(*(int *)((int)uVar3 + 0x20),param_2);
      BYTE_83e6c55a = 0xff;
      if (puVar7 != (undefined4 *)0x0) {
        BYTE_83e6c55a = (byte)*puVar7;
      }
      break;
    case 0xf:
      uVar3 = Function_821D1F58();
      *(undefined4 *)((int)uVar3 + 0xc) = 0x37;
      Function_82540890();
      *(int *)(param_1 + 0x90) = iVar2;
      Function_826235B8(param_1,param_2,iVar2);
      Function_82541038();
      *(undefined4 *)(param_1 + 0x80) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x84) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x88) + 4) = 3;
      *(undefined4 *)(*(int *)(param_1 + 0x8c) + 4) = 3;
      uVar3 = Function_821CA310();
      puVar7 = (undefined4 *)FUN_8261eec0(*(int *)((int)uVar3 + 0x20),param_2);
      BYTE_83e6c55a = 0xff;
      if (puVar7 != (undefined4 *)0x0) {
        BYTE_83e6c55a = (byte)*puVar7;
      }
    }
  }
  else {
LAB_8254269c:
    Function_82438A50();
  }
  return;
}

