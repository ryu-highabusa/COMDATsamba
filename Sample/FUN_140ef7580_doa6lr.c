
ulonglong FUN_140ef7580(longlong *param_1,ulonglong param_2)

{
  undefined2 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  
  FUN_143b0c9d8(&DAT_1486f0b8f);
  if (param_1[2] == 0) {
    return 0;
  }
  lVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 0x40 + param_1[4];
  FUN_140ef6c70(lVar4);
  uVar6 = *(longlong *)(lVar4 + 0x28) - *(longlong *)(lVar4 + 0x20);
  if (param_2 <= uVar6) {
    uVar6 = param_2;
  }
  if (uVar6 != 0) {
    *(ulonglong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + uVar6;
  }
  if (uVar6 == param_2) {
    FUN_140ef7ad0((longlong)param_1);
  }
  else {
    uVar8 = param_2 - uVar6 >> 0xe;
    uVar7 = (uint)uVar8;
    if (*(uint *)(param_1 + 5) <= uVar7) {
      do {
        uVar7 = (uint)uVar8;
        if (*(ushort *)((longlong)param_1 + 0x34) == 0) break;
        lVar5 = (ulonglong)*(ushort *)((longlong)param_1 + 0x34) + 8;
        lVar4 = (**(code **)(*(longlong *)param_1[2] + 0x10))((longlong *)param_1[2],lVar5);
        if (lVar5 != lVar4) {
          (**(code **)(*param_1 + 8))(param_1);
          return uVar6;
        }
        lVar4 = (**(code **)(*(longlong *)param_1[2] + 0x20))
                          ((longlong *)param_1[2],(longlong)param_1 + 0x34,0,2);
        if (lVar4 != 2) {
          (**(code **)(*param_1 + 8))(param_1);
          return uVar6;
        }
        uVar6 = uVar6 + 0x4000;
        uVar7 = uVar7 - 1;
        uVar8 = (ulonglong)uVar7;
      } while (*(uint *)(param_1 + 5) <= uVar7);
    }
    lVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 0x40 + param_1[4];
    uVar9 = *(uint *)((longlong)param_1 + 0x2c);
    if (*(ulonglong *)(lVar4 + 0x28) <= *(ulonglong *)(lVar4 + 0x20)) {
      uVar1 = FUN_140ef6ce0(lVar4,(uint)*(ushort *)((longlong)param_1 + 0x34));
      *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
      *(undefined2 *)((longlong)param_1 + 0x34) = uVar1;
      uVar9 = *(uint *)((longlong)param_1 + 0x2c);
      if (*(uint *)(param_1 + 5) <= *(uint *)((longlong)param_1 + 0x2c)) {
        *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
        uVar9 = 0;
      }
    }
    if (uVar7 != 0) {
      uVar8 = (ulonglong)uVar7;
      uVar6 = uVar6 + uVar8 * 0x4000;
      do {
        lVar4 = (ulonglong)uVar9 * 0x40 + param_1[4];
        while (*(longlong *)(lVar4 + 0x10) != 0) {
          LOCK();
          iVar2 = *(int *)(lVar4 + 0x3c);
          bVar10 = iVar2 == 0;
          if (bVar10) {
            *(int *)(lVar4 + 0x3c) = 0;
            iVar2 = 0;
          }
          UNLOCK();
          if (bVar10) goto LAB_140ef7730;
          if (iVar2 != 10) {
            if (iVar2 == 0x14) {
              LOCK();
              *(undefined4 *)(lVar4 + 0x3c) = 0;
              UNLOCK();
              goto LAB_140ef7730;
            }
            if (iVar2 != 0x1e) goto LAB_140ef7730;
          }
          SetEvent(*(HANDLE *)(*(longlong *)(lVar4 + 0x10) + 0x20));
          Sleep(0);
        }
LAB_140ef776d:
        uVar3 = *(longlong *)(lVar4 + 0x28) - *(longlong *)(lVar4 + 0x20);
        if (0x3fff < uVar3) {
          uVar3 = 0x4000;
        }
        if (uVar3 != 0) {
          *(ulonglong *)(lVar4 + 0x20) = uVar3 + *(longlong *)(lVar4 + 0x20);
        }
        lVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 0x40 + param_1[4];
        uVar9 = *(uint *)((longlong)param_1 + 0x2c);
        if (*(ulonglong *)(lVar4 + 0x28) <= *(ulonglong *)(lVar4 + 0x20)) {
          uVar1 = FUN_140ef6ce0(lVar4,(uint)*(ushort *)((longlong)param_1 + 0x34));
          uVar9 = *(int *)((longlong)param_1 + 0x2c) + 1;
          *(undefined2 *)((longlong)param_1 + 0x34) = uVar1;
          *(uint *)((longlong)param_1 + 0x2c) = uVar9;
          if (*(uint *)(param_1 + 5) <= uVar9) {
            *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
            uVar9 = 0;
          }
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar8 = param_2 - uVar6;
    if (uVar8 != 0) {
      lVar4 = (ulonglong)uVar9 * 0x40 + param_1[4];
      while (*(longlong *)(lVar4 + 0x10) != 0) {
        LOCK();
        iVar2 = *(int *)(lVar4 + 0x3c);
        bVar10 = iVar2 == 0;
        if (bVar10) {
          *(int *)(lVar4 + 0x3c) = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar10) break;
        if (iVar2 != 10) {
          if (iVar2 == 0x14) {
            LOCK();
            *(undefined4 *)(lVar4 + 0x3c) = 0;
            UNLOCK();
            break;
          }
          if (iVar2 != 0x1e) break;
        }
        SetEvent(*(HANDLE *)(*(longlong *)(lVar4 + 0x10) + 0x20));
        Sleep(0);
      }
      uVar3 = *(longlong *)(lVar4 + 0x28) - *(longlong *)(lVar4 + 0x20);
      if (uVar8 <= uVar3) {
        uVar3 = uVar8;
      }
      if (uVar3 != 0) {
        *(ulonglong *)(lVar4 + 0x20) = *(longlong *)(lVar4 + 0x20) + uVar3;
      }
      uVar6 = uVar6 + uVar3;
      lVar4 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c) * 0x40 + param_1[4];
      if (*(ulonglong *)(lVar4 + 0x28) <= *(ulonglong *)(lVar4 + 0x20)) {
        uVar1 = FUN_140ef6ce0(lVar4,(uint)*(ushort *)((longlong)param_1 + 0x34));
        *(int *)((longlong)param_1 + 0x2c) = *(int *)((longlong)param_1 + 0x2c) + 1;
        *(undefined2 *)((longlong)param_1 + 0x34) = uVar1;
        if (*(uint *)(param_1 + 5) <= *(uint *)((longlong)param_1 + 0x2c)) {
          *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
        }
      }
    }
  }
  return uVar6;
LAB_140ef7730:
  if (*(longlong *)(lVar4 + 0x10) == 0) goto LAB_140ef776d;
  LOCK();
  iVar2 = *(int *)(lVar4 + 0x3c);
  bVar10 = iVar2 == 0;
  if (bVar10) {
    *(int *)(lVar4 + 0x3c) = 0;
    iVar2 = 0;
  }
  UNLOCK();
  if (bVar10) goto LAB_140ef776d;
  if (iVar2 != 10) {
    if (iVar2 == 0x14) {
      LOCK();
      *(undefined4 *)(lVar4 + 0x3c) = 0;
      UNLOCK();
      goto LAB_140ef776d;
    }
    if (iVar2 != 0x1e) goto LAB_140ef776d;
  }
  SetEvent(*(HANDLE *)(*(longlong *)(lVar4 + 0x10) + 0x20));
  Sleep(0);
  goto LAB_140ef7730;
}

