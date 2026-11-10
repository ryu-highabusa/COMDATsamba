
undefined4 FUN_0c110b20(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_FUN_0c110b64;
  puVar1 = PTR_DAT_0c110b60;
  *(undefined4 *)(PTR_DAT_0c110b60 + 0x10) = param_1;
  (*(code *)puVar2)(*(undefined4 *)(puVar1 + 0xc),puVar1 + 0x14,puVar1 + 0x20);
  *(uint *)(puVar1 + 0x1c) = *(uint *)(puVar1 + 0x1c) | 3;
  return 0;
}

