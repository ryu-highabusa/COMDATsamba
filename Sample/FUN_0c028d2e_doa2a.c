
void FUN_0c028d2e(void)

{
  char cVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined2 *puVar11;
  
  puVar3 = PTR_FUN_0c028e88;
  *(undefined4 *)PTR_DAT_0c028e84 = *(undefined4 *)PTR_DAT_0c028e80;
  (*(code *)puVar3)();
  (*(code *)PTR_FUN_0c028e8c)(0);
  (*(code *)PTR_FUN_0c028e90)(0);
  (*(code *)PTR_FUN_0c028e94)();
  (*(code *)PTR_FUN_0c028e98)();
  (*(code *)PTR_FUN_0c028e9c)();
  (*(code *)PTR_FUN_0c028ea0)();
  (*(code *)PTR_FUN_0c028ea4)(0,0);
  (*(code *)PTR_FUN_0c028ea8)(1);
  FUN_0c028ee4();
  (*(code *)PTR_FUN_0c028eb0)(PTR_DAT_0c028eac,0xf);
  puVar8 = PTR_DAT_0c028ebc;
  puVar7 = PTR_DAT_0c028eb8;
  puVar6 = PTR_DAT_0c028eb4;
  puVar4 = PTR_DAT_0c028e40;
  puVar3 = PTR_GameMode_0c23fe24_0c028e38;
  puVar11 = (undefined2 *)(PTR_DAT_0c028e40 + 0x1c);
  do {
    while( true ) {
      puVar5 = PTR_FUN_0c028ec4;
      *PTR_DAT_0c028ec0 = 0;
      (*(code *)puVar5)();
      puVar5 = PTR_FUN_0c028ea8;
      *(undefined4 *)PTR_DAT_0c028ec8 = 0;
      (*(code *)puVar5)(1);
      puVar2 = (undefined2 *)puVar4;
      if ((*puVar8 == '\x01') && (*PTR_DAT_0c028ecc == '\0')) {
        *puVar8 = *PTR_DAT_0c028ecc;
      }
      for (; puVar2 < puVar11; puVar2 = puVar2 + 0xe) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[10] = 0;
      }
      cVar1 = *puVar3;
      if (cVar1 == '\x02') break;
      if (cVar1 == '\n') {
        iVar10 = (*(code *)PTR_FUN_0c028ed4)();
        puVar5 = PTR_DAT_0c028edc;
        if (iVar10 != 0) {
          *PTR_DAT_0c028ed8 = 4;
          *puVar3 = 0xb;
          puVar9 = PTR_GRAYSCALE_FLAG_0c240099_0c028ee0;
          *puVar5 = 0;
          *puVar9 = 0;
        }
        if (*puVar6 != '\0') {
          *puVar6 = 0;
        }
        if (*puVar7 != '\0') {
          *puVar7 = 0;
        }
      }
      else {
        FUN_0c028ee4();
      }
    }
    (*(code *)PTR_FUN_0c028ed0)();
  } while( true );
}

