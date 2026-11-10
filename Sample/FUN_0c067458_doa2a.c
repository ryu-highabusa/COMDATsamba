
void FUN_0c067458(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  
  puVar2 = PTR_DAT_0c0675c4;
  if ((((*PTR_DAT_0c0675c4 == '\x02') && (PTR_DAT_0c0675c4[1] == '\x02')) &&
      (PTR_DOA2_PLAYER_0c06759c[0x33] != '\x01')) &&
     (((PTR_DOA2_PLAYER_0c06759c[0x33] != '\t' && (PTR_MANCOM_P2_0c0675c8[0x33] != '\x01')) &&
      (PTR_MANCOM_P2_0c0675c8[0x33] != '\t')))) {
    iVar5 = 0;
    do {
      puVar1 = PTR_DOA2_PLAYER_0c06759c;
      puVar2[iVar5] = 0;
      PTR_DAT_0c0675cc[iVar5] = 0;
      if (puVar1[iVar5 * 0x68 + 0x33] == '\f') {
        if (*(short *)(puVar1 + iVar5 * 0x68 + 0x2e) == 0x69) {
          puVar1[iVar5 * 0x68 + 0x35] = 1;
        }
        else {
          puVar1[iVar5 * 0x68 + 0x35] = 0;
        }
        uVar4 = (*(code *)PTR_FUN_0c0675d0)(iVar5);
        puVar1[iVar5 * 0x68 + 0x37] = uVar4;
      }
      puVar3 = PTR_DAT_0c0675dc;
      puVar1 = PTR_DAT_0c0675d8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    *PTR_DAT_0c0675d4 = 0;
    *puVar1 = 0xff;
    puVar1 = PTR_DAT_0c0675e0;
    puVar2 = PTR_DAT_0c0675a0;
    *puVar3 = 0;
    *(undefined4 *)puVar1 = 0;
    *puVar2 = 0xff;
  }
  return;
}

