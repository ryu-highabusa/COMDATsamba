
void FUN_823e7ad0(void)

{
  bool bVar1;
  char cVar3;
  int iVar2;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  ushort *puVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  
  cVar3 = DAT_830996c3;
  uVar9 = (uint)ReplayLength_____83020184;
  dVar12 = (double)DAT_83022d34;
  DAT_83099e14 = DAT_830224cc;
  if (DAT_83099670 != 0) {
    DAT_83099e14 = DAT_83099670 + 0x280;
  }
  dVar11 = 0.0;
  if (DAT_83099e20 == 0) {
    uVar9 = 0;
    dVar12 = dVar11;
  }
  else if ((((DAT_83099e20 - 1 < uVar9) && (gamemodemaybe____83020318 != '\r')) &&
           (gamemodemaybe____83020318 != '\x0f')) &&
          ((gamemodemaybe____83020318 != '\x0e' && (gamemodemaybe____83020318 != '\x10')))) {
    uVar9 = DAT_83099e20 + 0xffff & 0xffff;
    dVar12 = dVar11;
  }
  if (DAT_8301b6e6 == '\0') {
    uVar4 = 300;
    if (DAT_83099e20 < 0x12d) {
      uVar4 = DAT_83099e20;
    }
    uVar4 = (uVar9 - uVar4) + DAT_83099e18;
    DAT_83099e00_ = uVar4 - (uVar4 / DAT_83099e10) * DAT_83099e10;
  }
  else {
    DAT_83099e00_ = (uVar9 + DAT_83099e18) - ((uVar9 + DAT_83099e18) / DAT_83099e10) * DAT_83099e10;
  }
  trapWord(6,(ulonglong)DAT_83099e10,0);
  trapWord(6,(ulonglong)DAT_83099e10,0);
  DAT_83099e1c = (DAT_83099e00_ + 1) - ((DAT_83099e00_ + 1) / DAT_83099e10) * DAT_83099e10;
  if (DAT_83099e20 == 0) {
    DAT_83099ba8 = &DAT_83099bb8;
    DAT_83099e04 = &DAT_83099bb8;
  }
  else {
    iVar2 = DAT_83099e00_ * 0x248;
    if (TAG_FLAG == 0) {
      iVar2 = DAT_83099e00_ * 0x1ac;
    }
    DAT_83099e04 = (undefined *)(iVar2 + DAT_83099e14);
    if (TAG_FLAG == 0) {
      iVar2 = DAT_83099e1c * 0x1ac;
    }
    else {
      iVar2 = DAT_83099e1c * 0x248;
    }
    DAT_83099ba8 = (undefined *)(iVar2 + DAT_83099e14);
  }
  puVar6 = &DAT_830a0000;
  puVar5 = &DAT_830a0000;
  DAT_83099ba4 = 0.0;
  DAT_83099676 = 0;
  DAT_830996f7 = '\0';
  DAT_83099793 = 0;
  DAT_830996c3 = 0;
  DAT_83099667 = 0;
  DAT_83099796 = 0;
  bVar1 = DAT_83099e00_ != DAT_83099e08;
  uVar7 = (ulonglong)DAT_83099ba0;
  DAT_83099afc = (float)(dVar12 - (double)(longlong)(int)dVar12);
  if (bVar1) {
    DAT_83099677 = 0;
  }
  else {
    DAT_83099afc = 0.0;
    DAT_83099676 = DAT_83099ba0 + 2 <= uVar9;
    DAT_83099677 = 1;
    DAT_83099ba8 = DAT_83099e04;
    DAT_83099e1c = DAT_83099e00_;
    puVar5 = &DAT_830a0000;
    puVar6 = &DAT_830a0000;
    cVar3 = FUN_823b5a20();
  }
  if ((uVar7 & 0xffff) == 0xffff) {
    DAT_830996f7 = '\x01';
    puVar6[-0x686d] = 1;
  }
  else {
    iVar2 = (int)(uVar7 & 0xffff);
    if (uVar9 < iVar2 + 2U) {
      if (dVar12 <= (double)DAT_83099bac) {
        if ((double)DAT_83099bac <= dVar12) {
          puVar5[-0x686a] = 1;
        }
        else {
          if (cVar3 == '\0') {
            lVar10 = 0;
            do {
              Function_82763138(DAT_83194044,lVar10,1,7);
              Function_82767810(*(undefined4 *)(DAT_83194044 + 0x60),lVar10,1,9);
              lVar10 = lVar10 + 1;
            } while ((int)lVar10 < 2);
            Function_8271F9E0();
            DAT_8301b414 = 0;
          }
          DAT_830996c3 = 1;
        }
      }
      else if (uVar9 == iVar2 + 1U) {
        puVar6[-0x686d] = 1;
      }
    }
    else {
      Function_8271F9E0();
      puVar8 = &DAT_8321c540;
      DAT_8301b414 = 0;
      do {
        if (!bVar1) {
          *(undefined *)((int)puVar8 + 0x38741) = 0;
          *(undefined *)(puVar8 + 0x1c3a1) = 0;
          *puVar8 = *puVar8 | 0x7b;
        }
        puVar8 = puVar8 + 0x1c3b0;
      } while ((int)puVar8 < -0x7cd01d40);
      DAT_83099667 = 1;
    }
  }
  iVar2 = Function_823E84D8(bVar1);
  if (iVar2 == 0) {
    DAT_83099afc = (float)dVar11;
    DAT_83099e1c = DAT_83099e00_;
    DAT_83099ba8 = DAT_83099e04;
  }
  DAT_83099ba0 = (short)uVar9;
  if (DAT_830996f7 == '\0') {
    dVar11 = dVar12 - (double)DAT_83099bac;
  }
  DAT_83099bac = (float)dVar12;
  DAT_83099ba4 = (float)dVar11;
  return;
}

