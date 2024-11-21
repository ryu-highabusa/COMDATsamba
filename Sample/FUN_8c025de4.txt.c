
void FUN_8c025de4(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  uint uVar9;
  undefined *puVar10;
  undefined uVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined *extraout_r2;
  int iVar16;
  undefined *extraout_r3;
  ushort uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  char *pcVar22;
  bool bVar23;
  uint local_38;
  uint local_30;
  
  sVar4 = DAT_8c025e7e;
  if ((*(short *)(sVar4 + param_1) == 0) && (sVar4 = DAT_8c025e80, *(short *)(sVar4 + param_1) == 1)
     ) {
    sVar4 = DAT_8c025e82;
    iVar19 = *(byte *)(sVar4 + param_1) + 1;
    iVar20 = iVar19 >> 1;
    for (uVar21 = 0; (int)uVar21 < 4; uVar21 = uVar21 + 1) {
      if ((int)uVar21 < 0) {
        uVar13 = ~(~uVar21 + 1 & 1) + 1;
      }
      else {
        uVar13 = uVar21 & 1;
      }
      pcVar5 = PTR_DAT_8c025e88;
      pcVar22 = (char *)(uVar21 * 0x74 + param_1);
      if ((int)uVar21 < 2) {
        if ((*pcVar5 == '\t') && (puVar6 = PTR_DAT_8c025e8c, puVar6[uVar13] == '\x01')) {
          cVar1 = pcVar22[0x21];
joined_r0x8c025eb6:
          if (cVar1 != '\0') goto LAB_8c02642c;
        }
        if ((*pcVar22 != '\0') &&
           (sVar4 = DAT_8c025fd0, (byte)pcVar22[0x21] < *(byte *)(sVar4 + param_1))) {
          cVar2 = pcVar22[8];
          uVar17 = DAT_8c025fd2;
          cVar1 = pcVar22[cVar2 + 10];
          iVar16 = uVar21 * 8;
          puVar7 = PTR_DAT_8c025fe0;
          puVar6 = PTR_CHAR_SEL_MULTI_8c025fdc;
          iVar15 = iVar19 >> 2;
          uVar18 = 1;
          local_30 = 1;
          local_38 = 1;
          cVar12 = '\x10';
          cVar3 = (char)iVar20;
          if ((*(ushort *)(puVar7 + iVar16) & uVar17) != 0) {
            cVar12 = '\x10';
            if (pcVar22[8] < iVar20) {
              uVar11 = *(undefined *)(*(int *)(pcVar22 + 4) + (int)pcVar22[8]);
              pcVar22[pcVar22[8] + 10] = pcVar22[pcVar22[8] + 10] + '\x01';
              pcVar8 = (code *)PTR___modls_8c025fe4;
              uVar11 = (*pcVar8)(uVar11);
              *extraout_r3 = uVar11;
              local_38 = uVar18;
              local_30 = uVar18;
            }
            else {
              pcVar22[9] = '\x10';
              pcVar22[8] = pcVar22[8] - cVar3;
              if (pcVar22[8] < '\0') {
                sVar4 = DAT_8c025fd4;
                pcVar22[8] = pcVar22[8] + *(char *)(sVar4 + param_1);
              }
              pcVar22[1] = puVar6[pcVar22[8]];
              local_30 = 0;
              pcVar8 = (code *)PTR___modls_8c025fe4;
              iVar14 = (*pcVar8)();
              local_38 = (uint)(iVar14 < iVar15);
            }
          }
          puVar7 = PTR_DAT_8c025fe8;
          uVar17 = DAT_8c025fd6;
          if ((*(ushort *)(puVar7 + iVar16 + 4) & uVar17) != 0) {
            if (pcVar22[8] < iVar20) {
              pcVar22[9] = cVar12;
              pcVar22[8] = pcVar22[8] + cVar3;
              sVar4 = DAT_8c0260fe;
              if ((int)(uint)*(byte *)(sVar4 + param_1) <= (int)pcVar22[8]) {
                sVar4 = DAT_8c0260fe;
                pcVar22[8] = pcVar22[8] - *(char *)(sVar4 + param_1);
              }
              pcVar22[1] = puVar6[pcVar22[8]];
              local_30 = 0;
              pcVar8 = (code *)PTR___modls_8c026104;
              iVar14 = (*pcVar8)();
              local_38 = (uint)(iVar14 < iVar15);
            }
            else {
              uVar11 = *(undefined *)(*(int *)(pcVar22 + 4) + (int)pcVar22[8]);
              pcVar22[pcVar22[8] + 10] = pcVar22[pcVar22[8] + 10] + '\x01';
              pcVar8 = (code *)PTR___modls_8c025fe4;
              uVar11 = (*pcVar8)(uVar11);
              *extraout_r2 = uVar11;
              local_38 = uVar18;
              local_30 = uVar18;
            }
          }
          puVar7 = PTR_DAT_8c02610c;
          uVar9 = DAT_8c026108;
          if ((*(ushort *)(puVar7 + iVar16 + 4) & uVar9) != 0) {
            pcVar22[9] = cVar12;
            pcVar8 = (code *)PTR___modls_8c026104;
            iVar14 = (*pcVar8)();
            if (iVar14 == 0) {
              pcVar22[8] = pcVar22[8] + cVar3;
              sVar4 = DAT_8c0260fe;
              if ((int)(uint)*(byte *)(sVar4 + param_1) <= (int)pcVar22[8]) {
                sVar4 = DAT_8c0260fe;
                pcVar22[8] = *(char *)(sVar4 + param_1);
              }
            }
            pcVar22[8] = pcVar22[8] + -1;
            if (pcVar22[8] < '\0') {
              sVar4 = DAT_8c0260fe;
              pcVar22[8] = pcVar22[8] + *(char *)(sVar4 + param_1);
            }
            pcVar22[1] = puVar6[pcVar22[8]];
            local_30 = 0;
            local_38 = 0;
          }
          puVar7 = PTR_DAT_8c02610c;
          uVar17 = DAT_8c026100;
          if ((*(ushort *)(puVar7 + iVar16 + 4) & uVar17) != 0) {
            pcVar22[9] = cVar12;
            pcVar22[8] = pcVar22[8] + '\x01';
            pcVar8 = (code *)PTR___modls_8c026104;
            iVar14 = (*pcVar8)();
            if (iVar14 == 0) {
              pcVar22[8] = pcVar22[8] - cVar3;
            }
            sVar4 = DAT_8c0260fe;
            if ((int)(uint)*(byte *)(sVar4 + param_1) <= (int)pcVar22[8]) {
              sVar4 = DAT_8c0260fe;
              pcVar22[8] = pcVar22[8] - *(char *)(sVar4 + param_1);
            }
            pcVar22[1] = puVar6[pcVar22[8]];
            local_30 = 0;
            local_38 = uVar18;
          }
          sVar4 = DAT_8c026102;
          if (*(char *)(sVar4 + param_1) != '\0') {
            if ((local_30 == 1) && (local_38 == 0)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            pcVar8 = (code *)PTR_FUN_8c026138;
            (*pcVar8)(param_1,!bVar23,uVar21);
            pcVar8 = (code *)PTR_FUN_8c02613c;
            iVar14 = (*pcVar8)(param_1,uVar21);
            if (iVar14 == 0) {
              if (local_30 == 0) {
                bVar23 = local_38 == 1;
              }
              else {
                bVar23 = uVar21 == 0;
              }
              pcVar8 = (code *)PTR_FUN_8c02627c;
              (*pcVar8)(param_1,bVar23,uVar21);
            }
          }
          if (pcVar22[pcVar22[8] + 10] < '\0') {
            pcVar22[pcVar22[8] + 10] = *(char *)(*(int *)(pcVar22 + 4) + (int)pcVar22[8]) + -1;
          }
          if ((int)(uint)*(byte *)(*(int *)(pcVar22 + 4) + (int)pcVar22[8]) <=
              (int)pcVar22[pcVar22[8] + 10]) {
            pcVar22[pcVar22[8] + 10] = '\0';
          }
          puVar7 = PTR_DAT_8c026280;
          pcVar22[1] = puVar6[pcVar22[8]];
          puVar10 = PTR_DAT_8c026284;
          uVar17 = DAT_8c026278;
          pcVar22[2] = *(char *)(*(int *)(puVar7 + pcVar22[8] * 4) + (int)pcVar22[pcVar22[8] + 10]);
          if (((*(ushort *)(puVar10 + iVar16 + 2) & uVar17) != 0) && (*(int *)(pcVar22 + 0x3c) == 0)
             ) {
            pcVar8 = (code *)PTR_Illegal_Character_Check_FUN_8c026288;
            iVar16 = (*pcVar8)(pcVar22[1]);
            if (iVar16 != 0) {
              pcVar8 = (code *)PTR_FUN_8c02628c;
              (*pcVar8)(0x24);
              pcVar8 = (code *)PTR_FUN_8c026290;
              (*pcVar8)(param_1,uVar21);
              *(undefined4 *)(pcVar22 + 0x3c) = 0x18;
              sVar4 = DAT_8c02627a;
              *(undefined4 *)(pcVar22 + ((byte)pcVar22[0x21] - 1) * 4 + 0x48) = 0;
              if (((byte)pcVar22[0x21] < *(byte *)(sVar4 + param_1)) &&
                 ((pcVar5 = PTR_DAT_8c026294, *pcVar5 != '\t' ||
                  (puVar7 = PTR_DAT_8c026298, puVar7[uVar13] != '\x01')))) {
                if ((pcVar22[0x70] == '\t') && (pcVar5 = PTR_DAT_8c02629c, *pcVar5 != '\0')) {
                  puVar7 = PTR_CHAR_P1_var12_8c0262a0;
                  iVar16 = ((byte)pcVar22[0x21] - 1) * 2;
                  puVar10 = PTR_DAT_8c0262a4;
                  uVar17 = *(ushort *)(puVar7 + iVar16 + uVar21 * 10 + 2);
                  local_38 = (uint)*(short *)(puVar10 + iVar16 + uVar21 * 10 + 2);
                }
                else {
                  puVar7 = PTR_char_IDs_______8c0262a8;
                  local_38 = 0;
                  uVar17 = (ushort)(byte)puVar7[(byte)pcVar22[1]];
                }
                for (iVar16 = 0;
                    (sVar4 = DAT_8c0263b6, iVar16 < (int)(uint)*(byte *)(sVar4 + param_1) &&
                    (uVar17 != (byte)puVar6[iVar16])); iVar16 = iVar16 + 1) {
                }
                sVar4 = DAT_8c0263b6;
                if ((int)(uint)*(byte *)(sVar4 + param_1) <= iVar16) {
                  iVar16 = -1;
                }
                pcVar22[8] = (char)iVar16;
                cVar3 = pcVar22[8];
                pcVar8 = (code *)PTR_FUN_8c0263bc;
                cVar12 = (*pcVar8)(local_38,uVar21,param_1);
                pcVar8 = (code *)PTR___modls_8c0263c0;
                pcVar22[cVar3 + 10] = cVar12;
                iVar16 = (*pcVar8)();
                sVar4 = DAT_8c0263b8;
                if (*(char *)(sVar4 + param_1) != '\0') {
                  pcVar8 = (code *)PTR_FUN_8c0263c4;
                  (*pcVar8)(param_1,1,uVar21);
                  pcVar8 = (code *)PTR_FUN_8c0263c8;
                  iVar14 = (*pcVar8)(param_1,uVar21);
                  if (iVar14 == 0) {
                    pcVar8 = (code *)PTR_FUN_8c0263cc;
                    (*pcVar8)(param_1,iVar16 < iVar15,uVar21);
                  }
                }
              }
            }
          }
          puVar7 = PTR_DAT_8c0263d0;
          pcVar22[1] = puVar6[pcVar22[8]];
          pcVar22[2] = *(char *)(*(int *)(puVar7 + pcVar22[8] * 4) + (int)pcVar22[pcVar22[8] + 10]);
          if ((cVar1 == pcVar22[pcVar22[8] + 10]) && (cVar2 == pcVar22[8])) {
            bVar23 = false;
          }
          else {
            bVar23 = true;
          }
          pcVar5 = PTR_DAT_8c0263d4;
          if ((((*pcVar5 == '\t') && (puVar6 = PTR_DAT_8c0263d8, puVar6[uVar13] == '\x01')) &&
              ((int)uVar21 < 2)) &&
             ((pcVar22[0x21] == '\x01' &&
              (sVar4 = DAT_8c0263ba, *(char *)(param_1 + uVar21 * 0x74 + (int)sVar4) == '\0')))) {
            FUN_8c025c68(uVar21 + 2,param_1);
          }
          else if (bVar23) {
            *(undefined4 *)(pcVar22 + 0x40) = 0;
            *(undefined4 *)(pcVar22 + 0x3c) = 0;
            pcVar8 = (code *)PTR_FUN_8c0264f0;
            (*pcVar8)(0x23);
            if (((int)uVar21 < 2) ||
               (((pcVar5 = PTR_DAT_8c0264f4, *pcVar5 == '\t' &&
                 (puVar6 = PTR_DAT_8c0264f8, puVar6[uVar13] == '\x01')) &&
                ((pcVar22[0x21] == '\0' && (*(char *)(uVar13 * 0x74 + param_1 + 0x21) == '\x01')))))
               ) {
              FUN_8c025c68(uVar21,param_1);
            }
          }
        }
      }
      else if ((*pcVar5 == '\t') && (puVar6 = PTR_DAT_8c025fd8, puVar6[uVar13] == '\x01')) {
        cVar1 = pcVar22[0x21];
        goto joined_r0x8c025eb6;
      }
LAB_8c02642c:
    }
  }
  return;
}

