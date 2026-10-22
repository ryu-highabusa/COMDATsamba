
undefined1 Function_82513680(uint param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 & 0xff;
  uVar2 = FUN_825135b8();
  if ((uVar3 & 0xffffffff) < (uVar2 & 0xff)) {
    iVar1 = (int)uVar3;
    switch(param_1 & 0xff) {
    case 0:
      return (&costumes_zack_demo)[iVar1];
    case 1:
      return (&costumes_tina_demo)[iVar1];
    case 4:
      return (&costumes_hayabusa_demo)[iVar1];
    case 5:
      return (&costumes_kasumi_demo)[iVar1];
    case 10:
      return (&costumes_kokoro_demo)[iVar1];
    case 0xb:
      return (&costumes_hayate_demo)[iVar1];
    case 0xc:
      return (&costumes_leifang_demo)[iVar1];
    case 0xd:
      return (&costumes_ayane_demo)[iVar1];
    case 0x14:
      return (&costumes_christie_demo)[iVar1];
    case 0x15:
      return (&costumes_hitomi_demo)[iVar1];
    case 0x18:
      return (&costumes_bayman_demo)[iVar1];
    case 0x1f:
      return (&costumes_akira_demo)[iVar1];
    }
  }
  return 0;
}

