
void FUN_0c067522(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  puVar1 = PTR_DOA2_PLAYER_0c06759c;
  uVar5 = param_1 ^ 1;
  if (PTR_DOA2_PLAYER_0c06759c[param_1 * 0x68 + 0x3b] == '\x01') {
    (*(code *)PTR_FUN_0c0675e4)(param_1);
  }
  else if (PTR_DOA2_PLAYER_0c06759c[param_1 * 0x68 + 0x4c] == '\x02') {
    cVar3 = (*(code *)PTR_FUN_0c0675e8)(param_1,3);
    puVar2 = PTR_FUN_0c0675e8;
    if (cVar3 != '\x01') {
      puVar1[param_1 * 0x68 + 0x4c] = 0;
      PTR_DAT_0c0675c4[param_1] = 2;
      cVar3 = (*(code *)puVar2)(param_1,4);
      if (cVar3 == '\x01') {
        puVar1[uVar5 * 0x68 + 0x4c] = 0;
        PTR_DAT_0c0675c4[uVar5] = 2;
      }
      else if (((puVar1[param_1 * 0x68 + 0x33] == '\x01') &&
               ((*(short *)(puVar1 + param_1 * 0x68 + 0x2e) == 0x33 ||
                (*(short *)(puVar1 + param_1 * 0x68 + 0x2e) == 0x37)))) &&
              (iVar4 = (*(code *)PTR_FUN_0c067810)(param_1), iVar4 == 1)) {
        (*(code *)PTR_FUN_0c067814)(0x3d,param_1,0);
      }
      else {
        (*(code *)PTR_FUN_0c067818)(param_1);
      }
      puVar1[param_1 * 0x68 + 0x46] = 0;
    }
  }
  else if (PTR_DAT_0c06781c[param_1] == '\x01') {
    (*(code *)PTR_FUN_0c067820)(param_1,2);
  }
  else if (((PTR_DOA2_PLAYER_0c06759c[param_1 * 0x68 + 0x3b] == '\x02') &&
           (*(ushort *)(PTR_DOA2_PLAYER_0c06759c + param_1 * 0x68 + 0x30) != DAT_0c067824)) &&
          (cVar3 = (*(code *)PTR_FUN_0c067820)(param_1,1,0), puVar2 = PTR_FUN_0c067828,
          cVar3 == '\x01')) {
    puVar1[param_1 * 0x68 + 0x3b] = 3;
    cVar3 = (*(code *)puVar2)(*(undefined2 *)(puVar1 + param_1 * 0x68 + 0x30),param_1);
    if (((cVar3 == '\x04') || (cVar3 == '\x06')) &&
       ((puVar1[uVar5 * 0x68 + 0x33] == '\n' || (puVar1[uVar5 * 0x68 + 0x33] == '\v')))) {
      (*(code *)PTR_FUN_0c06782c)(param_1);
    }
  }
  FUN_0c067458();
  return;
}

