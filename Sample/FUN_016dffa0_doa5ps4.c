
void FUN_016dffa0(long param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  dword *pdVar9;
  uint uVar10;
  byte bVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  int local_4c;
  long local_40;
  
  FUN_01758a40();
  cVar4 = *(char *)(param_1 + 0xbc);
  local_4c = 0;
  local_40 = 0;
  if (cVar4 == '\0') {
    bVar5 = true;
    do {
      uVar1 = (&SingleStage_ID_MAX)[local_40];
      if (bVar5) {
LAB_016e0440:
        if ((char)local_40 == '\x06') {
          iVar6 = FUN_01758e50(0,0x21);
          cVar4 = '\x01';
          if ((char)iVar6 == '\0') {
            iVar6 = FUN_01758e50(1,0x21);
            cVar4 = (char)iVar6 != '\0';
          }
        }
        else {
          iVar6 = FUN_01758e50((ulong)*(uint *)(param_1 + 0xb8),uVar1);
          cVar4 = (char)iVar6;
        }
        bVar15 = 0;
        if (cVar4 != '\0') {
          do {
            uVar8 = 0;
            pdVar9 = &TagStage_ID_MAX;
            pbVar12 = &DAT_01fb8437;
            if (*(char *)(param_1 + 0xbc) == '\0') {
              lVar13 = 0;
              uVar8 = *(uint *)(param_1 + 0xb8);
              pdVar9 = &SingleStage_ID_MAX;
              do {
                if (*pdVar9 == uVar1) {
                  if ((char)local_40 == '\x06') {
                    iVar6 = FUN_01758e50(0,0x21);
                    cVar4 = '\x01';
                    if ((char)iVar6 == '\0') {
                      iVar6 = FUN_01758e50(1,0x21);
                      cVar4 = (char)iVar6 != '\0';
                    }
                  }
                  else {
                    iVar6 = FUN_01758e50((ulong)uVar8,uVar1);
                    cVar4 = (char)iVar6;
                  }
                  if (cVar4 != '\0') {
                    bVar11 = (&DAT_01fb8450)[lVar13];
                    break;
                  }
                }
                pdVar9 = pdVar9 + 1;
                lVar13 = lVar13 + 1;
                bVar11 = 1;
              } while ((uint)lVar13 < 0x1e);
            }
            else {
              do {
                bVar11 = 1;
                if (9 < uVar8) goto LAB_016e0570;
                pbVar12 = pbVar12 + 1;
                uVar8 = uVar8 + 1;
                uVar7 = *pdVar9;
                pdVar9 = pdVar9 + 1;
              } while (uVar7 != uVar1);
              bVar11 = *pbVar12;
            }
LAB_016e0570:
            if (bVar11 <= bVar15) break;
            uVar8 = bVar15 + uVar1;
            cVar4 = FUN_016e0810();
            if (((cVar4 != '\0') ||
                (bVar5 = FUN_01758eb0((ulong)*(uint *)(param_1 + 0xb8),uVar8), bVar5)) &&
               ((cVar4 = FUN_016e0810(), cVar4 == '\0' || (uVar8 != 0x1b)))) {
              FUN_01758a10(uVar8,1);
              local_4c = local_4c + 1;
            }
            bVar15 = bVar15 + 1;
          } while( true );
        }
      }
      else {
        lVar13 = 0;
        bVar5 = false;
        do {
          uVar8 = (&TagStage_ID_MAX)[lVar13];
          bVar15 = 1;
          if (uVar8 == uVar1) goto LAB_016e0440;
          do {
            uVar7 = 0;
            pdVar9 = &TagStage_ID_MAX;
            pbVar12 = &DAT_01fb8437;
            do {
              bVar11 = 1;
              if (9 < uVar7) goto LAB_016e0407;
              pbVar12 = pbVar12 + 1;
              uVar7 = uVar7 + 1;
              uVar10 = *pdVar9;
              pdVar9 = pdVar9 + 1;
            } while (uVar10 != uVar8);
            bVar11 = *pbVar12;
LAB_016e0407:
            bVar3 = bVar5;
            if (bVar11 <= bVar15) break;
            uVar7 = (uint)bVar15;
            bVar15 = bVar15 + 1;
            bVar3 = true;
          } while (uVar7 + uVar8 != uVar1);
          lVar13 = lVar13 + 1;
          bVar5 = bVar3;
        } while ((uint)lVar13 < 10);
        if (bVar3) goto LAB_016e0440;
      }
      local_40 = local_40 + 1;
      if ((char)local_40 == '\x1e') goto code_r0x016e05f3;
      bVar5 = *(char *)(param_1 + 0xbc) == '\0';
    } while( true );
  }
  do {
    uVar1 = (&TagStage_ID_MAX)[local_40];
    if (cVar4 == '\0') {
LAB_016e0090:
      iVar6 = FUN_01758e50((ulong)*(uint *)(param_1 + 0xb8),uVar1);
      bVar15 = 0;
      if ((char)iVar6 != '\0') {
        do {
          uVar8 = 0;
          pdVar9 = &TagStage_ID_MAX;
          pbVar12 = &DAT_01fb8437;
          if (*(char *)(param_1 + 0xbc) == '\0') {
            lVar13 = 0;
            uVar8 = *(uint *)(param_1 + 0xb8);
            pdVar9 = &SingleStage_ID_MAX;
            do {
              if ((*pdVar9 == uVar1) &&
                 (iVar6 = FUN_01758e50((ulong)uVar8,uVar1), (char)iVar6 != '\0')) {
                bVar11 = (&DAT_01fb8450)[lVar13];
                break;
              }
              pdVar9 = pdVar9 + 1;
              lVar13 = lVar13 + 1;
              bVar11 = 1;
            } while ((uint)lVar13 < 0x1e);
          }
          else {
            do {
              bVar11 = 1;
              if (9 < uVar8) goto LAB_016e0150;
              pbVar12 = pbVar12 + 1;
              uVar8 = uVar8 + 1;
              uVar7 = *pdVar9;
              pdVar9 = pdVar9 + 1;
            } while (uVar7 != uVar1);
            bVar11 = *pbVar12;
          }
LAB_016e0150:
          if (bVar11 <= bVar15) break;
          cVar4 = FUN_016e0810();
          if ((cVar4 != '\0') ||
             (bVar5 = FUN_01758eb0((ulong)*(uint *)(param_1 + 0xb8),bVar15 + uVar1), bVar5)) {
            FUN_01758a10(bVar15 + uVar1,1);
            local_4c = local_4c + 1;
          }
          bVar15 = bVar15 + 1;
        } while( true );
      }
    }
    else {
      lVar13 = 0;
      bVar5 = false;
      do {
        uVar8 = (&TagStage_ID_MAX)[lVar13];
        uVar7 = 1;
        if (uVar8 == uVar1) goto LAB_016e0090;
        do {
          uVar10 = 0;
          pdVar9 = &TagStage_ID_MAX;
          pbVar12 = &DAT_01fb8437;
          do {
            bVar15 = 1;
            if (9 < uVar10) goto LAB_016e0057;
            pbVar12 = pbVar12 + 1;
            uVar10 = uVar10 + 1;
            uVar2 = *pdVar9;
            pdVar9 = pdVar9 + 1;
          } while (uVar2 != uVar8);
          bVar15 = *pbVar12;
LAB_016e0057:
          bVar3 = bVar5;
          if (bVar15 <= (byte)uVar7) break;
          uVar10 = uVar7 + uVar8;
          uVar7 = (uint)(byte)((byte)uVar7 + 1);
          bVar3 = true;
        } while (uVar10 != uVar1);
        lVar13 = lVar13 + 1;
        bVar5 = bVar3;
      } while ((uint)lVar13 < 10);
      if (bVar3) goto LAB_016e0090;
    }
    local_40 = local_40 + 1;
    if ((char)local_40 == '\n') goto code_r0x016e01ba;
    cVar4 = *(char *)(param_1 + 0xbc);
  } while( true );
code_r0x016e05f3:
  if (local_4c != 0) {
    return;
  }
  lVar13 = 0;
  do {
    uVar1 = (&SingleStage_ID_MAX)[lVar13];
    if (*(char *)(param_1 + 0xbc) == '\0') {
LAB_016e06a7:
      if ((char)lVar13 == '\x06') {
        iVar6 = FUN_01758e50(0,0x21);
        cVar4 = '\x01';
        if ((char)iVar6 == '\0') {
          iVar6 = FUN_01758e50(1,0x21);
          cVar4 = (char)iVar6 != '\0';
        }
      }
      else {
        iVar6 = FUN_01758e50((ulong)*(uint *)(param_1 + 0xb8),uVar1);
        cVar4 = (char)iVar6;
      }
      uVar8 = 0;
      if (cVar4 != '\0') {
LAB_016e0704:
        uVar7 = 0;
        pdVar9 = &TagStage_ID_MAX;
        pbVar12 = &DAT_01fb8437;
        if (*(char *)(param_1 + 0xbc) == '\0') {
          lVar14 = 0;
          if ((char)lVar13 == '\x06') {
            pdVar9 = &SingleStage_ID_MAX;
            do {
              if ((*pdVar9 == uVar1) &&
                 ((iVar6 = FUN_01758e50(0,0x21), (char)iVar6 != '\0' ||
                  (iVar6 = FUN_01758e50(1,0x21), (char)iVar6 != '\0')))) goto LAB_016e07c5;
              pdVar9 = pdVar9 + 1;
              lVar14 = lVar14 + 1;
              bVar15 = 1;
            } while ((uint)lVar14 < 0x1e);
          }
          else {
            uVar7 = *(uint *)(param_1 + 0xb8);
            pdVar9 = &SingleStage_ID_MAX;
            do {
              if ((*pdVar9 == uVar1) &&
                 (iVar6 = FUN_01758e50((ulong)uVar7,uVar1), (char)iVar6 != '\0')) goto LAB_016e07c5;
              pdVar9 = pdVar9 + 1;
              lVar14 = lVar14 + 1;
              bVar15 = 1;
            } while ((uint)lVar14 < 0x1e);
          }
        }
        else {
          do {
            bVar15 = 1;
            if (9 < uVar7) goto LAB_016e07d1;
            pbVar12 = pbVar12 + 1;
            uVar7 = uVar7 + 1;
            uVar10 = *pdVar9;
            pdVar9 = pdVar9 + 1;
          } while (uVar10 != uVar1);
          bVar15 = *pbVar12;
        }
        goto LAB_016e07d1;
      }
    }
    else {
      lVar14 = 0;
      bVar5 = false;
      do {
        uVar8 = (&TagStage_ID_MAX)[lVar14];
        bVar15 = 1;
        if (uVar8 == uVar1) goto LAB_016e06a7;
        do {
          uVar7 = 0;
          pdVar9 = &TagStage_ID_MAX;
          pbVar12 = &DAT_01fb8437;
          do {
            bVar11 = 1;
            if (9 < uVar7) goto LAB_016e0677;
            pbVar12 = pbVar12 + 1;
            uVar7 = uVar7 + 1;
            uVar10 = *pdVar9;
            pdVar9 = pdVar9 + 1;
          } while (uVar10 != uVar8);
          bVar11 = *pbVar12;
LAB_016e0677:
          bVar3 = bVar5;
          if (bVar11 <= bVar15) break;
          uVar7 = (uint)bVar15;
          bVar15 = bVar15 + 1;
          bVar3 = true;
        } while (uVar7 + uVar8 != uVar1);
        lVar14 = lVar14 + 1;
        bVar5 = bVar3;
      } while ((uint)lVar14 < 10);
      if (bVar3) goto LAB_016e06a7;
    }
LAB_016e07e8:
    lVar13 = lVar13 + 1;
    if ((char)lVar13 == '\x1e') {
      return;
    }
  } while( true );
LAB_016e07c5:
  bVar15 = (&DAT_01fb8450)[lVar14];
LAB_016e07d1:
  if (bVar15 <= (byte)uVar8) goto LAB_016e07e8;
  FUN_01758a10(uVar8 + uVar1,1);
  uVar8 = (uint)(byte)((byte)uVar8 + 1);
  goto LAB_016e0704;
code_r0x016e01ba:
  if (local_4c == 0) {
    lVar13 = 0;
    do {
      uVar1 = (&TagStage_ID_MAX)[lVar13];
      if (*(char *)(param_1 + 0xbc) == '\0') {
LAB_016e0277:
        iVar6 = FUN_01758e50((ulong)*(uint *)(param_1 + 0xb8),uVar1);
        bVar15 = 0;
        if ((char)iVar6 != '\0') {
          do {
            uVar8 = 0;
            pdVar9 = &TagStage_ID_MAX;
            pbVar12 = &DAT_01fb8437;
            if (*(char *)(param_1 + 0xbc) == '\0') {
              lVar14 = 0;
              uVar8 = *(uint *)(param_1 + 0xb8);
              pdVar9 = &SingleStage_ID_MAX;
              do {
                if ((*pdVar9 == uVar1) &&
                   (iVar6 = FUN_01758e50((ulong)uVar8,uVar1), (char)iVar6 != '\0')) {
                  bVar11 = (&DAT_01fb8450)[lVar14];
                  break;
                }
                pdVar9 = pdVar9 + 1;
                lVar14 = lVar14 + 1;
                bVar11 = 1;
              } while ((uint)lVar14 < 0x1e);
            }
            else {
              do {
                bVar11 = 1;
                if (9 < uVar8) goto LAB_016e0340;
                pbVar12 = pbVar12 + 1;
                uVar8 = uVar8 + 1;
                uVar7 = *pdVar9;
                pdVar9 = pdVar9 + 1;
              } while (uVar7 != uVar1);
              bVar11 = *pbVar12;
            }
LAB_016e0340:
            if (bVar11 <= bVar15) break;
            FUN_01758a10(bVar15 + uVar1,1);
            bVar15 = bVar15 + 1;
          } while( true );
        }
      }
      else {
        lVar14 = 0;
        bVar5 = false;
        do {
          uVar8 = (&TagStage_ID_MAX)[lVar14];
          bVar15 = 1;
          if (uVar8 == uVar1) goto LAB_016e0277;
          do {
            uVar7 = 0;
            pdVar9 = &TagStage_ID_MAX;
            pbVar12 = &DAT_01fb8437;
            do {
              bVar11 = 1;
              if (9 < uVar7) goto LAB_016e0247;
              pbVar12 = pbVar12 + 1;
              uVar7 = uVar7 + 1;
              uVar10 = *pdVar9;
              pdVar9 = pdVar9 + 1;
            } while (uVar10 != uVar8);
            bVar11 = *pbVar12;
LAB_016e0247:
            bVar3 = bVar5;
            if (bVar11 <= bVar15) break;
            uVar7 = (uint)bVar15;
            bVar15 = bVar15 + 1;
            bVar3 = true;
          } while (uVar7 + uVar8 != uVar1);
          lVar14 = lVar14 + 1;
          bVar5 = bVar3;
        } while ((uint)lVar14 < 10);
        if (bVar3) goto LAB_016e0277;
      }
      lVar13 = lVar13 + 1;
    } while ((char)lVar13 != '\n');
  }
  return;
}

