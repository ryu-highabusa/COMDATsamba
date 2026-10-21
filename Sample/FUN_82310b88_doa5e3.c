
void FUN_82310b88(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  byte *pbVar4;
  undefined2 *puVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  int iVar10;
  dword *pdVar11;
  longlong lVar12;
  longlong lVar13;
  undefined2 uStack_42;
  undefined2 local_40 [32];
  
  DAT_83e6c119 = 0;
  if (DAT_83e6c118 != '\0') {
    Function_82338D80();
    pbVar4 = &DAT_83e72d58;
    plVar6 = DAT_83f1b904;
    do {
      if (plVar6 != (longlong *)0x0) {
        plVar8 = plVar6;
        do {
          if (*plVar8 == *(longlong *)(&CHAR_SEL_P1_83e739b3 + (uint)*pbVar4 * 2)) {
            *(undefined1 *)((int)plVar8 + 0x31) = 0;
            plVar6 = DAT_83f1b904;
            break;
          }
          plVar8 = *(longlong **)(plVar8 + 2);
        } while (plVar8 != (longlong *)0x0);
      }
      pbVar4 = pbVar4 + 0x640;
    } while ((int)pbVar4 < -0x7c18c628);
    Function_822F4470();
    Function_82350CC8();
    Function_8230F1C0();
    Function_824510A0();
    Function_822B6C38();
    Function_821E69F0();
    Function_8222AF38();
    uVar2 = Function_8222AC80();
    Function_8224CD58((undefined4 *)uVar2);
    Function_821CA6D8();
    Function_82506AF8();
    uVar2 = Function_821D1F58();
    Function_8224E508((undefined4 *)uVar2);
    Function_821D2F98();
    lVar12 = 0x18;
    PauseGameLogicFlagMaybe____82b14c7b = 0;
    DAT_83e6c044 = 0;
    puVar9 = (undefined1 *)0x82b59be7;
    CameraLockFlagMaybe____82b14c7a = 0;
    do {
      puVar9 = puVar9 + 1;
      *puVar9 = 0xff;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    DAT_82b18357 = 0xff;
    Function_82249830(1);
    DAT_82b59b98 = 0;
    DAT_83e6c10d = 0;
    DAT_82ac4c20 = 1;
    Function_823110B0();
    Function_822520E8();
    DAT_82b18524 = 0xffff;
    DAT_82b1851c = 0;
    Function_82266570();
    Function_82343360();
    iVar10 = 0;
    pdVar11 = &DWORD_83b6ad28;
    do {
      if ((((iVar10 == 0) || (iVar10 == 0xe)) || (iVar10 == 0xf)) ||
         ((iVar10 == 0x10 || (iVar10 == 1)))) {
        if ((*pdVar11 & 1) == 0) {
          bVar1 = false;
        }
        else {
          bVar1 = false;
          if ((*pdVar11 & 2) != 0) {
            bVar1 = true;
          }
        }
        if ((bVar1) && ((*pdVar11 & 1) != 0)) {
          *pdVar11 = *pdVar11 & 0xfffffffd;
        }
      }
      else {
        Function_82343360();
      }
      pdVar11 = pdVar11 + 7;
      iVar10 = iVar10 + 1;
    } while ((int)pdVar11 < -0x7c495038);
    DAT_83e6c0a8 = 1;
    Function_822AD0F0(0xffffffff83e7555c,*(int **)(DAT_83e75560 + 4));
    *(int *)(DAT_83e75560 + 4) = DAT_83e75560;
    *(int *)DAT_83e75560 = DAT_83e75560;
    *(int *)(DAT_83e75560 + 8) = DAT_83e75560;
    DAT_83e75564 = 0;
    DAT_83e75571 = 0;
    uVar2 = Function_822B36F0();
    *(undefined1 *)((float *)uVar2 + 1) = 0;
    DAT_83e6b6c0 = 0;
    *(float *)uVar2 = -1.0;
    DAT_83e6b6c1 = 0;
    DAT_83e6b6c2 = 0;
    DAT_83e6b6c3 = 0;
    Function_822AD0F0(0xffffffff83e7555c,*(int **)(DAT_83e75560 + 4));
    DAT_82b186a4 = 0xffffffff;
    DAT_82b186c0 = 0;
    DAT_82b186b8 = 0;
    *(int *)(DAT_83e75560 + 4) = DAT_83e75560;
    DAT_82b186bc = 0;
    *(int *)DAT_83e75560 = DAT_83e75560;
    *(int *)(DAT_83e75560 + 8) = DAT_83e75560;
    DAT_82b186b0 = 0;
    puVar7 = &DAT_83e73a04;
    DAT_83e7556c = 1;
    DAT_82b186a8 = 0;
    DAT_82b186ac = 0;
    lVar12 = 2;
    DAT_83e75564 = 0;
    DAT_83e75570 = 0;
    DAT_83e75571 = 0;
    DAT_82b186b4 = 0;
    DAT_82b186b6 = 0;
    do {
      local_40[0] = 0;
      local_40[1] = 0;
      puVar5 = &uStack_42;
      puVar3 = puVar7 + -1;
      local_40[2] = 0x3b;
      local_40[3] = 0x3b;
      local_40[4] = 0xff;
      lVar13 = 8;
      local_40[5] = 0xff;
      local_40[6] = 0xff;
      local_40[7] = 0xff;
      do {
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar5;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      lVar12 = lVar12 + -1;
      puVar7 = puVar7 + 8;
    } while (lVar12 != 0);
    DAT_83e6b890 = 0;
    Function_82338C70();
    (&DAT_82b59d78)[DAT_83e6c11c * 4] = 0;
    Demo_Reset_Maybe____Function_82208760();
  }
  DAT_83e6c118 = 0;
  DAT_83e6c11a = 0;
  DAT_82b59c30 = 0;
  return;
}

