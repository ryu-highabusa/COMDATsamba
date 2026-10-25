
void Function_8251C4A0(int *param_1,uint param_2)

{
  int iVar2;
  undefined8 uVar1;
  uint *puVar3;
  code *pcVar4;
  
  iVar2 = FUN_82623730((int)param_1,param_2,4);
  if (iVar2 != 0) {
    character_select_demo_limit(iVar2);
    uVar1 = FUN_82513508();
    if ((char)uVar1 != '\0') {
      uVar1 = Function_825140D8(iVar2);
      puVar3 = &DAT_83b6d9d4;
      iVar2 = 0;
      do {
        if (*puVar3 == param_2) {
          if (iVar2 == 0) {
            DWORD_829aac44 = (dword)uVar1;
            Function_82508EB8();
            uVar1 = 8;
            pcVar4 = *(code **)(*param_1 + 0x38);
            goto LAB_8251c54c;
          }
          break;
        }
        puVar3 = puVar3 + 1;
        iVar2 = iVar2 + 1;
      } while ((int)puVar3 < -0x7c49261c);
      DWORD_829aac48 = (dword)uVar1;
      Function_82508EB8();
      uVar1 = 9;
      pcVar4 = *(code **)(*param_1 + 0x38);
LAB_8251c54c:
      (*pcVar4)(param_1,uVar1);
    }
  }
  return;
}

