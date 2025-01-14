
/* WARNING: Removing unreachable block (ram,0x000fa846) */

undefined4 FUN_000fa530(undefined4 param_1,int param_2)

{
  undefined1 *puVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  undefined4 uVar14;
  char local_1a;
  char local_19;
  int local_8;
  
  iVar8 = param_2;
  cVar13 = '\0';
  local_19 = '\0';
  iVar6 = FUN_00234490();
  if (iVar6 == 0) {
    uVar7 = (uint)(byte)(&DAT_00e46850)[*(byte *)(param_2 + 0x1a)];
  }
  else {
    uVar7 = FUN_00104da0(*(undefined *)(param_2 + 0x1a));
    uVar7 = uVar7 & 0xff;
  }
  uVar11 = ((DAT_0079d8ae + 3) * 10) / 0x3c;
  puVar1 = &DAT_0061b4dc + uVar7 * 8;
  iVar6 = FUN_000f47b0(puVar1,uVar11,uVar11);
  if (iVar6 != 0) {
    cVar13 = -1;
  }
  iVar6 = FUN_000f4810(puVar1,uVar11,uVar11);
  if (iVar6 != 0) {
    cVar13 = '\x01';
  }
  iVar6 = FUN_000f46f0(puVar1,uVar11,uVar11);
  if (iVar6 != 0) {
    local_19 = -1;
  }
  iVar6 = FUN_000f4750(puVar1,uVar11,uVar11);
  if (iVar6 != 0) {
    local_19 = '\x01';
  }
  bVar2 = *(byte *)(param_2 + 0x16);
  if ((cVar13 != '\0') || (local_19 != '\0')) {
    DAT_00d7f618 = 3;
    iVar6 = (int)CharacterSelectSlotCount / 2;
    cVar10 = (char)iVar6;
    local_1a = (char)((int)*(char *)(param_2 + 0x16) / iVar6);
    param_2._0_1_ = (char)((int)*(char *)(param_2 + 0x16) % iVar6);
    if (cVar10 != '\0') {
      param_2._0_1_ = (char)param_2 + cVar13 % cVar10;
      if ((char)param_2 < cVar10) {
        if ((char)param_2 < '\0') {
          param_2._0_1_ = (char)param_2 + cVar10;
        }
      }
      else {
        param_2._0_1_ = (char)param_2 % cVar10;
      }
    }
    cVar4 = (char)((int)CharacterSelectSlotCount / iVar6);
    if (cVar4 != '\0') {
      local_1a = local_1a + local_19 % cVar4;
      if (local_1a < cVar4) {
        if (local_1a < '\0') {
          local_1a = local_1a + cVar4;
        }
      }
      else {
        local_1a = local_1a % cVar4;
      }
    }
    cVar10 = cVar10 * local_1a + (char)param_2;
    FUN_000f7b30(iVar8);
    iVar6 = FUN_000f84e0(cVar10);
    if (iVar6 == 0) {
      *(char *)(iVar8 + 0x16) = cVar10;
    }
    else if (DAT_007987d2 == 0x8) {
      *(char *)(iVar8 + 0x16) = cVar10;
      *(char *)(cVar10 + iVar8) = cVar4;
    }
    else {
      if (cVar13 == '\0') {
        cVar13 = 0x1;
      }
      local_8 = (int)CharacterSelectSlotCount / 2;
      FUN_000fe4d0(cVar13);
      *(char *)(iVar8 + 0x16) = (char)local_8 * local_1a + (char)param_2;
    }
    FUN_000f9a90(param_1,iVar8,0);
  }
  bVar3 = *(byte *)(iVar8 + 0x16);
  if (bVar3 != bVar2) {
    *(byte *)(iVar8 + 0x14) =
         (&CharacterSelectSlotVersus01_Kasumi_006dc5c8)[(uint)(byte)(&DAT_00d7f5f0)[bVar3] * 0x14];
    *(undefined *)(iVar8 + 0x15) = *(undefined *)((char)bVar3 + iVar8);
    uVar7 = FUN_000f7b30(iVar8);
    if (((&CharacterSelectSlotVersus01_Kasumi_006dc5c8)
         [(uint)(byte)(&DAT_00d7f5f0)[*(byte *)(iVar8 + 0x16)] * 0x14] == RANDOM) ||
       ((&CharacterSelectSlotVersus01_Kasumi_006dc5c8)
        [(uint)(byte)(&DAT_00d7f5f0)[*(byte *)(iVar8 + 0x16)] * 0x14] == LOCKED_CHARACTER)) {
      FUN_001034e0(uVar7 & 0xff,0);
      iVar6 = (uVar7 & 0xff) * 0x20;
      FUN_000fe320();
      (&DAT_00d80017)[iVar6] = 1;
      *(undefined *)(iVar8 + 0x31) = 1;
    }
    else {
      uVar11 = uVar7 & 0xff;
      iVar6 = uVar11 * 0x20;
      (&DAT_00d80017)[iVar6] = 0;
      FUN_000f9290(iVar8,0);
      FUN_00103810(uVar11,*(undefined *)(iVar8 + 0x14),(int)*(char *)(iVar8 + 0x15));
      FUN_000f7c90(uVar11,0,iVar8);
      *(undefined *)(iVar8 + 0x31) = 0;
    }
    (&DAT_00d8002d)[iVar6] = 0;
    *(undefined4 *)(iVar8 + 0x24) = 0;
    *(undefined4 *)(iVar8 + 0x20) = 0;
    FUN_000d9ec0(0x23);
    uVar11 = FUN_000f7750(iVar8);
    (&CHAR_P1_00776044)[(uVar11 & 0xff) + (uVar7 & 1) * 5] = *(undefined *)(iVar8 + 0x14);
    iVar6 = FUN_00234490();
    if (iVar6 == 0) {
      return 1;
    }
    uVar7 = FUN_00232270();
    uVar11 = FUN_0022e680();
    if ((uVar7 ^ uVar11 ^ 1) != (uint)*(byte *)(iVar8 + 0x1a)) {
      return 1;
    }
    if (*(char *)(iVar8 + 0x19) == 0) {
      DAT_0061b368 = *(undefined *)(iVar8 + 0x14);
      DAT_0061b36a = *(undefined *)(iVar8 + 0x15);
    }
    else {
      DAT_0061b369 = *(undefined *)(iVar8 + 0x14);
      DAT_0061b36b = *(undefined *)(iVar8 + 0x15);
    }
    FUN_0022e770(DAT_0061b368,DAT_0061b36a,DAT_0061b369,DAT_0061b36b);
    return 1;
  }
  iVar6 = FUN_00234490();
  if (iVar6 == 0) {
    iVar6 = FUN_000f94d0(puVar1);
    if (iVar6 == 1) goto LAB_000fa970;
LAB_000fa906:
    iVar6 = FUN_00234490();
    if (iVar6 == 0) {
      iVar6 = FUN_000f48a0(puVar1);
      if (iVar6 == 1) goto LAB_000faa72;
    }
    else if ((((&DAT_0079d698)[uVar7 * 0xc] & 0x200) != 0) ||
            (((&DAT_0079d698)[uVar7 * 0xc] & 0x20) != 0)) {
LAB_000faa72:
      if (('\0' < *(char *)(iVar8 + 0x19)) && (iVar6 = FUN_000f6f20(param_1,iVar8), iVar6 == 0)) {
        uVar5 = FUN_000f7b30(iVar8);
        iVar6 = FUN_000f8270();
        if (iVar6 != 0) {
          if (DAT_007987d2 == 0x8) {
            FUN_000f9290(iVar8,0);
            FUN_00103810(uVar5,*(undefined *)(iVar8 + 0x14),(int)*(char *)(iVar8 + 0x15));
            FUN_000f7c90(uVar5,0,iVar8);
          }
          else {
            FUN_000fe320();
          }
        }
        *(uint *)(iVar8 + 0x20) = ((DAT_0079d8ae + 6) * 5) / 0x3c;
        goto LAB_000fab69;
      }
    }
    iVar12 = 0;
    iVar6 = FUN_00234490();
    if (iVar6 == 0) {
      iVar12 = FUN_000f48a0(puVar1);
    }
    else if ((((&DAT_0079d698)[uVar7 * 0xc] & 0x200) != 0) ||
            (((&DAT_0079d698)[uVar7 * 0xc] & 0x20) != 0)) {
      iVar12 = 1;
    }
    if (DAT_007987d2 != 0x8) {
      return 1;
    }
    if (iVar12 != 1) {
      return 1;
    }
    if (*(char *)(iVar8 + 0x19) != '\0') {
      return 1;
    }
    FUN_000fe320();
    *(undefined4 *)(iVar8 + 0x38) = 3;
    *(uint *)(iVar8 + 0x20) = ((DAT_0079d8ae + 6) * 5) / 0x3c;
  }
  else {
    if ((((&DAT_0079d698)[uVar7 * 0xc] & 0xd00) == 0) &&
       (((&DAT_0079d698)[uVar7 * 0xc] & 0x10) == 0)) goto LAB_000fa906;
LAB_000fa970:
    if (0 < *(int *)(iVar8 + 0x20)) goto LAB_000fa906;
    if (((&CharacterSelectSlotVersus01_Kasumi_006dc5c8)
         [(uint)(byte)(&DAT_00d7f5f0)[*(byte *)(iVar8 + 0x16)] * 0x14] == LOCKED_CHARACTER) ||
       ((((cVar13 = *(char *)(iVar8 + 0x14), cVar13 != JANNLEE && (cVar13 != LEIFANG)) &&
         (cVar13 != TINA)) && (cVar13 != BASS)))) {
      FUN_000d9ec0(0x29);
      return 0;
    }
    *(undefined4 *)(iVar8 + 0x20) = 1;
    if ((&CharacterSelectSlotVersus01_Kasumi_006dc5c8)
        [(uint)(byte)(&DAT_00d7f5f0)[*(byte *)(iVar8 + 0x16)] * 0x14] != RANDOM) {
      FUN_000d9ec0(0x24);
      *(undefined4 *)(iVar8 + 0x38) = 1;
      iVar6 = FUN_00234490();
      if (iVar6 == 0) {
        return 1;
      }
      uVar11 = FUN_00232270();
      uVar9 = FUN_0022e680();
      if (uVar7 != (uVar11 ^ uVar9 ^ 1)) {
        return 1;
      }
      if (*(char *)(iVar8 + 0x19) != '\0') {
        FUN_0022e890(3);
        return 1;
      }
      FUN_0022e890(1);
      return 1;
    }
    iVar8 = FUN_000f9e80(param_1,uVar7,0);
    if (iVar8 != 0) {
      uVar14 = 0x24;
      goto LAB_000fab6b;
    }
  }
LAB_000fab69:
  uVar14 = 0x29;
LAB_000fab6b:
  FUN_000d9ec0(uVar14);
  return 1;
}

