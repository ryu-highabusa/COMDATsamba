
void FUN_016e1380(long param_1)

{
  uint uVar1;
  dword dVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  dword *pdVar11;
  byte bVar12;
  uint uVar13;
  char cVar14;
  uint local_44;
  
  bVar3 = FUN_01759020((byte)*(undefined4 *)(param_1 + 0xb8));
  if (bVar3 != 0xff) {
    uVar4 = FUN_019ea3e0(param_1,0xd);
    local_44 = 0;
    if (uVar4 != 0) {
      uVar10 = 0;
      local_44 = uVar4;
      do {
        lVar7 = FUN_019ea420(param_1,0xd,uVar10);
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x14);
          uVar13 = uVar1 & 0xff;
          if (uVar13 == bVar3) {
            *(char *)(param_1 + 0xc9) = (char)uVar1;
            *(undefined1 *)(param_1 + 0xca) = 0;
            local_44 = uVar10;
            break;
          }
          uVar5 = 0;
          pdVar11 = &TagStage_ID_MAX;
          pbVar9 = &DAT_01fb8437;
          if (*(char *)(param_1 + 0xbc) == '\0') {
            uVar5 = *(uint *)(param_1 + 0xb8);
            lVar7 = 0;
            pdVar11 = &SingleStage_ID_MAX;
            do {
              if (*pdVar11 == uVar13) {
                if (uVar13 == 0x21) {
                  iVar6 = FUN_01758e50(0,0x21);
                  cVar14 = '\x01';
                  if ((char)iVar6 == '\0') {
                    iVar6 = FUN_01758e50(1,0x21);
                    cVar14 = (char)iVar6 != '\0';
                  }
                }
                else {
                  iVar6 = FUN_01758e50((ulong)uVar5,uVar13);
                  cVar14 = (char)iVar6;
                }
                if (cVar14 != '\0') {
                  bVar12 = (&DAT_01fb8450)[lVar7];
                  break;
                }
              }
              pdVar11 = pdVar11 + 1;
              lVar7 = lVar7 + 1;
              bVar12 = 1;
            } while ((uint)lVar7 < 0x1e);
          }
          else {
            do {
              bVar12 = 1;
              if (9 < uVar5) goto LAB_016e14f0;
              pbVar9 = pbVar9 + 1;
              uVar5 = uVar5 + 1;
              dVar2 = *pdVar11;
              pdVar11 = pdVar11 + 1;
            } while (dVar2 != uVar13);
            bVar12 = *pbVar9;
          }
LAB_016e14f0:
          iVar6 = 0;
          do {
            if ((int)(uint)bVar12 <= iVar6) goto LAB_016e1544;
            iVar6 = iVar6 + 1;
          } while ((bVar3 + 1) - (uVar1 & 0xff) != iVar6);
          *(char *)(param_1 + 0xc9) = (char)uVar1;
          *(char *)(param_1 + 0xca) = (char)iVar6 + -1;
          local_44 = uVar10;
        }
LAB_016e1544:
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar4);
    }
    if (uVar4 != local_44) {
      uVar8 = FUN_019e82f0(param_1,0xd,0x31);
      FUN_019e8390(param_1,0xd,local_44,(int)uVar8);
      return;
    }
  }
  return;
}

