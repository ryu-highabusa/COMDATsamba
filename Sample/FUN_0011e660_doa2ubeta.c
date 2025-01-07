
void __cdecl FUN_0011e660(int param_1)

{
  byte bVar1;
  dword dVar2;
  dword dVar3;
  byte *pbVar4;
  int iVar5;
  dword dVar6;
  uint uVar7;
  dword *pdVar8;
  byte *pbVar9;
  dword *pdVar10;
  int iVar11;
  dword local_8;
  uint local_4;
  
  local_8 = 0;
  if (param_1 == 0x15) {
    local_8 = 0x12;
    iVar11 = 0;
    pbVar9 = &DAT_006dcc10;
    do {
      bVar1 = *pbVar9;
      pbVar4 = &CharacterSelectSlotVersus03_Tina;
      uVar7 = 0;
      do {
        if (bVar1 == pbVar4[-0x28]) break;
        if (bVar1 == pbVar4[-0x14]) {
          uVar7 = uVar7 + 1;
          break;
        }
        if (bVar1 == *pbVar4) {
          uVar7 = uVar7 + 2;
          break;
        }
        if (bVar1 == pbVar4[0x14]) {
          uVar7 = uVar7 + 3;
          break;
        }
        if (bVar1 == pbVar4[0x28]) {
          uVar7 = uVar7 + HAYABUSA;
          break;
        }
        uVar7 = uVar7 + KASUMI;
        pbVar4 = pbVar4 + 100;
      } while (uVar7 < 0x14);
      (&DAT_00df09dc)[iVar11] = (char)uVar7;
      pbVar9 = pbVar9 + LEIFANG;
      iVar11 = iVar11 + 1;
    } while ((int)pbVar9 < 0x6dcce8);
  }
  else {
    local_4 = 0;
    pdVar8 = &DWORD_006dc5d0;
    pdVar10 = &DWORD_006dc43c;
    iVar11 = 0;
    do {
      bVar1 = (&CharacterSelectSlotVersus01_Kasumi_006dc5c8)[iVar11];
      if (((((bVar1 < 0x1d) || (bVar1 == 0xff)) || (bVar1 == 0xfe)) &&
          ((bVar1 != CHRISTIE && (bVar1 != HAYATE)))) && (bVar1 != BRADWONG)) {
        if (((bVar1 == TENGU) || (bVar1 == BAYMAN)) || ((bVar1 == HITOMI || (bVar1 == 0xff)))) {
          if (param_1 == 0) goto LAB_0011e7a4;
          iVar5 = FUN_0011e610(bVar1);
          if (iVar5 == 0) {
            (&BYTE_006dc438)[iVar11] = 0xfe;
            pdVar10[1] = 0x4001b;
            *pdVar10 = 0x40009;
            pdVar10[2] = 0;
            *(undefined *)((int)pdVar10 + -3) = 0;
            dVar6 = 0;
          }
          else {
            dVar2 = *(dword *)((int)&DWORD_006dc5cc + iVar11);
            dVar3 = *(dword *)((int)&DWORD_006dc5d4 + iVar11);
            pdVar10[1] = *pdVar8;
            dVar6 = *(dword *)((int)&DWORD_006dc5d8 + iVar11);
            (&BYTE_006dc438)[iVar11] = bVar1;
            *pdVar10 = dVar2;
            pdVar10[2] = dVar3;
            *(undefined *)((int)pdVar10 + -3) = 1;
          }
          pdVar10[3] = dVar6;
        }
        (&DAT_00df09dc)[local_8] = (char)local_4;
        local_8 = local_8 + 1;
      }
LAB_0011e7a4:
      local_4 = local_4 + 1;
      pdVar8 = pdVar8 + 5;
      iVar11 = iVar11 + 0x14;
      pdVar10 = pdVar10 + 5;
    } while (local_4 < 0x14);
  }
  DATA_006dc9a8 = local_8;
  uVar7 = 0;
  do {
    iVar11 = 0;
    if (0 < (int)local_8) {
      do {
        if (uVar7 == (&BYTE_006dc438)[(uint)(byte)(&DAT_00df09dc)[iVar11] * 0x14]) {
          (&DAT_00df0490)[uVar7] = (char)iVar11;
          if (iVar11 < (int)local_8) goto LAB_0011e811;
          break;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)local_8);
    }
    (&DAT_00df0490)[uVar7] = 0;
LAB_0011e811:
    uVar7 = uVar7 + 1;
    if (0x1c < (int)uVar7) {
      return;
    }
  } while( true );
}

