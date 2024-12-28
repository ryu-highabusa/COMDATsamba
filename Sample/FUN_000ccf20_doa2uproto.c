
/* WARNING: Removing unreachable block (ram,0x000c7db5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ccf20(void)

{
  byte *pbVar1;
  int iVar2;
  undefined uVar3;
  ushort uVar4;
  ulonglong uVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  char *pcVar10;
  undefined1 *puVar11;
  undefined3 extraout_var;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  undefined **ppuVar18;
  int iVar19;
  char cVar20;
  byte bVar21;
  undefined4 extraout_EDX;
  int iVar22;
  ushort *puVar23;
  byte bVar24;
  int iVar25;
  undefined4 *puVar26;
  byte *pbVar27;
  byte bVar28;
  byte *local_3c;
  undefined uStack_39;
  undefined1 *puVar29;
  undefined4 in_stack_ffffffcc;
  undefined1 *puVar30;
  uint local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 in_stack_fffffff4;
  
  if (DAT_00878940 == '\x03') {
    if (DAT_008767d0 != '\x01') {
      puVar29 = &DAT_00876864;
      puVar30 = &DAT_008767d0;
    }
    else {
      puVar29 = &DAT_008767d0;
      puVar30 = &DAT_00876864;
    }
    local_24 = (uint)(DAT_008767d0 == '\x01');
    if ((DAT_00873d8c == 0) && (DAT_0089f2c4 == 1)) {
      bVar21 = puVar29[1];
      DAT_0089f2c4 = DAT_00873d8c;
      bVar24 = (&DAT_00691360)[bVar21];
      pcVar15 = (char *)&DAT_0089f3a8;
      pcVar10 = &DAT_0068dffd + (uint)bVar24 * 0x54;
      iVar22 = 7;
      do {
        if (*pcVar10 == -1) {
          *pcVar15 = -1;
        }
        else {
          *pcVar15 = *pcVar10;
        }
        pcVar10 = pcVar10 + 0xc;
        pcVar15 = pcVar15 + 1;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
      puVar11 = &DAT_0068e524;
      DAT_0089f334 = (byte *)&DAT_0068e524;
      DAT_0089f38c = 0;
      cVar6 = DAT_0068e524;
      while (cVar6 != -1) {
        pcVar10 = puVar11 + 1;
        DAT_0089f38c = DAT_0089f38c + 1;
        puVar11 = puVar11 + 1;
        cVar6 = *pcVar10;
      }
      uVar16 = (uint)DAT_0089f38c;
      if (uVar16 != 0) {
        puVar26 = (undefined4 *)&DAT_0089f2e8;
        for (uVar17 = (uint)(DAT_0089f38c >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar26 = 0;
          puVar26 = puVar26 + 1;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined *)puVar26 = 0;
          puVar26 = (undefined4 *)((int)puVar26 + 1);
        }
      }
      FUN_000c4670(bVar21);
      FUN_000c46c0(*(char **)(&DAT_0089f3f4 + (uint)bVar24 * 4));
      FUN_000c4770((char *)&DAT_0089f3a8,7);
      cVar6 = (char)DAT_0089f1c9;
      iVar25 = 0;
      uVar17 = CONCAT31((int3)((uint)in_stack_ffffffcc >> 8),cVar6);
      uVar16 = (uint)(byte)((ushort)DAT_0089f1c9 >> 8);
      iVar22 = 0;
      do {
        bVar21 = (&DAT_0089f3a8)[iVar22];
        local_3c = (byte *)CONCAT31(local_3c._1_3_,bVar21);
        if (((cVar6 != '\x05') || (bVar21 != 5)) &&
           (bVar7 = FUN_000dbcd0(bVar21), CONCAT31(extraout_var,bVar7) == 0)) {
          (&uStack_1c)[iVar25] = iVar22;
          iVar25 = iVar25 + 1;
        }
        iVar22 = iVar22 + 1;
      } while (iVar22 < 6);
      iVar22 = -1;
      if (iVar25 != 0) {
        uVar12 = FUN_003354f4();
        iVar22 = (&uStack_1c)[(int)uVar12 % iVar25];
      }
      iVar25 = 0;
      uVar12 = uVar16;
      do {
        bVar21 = (&DAT_0089f3a8)[iVar25];
        local_3c = (byte *)CONCAT31(local_3c._1_3_,bVar21);
        pbVar27 = local_3c;
        uVar13 = FUN_0011e590(bVar21,0,0,0);
        cVar8 = (char)uVar13;
        cVar6 = -1;
        uVar13 = FUN_00021410();
        if (((char)uVar13 != '\0') && (DAT_0089f46d != '\0')) {
          uVar13 = FUN_000c4220(uVar17,(char)uVar16,bVar21);
          cVar6 = (char)uVar13;
        }
        cVar20 = (char)uVar17;
        if ((cVar20 == '\x05') && (cVar9 == '\x05')) {
          uVar13 = FUN_0011e590(5,2,0,0);
          cVar6 = (char)uVar13;
          local_20 = CONCAT31(local_20._1_3_,cVar6);
          uVar13 = FUN_0011e4b0(5,cVar6,&stack0xffffffc3);
          cVar8 = (char)uVar13;
          uVar13 = FUN_0011e4b0(5,(char)uVar16,&stack0xffffffc3);
          if ((char)uVar13 == cVar8) {
            bVar21 = 3;
            pbVar27 = &DAT_00000005;
            goto LAB_000c77db;
          }
        }
        else if (iVar25 == iVar22) {
          bVar24 = *(byte *)((byte)(&DAT_00691360)[(uint)local_3c & 0xff] + 0x2ed8 + DAT_00878948);
          iVar19 = FUN_000dbcb0(bVar21);
          if (iVar19 <= (int)(uint)bVar24) {
            bVar24 = bVar24 - 1;
          }
          uVar16 = uVar12;
          uVar12 = FUN_0011e590(bVar21,bVar24,0,0);
          cVar6 = (char)uVar12;
          uVar12 = uVar16;
        }
        else {
          if ((cVar20 == '\t') && (cVar9 == '\x01')) {
            bVar21 = 1;
            pbVar27 = (byte *)0x1;
          }
          else {
            if (cVar9 == '\x11') {
              uVar13 = FUN_00021420();
              if ((char)uVar13 != '\0') {
                uVar13 = FUN_003354f4();
                uVar13 = uVar13 & 0x80000003;
                bVar7 = uVar13 == 0;
                if ((int)uVar13 < 0) {
                  bVar7 = (uVar13 - 1 | 0xfffffffc) == 0xffffffff;
                }
                if (bVar7) {
                  bVar21 = 1;
                  pbVar27 = (byte *)0x11;
                  goto LAB_000c77db;
                }
              }
              cVar20 = (char)uVar17;
            }
            if (((cVar6 != -1) || (cVar6 = cVar8, cVar20 != cVar9)) || ((char)uVar12 != cVar8))
            goto LAB_000c77e5;
            bVar21 = 1;
          }
LAB_000c77db:
          uVar13 = FUN_0011e590((byte)pbVar27,bVar21,0,0);
          cVar6 = (char)uVar13;
        }
LAB_000c77e5:
        (&DAT_0089f2dc)[iVar25] = cVar6;
        iVar25 = iVar25 + 1;
      } while (iVar25 < 7);
      pbVar27 = &StageSelectDefaultStageSingle;
      DAT_0089f334 = &StageSelectDefaultStageSingle;
      DAT_0089f38c = 0;
      bVar21 = StageSelectDefaultStageSingle;
      while (bVar21 != 0xff) {
        pbVar1 = pbVar27 + 1;
        DAT_0089f38c = DAT_0089f38c + 1;
        pbVar27 = pbVar27 + 1;
        bVar21 = *pbVar1;
      }
      uVar16 = (uint)DAT_0089f38c;
      if (uVar16 != 0) {
        puVar26 = (undefined4 *)&DAT_0089f2e8;
        for (uVar17 = (uint)(DAT_0089f38c >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
          *puVar26 = 0;
          puVar26 = puVar26 + 1;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined *)puVar26 = 0;
          puVar26 = (undefined4 *)((int)puVar26 + 1);
        }
      }
      pbVar27 = &RANDOM_0068dffe + (uint)(byte)(&DAT_00691360)[(byte)puVar29[1]] * 0x54;
      local_3c = &DAT_0089f3d0;
      iVar22 = 7;
LAB_000c7870:
      bVar21 = *pbVar27;
      if (bVar21 == 0xff) {
        *local_3c = 0xff;
      }
      else {
        *local_3c = bVar21;
        uVar16 = FUN_000d9380(bVar21);
        pbVar1 = DAT_0089f334;
        bVar21 = (byte)uVar16;
        if ((bVar21 != 0xff) && (bVar21 != 0xff)) {
          iVar25 = 0;
          bVar24 = *DAT_0089f334;
          while (bVar24 != 0xff) {
            if (bVar24 == bVar21) {
              if ((&DAT_0089f2e8)[iVar25] == '\0') {
                DAT_0089f38c = DAT_0089f38c - 1;
                (&DAT_0089f2e8)[iVar25] = 1;
              }
              break;
            }
            iVar19 = iVar25 + 1;
            iVar25 = iVar25 + 1;
            bVar24 = DAT_0089f334[iVar19];
          }
        }
        ppuVar18 = &PTR_DAT_0068ed10;
        uVar16 = 0;
        do {
          iVar25 = 0;
          if (*(byte *)(ppuVar18 + 1) != 0) {
            do {
              if (*local_3c == (*ppuVar18)[iVar25]) {
                local_20 = (uint)*(byte *)(ppuVar18 + 1);
                iVar25 = 0;
                if (local_20 == 0) goto LAB_000c796b;
                bVar21 = *local_3c;
                puVar14 = *ppuVar18;
                goto LAB_000c7921;
              }
              iVar25 = iVar25 + 1;
            } while (iVar25 < (int)(uint)*(byte *)(ppuVar18 + 1));
          }
          uVar16 = uVar16 + 1;
          ppuVar18 = ppuVar18 + 2;
        } while (uVar16 < 3);
      }
      goto LAB_000c796b;
    }
    goto LAB_000c7b90;
  }
  if (DAT_00878940 == '\x04') {
    if (DAT_00878e3d == '\0') {
      if (DAT_008767d0 != '\x01') {
        puVar30 = &DAT_008767d0;
        puVar29 = &DAT_008767d0;
      }
      else {
        puVar29 = &DAT_00876864;
        puVar30 = &DAT_00876864;
      }
      uVar16 = (uint)(DAT_008767d0 == '\x01');
      if ((DAT_00873d8c == 0) && (DAT_0089f2c4 == 1)) {
        DAT_0089f2c4 = 0;
        FUN_000c4840((char *)&BYTE_0068e534_char,8,-1);
        FUN_000c87a0((char *)&StageSelectDefaultStageSingle,8);
        iVar22 = (uint)(DAT_008767d0 != '\x01') * 0x94;
        bVar21 = (&CHAR_P1_008767d1)[iVar22];
        cVar9 = (&DAT_008767d2)[iVar22];
        uVar17 = (uint)bVar21;
        iVar22 = 0;
        do {
          uVar12 = FUN_0011e590((&DAT_0089f3a8)[iVar22],0,0,0);
          (&DAT_0089f2dc)[iVar22] = (char)uVar12;
          if ((byte)uVar17 == (&DAT_0089f3a8)[iVar22]) {
            uVar12 = FUN_0011e4b0((&DAT_0089f3a8)[iVar22],(char)uVar12,&uStack_39);
            uVar13 = FUN_0011e4b0(bVar21,cVar9,&uStack_39);
            if ((char)uVar13 == (char)uVar12) {
              uVar12 = FUN_0011e590((&DAT_0089f3a8)[iVar22],1,0,0);
              (&DAT_0089f2dc)[iVar22] = (char)uVar12;
            }
          }
          iVar22 = iVar22 + 1;
        } while (iVar22 < 8);
        iVar22 = 0;
        iVar25 = 0;
        do {
          bVar7 = FUN_000dbcd0((&DAT_0089f3a8)[iVar25]);
          if (CONCAT31(extraout_var_01,bVar7) == 0) {
            (&local_20)[iVar22] = iVar25;
            iVar22 = iVar22 + 1;
          }
          iVar25 = iVar25 + 1;
        } while (iVar25 < 8);
        if (iVar22 != 0) {
          uVar17 = FUN_003354f4();
          iVar25 = (&local_20)[(int)uVar17 % iVar22];
          bVar21 = (&DAT_0089f3a8)[iVar25];
          bVar24 = *(byte *)((byte)(&DAT_00691360)[bVar21] + 0x2ed8 + DAT_00878948);
          iVar19 = FUN_000dbcb0(bVar21);
          if (iVar19 <= (int)(uint)bVar24) {
            bVar24 = bVar24 - 1;
          }
          puVar29 = puVar30;
          uVar12 = FUN_0011e590(bVar21,bVar24,0,0);
          (&DAT_0089f2dc)[iVar25] = (char)uVar12;
          if (1 < iVar22) {
            uVar12 = FUN_003354f4();
            iVar25 = (int)uVar12 % (iVar22 + -1);
            if ((int)uVar17 % iVar22 <= iVar25) {
              iVar25 = iVar25 + 1;
            }
            iVar22 = (&local_20)[iVar25];
            bVar21 = (&DAT_0089f3a8)[iVar22];
            bVar24 = *(byte *)((byte)(&DAT_00691360)[bVar21] + 0x2ed8 + DAT_00878948);
            iVar25 = FUN_000dbcb0(bVar21);
            if (iVar25 <= (int)(uint)bVar24) {
              bVar24 = bVar24 - 1;
            }
            uVar17 = FUN_0011e590(bVar21,bVar24,0,0);
            (&DAT_0089f2dc)[iVar22] = (char)uVar17;
          }
        }
      }
      bVar24 = DAT_00873d8c;
      bVar21 = (&DAT_0089f3a8)[DAT_00873d8c];
      puVar29[1] = bVar21;
      uVar17 = FUN_000c72d0((uint)bVar21,bVar24);
      iVar22 = uVar16 * 7 + (uint)((byte)puVar29[0x21] >> 1);
      puVar29[2] = (char)uVar17;
      (&DAT_008767ac)[iVar22] = puVar29[1];
      (&DAT_00878bec)[iVar22] = (char)uVar17;
      return;
    }
    if (DAT_008767d0 != '\x01') {
      puVar30 = &DAT_008767d0;
      puVar29 = &DAT_008767d0;
    }
    else {
      puVar29 = &DAT_00876864;
      puVar30 = &DAT_00876864;
    }
    uVar16 = (uint)(DAT_008767d0 == '\x01');
    if ((DAT_00873d8c == 0) && (DAT_0089f2c4 == 1)) {
      DAT_0089f2c4 = DAT_00873d8c;
      FUN_000c4330();
      iVar22 = (uint)(DAT_008767d0 != '\x01') * 7;
      puVar11 = &DAT_0089f3c4;
      puVar29 = puVar30;
      do {
        iVar25 = 0;
        do {
          bVar21 = puVar11[iVar25];
          pcVar10 = &DAT_0089f22c + (byte)(&DAT_00691360)[bVar21];
          bVar28 = bVar21;
          uVar17 = FUN_0011e590(bVar21,0,0,0);
          cVar9 = (char)uVar17;
          *pcVar10 = cVar9;
          bVar24 = bVar21;
          if ((&DAT_008767ac)[iVar22] == bVar21) {
            bVar24 = bVar28;
            uVar17 = FUN_0011e4b0((&DAT_008767ac)[iVar22],(&DAT_00878bec)[iVar22],&stack0xffffff92);
            uVar12 = FUN_0011e4b0(bVar21,cVar9,&stack0xffffff92);
            if ((char)uVar17 != (char)uVar12) goto LAB_000c8051;
LAB_000c809c:
            uVar17 = FUN_0011e590(bVar21,1,0,0);
            *pcVar10 = (char)uVar17;
          }
          else {
LAB_000c8051:
            cVar9 = (&DAT_00878bed)[iVar22];
            bVar28 = (&DAT_008767ad)[iVar22];
            if (bVar28 == bVar24) {
              uVar17 = FUN_0011e4b0(bVar21,*pcVar10,&stack0xffffff93);
              uVar12 = FUN_0011e4b0(bVar28,cVar9,&stack0xffffff93);
              if ((char)uVar12 == (char)uVar17) goto LAB_000c809c;
            }
          }
          iVar25 = iVar25 + 1;
        } while (iVar25 < 2);
        puVar11 = puVar11 + 2;
      } while ((int)puVar11 < 0x89f3ce);
      iVar22 = 0;
      puVar30 = &DAT_0089f3c4;
      do {
        iVar25 = 0;
        do {
          bVar21 = puVar30[iVar25];
          bVar7 = FUN_000dbcd0(bVar21);
          if (CONCAT31(extraout_var_00,bVar7) == 0) {
            *(uint *)((int)&stack0xffffffc4 + iVar22 * 4) = (uint)bVar21;
            iVar22 = iVar22 + 1;
          }
          iVar25 = iVar25 + 1;
        } while (iVar25 < 2);
        puVar30 = puVar30 + 2;
      } while ((int)puVar30 < 0x89f3ce);
      if (iVar22 != 0) {
        uVar17 = FUN_003354f4();
        iVar19 = (int)uVar17 % iVar22;
        bVar21 = *(byte *)((int)&stack0xffffffc4 + iVar19 * 4);
        bVar24 = *(byte *)((byte)(&DAT_00691360)[bVar21] + 0x2ed8 + DAT_00878948);
        iVar25 = FUN_000dbcb0(bVar21);
        if (iVar25 <= (int)(uint)bVar24) {
          bVar24 = bVar24 - 1;
        }
        uVar17 = FUN_0011e590(bVar21,bVar24,0,0);
        (&DAT_0089f22c)[(byte)(&DAT_00691360)[*(int *)((int)&stack0xffffffc4 + iVar19 * 4)]] =
             (char)uVar17;
        if (1 < iVar22) {
          uVar17 = FUN_003354f4();
          iVar22 = (int)uVar17 % (iVar22 + -1);
          if (iVar19 <= iVar22) {
            iVar22 = iVar22 + 1;
          }
          bVar21 = *(byte *)((int)&stack0xffffffc4 + iVar22 * 4);
          bVar24 = *(byte *)((byte)(&DAT_00691360)[bVar21] + 0x2ed8 + DAT_00878948);
          iVar25 = FUN_000dbcb0(bVar21);
          if (iVar25 <= (int)(uint)bVar24) {
            bVar24 = bVar24 - 1;
          }
          uVar17 = FUN_0011e590(bVar21,bVar24,0,0);
          (&DAT_0089f22c)[(byte)(&DAT_00691360)[*(int *)((int)&stack0xffffffc4 + iVar22 * 4)]] =
               (char)uVar17;
        }
      }
      iVar22 = 0;
      do {
        uVar17 = FUN_003354f4();
        uVar17 = (int)uVar17 % 5;
        cVar9 = (&stack0xffffffbc)[uVar17 & 0xff];
        while (cVar9 == '\0') {
          uVar17 = (uint)(byte)((char)uVar17 + 1);
          if ((&BYTE_0068e568)[uVar17] == 0xff) {
            uVar17 = 0;
          }
          cVar9 = (&stack0xffffffbc)[uVar17];
        }
        uVar17 = uVar17 & 0xff;
        bVar7 = false;
        (&stack0xffffffbc)[uVar17] = 0;
        if (BYTE_0068e568 == 0xff) {
LAB_000c8270:
          (&stack0xffffffbc)[uVar17] = 0;
        }
        else {
          iVar25 = 0;
          do {
            if ((&stack0xffffffbc)[iVar25] != '\0') {
              bVar7 = true;
            }
            pbVar27 = &StageListTag + iVar25;
            iVar25 = iVar25 + 1;
          } while (*pbVar27 != 0xff);
          if (!bVar7) {
            iVar25 = 0;
            do {
              bVar21 = (&StageListTag)[iVar25];
              (&stack0xffffffbc)[iVar25] = 1;
              iVar25 = iVar25 + 1;
            } while (bVar21 != 0xff);
            goto LAB_000c8270;
          }
        }
        (&DAT_0089f3d0)[iVar22] = (&BYTE_0068e568)[uVar17];
        iVar22 = iVar22 + 1;
      } while (iVar22 < 5);
    }
    bVar24 = DAT_00873d8c;
    uVar17 = (uint)DAT_00873d8c;
    puVar29[0x22] = puVar29[0x21] & 1;
    bVar21 = (&DAT_0089f3c4)[uVar17 * 2];
    puVar29[0x21] = puVar29[0x21] & 1;
    puVar29[1] = bVar21;
    uVar17 = FUN_000c72d0((uint)bVar21,bVar24);
    iVar22 = uVar16 * 7;
    (&DAT_008767ac)[iVar22] = puVar29[1];
    bVar24 = DAT_00873d8c;
    uVar16 = (uint)DAT_00873d8c;
    puVar29[2] = (char)uVar17;
    (&DAT_00878bec)[iVar22] = (char)uVar17;
    bVar21 = (&DAT_0089f3c5)[uVar16 * 2];
    (&DAT_008767ad)[iVar22] = bVar21;
    uVar16 = FUN_000c72d0((uint)bVar21,bVar24);
    (&DAT_00878bed)[iVar22] = (char)uVar16;
    return;
  }
  if (DAT_00878940 != '\a') {
    if (DAT_00878940 == '\x06') {
      if (DAT_008767d0 != '\x01') {
        puVar29 = &DAT_008767d0;
      }
      else {
        puVar29 = &DAT_00876864;
      }
      uVar16 = (uint)(DAT_008767d0 == '\x01');
      if ((DAT_00873d8c == 0) && (DAT_0089f2c4 == 1)) {
        DAT_0089f2c4 = 0;
        FUN_000c40d0();
        bVar21 = puVar29[0x21];
        uVar17 = (uint)DAT_0089f1c4;
        puVar29[0x21] = bVar21 & 1;
        puVar29[0x22] = bVar21 & 1;
        uVar5 = (ulonglong)DAT_00873d8c;
        bVar21 = (&DAT_0089f3a8)[(int)(uVar5 % (ulonglong)(longlong)(int)uVar17)];
        puVar29[1] = bVar21;
        uStack_1c = 0xc8385;
        uVar12 = FUN_000c72d0((uint)bVar21,(byte)(uVar5 % (ulonglong)(longlong)(int)uVar17));
        iVar22 = uVar16 * 7;
        (&DAT_008767ac)[iVar22] = puVar29[1];
        DAT_0089f37c = DAT_0089f3a8;
        uVar17 = CONCAT31((int3)((uint)extraout_EDX >> 8),DAT_0089f3a8);
        (&DAT_00878bec)[iVar22] = (char)uVar12;
        bVar21 = DAT_0089f1c4;
        uVar13 = (uint)DAT_0089f1c4;
        puVar29[2] = (char)uVar12;
        DAT_0089f37d = DAT_0089f3a9;
        if (uVar13 != 0) {
          puVar26 = (undefined4 *)&DAT_0089f3d0;
          for (uVar12 = (uint)(bVar21 >> 2); uVar12 != 0; uVar12 = uVar12 - 1) {
            *puVar26 = 0x9090909;
            puVar26 = puVar26 + 1;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined *)puVar26 = 9;
            puVar26 = (undefined4 *)((int)puVar26 + 1);
          }
        }
      }
      else {
        uVar17 = (uint)DAT_0089f37c;
      }
      bVar21 = puVar29[0x21];
      puVar29[0x21] = bVar21 & 1;
      puVar29[0x22] = bVar21 & 1;
      puVar29[1] = (char)uVar17;
      uStack_1c = 0xc83fd;
      uVar17 = FUN_000c72d0(uVar17,0);
      uVar3 = puVar29[1];
      iVar22 = uVar16 * 7;
      puVar29[2] = (char)uVar17;
      (&DAT_00878bec)[iVar22] = (char)uVar17;
      bVar7 = DAT_00878e3d != '\0';
      (&DAT_008767ac)[iVar22] = uVar3;
      if (bVar7) {
        uVar16 = (uint)DAT_0089f37d;
        (&DAT_008767ad)[iVar22] = DAT_0089f37d;
        uStack_1c = 0xc8435;
        uVar16 = FUN_000c72d0(uVar16,0);
        (&DAT_00878bed)[iVar22] = (char)uVar16;
      }
      return;
    }
    if (((((DAT_00878940 != '\t') && (DAT_00878940 != '\n')) && (DAT_00878940 != '\v')) &&
        ((DAT_00878940 != '\f' && (DAT_00878940 != '\r')))) && (DAT_00878940 != '\x0e')) {
      if (DAT_00878940 == '\b') {
        DAT_0089f3d0 = *(undefined *)((int)&DAT_00878944 + (uint)DAT_00873d49);
      }
      return;
    }
    iVar22 = (DAT_0087895a ^ 1) * 0x94;
    DAT_0089f2c4 = 0;
    DAT_0089f3d0 = DAT_0089f3b6;
    if (DAT_00878e2d != '\x01') {
      DAT_0089f3d0 = *(undefined *)((int)&DAT_00878944 + (uint)DAT_00873d49);
    }
    iVar25 = (DAT_0087895a ^ 1) * 7;
    (&DAT_008767ac)[iVar25] = (&CHAR_P1_00851594)[iVar25];
    (&CHAR_P1_008767d1)[iVar22] = (&CHAR_P1_00851594)[iVar25];
    (&DAT_00878bec)[iVar25] = (&DAT_00878d58)[iVar25];
    (&DAT_008767d2)[iVar22] = (&DAT_00878d58)[iVar25];
    return;
  }
  bVar7 = DAT_008767d0 != '\x01';
  if (bVar7) {
    puVar29 = &DAT_008767d0;
  }
  else {
    puVar29 = &DAT_00876864;
  }
  uVar16 = (uint)!bVar7;
  if ((DAT_00873d8c != 0) || (DAT_0089f2c4 != 1)) goto LAB_000c7ed1;
  DAT_0089f2c4 = 0;
  if (DAT_0089f46d == '\0') {
    iVar22 = 0;
    do {
      local_3c = (byte *)0x0;
      uVar17 = FUN_0011e590((&DAT_0069137c)[iVar22],0,0,0);
      (&DAT_0089f22c)[iVar22] = (char)uVar17;
      iVar22 = iVar22 + 1;
    } while (iVar22 < 0xf);
    uVar17 = 0xff;
    uVar12 = 0;
    cVar6 = (&DAT_008767ac)[(uint)bVar7 * 7];
    cVar8 = (&DAT_008767ad)[(uint)bVar7 * 7];
    local_20 = CONCAT31(local_20._1_3_,0xff);
    do {
      bVar21 = (byte)uVar12;
      if ((&DAT_0068e55c)[uVar12 * 2] == cVar6) {
        uStack_1c._0_2_ = (ushort)(byte)uStack_1c;
LAB_000c7cc0:
        uVar17 = uVar12 & 0xff;
      }
      else if ((&DAT_0068e55d)[uVar12 * 2] == cVar6) {
        uStack_1c._0_2_ = CONCAT11(1,(byte)uStack_1c);
        goto LAB_000c7cc0;
      }
      if ((&DAT_0068e55c)[uVar12 * 2] == cVar8) {
        local_20._0_2_ = (ushort)bVar21;
      }
      else if ((&DAT_0068e55d)[uVar12 * 2] == cVar8) {
        local_20._0_2_ = CONCAT11(1,bVar21);
      }
      else {
        bVar21 = (byte)local_20;
      }
      (&stack0xfffffff4)[uVar12 * 2] = (&DAT_0068e55c)[uVar12 * 2];
      (&stack0xfffffff5)[uVar12 * 2] = (&DAT_0068e55d)[uVar12 * 2];
      uVar12 = uVar12 + 1;
    } while (uVar12 < 6);
    bVar24 = (byte)uVar17;
    if ((bVar24 == 0xff) || (bVar21 == 0xff)) {
      if (bVar24 == bVar21) {
        uVar17 = FUN_003354f4();
        (&stack0xffffffec)[(int)uVar17 % 6] = 0;
      }
      else {
        if (bVar24 != 0xff) goto LAB_000c7d8f;
        (&stack0xffffffec)[bVar21] = 0;
      }
    }
    else {
      if (bVar24 != bVar21) {
        if (bVar21 < bVar24) {
          (&stack0xfffffff4)[uVar17 * 2 + (uint)uStack_1c._1_1_] =
               (&stack0xfffffff4)[(uint)bVar21 * 2 + (local_20._1_1_ ^ 1)];
          uVar17 = (uint)bVar21;
        }
        else {
          (&stack0xfffffff4)[(uint)bVar21 * 2 + (uint)local_20._1_1_] =
               (&stack0xfffffff4)[uVar17 * 2 + (uStack_1c._1_1_ ^ 1)];
        }
      }
LAB_000c7d8f:
      (&stack0xffffffec)[uVar17] = 0;
    }
    DAT_0089f3cc = (undefined)in_stack_fffffff4;
    DAT_0089f3cd = (undefined)((uint)in_stack_fffffff4 >> 8);
    puVar30 = &DAT_0089f3c5;
    do {
      uVar17 = FUN_003354f4();
      uVar17 = uVar17 % 6;
      cVar6 = (&stack0xffffffec)[uVar17];
      while (cVar6 == '\0') {
        bVar21 = (char)uVar17 + 1;
        if (5 < bVar21) {
          bVar21 = 0;
        }
        uVar17 = (uint)bVar21;
        cVar6 = (&stack0xffffffec)[uVar17];
      }
      uVar3 = (&stack0xfffffff5)[uVar17 * 2];
      puVar30[-1] = (&stack0xfffffff4)[uVar17 * 2];
      *puVar30 = uVar3;
      puVar30 = puVar30 + 2;
      (&stack0xffffffec)[uVar17] = 0;
    } while ((int)puVar30 < 0x89f3cd);
  }
  else {
    FUN_000c4330();
  }
  iVar22 = 0;
  do {
    uVar17 = FUN_003354f4();
    uVar17 = (int)uVar17 % 5;
    cVar6 = (&stack0xffffffec)[uVar17 & 0xff];
    while (cVar6 == '\0') {
      uVar17 = (uint)(byte)((char)uVar17 + 1);
      if ((&BYTE_0068e568)[uVar17] == 0xff) {
        uVar17 = 0;
      }
      cVar6 = (&stack0xffffffec)[uVar17];
    }
    uVar17 = uVar17 & 0xff;
    (&stack0xffffffec)[uVar17] = 0;
    if (BYTE_0068e568 == 0xff) {
LAB_000c7eb1:
      (&stack0xffffffec)[uVar17] = 0;
    }
    else {
      bVar7 = false;
      iVar25 = 0;
      do {
        if ((&stack0xffffffec)[iVar25] != '\0') {
          bVar7 = true;
        }
        pbVar27 = &StageListTag + iVar25;
        iVar25 = iVar25 + 1;
      } while (*pbVar27 != 0xff);
      if (!bVar7) {
        iVar25 = 0;
        do {
          bVar21 = (&StageListTag)[iVar25];
          (&stack0xffffffec)[iVar25] = 1;
          iVar25 = iVar25 + 1;
        } while (bVar21 != 0xff);
        goto LAB_000c7eb1;
      }
    }
    (&DAT_0089f3d0)[iVar22] = (&BYTE_0068e568)[uVar17];
    iVar22 = iVar22 + 1;
  } while (iVar22 < 5);
LAB_000c7ed1:
  bVar24 = DAT_00873d8c;
  uVar17 = (uint)DAT_00873d8c;
  puVar29[0x22] = puVar29[0x21] & 1;
  bVar21 = (&DAT_0089f3c4)[uVar17 * 2];
  puVar29[0x21] = puVar29[0x21] & 1;
  puVar29[1] = bVar21;
  local_3c = (byte *)0xc7ef5;
  uVar17 = FUN_000c72d0((uint)bVar21,bVar24);
  iVar22 = uVar16 * 7;
  (&DAT_008767ac)[iVar22] = puVar29[1];
  bVar24 = DAT_00873d8c;
  local_3c = (byte *)(uint)DAT_00873d8c;
  uVar16 = (uint)DAT_00873d8c;
  puVar29[2] = (char)uVar17;
  (&DAT_00878bec)[iVar22] = (char)uVar17;
  bVar21 = (&DAT_0089f3c5)[uVar16 * 2];
  (&DAT_008767ad)[iVar22] = bVar21;
  uVar16 = FUN_000c72d0((uint)bVar21,bVar24);
  (&DAT_00878bed)[iVar22] = (char)uVar16;
  return;
LAB_000c7921:
  do {
    bVar24 = puVar14[iVar25];
    if ((bVar24 != bVar21) && (bVar24 != 0xff)) {
      iVar19 = 0;
      bVar28 = *pbVar1;
      while (bVar28 != 0xff) {
        if (bVar28 == bVar24) {
          if ((&DAT_0089f2e8)[iVar19] == '\0') {
            DAT_0089f38c = DAT_0089f38c - 1;
            (&DAT_0089f2e8)[iVar19] = 1;
          }
          break;
        }
        iVar2 = iVar19 + 1;
        iVar19 = iVar19 + 1;
        bVar28 = pbVar1[iVar2];
      }
    }
    iVar25 = iVar25 + 1;
  } while (iVar25 < (int)local_20);
LAB_000c796b:
  pbVar27 = pbVar27 + 0xc;
  local_3c = local_3c + 1;
  iVar22 = iVar22 + -1;
  if (iVar22 == 0) goto code_r0x000c798e;
  goto LAB_000c7870;
code_r0x000c798e:
  uVar16 = (uint)(byte)(&DAT_00691360)[(byte)puVar29[1]];
  FUN_000c46c0(*(char **)(&DAT_0089f430 + uVar16 * 4));
  iVar22 = uVar16 * 0x54;
  _DAT_0089f1d8 = (&PTR_DAT_0068dff8)[uVar16 * 0x15];
  _DAT_0089f1dc = *(undefined4 *)(&DAT_0068dffc + iVar22);
  _DAT_0089f1e0 = *(undefined4 *)(&DAT_0068e000 + iVar22);
  _DAT_0089f1e4 = (&PTR_LAB_0068e004)[uVar16 * 0x15];
  _DAT_0089f1e8 = *(undefined4 *)(&DAT_0068e008 + iVar22);
  _DAT_0089f1ec = *(undefined4 *)(&DAT_0068e00c + iVar22);
  _DAT_0089f1f0 = (&PTR_DAT_0068e010)[uVar16 * 0x15];
  _DAT_0089f1f4 = (&PTR_DAT_0068e014)[uVar16 * 0x15];
  _DAT_0089f1f8 = *(undefined4 *)(&DAT_0068e018 + iVar22);
  _DAT_0089f1fc = *(undefined4 *)(&DAT_0068e01c + iVar22);
  _DAT_0089f200 = *(undefined4 *)(&DAT_0068e020 + iVar22);
  _DAT_0089f204 = *(undefined4 *)(&DAT_0068e024 + iVar22);
  _DAT_0089f208 = *(undefined4 *)(&DAT_0068e028 + iVar22);
  _DAT_0089f20c = (&PTR_DAT_0068e02c)[uVar16 * 0x15];
  _DAT_0089f210 = *(undefined4 *)(&DAT_0068e030 + iVar22);
  _DAT_0089f214 = *(undefined4 *)(&DAT_0068e034 + iVar22);
  _DAT_0089f218 = *(undefined4 *)(&DAT_0068e038 + iVar22);
  _DAT_0089f21c = *(undefined4 *)(&DAT_0068e03c + iVar22);
  _DAT_0089f220 = *(undefined4 *)(&DAT_0068e040 + iVar22);
  _DAT_0089f224 = *(undefined4 *)(&DAT_0068e044 + iVar22);
  _DAT_0089f228 = (&PTR_LAB_0068e048)[uVar16 * 0x15];
  puVar23 = &DAT_0089f1d8;
  iVar22 = 0;
  do {
    uVar4 = *puVar23;
    if ((uVar4 == 0xffff) || (-1 < (short)uVar4)) {
      if (((puVar29[1] == '\x06') || (puVar29[1] == '\b')) &&
         ((uVar4 == 0x35 && (uVar16 = FUN_003354f4(), (uVar16 & 1) != 0)))) {
        *puVar23 = 0x36;
        *(undefined *)(puVar23 + 3) = 0x29;
        (&DAT_0089f3d0)[iVar22] = 0x29;
      }
    }
    else {
      iVar25 = (uVar4 & 0xffff7fff) * 8;
      uVar16 = FUN_003354f4();
      *puVar23 = *(ushort *)
                  (*(int *)(&DAT_0089f3f0 + iVar25) +
                  ((int)uVar16 % (int)(uint)(byte)(&DAT_0089f3ec)[iVar25]) * 2);
    }
    puVar23 = puVar23 + 6;
    iVar22 = iVar22 + 1;
  } while ((int)puVar23 < 0x89f22c);
  FUN_000c4770(&DAT_0089f3d0,7);
  iVar22 = 0;
  puVar14 = &DAT_0089f1db;
  do {
    if (*(short *)(puVar14 + -3) == -1) {
      if ((&DAT_0089f3d0)[iVar22] == '\t') {
        *(undefined2 *)(puVar14 + -3) = 0x15;
        puVar14[-1] = 0xff;
        *puVar14 = 0x1e;
        puVar14[1] = 1;
      }
      else if (((&DAT_0089f3d0)[iVar22] == '\0') && (puVar14 != &DAT_0089f1db)) {
        *(undefined2 *)(puVar14 + -3) = 0x5d;
        puVar14[-1] = 0x11;
        *puVar14 = 0;
        puVar14[1] = 0;
      }
    }
    else if ((((&DAT_0089f3a8)[iVar22] == '\x11') && ((&DAT_0089f2dc)[iVar22] == '\x01')) &&
            (cVar6 = puVar29[1], *(undefined2 *)(puVar14 + -3) = 0x6a, cVar6 == '\x04')) {
      *(undefined2 *)(puVar14 + -3) = 0x6c;
    }
    puVar14 = puVar14 + 0xc;
    iVar22 = iVar22 + 1;
  } while ((int)puVar14 < 0x89f22f);
LAB_000c7b90:
  bVar24 = DAT_00873d8c;
  bVar21 = (&DAT_0089f3a8)[DAT_00873d8c];
  puVar30[1] = bVar21;
  uVar16 = FUN_000c72d0((uint)bVar21,bVar24);
  iVar22 = local_24 * 7 + (uint)((byte)puVar30[0x21] >> 1);
  puVar30[2] = (char)uVar16;
  (&DAT_008767ac)[iVar22] = puVar30[1];
  (&DAT_00878bec)[iVar22] = (char)uVar16;
  return;
}

