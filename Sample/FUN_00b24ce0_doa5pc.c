
undefined1 __cdecl FUN_00b24ce0(int param_1)

{
  doa5lrpc_stage_id dVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  uVar2 = 0;
  uVar6 = 0;
LAB_00b24cf0:
  dVar1 = *(doa5lrpc_stage_id *)((int)&doa5lrpc_stage_id_01010854 + uVar6);
  if (param_1 == dVar1) {
    return 1;
  }
  bVar5 = 1;
  do {
    uVar4 = 0;
    do {
      if (dVar1 == (&doa5lrpc_stage_id_01010854)[uVar4]) {
        bVar3 = (&BYTE_0101087c)[uVar4];
        goto LAB_00b24d13;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 10);
    bVar3 = 1;
LAB_00b24d13:
    if (bVar3 <= bVar5) goto LAB_00b24d2e;
    if (param_1 == bVar5 + dVar1) break;
    bVar5 = bVar5 + 1;
  } while( true );
  uVar2 = 1;
LAB_00b24d2e:
  uVar6 = uVar6 + 4;
  if (0x27 < uVar6) {
    return uVar2;
  }
  goto LAB_00b24cf0;
}

