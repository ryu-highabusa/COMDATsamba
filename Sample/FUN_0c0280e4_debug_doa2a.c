
undefined4 FUN_0c0280e4(char param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  byte *local_40;
  short sVar13;
  undefined *puVar14;
  undefined *local_38;
  byte *local_34;
  int local_30;
  byte *local_2c;
  undefined *local_28;
  undefined4 local_24;
  
  puVar1 = PTR_Debug_Printf_0c028164;
  local_24 = 0;
  puVar14 = PTR_s_Pause___0c028168;
  (*(code *)PTR_Debug_Printf_0c028164)
            (PTR_s__s_0c02816c,PTR_s_Pause___0c028168 + 0x30,PTR_s_Pause___0c028168,
             s_Pause___0c13b60a);
  (*(code *)puVar1)(PTR_s__s_0c02816c,puVar14 + DAT_0c028162);
  (*(code *)puVar1)(PTR_s__0c028170);
  FUN_0c028508(param_1);
  pcVar6 = DAT_0c02855c;
  pcVar5 = DAT_0c028558;
  pcVar4 = DAT_0c028554;
  pcVar3 = DAT_0c028404;
  puVar1 = PTR_DAT_0c028178;
  pbVar2 = DAT_0c028174;
  switch(param_1) {
  case '\0':
    if ((*(ushort *)(PTR_DAT_0c028178 + 0x1e) & DAT_0c0283e8) != 0) {
      local_24 = 1;
    }
    break;
  case '\x01':
    if ((*(ushort *)(PTR_DAT_0c028178 + 0x1e) & DAT_0c0283e8) != 0) {
      *PTR_DAT_0c0283ec = *PTR_DAT_0c0283ec ^ 1;
    }
    break;
  case '\x02':
    if ((*(ushort *)(PTR_DAT_0c028178 + 2) & DAT_0c0283e8) != 0) {
      *DAT_0c028174 = *DAT_0c028174 ^ 1;
    }
    if ((*(ushort *)(puVar1 + 0x10) & DAT_0c0283e8) != 0) {
      pbVar2[0x68] = pbVar2[0x68] ^ 1;
    }
    break;
  case '\x03':
    if ((*(ushort *)(PTR_DAT_0c028178 + 2) & DAT_0c0283e8) != 0) {
      *DAT_0c0283f0 = *DAT_0c0283f0 ^ 1;
    }
    if ((*(ushort *)(puVar1 + 0x10) & DAT_0c0283e8) != 0) {
      *DAT_0c0283f4 = *DAT_0c0283f4 ^ 1;
    }
    break;
  case '\x04':
    iVar12 = 0;
    local_40 = DAT_0c028174;
    local_38 = PTR_DAT_0c028178;
    local_34 = DAT_0c028174;
    do {
      if ((*(ushort *)(puVar1 + iVar12 * 0xe + 2) & DAT_0c0283f8) == 0) {
        sVar13 = 1;
        if ((*(ushort *)(puVar1 + iVar12 * 0xe) & 2) != 0) {
          sVar13 = 10;
        }
        if ((*(ushort *)(puVar1 + iVar12 * 0xe) & 1) != 0) {
          sVar13 = 100;
        }
        if ((*(ushort *)(puVar1 + iVar12 * 0xe + 2) & 8) != 0) {
          *(short *)(local_34 + 0x20) = *(short *)(local_34 + 0x20) - sVar13;
        }
        if ((*(ushort *)(local_38 + 2) & 4) != 0) {
          *(short *)(local_40 + 0x20) = *(short *)(local_40 + 0x20) + sVar13;
        }
      }
      else if (*(short *)(pbVar2 + iVar12 * 0x68 + 0x20) == 0) {
        *(undefined2 *)(pbVar2 + iVar12 * 0x68 + 0x20) = *(undefined2 *)(DAT_0c0283fc + iVar12 * 2);
      }
      else {
        (pbVar2 + iVar12 * 0x68 + 0x20)[0] = 0;
        (pbVar2 + iVar12 * 0x68 + 0x20)[1] = 0;
      }
      iVar12 = iVar12 + 1;
      local_40 = local_40 + 0x68;
      local_38 = local_38 + 0xe;
      local_34 = local_34 + 0x68;
    } while (iVar12 < 2);
    break;
  case '\x05':
    iVar12 = 0;
    local_2c = DAT_0c028174;
    local_30 = DAT_0c028400;
    local_28 = PTR_DAT_0c028178;
    do {
      iVar10 = iVar12 * 4 + DAT_0c028400;
      puVar9 = (ushort *)(puVar1 + iVar12 * 0xe);
      if ((puVar9[1] & DAT_0c0283f8) == 0) {
        sVar13 = 1;
        if ((*puVar9 & 2) != 0) {
          sVar13 = 10;
        }
        if ((*puVar9 & 1) != 0) {
          sVar13 = 100;
        }
        if ((puVar9[1] & 8) != 0) {
          iVar8 = (pbVar2[iVar12 * 0x68 + 0x61] >> 1 ^ 1) * 2;
          *(short *)(iVar8 + iVar10) = *(short *)(iVar8 + iVar10) - sVar13;
        }
        if ((*(ushort *)(local_28 + 2) & 4) != 0) {
          iVar10 = (local_2c[0x61] >> 1 ^ 1) * 2;
          *(short *)(iVar10 + local_30) = *(short *)(iVar10 + local_30) + sVar13;
        }
      }
      else if (*(short *)((pbVar2[iVar12 * 0x68 + 0x61] >> 1 ^ 1) * 2 + iVar10) == 0) {
        *(undefined2 *)(iVar10 + (pbVar2[iVar12 * 0x68 + 0x61] >> 1 ^ 1) * 2) =
             *(undefined2 *)(DAT_0c0283fc + iVar12 * 2);
      }
      else {
        *(undefined2 *)((pbVar2[iVar12 * 0x68 + 0x61] >> 1 ^ 1) * 2 + iVar10) = 0;
      }
      iVar12 = iVar12 + 1;
      local_2c = local_2c + 0x68;
      local_30 = local_30 + 4;
      local_28 = local_28 + 0xe;
    } while (iVar12 < 2);
    break;
  case '\x06':
    if ((*(ushort *)(PTR_DAT_0c028178 + 0x1e) & DAT_0c0283f8) != 0) {
      if (*DAT_0c028404 == '\0') {
        *DAT_0c028404 = *DAT_0c028550;
      }
      else {
        *DAT_0c028404 = '\0';
      }
    }
    cVar11 = '\x01';
    if ((*(ushort *)(puVar1 + 0x1c) & 2) != 0) {
      cVar11 = '\n';
    }
    if ((*(ushort *)(puVar1 + 0x1c) & 1) != 0) {
      cVar11 = 'd';
    }
    if ((*(ushort *)(puVar1 + 0x1e) & 8) != 0) {
      *pcVar3 = *pcVar3 - cVar11;
    }
    if ((*(ushort *)(puVar1 + 0x1e) & 4) != 0) {
      *pcVar3 = *pcVar3 + cVar11;
    }
    break;
  case '\a':
    if ((*(ushort *)(PTR_DAT_0c028178 + 0x1e) & 8) != 0) {
      *DAT_0c028554 = *DAT_0c028554 + -1;
    }
    if ((*(ushort *)(puVar1 + 0x1e) & 4) != 0) {
      *pcVar4 = *pcVar4 + '\x01';
    }
    break;
  case '\b':
    if ((*(ushort *)(PTR_DAT_0c028178 + 0x1e) & 8) != 0) {
      *DAT_0c028558 = *DAT_0c028558 + -1;
    }
    if ((*(ushort *)(puVar1 + 0x1e) & 4) != 0) {
      *pcVar5 = *pcVar5 + '\x01';
    }
    break;
  case '\t':
    if ((*(ushort *)(PTR_DAT_0c028178 + 0x1e) & 8) != 0) {
      *DAT_0c02855c = *DAT_0c02855c + -1;
    }
    if ((*(ushort *)(puVar1 + 0x1e) & 4) != 0) {
      *pcVar6 = *pcVar6 + '\x01';
    }
    break;
  case '\n':
    if ((*(ushort *)(PTR_DAT_0c028178 + 0x1e) & DAT_0c028560) != 0) {
      *DAT_0c028564 = 1;
    }
    break;
  case '\v':
    if ((*(ushort *)(PTR_DAT_0c028178 + 0x1e) & DAT_0c028560) != 0) {
      if (*DAT_0c028568 == '<') {
        *DAT_0c028568 = 'd';
      }
      else {
        *DAT_0c028568 = '<';
      }
    }
    break;
  case '\f':
    if ((*(ushort *)(PTR_DAT_0c028178 + 0x1e) & DAT_0c028560) != 0) {
      *DAT_0c02856c = *DAT_0c02856c ^ 1;
    }
  }
  pbVar7 = DAT_0c028574;
  pbVar2[0x53] = *DAT_0c028570;
  pbVar2[0xbb] = *pbVar7;
  return local_24;
}

