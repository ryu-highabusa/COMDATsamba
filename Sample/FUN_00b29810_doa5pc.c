
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b29810(int param_1)

{
  dword dVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int local_20;
  dword *local_1c;
  int local_18;
  byte local_11;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00d0f05e;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  FUN_00a7a7b0();
  local_18 = 0;
  if (*(char *)(param_1 + 0x84) == '\0') {
    local_1c = &DWORD_010107f0;
    local_20 = 0x19;
    do {
      dVar1 = *local_1c;
      bVar3 = (byte)*(undefined4 *)(param_1 + 0x80);
      if ((dVar1 != 0xff) &&
         ((*(char *)(param_1 + 0x84) == '\0' || (cVar2 = FUN_00b24ce0(dVar1), cVar2 != '\0')))) {
        if (dVar1 == 0x21) {
          cVar2 = FUN_00a892c0(0,0x21);
          if (cVar2 == '\0') {
            bVar3 = 1;
            goto LAB_00b29a7e;
          }
        }
        else {
LAB_00b29a7e:
          cVar2 = FUN_00a892c0(bVar3,dVar1);
          if (cVar2 == '\0') goto LAB_00b29b62;
        }
        local_11 = 0;
        cVar2 = FUN_00b24c60(dVar1,*(char *)(param_1 + 0x84),(byte)*(undefined4 *)(param_1 + 0x80));
        if (cVar2 != '\0') {
          do {
            uVar7 = local_11 + dVar1;
            uVar5 = FUN_00b296c0();
            if ((((char)uVar5 != '\0') ||
                (cVar2 = FUN_00a81300((byte)*(undefined4 *)(param_1 + 0x80),uVar7), cVar2 != '\0'))
               && ((uVar5 = FUN_00b296c0(), (char)uVar5 == '\0' || (uVar7 != 0x1b)))) {
              if ((_DAT_01389658 & 1) == 0) {
                _DAT_01389658 = _DAT_01389658 | 1;
                local_8 = 0;
                FUN_004d1f00((undefined4 *)&DAT_01383d00);
                _atexit(FUN_00d61370);
                local_8 = 0xffffffff;
              }
              bVar4 = FUN_00a7bd40(0x1383d00);
              if (((!bVar4) || ((int)uVar7 < 0x2c)) || (0x2d < (int)uVar7)) {
                FUN_00a7a790(uVar7,1);
                local_18 = local_18 + 1;
              }
            }
            local_11 = local_11 + 1;
            bVar3 = FUN_00b24c60(dVar1,*(char *)(param_1 + 0x84),
                                 (byte)*(undefined4 *)(param_1 + 0x80));
          } while (local_11 < bVar3);
        }
      }
LAB_00b29b62:
      local_1c = local_1c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    if (local_18 == 0) {
      local_1c = &DWORD_010107f0;
      local_20 = 0x19;
      do {
        dVar1 = *local_1c;
        bVar3 = (byte)*(undefined4 *)(param_1 + 0x80);
        if ((dVar1 != 0xff) &&
           ((*(char *)(param_1 + 0x84) == '\0' || (cVar2 = FUN_00b24ce0(dVar1), cVar2 != '\0')))) {
          if (dVar1 == 0x21) {
            cVar2 = FUN_00a892c0(0,0x21);
            if (cVar2 == '\0') {
              bVar3 = 1;
              goto LAB_00b29bd9;
            }
          }
          else {
LAB_00b29bd9:
            cVar2 = FUN_00a892c0(bVar3,dVar1);
            if (cVar2 == '\0') goto LAB_00b29c2e;
          }
          uVar7 = 0;
          cVar2 = FUN_00b24c60(dVar1,*(char *)(param_1 + 0x84),(byte)*(undefined4 *)(param_1 + 0x80)
                              );
          if (cVar2 != '\0') {
            do {
              FUN_00a7a790(uVar7 + dVar1,1);
              bVar6 = (char)uVar7 + 1;
              uVar7 = (uint)bVar6;
              bVar3 = FUN_00b24c60(dVar1,*(char *)(param_1 + 0x84),
                                   (byte)*(undefined4 *)(param_1 + 0x80));
            } while (bVar6 < bVar3);
          }
        }
LAB_00b29c2e:
        local_1c = local_1c + 1;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  else {
    local_1c = &DWORD_01010854;
    local_20 = 10;
    do {
      dVar1 = *local_1c;
      bVar3 = (byte)*(undefined4 *)(param_1 + 0x80);
      if ((dVar1 != 0xff) &&
         ((*(char *)(param_1 + 0x84) == '\0' || (cVar2 = FUN_00b24ce0(dVar1), cVar2 != '\0')))) {
        if (dVar1 == 0x21) {
          cVar2 = FUN_00a892c0(0,0x21);
          if (cVar2 == '\0') {
            bVar3 = 1;
            goto LAB_00b298ae;
          }
        }
        else {
LAB_00b298ae:
          cVar2 = FUN_00a892c0(bVar3,dVar1);
          if (cVar2 == '\0') goto LAB_00b29931;
        }
        local_11 = 0;
        cVar2 = FUN_00b24c60(dVar1,*(char *)(param_1 + 0x84),(byte)*(undefined4 *)(param_1 + 0x80));
        if (cVar2 != '\0') {
          do {
            uVar5 = FUN_00b296c0();
            if (((char)uVar5 != '\0') ||
               (cVar2 = FUN_00a81300((byte)*(undefined4 *)(param_1 + 0x80),local_11 + dVar1),
               cVar2 != '\0')) {
              FUN_00a7a790(local_11 + dVar1,1);
              local_18 = local_18 + 1;
            }
            local_11 = local_11 + 1;
            bVar3 = FUN_00b24c60(dVar1,*(char *)(param_1 + 0x84),
                                 (byte)*(undefined4 *)(param_1 + 0x80));
          } while (local_11 < bVar3);
        }
      }
LAB_00b29931:
      local_1c = local_1c + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
    if (local_18 == 0) {
      local_1c = &DWORD_01010854;
      local_20 = 10;
      do {
        dVar1 = *local_1c;
        bVar3 = (byte)*(undefined4 *)(param_1 + 0x80);
        if ((dVar1 != 0xff) &&
           ((*(char *)(param_1 + 0x84) == '\0' || (cVar2 = FUN_00b24ce0(dVar1), cVar2 != '\0')))) {
          if (dVar1 == 0x21) {
            cVar2 = FUN_00a892c0(0,0x21);
            if (cVar2 == '\0') {
              bVar3 = 1;
              goto LAB_00b299a9;
            }
          }
          else {
LAB_00b299a9:
            cVar2 = FUN_00a892c0(bVar3,dVar1);
            if (cVar2 == '\0') goto LAB_00b299fe;
          }
          uVar7 = 0;
          cVar2 = FUN_00b24c60(dVar1,*(char *)(param_1 + 0x84),(byte)*(undefined4 *)(param_1 + 0x80)
                              );
          if (cVar2 != '\0') {
            do {
              FUN_00a7a790(uVar7 + dVar1,1);
              bVar6 = (char)uVar7 + 1;
              uVar7 = (uint)bVar6;
              bVar3 = FUN_00b24c60(dVar1,*(char *)(param_1 + 0x84),
                                   (byte)*(undefined4 *)(param_1 + 0x80));
            } while (bVar6 < bVar3);
          }
        }
LAB_00b299fe:
        local_1c = local_1c + 1;
        local_20 = local_20 + -1;
        if (local_20 == 0) {
          *unaff_FS_OFFSET = local_10;
          return;
        }
      } while( true );
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}

