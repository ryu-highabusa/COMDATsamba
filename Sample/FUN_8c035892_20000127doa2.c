
void FUN_8c035892(uint param_1,uint param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  
  puVar1 = PTR_cutscene_actor_data_8c035a50;
  pcVar5 = *(char **)(puVar1 + (param_1 & 0xff) * 4);
  uVar4 = (uint)*pcVar5;
  if (uVar4 == 0xffffffff) {
    pbVar2 = PTR_CHAR__var0b_8c035a54;
    uVar4 = (uint)*pbVar2;
  }
  else if (uVar4 == 0xfffffffe) {
    puVar1 = PTR_DAT_8c035a58;
    uVar4 = (uint)(byte)puVar1[param_2 & 0xff];
  }
  UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c035a5c;
  uVar3 = (*UNRECOVERED_JUMPTABLE)((int)pcVar5[1],param_2,&input_read___);
  UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c035a60;
  (*UNRECOVERED_JUMPTABLE)(0,uVar4,uVar3);
  uVar4 = (uint)pcVar5[2];
  if (uVar4 == 0xffffffff) {
    pbVar2 = PTR_CHAR__var0b_8c035a54;
    uVar4 = (uint)*pbVar2;
  }
  else if (uVar4 == 0xfffffffe) {
    puVar1 = PTR_DAT_8c035a58;
    uVar4 = (uint)(byte)puVar1[param_2 & 0xff];
  }
  UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c035a5c;
  uVar3 = (*UNRECOVERED_JUMPTABLE)((int)pcVar5[3],param_2);
  UNRECOVERED_JUMPTABLE = (code *)PTR_FUN_8c035a60;
                    /* WARNING: Could not recover jumptable at 0x8c035920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(1,uVar4,uVar3);
  return;
}

