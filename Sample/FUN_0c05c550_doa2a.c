
void FUN_0c05c550(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  DOA2_PLAYER *pDVar4;
  
  puVar1 = PTR_DOA2_PLAYER_0c05c65c;
  uVar2 = 0;
  pDVar4 = &DOA2_PLAYER_0c241008;
  do {
    iVar3 = uVar2 * 0x68;
    if (*(short *)(PTR_ACT_CODE_P1_0c23f784_0c05c660 + uVar2 * 2) !=
        *(short *)(puVar1 + iVar3 + 0x2e)) {
      FUN_0c05c198(uVar2);
      (*(code *)PTR_FUN_0c05c664)(uVar2);
    }
    (*(code *)PTR_FUN_0c05c670)(PTR_CHARACTER_P1__0c05c668 + iVar3,pDVar4);
    (*(code *)PTR_FUN_0c05c670)();
    (*(code *)PTR_FUN_0c05c674)(uVar2);
    if ((((puVar1[iVar3 + 1] == '\x06') && (puVar1[iVar3 + 0x33] == '\r')) &&
        ((uint)*(ushort *)(puVar1 + iVar3 + 0x2e) == (int)DAT_0c05c658)) &&
       (PTR_DAT_0c05c678[uVar2] == '\x01')) {
      PTR_DAT_0c05c67c[uVar2] = 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 2);
  return;
}

