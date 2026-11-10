
int FUN_0c05fdbc(int param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar4 = PTR_DOA2_PLAYER_0c05fe2c;
  if (PTR_DOA2_PLAYER_0c05fe2c[param_1 * 0x68 + 0x32] == '\x01') {
    cVar1 = PTR_DAT_0c05fe44[param_1];
  }
  else {
    cVar1 = PTR_DOA2_PLAYER_0c05fe2c[param_1 * 0x68 + 0x61];
  }
  cVar2 = PTR_DOA2_PLAYER_0c05fe2c[param_1 * 0x68 + 0x33];
  bVar3 = false;
  if ((((cVar2 == '\a') || (cVar2 == '\b')) || (cVar2 == '\t')) || (cVar2 == '\x0f')) {
    bVar3 = true;
  }
  if (bVar3) {
    puVar4 = FUN_0c05fe68((int)*(short *)(PTR_DOA2_PLAYER_0c05fe2c + param_1 * 0x68 + 0x2e));
    cVar1 = puVar4[2];
  }
  else {
    iVar5 = (*(code *)PTR_FUN_0c05ff38)((int)cVar1,0);
    cVar1 = *(char *)((uint)*(ushort *)(puVar4 + param_1 * 0x68 + 0x2e) * 8 + iVar5 + 2);
  }
  return (int)cVar1;
}

