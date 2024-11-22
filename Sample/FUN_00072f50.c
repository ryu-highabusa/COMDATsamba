
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __fastcall FUN_00072f50(undefined4 param_1)

{
  char cVar1;
  short sVar2;
  float fVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  undefined4 in_EAX;
  undefined3 uVar16;
  float10 *pfVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  char *pcVar15;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  uint uVar17;
  uint extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 this;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int iVar18;
  ushort *puVar19;
  int extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint extraout_ECX_08;
  uint extraout_ECX_09;
  uint uVar20;
  uint extraout_ECX_10;
  uint extraout_ECX_11;
  uint extraout_ECX_12;
  undefined4 extraout_ECX_13;
  uint uVar21;
  uint extraout_ECX_14;
  uint extraout_ECX_15;
  undefined2 uVar22;
  undefined2 extraout_DX;
  byte *pbVar23;
  uint uVar24;
  char cVar25;
  byte *pbVar26;
  undefined1 *puVar27;
  int iVar28;
  undefined4 *puVar29;
  uint uVar30;
  undefined4 *puVar31;
  int iVar32;
  bool bVar33;
  byte bVar34;
  undefined8 uVar35;
  float fVar36;
  undefined uVar37;
  undefined4 uVar38;
  uint3 uVar39;
  undefined4 uVar40;
  undefined4 in_stack_ffffffe4;
  char *pcVar41;
  int iVar42;
  float fVar43;
  int iVar44;
  undefined4 in_stack_fffffffc;
  int iVar45;
  
  cVar25 = DAT_00c59867;
  bVar8 = DAT_005a25fe;
  bVar7 = DAT_005998a8;
  uVar16 = (undefined3)((uint)in_EAX >> 8);
  if (CHARACTER_P1 == '\x05') {
    bVar33 = COSTUME_P1 == 0xa;
LAB_00072f6f:
    if (bVar33) {
      return (char *)CONCAT31(uVar16,CHARACTER_P1);
    }
  }
  else if (CHARACTER_P1 == 0xe) {
    bVar33 = COSTUME_P1 == 0x7;
    goto LAB_00072f6f;
  }
  if (CHARACTER_P2 == '\x05') {
    bVar33 = COSTUME_P2 == 0xa;
LAB_00072f8c:
    if (bVar33) {
      return (char *)CONCAT31(uVar16,CHARACTER_P2);
    }
  }
  else if (CHARACTER_P2 == 0xe) {
    bVar33 = COSTUME_P2 == 0x7;
    goto LAB_00072f8c;
  }
  switch(ULONG_005b1424) {
  case 0:
    break;
  case 1:
    FUN_0007cd10(CONCAT31((int3)((uint)param_1 >> 8),10),'\0');
    uVar14 = 0;
    FUN_0007cd10(this,'\0');
    uVar17 = (uint)DAT_00596a37;
    pcVar15 = (char *)ULONG_005b1424;
    if (uVar17 != ULONG_005b1424) {
      DAT_0059d065 = 0;
      DAT_00596a37 = (byte)ULONG_005b1424;
      FixDisp = 0;
      DAT_005b13a8 = 0;
      pcVar15 = (char *)FUN_0007cac0(uVar17);
    }
    cVar25 = DAT_00c59866;
    if (DAT_00c59866 != '\0') {
      uVar14 = 0x73754;
      pcVar15 = (char *)FUN_00078200();
    }
    if (DAT_00598c70 != '\x01') {
      DAT_005b13f0 = DAT_005b13f0 + 1;
      return pcVar15;
    }
    if (DAT_005a2858 == 0x9) {
LAB_00073775:
      uVar14 = 0x7377a;
      pcVar15 = (char *)FUN_00078120();
      if (pcVar15 != (char *)0x0) {
        return pcVar15;
      }
LAB_00073788:
      if (DAT_005a2858 == '\x05') goto LAB_0007378d;
    }
    else {
      if (cVar25 == '\0') goto LAB_00073788;
      if (DAT_005a2858 != '\x05') goto LAB_00073775;
LAB_0007378d:
      uVar14 = 0x73792;
      pcVar15 = (char *)FUN_000782e0();
      if (pcVar15 != (char *)0x0) {
        return pcVar15;
      }
    }
    bVar7 = DAT_005a25fe;
    if (DAT_005a2858 != '\n') {
      if (DAT_00596a74 == '\x04') {
        return pcVar15;
      }
      DAT_00598c70 = 0;
      if (DAT_005a25fe != 2) {
        uVar17 = (uint)DAT_005a25fe;
        (&DAT_0059cfb8)[uVar17 * 0x68] = (&DAT_0059cfb8)[uVar17 * 0x68] + '\x01';
        ULONG_005b1424 = 2;
        return (char *)(&DAT_0059cfb8 + uVar17 * 0x68);
      }
      pcVar15 = (char *)((uint)DAT_00588837 * 2);
      if (pcVar15 + -2 == (char *)(uint)DAT_005998a8) {
        if (DAT_005a2858 != '\x05') {
          DAT_00598c70 = 0;
          ULONG_005b1424 = 2;
          return pcVar15;
        }
        if (DAT_00596a74 != '\0') {
          DAT_00598c70 = 0;
          ULONG_005b1424 = 2;
          return pcVar15;
        }
      }
      else {
        pcVar15 = pcVar15 + -1;
        if (pcVar15 != (char *)(uint)DAT_005998a8) {
          DAT_0059cfb8 = DAT_0059cfb8 + 1;
LAB_00073831:
          DAT_0059d020 = DAT_0059d020 + 1;
          ULONG_005b1424 = 2;
          return pcVar15;
        }
        if (DAT_00596a74 != '\0') {
          pcVar15 = (char *)CONCAT31((int3)((uint)pcVar15 >> 8),DAT_005a0cd7);
          if (DAT_005a0cd7 != 0) goto LAB_00073831;
          goto LAB_00073819;
        }
      }
      if (WATCHMODE_FLAG__ == '\x01') {
        DAT_0059d020 = DAT_0059d020 + 1;
        ULONG_005b1424 = 2;
        return pcVar15;
      }
LAB_00073819:
      DAT_0059cfb8 = DAT_0059cfb8 + 1;
      ULONG_005b1424 = 2;
      return pcVar15;
    }
    if (DAT_005a25fe == 2) {
      *(char *)((int)&DAT_0059988b + (uint)DAT_0059d020) =
           *(char *)((int)&DAT_0059988b + (uint)DAT_0059d020) + '\x01';
      *(char *)((int)&ULONG_0059989b + (uint)DAT_0059cfb8) =
           *(char *)((int)&ULONG_0059989b + (uint)DAT_0059cfb8) + '\x01';
      DAT_0059cfb8 = DAT_0059cfb8 + 1;
      DAT_0059d020 = DAT_0059d020 + 1;
    }
    else {
      uVar17 = (uint)DAT_005a25fe;
      pcVar15 = (char *)((int)&DAT_0059988b +
                        uVar17 * 0x10 + (uint)(&DAT_0059cfb8)[(uVar17 ^ 1) * 0x68]);
      *pcVar15 = *pcVar15 + '\x01';
      (&DAT_0059cfb8)[uVar17 * 0x68] = (&DAT_0059cfb8)[uVar17 * 0x68] + '\x01';
    }
    if ((DAT_00599890 <= DAT_0059cfb8) || (DAT_00599880 <= DAT_0059d020)) {
      react_type__ = 0;
      DAT_0059cfe2 = 0;
      ULONG_005b1424 = 2;
      return (char *)0x0;
    }
    pcVar15 = (char *)0x1;
    DAT_00598c70 = 0;
    if ((DAT_00596a74 == '\0') && ((bool)bVar7 != (WATCHMODE_FLAG__ != '\0'))) {
      DAT_00596adc = DAT_00596adc + 1;
    }
    DAT_00596a82 = DAT_005a27e2;
    DAT_00596a7e = HITPOINT_SETTING__;
    if ((DAT_0059cf43 != '\0') || (DAT_005a2724 != '\0')) {
      FUN_001c7920();
    }
    DAT_0059cf43 = DAT_0059c5c8;
    DAT_005a2724 = 0;
    FUN_00078b50();
    uVar4 = ULONG_005b1488;
    bVar7 = DAT_0059cf5b;
    bVar33 = false;
    if (DAT_005a25fe == 2) {
      uVar17 = (uint)DAT_0059d020;
      if (uVar17 + 1 < (uint)DAT_00599880) {
        uVar37 = (&DAT_00599887)[uVar17];
        cVar25 = (&DAT_00599882)[uVar17];
        bVar34 = (DAT_0059cf5b ^ 2) & 0xfe;
        bVar8 = (DAT_0059cf5b ^ 2) >> 1;
        (&DAT_0059cf44)[bVar8] = cVar25;
        (&DAT_005a2620)[bVar8] = uVar37;
        bVar8 = (bVar7 ^ 2) & 0xfe;
        if (bVar34 == 0xff) {
          bVar8 = bVar7 ^ 2;
        }
        FUN_000864b0(cVar25,bVar8,'\0');
        uVar22 = *(undefined2 *)(uVar4 + (uint)(&BYTE_002ff868)[extraout_ECX_14 & 0xff] * 4);
        (&DAT_005b207a)[bVar34] = 1;
        (&DAT_005b2080)[bVar34] = (char)extraout_ECX_14;
        (&DAT_005b2086)[bVar34] = uVar22;
        (&DAT_005b20a4)[bVar34] = 1;
        (&DAT_005b2092)[bVar34] = 1;
        bVar33 = true;
      }
      uVar17 = (uint)DAT_0059cfb8;
      if (uVar17 + 1 < (uint)DAT_00599890) {
        cVar25 = (&DAT_00599892)[uVar17];
        uVar37 = (&DAT_00599897)[uVar17];
        bVar8 = DAT_0059cfc3 ^ 2;
        bVar7 = (bVar8 & 0xfe) + 1;
        uVar12 = (uint)bVar7;
        (&DAT_0059cf49)[bVar7 >> 1] = cVar25;
        (&DAT_005a2625)[bVar7 >> 1] = uVar37;
        if (bVar7 == 0xff) {
          bVar7 = bVar8;
        }
        FUN_000864b0(cVar25,bVar7,'\0');
        uVar22 = *(undefined2 *)(uVar4 + (uint)(&BYTE_002ff868)[extraout_ECX_15 & 0xff] * 4);
        (&DAT_005b207a)[uVar12] = 1;
        (&DAT_005b2080)[uVar12] = (char)extraout_ECX_15;
        (&DAT_005b2086)[uVar12] = uVar22;
        goto LAB_00078a13;
      }
      if (!bVar33) goto LAB_00078a26;
    }
    else {
      uVar11 = (uint)(&DAT_0059cfb8)[(uint)DAT_005a25fe * 0x68];
      uVar17 = DAT_005a25fe ^ 1;
      iVar28 = uVar17 * 0x10;
      if ((uint)(&DAT_00599880)[iVar28] <= uVar11 + 1) goto LAB_00078a26;
      bVar7 = (&DAT_00599882)[iVar28 + uVar11];
      bVar8 = (byte)uVar17;
      bVar34 = (((&DAT_0059cf5b)[uVar17 * 0x68] ^ 2) & 0xfe) + bVar8;
      uVar12 = (uint)bVar34;
      iVar45 = (uint)(bVar34 >> 1) + uVar17 * 5;
      (&DAT_0059cf44)[iVar45] = bVar7;
      (&DAT_005a2620)[iVar45] = (&DAT_00599887)[iVar28 + uVar11];
      if (bVar8 == 2) {
        (&DAT_005b20f6)[uVar12 * 3] = 1;
        (&DAT_005b20f7)[uVar12 * 3] = bVar7;
      }
      else {
        FUN_000850a0(CONCAT31((int3)((uint)uVar14 >> 8),bVar34),'\0',bVar8,bVar34,bVar7);
      }
      uVar22 = *(undefined2 *)(ULONG_005b1488 + (uint)(&BYTE_002ff868)[bVar7] * 4);
      (&DAT_005b207a)[uVar12] = 1;
      (&DAT_005b2080)[uVar12] = bVar7;
      (&DAT_005b2086)[uVar12] = uVar22;
LAB_00078a13:
      (&DAT_005b20a4)[uVar12] = 1;
      (&DAT_005b2092)[uVar12] = 1;
    }
    FUN_000856f0();
LAB_00078a26:
    FUN_00085120();
    FUN_00076ca0();
    react_type__ = 0;
    DAT_0059cfe2 = 0;
    return pcVar15;
  case 2:
    DAT_0059d064 = '\0';
    ULONG_005b148c = (-(uint)(DAT_00c59867 != '\0') & 0xffffffec) + 0x78;
    bVar34 = WATCHMODE_FLAG__ != '\x01';
    if ((DAT_005a2858 == '\x05') && (DAT_00596a74 == '\0')) {
      ULONG_005b148c = (-(uint)(DAT_00c59867 != '\0') & 0xfffffffb) + 0x1e;
    }
    else {
      in_stack_fffffffc = 0;
    }
    DAT_00588836 = DAT_005a27cb;
    _DAT_005a27c8 = CONCAT13(0xff,_DAT_005a27c8);
    DAT_005b149a = DAT_005998a8;
    DAT_005b1485 = DAT_005a25fe;
    if ((DAT_00596a74 == '\x01') && (DAT_005a25fe != 2)) {
      if ((uint)DAT_005b13f0 < *(uint *)(&DAT_00596a44 + (uint)DAT_005a25fe * 4)) {
        *(uint *)(&DAT_00596a44 + (uint)DAT_005a25fe * 4) = (uint)DAT_005b13f0;
      }
    }
    if (bVar8 == 0) {
      puVar27 = &WATCHMODE_FLAG__;
      DAT_005b149a = bVar7 + 1;
      ULONG_005b1324 = (ulong)&WATCHMODE_FLAG__;
      ULONG_005b13f4 = (ulong)&WATCHMODE_FLAG_P2____;
LAB_00073af9:
      if (DAT_005a2858 == '\n') goto LAB_00073b02;
      if ((byte)puVar27[0x60] < DAT_00588837) goto LAB_00073d2d;
      if (DAT_005a2858 != '\x03') {
        if ((DAT_005a2858 == '\x05') || (DAT_005a2858 == '\x04')) {
LAB_00073bbf:
          FUN_0006d610(DAT_005a2858);
          if (DAT_005a2858 != '\x04') goto LAB_00073bd8;
        }
        else {
LAB_00073bd8:
          if (DAT_005a2858 != '\n') goto LAB_00073be1;
        }
LAB_00073bea:
        uVar17 = (uint)DAT_005b1485;
        (&DAT_005a0ccc)[uVar17] = (&DAT_005a0ccc)[uVar17] + 1;
        if (999 < (ushort)(&DAT_005a0ccc)[uVar17]) {
          (&DAT_005a0ccc)[uVar17] = 999;
        }
LAB_00073c12:
        if (DAT_00596a74 == '\0') goto LAB_00073c24;
        if (DAT_00596a74 != '\x01') goto LAB_00073d2d;
        if (DAT_005a0cd7 == DAT_005b1485) {
          ULONG_005a262c = ULONG_0059d07c + 1;
          DAT_0059d078 = DAT_005a0cd7;
          goto LAB_00073d2d;
        }
        goto LAB_00073d1c;
      }
      if (DAT_00596a74 != '\0') {
LAB_00073be1:
        if (DAT_00596a74 == '\x01') goto LAB_00073bea;
        goto LAB_00073c12;
      }
      if (((bool)bVar8 == (WATCHMODE_FLAG__ != '\x01')) &&
         (iVar28 = FUN_0007cb30(), iVar28 - 1U <= (uint)DAT_00596adc)) goto LAB_00073bbf;
LAB_00073c24:
      uVar17 = (uint)DAT_00596adc;
      if (DAT_005b1485 == bVar34) {
        if (DAT_005a2858 == '\x02') {
          if (uVar17 + 1 < 7) goto LAB_00073cba;
          DAT_0059d064 = '\x01';
        }
        else if (DAT_005a2858 == '\x03') {
          if (DAT_00c59866 == '\0') {
            if (uVar17 + 1 < 8) {
LAB_00073cba:
              if (DAT_0059d064 == '\0') goto LAB_00073d2d;
            }
            else {
              DAT_0059d064 = '\x01';
            }
          }
          else {
            if (uVar17 + 1 < 5) goto LAB_00073cba;
            DAT_0059d064 = '\x01';
          }
        }
        else if (DAT_005a2858 == '\t') {
          if (uVar17 + 1 < 5) goto LAB_00073cba;
          DAT_0059d064 = '\x01';
        }
        else {
          if ((DAT_005a2858 != '\x05') || (uVar17 + 1 < 100)) goto LAB_00073cba;
          DAT_0059d064 = '\x01';
        }
      }
      else {
        DAT_0059d064 = '\x01';
      }
      if (DAT_0059d079 == '\x01') {
        DAT_0059d079 = '\0';
        if (WATCHMODE_FLAG__ == '\0') {
          DAT_00596a64 = 5;
          DAT_00593018 = 0;
        }
        else {
          DAT_00596a65 = 0xd;
          DAT_00593019 = 0;
        }
      }
    }
    else {
      if (bVar8 == 1) {
        puVar27 = &WATCHMODE_FLAG_P2____;
        DAT_005b149a = bVar7 + 1;
        ULONG_005b1324 = (ulong)&WATCHMODE_FLAG_P2____;
        ULONG_005b13f4 = (ulong)&WATCHMODE_FLAG__;
        goto LAB_00073af9;
      }
      if (DAT_005a2858 != '\n') {
        if ((DAT_005a2858 == '\x05') && (DAT_00596a74 == '\0')) {
          DAT_005b1485 = WATCHMODE_FLAG__ == '\x01';
        }
        if ((uint)DAT_00588837 * 2 - 1 == (uint)bVar7) {
          if (DAT_00596a74 == '\0') {
            if (WATCHMODE_FLAG__ != '\x01') {
LAB_00073a5d:
              puVar27 = &WATCHMODE_FLAG__;
              DAT_005b1485 = 0;
              ULONG_005b1324 = (ulong)&WATCHMODE_FLAG__;
              ULONG_005b13f4 = (ulong)&WATCHMODE_FLAG_P2____;
              goto LAB_00073af9;
            }
          }
          else if (DAT_005a0cd7 == 0) goto LAB_00073a5d;
          puVar27 = &WATCHMODE_FLAG_P2____;
          DAT_005b1485 = 1;
          ULONG_005b1324 = (ulong)&WATCHMODE_FLAG_P2____;
          ULONG_005b13f4 = (ulong)&WATCHMODE_FLAG__;
        }
        else {
          if (DAT_0059cfb8 < DAT_0059d020) {
            puVar27 = &WATCHMODE_FLAG_P2____;
            ULONG_005b1324 = (ulong)&WATCHMODE_FLAG_P2____;
            ULONG_005b13f4 = (ulong)&WATCHMODE_FLAG__;
            if (DAT_00588837 <= DAT_0059d020) {
              DAT_005b1485 = 1;
            }
          }
          else {
            puVar27 = &WATCHMODE_FLAG__;
            ULONG_005b1324 = (ulong)&WATCHMODE_FLAG__;
            ULONG_005b13f4 = (ulong)&WATCHMODE_FLAG_P2____;
            if (DAT_00588837 <= DAT_0059cfb8) {
              DAT_005b1485 = 0;
            }
          }
          if ((uint)DAT_00588837 * 2 - 2 == (uint)bVar7) {
            DAT_005b149a = DAT_005998a8 + 1;
          }
          else {
            DAT_005b149a = DAT_005998a8 + 2;
          }
        }
        goto LAB_00073af9;
      }
      if (DAT_0059d020 < DAT_00599880) {
        DAT_005b1485 = 0;
LAB_000739c6:
        ULONG_005b1324 = (ulong)(&WATCHMODE_FLAG__ + (uint)DAT_005b1485 * 0x68);
        ULONG_005b13f4 = (ulong)(&WATCHMODE_FLAG__ + (DAT_005b1485 ^ 1) * 0x68);
        DAT_005b149a = bVar7 + 2;
      }
      else {
        if (DAT_0059cfb8 < DAT_00599890) {
          DAT_005b1485 = 1;
          goto LAB_000739c6;
        }
        DAT_005b149a = bVar7 + 2;
        DAT_005b1485 = 2;
        ULONG_005b1324 = (ulong)&WATCHMODE_FLAG__;
        ULONG_005b13f4 = (ulong)&WATCHMODE_FLAG_P2____;
      }
LAB_00073b02:
      FUN_0006d610(10);
      bVar7 = DAT_005b1485;
      uVar17 = (uint)DAT_005b1485;
      (&DAT_005a0ccc)[uVar17] = (&DAT_005a0ccc)[uVar17] + 1;
      if (999 < (ushort)(&DAT_005a0ccc)[uVar17]) {
        (&DAT_005a0ccc)[uVar17] = 999;
      }
      DAT_0059d064 = '\x01';
      if ((DAT_00596a74 == '\x01') && (bVar7 != 2)) {
        if (DAT_005a0cd7 == bVar7) {
          ULONG_005a262c = ULONG_0059d07c + 1;
          DAT_0059d078 = DAT_005a0cd7;
        }
        else {
LAB_00073d1c:
          ULONG_005a262c = 1;
          DAT_0059d078 = DAT_005a0cd7 ^ 1;
        }
      }
    }
LAB_00073d2d:
    DAT_00596a37 = (undefined)ULONG_005b1424;
    while ((cVar25 = (char)in_stack_fffffffc, 0 < (int)ULONG_005b148c || (DAT_00599068 == '\0'))) {
      RenderGameState_FUN_001c65d8(1);
      ULONG_005b148c = ULONG_005b148c - 1;
      if (((DAT_005a2858 == '\x02') &&
          ((((&CHARACTER_P1)[(uint)(WATCHMODE_FLAG__ != '\0') * 0x68] == '\x12' &&
            (5 < DAT_00596adc)) && ((bool)DAT_005a25fe == (WATCHMODE_FLAG__ != '\x01'))))) &&
         (ULONG_005b148c == 0x3c)) {
        DAT_00c59414 = DAT_00c59414 & 0xfffffffd;
        bVar33 = DAT_005a8b78 == '\0';
        ULONG_005a8b74 = 0;
        DAT_005a8b7c = 1;
        if (bVar33) {
          DAT_005a8b6a = 0;
          DAT_005a8b69 = 0;
          DAT_005a8b68 = 0;
        }
        else {
          DAT_005a8b6e = DAT_005a8b68;
          DAT_005a8b78 = '\0';
          DAT_005a8b6d = DAT_005a8b69;
          DAT_005a8b6c = DAT_005a8b6a;
          DAT_005a8b6f = DAT_005a8b6b;
          DAT_005a8b72 = 0;
          DAT_005a8b71 = 0;
          DAT_005a8b70 = 0;
          DAT_005a8b73 = 0;
        }
        DAT_005a8b79 = !bVar33;
        iVar28 = ULONG_005b1d44 + 1;
        ULONG_005a8b88 = -iVar28;
        DAT_005a8b6b = 0;
        DAT_005a8b7b = 1;
        ULONG_005a8b90 = 0;
        if (ULONG_005a8b88 != 0) {
          ULONG_005a8b90 = iVar28 * 0x3c;
          if (DAT_00c59867 != '\0') {
            ULONG_005a8b90 = (iVar28 * 300 + 3) / 6;
          }
          ULONG_005a8b80 = 0;
          ULONG_005a8b84 = 0xff;
          if ((bool)DAT_005a8b79) {
            DAT_005a8b73 = 0xff;
          }
          DAT_00c59414 = DAT_00c59414 | 8;
        }
        ULONG_005a8b8c = 0;
        ULONG_007fe2d0 = (ulong)(float)Settings_Audio_Music_Volume_002d3e9c;
        ULONG_007fe2cc = 0x3c;
        ULONG_007fe2c8 = 0;
        _DAT_007fd1c0 = (float)ULONG_007fe2d0 * 0.01666667;
      }
      if (((DAT_00592fd8 == '\x01') && ((char)in_stack_fffffffc != '\x01')) &&
         (in_stack_fffffffc = 1, (int)ULONG_005b148c < 0xf)) {
        ULONG_005b148c = 0xf;
      }
    }
    if ((DAT_005a25fe == 2) || ((DAT_0059cf43 == '\0' && (DAT_005a2724 == '\0')))) {
      ULONG_005b1424 = 4;
      if (DAT_005a25fe == 2) {
        if (((uint)DAT_00588837 * 2 - 1 == (uint)DAT_005998a8) ||
           (DAT_00588837 <= (&DAT_0059cfb8)[(uint)DAT_005b1485 * 0x68])) {
          DAT_005a25fe = DAT_005b1485;
          FUN_000b3950();
          DAT_005a25fe = 2;
        }
      }
      else {
        FUN_000b3950();
      }
      goto LAB_00074065;
    }
    ULONG_005b1424 = 3;
    if (DAT_005a2858 != '\n') {
      if ((DAT_005a2858 == '\x05') && (DAT_00596a74 == '\0')) {
        FUN_000b3950();
        ULONG_005b1424 = 4;
        goto LAB_00074065;
      }
      if ((cVar25 != '\x01') && (DAT_00592fd8 != '\x01')) {
        if (DAT_009bf5f4 == '\x01') {
          FUN_000b3950();
          ULONG_005b1424 = 4;
        }
        else if (((DAT_005a2858 == '\x02') && (DAT_00596a74 == '\0')) && (5 < DAT_00596adc)) {
          FUN_000b3950();
          ULONG_005b1424 = 4;
        }
        else if (DAT_009bf5f5 == '\x01') {
          FUN_000b3950();
          ULONG_005b1424 = 4;
        }
        goto LAB_00074065;
      }
    }
    FUN_000b3950();
    ULONG_005b1424 = 4;
LAB_00074065:
    if ((DAT_00588837 <= *(byte *)(ULONG_005b1324 + 0x60)) ||
       ((DAT_005a2858 == '\x05' && (DAT_00596a74 == '\0')))) {
      DAT_005b1464 = FUN_0007c830(cVar25,DAT_005b1485);
    }
    pcVar15 = (char *)FUN_0007c900();
    _DAT_005b149c = ULONG_00598c74;
    return pcVar15;
  case 3:
    bVar33 = false;
    iVar45 = 0;
    iVar28 = 300;
    fVar43 = 0.5;
    fVar36 = 0.004166667;
    uVar17 = 0;
    iVar42 = 0;
    if (DAT_00c59867 != '\0') {
      iVar28 = 250;
      fVar36 = FLOAT_0030e3fc * 0.004166667;
    }
    DAT_00596a37 = (undefined)ULONG_005b1424;
    ULONG_005a2630 = 0x42700000;
    if (DAT_00c59867 != '\0') {
      ULONG_005a2630 = 0x42dc0000;
    }
    uVar35 = __ftol2();
    DAT_0059cf50 = (short)uVar35;
    if ((DAT_005a25fe == 2) || ((DAT_0059cf43 == '\0' && (DAT_005a2724 == '\0')))) {
      iVar28 = 0;
    }
    else {
      uVar30 = (uint)DAT_005a25fe;
      uVar12 = (uint)(byte)(&DAT_0030e3f4)[uVar30];
      DAT_00588836 = 10;
      uVar11 = FUN_00011000(uVar12);
      uVar37 = (undefined)uVar12;
      uVar14 = extraout_ECX_03;
      if ((((uVar11 & 1) != 0) ||
          (((DAT_00c59866 != '\0' && ((&DAT_00596a40)[uVar30] != '\0')) &&
           (uVar11 = FUN_00012c90((&DAT_0030e3f6)[uVar30]), uVar14 = extraout_ECX_04,
           (char)uVar11 != '\0')))) &&
         ((uVar11 = FUN_00011000(CONCAT31((int3)((uint)uVar14 >> 8),uVar37)),
          ((byte)uVar11 >> 2 & 1) != 0 ||
          (((DAT_00c59866 != '\0' && ((&DAT_00596a40)[uVar30] != '\0')) &&
           (uVar11 = FUN_00012cd0((&DAT_0030e3f6)[uVar30]), (char)uVar11 != '\0')))))) {
        bVar33 = true;
      }
      cVar25 = DAT_00c59867;
      if ((&WATCHMODE_FLAG__)[uVar30 * 0x68] == '\x01') {
        if (bVar33) {
          iVar45 = 2;
        }
        else if ((((&HITPOINT_P1)[(uVar30 ^ 1) * 0x34] == 0) &&
                 ((DAT_0059cf43 != '\0' || (DAT_005a2724 != '\0')))) && (DAT_00593030 != '\x03')) {
          puVar19 = (ushort *)(&PTR_DAT_00303534_0x0_ZACK_00303748)[DAT_00593015];
          uVar9 = *puVar19;
          if (uVar9 != 0xffff) {
            do {
              if (uVar9 == DAT_005a28e8) {
                iVar45 = 1;
              }
              uVar9 = puVar19[1];
              puVar19 = puVar19 + 1;
            } while (uVar9 != 0xffff);
            if (iVar45 == 1) {
              if (DAT_00593030 == '\0') {
                FUN_000ae8d0(DAT_005a28e8);
                iVar44 = 300 - ((-(uint)(DAT_00c59867 != '\0') & 0xffffffec) + 0x78);
                ULONG_005a2630 =
                     (ulong)((float)(iVar44 - (_DAT_005a27c8 & 0xffff)) + FLOAT_00303c90 * 60.0);
                if (DAT_00c59867 != '\0') {
                  ULONG_005a2630 =
                       (ulong)((float)iVar44 -
                              (((float)(_DAT_005a27c8 & 0xffff) - FLOAT_00303c90 * 60.0) * 5.0 + 3.0
                              ) * 0.1666667);
                }
                uVar17 = _DAT_005a27c8;
                if ((short)_DAT_005a27c8 == 0) {
                  ULONG_005a2630 = 0x42700000;
                  if (DAT_00c59867 != '\0') {
                    ULONG_005a2630 = 0x42dc0000;
                  }
                  iVar45 = 0;
                }
              }
              else {
                fVar3 = FLOAT_00303c84 * 60.0;
                if (DAT_00c59867 != '\0') {
                  fVar3 = (fVar3 * 5.0 + 3.0) * 0.1666667;
                }
                ULONG_005a2630 =
                     (ulong)((float)(300 - ((-(uint)(DAT_00c59867 != '\0') & 0xffffffec) + 0x78)) +
                            fVar3);
              }
              if (1 < DAT_005a25fe) {
                ULONG_005a2630 = 0x42700000;
                if (DAT_00c59867 != '\0') {
                  ULONG_005a2630 = 0x42dc0000;
                }
                iVar45 = 0;
              }
              uVar35 = __ftol2();
              DAT_0059cf50 = (short)uVar35;
              cVar25 = DAT_00c59867;
            }
          }
        }
      }
    }
    iVar44 = (-(uint)(cVar25 != '\0') & 0xffffffd8) + 0xf0;
    if (iVar45 == 1) {
      puVar29 = (undefined4 *)&stack0xffffffd8;
      for (iVar32 = 10; iVar32 != 0; iVar32 = iVar32 + -1) {
        *puVar29 = 0;
        puVar29 = puVar29 + 1;
      }
      iVar32 = (int)DAT_004e023d;
      if (((-1 < iVar32) && (iVar32 < 5)) &&
         (iVar32 = iVar32 * 0xc80, (&DAT_004db94c)[iVar32] != '\0')) {
        (&DAT_004db7a9)[iVar32] = 1;
        (&DAT_004db7a8)[iVar32] = 9;
        iVar18 = 10;
        puVar29 = (undefined4 *)(&DAT_004db780 + iVar32);
        if (&stack0x00000000 == (undefined *)0x28) {
          for (; iVar18 != 0; iVar18 = iVar18 + -1) {
            *puVar29 = 0;
            puVar29 = puVar29 + 1;
          }
          *(undefined2 *)(&DAT_004db782 + iVar32) = 0;
        }
        else {
          puVar29 = (undefined4 *)&stack0xffffffd8;
          puVar31 = (undefined4 *)(&DAT_004db780 + iVar32);
          for (; iVar18 != 0; iVar18 = iVar18 + -1) {
            *puVar31 = *puVar29;
            puVar29 = puVar29 + 1;
            puVar31 = puVar31 + 1;
          }
        }
      }
    }
    while (iVar28 != 0) {
      RenderGameState_FUN_001c65d8(1);
      if (iVar28 <= iVar44) {
        fVar43 = fVar36 + fVar43;
        if (0.01 < fVar36 != NAN(fVar36)) {
          fVar36 = 0.01;
        }
        if (1.0 < fVar43 != NAN(fVar43)) {
          fVar43 = 1.0;
        }
      }
      iVar28 = iVar28 + -1;
      if (iVar45 == 0) {
        if ((((DAT_005b20b0 == '\0') && (DAT_005b2078 == '\0')) && (DAT_005b3188 == '\0')) &&
           (((WATCHMODE_FLAG__ == '\x01' &&
             ((((DAT_00c59866 != '\0' && (DAT_00596a40 != '\0')) &&
               ((*(byte *)(&DAT_0073c8d8 + (_DAT_0030e3f4 >> 0x10 & 0xff) * 0xb) & 0x10) != 0)) ||
              ((*(byte *)(&DAT_0073c8d8 + (_DAT_0030e3f4 & 0xff) * 0xb) & 0x10) != 0)))) ||
            ((WATCHMODE_FLAG_P2____ == '\x01' &&
             ((((DAT_00c59866 != '\0' && (DAT_00596a41 != '\0')) &&
               ((*(byte *)(&DAT_0073c8d8 + (_DAT_0030e3f4 >> 0x18) * 0xb) & 0x10) != 0)) ||
              ((*(byte *)(&DAT_0073c8d8 + (_DAT_0030e3f4 >> 8 & 0xff) * 0xb) & 0x10) != 0))))))))
        break;
LAB_000748e8:
        ULONG_005a2630 = (ulong)((float)ULONG_005a2630 + fVar43);
        iVar32 = iVar44;
        if (299.0 < (float)ULONG_005a2630 != ((float)ULONG_005a2630 == 299.0)) {
          ULONG_005a2630 = 0x43958000;
          iVar28 = 0;
        }
      }
      else if (iVar45 == 1) {
        if (((WATCHMODE_FLAG__ == '\x01') &&
            ((((DAT_00c59866 != '\0' && (DAT_00596a40 != '\0')) &&
              ((*(byte *)(&DAT_0073c8d8 + (_DAT_0030e3f4 >> 0x10 & 0xff) * 0xb) & 0x10) != 0)) ||
             ((*(byte *)(&DAT_0073c8d8 + (_DAT_0030e3f4 & 0xff) * 0xb) & 0x10) != 0)))) ||
           ((WATCHMODE_FLAG_P2____ == '\x01' &&
            ((((DAT_00c59866 != '\0' && (DAT_00596a41 != '\0')) &&
              ((*(byte *)(&DAT_0073c8d8 + (_DAT_0030e3f4 >> 0x18) * 0xb) & 0x10) != 0)) ||
             ((*(byte *)(&DAT_0073c8d8 + (_DAT_0030e3f4 >> 8 & 0xff) * 0xb) & 0x10) != 0))))))
        break;
        iVar32 = FUN_0007e040(iVar42);
        if (iVar32 == 1) {
          iVar42 = iVar42 + 1;
          if (DAT_00593030 == '\0') {
            iVar32 = 300 - ((-(uint)(DAT_00c59867 != '\0') & 0xffffffec) + 0x78);
            ULONG_005a2630 =
                 (ulong)((float)(iVar32 - (uVar17 & 0xffff)) + (&FLOAT_00303c90)[iVar42] * 60.0);
            if (DAT_00c59867 != '\0') {
              ULONG_005a2630 =
                   (ulong)((float)iVar32 -
                          (((float)(uVar17 & 0xffff) - (&FLOAT_00303c90)[iVar42] * 60.0) * 5.0 + 3.0
                          ) * 0.1666667);
            }
          }
          else {
            fVar3 = (&FLOAT_00303c84)[iVar42] * 60.0;
            if (DAT_00c59867 != '\0') {
              fVar3 = (fVar3 * 5.0 + 3.0) * 0.1666667;
            }
            ULONG_005a2630 =
                 (ulong)((float)(300 - ((-(uint)(DAT_00c59867 != '\0') & 0xffffffec) + 0x78)) +
                        fVar3);
          }
          puVar29 = (undefined4 *)&stack0xffffffd8;
          for (iVar32 = 10; iVar32 != 0; iVar32 = iVar32 + -1) {
            *puVar29 = 0;
            puVar29 = puVar29 + 1;
          }
          iVar32 = (int)DAT_004e023d;
          if (((-1 < iVar32) && (iVar32 < 5)) &&
             (iVar32 = iVar32 * 0xc80, (&DAT_004db94c)[iVar32] != '\0')) {
            (&DAT_004db7a9)[iVar32] = 1;
            (&DAT_004db7a8)[iVar32] = 9;
            iVar18 = 10;
            puVar29 = (undefined4 *)(&DAT_004db780 + iVar32);
            if (&stack0x00000000 == (undefined *)0x28) {
              for (; iVar18 != 0; iVar18 = iVar18 + -1) {
                *puVar29 = 0;
                puVar29 = puVar29 + 1;
              }
              *(undefined2 *)(&DAT_004db782 + iVar32) = 0;
            }
            else {
              puVar29 = (undefined4 *)&stack0xffffffd8;
              puVar31 = (undefined4 *)(&DAT_004db780 + iVar32);
              for (; iVar18 != 0; iVar18 = iVar18 + -1) {
                *puVar31 = *puVar29;
                puVar29 = puVar29 + 1;
                puVar31 = puVar31 + 1;
              }
            }
          }
        }
        iVar32 = iVar44;
        if (299.0 < (float)ULONG_005a2630 != ((float)ULONG_005a2630 == 299.0)) {
          iVar28 = 0;
        }
      }
      else {
        iVar32 = iVar44;
        if (((DAT_005b20b0 == '\0') && (DAT_005b2078 == '\0')) &&
           ((DAT_005b3188 == '\0' &&
            (((WATCHMODE_FLAG__ == '\x01' &&
              (bVar33 = FUN_0007dc00(0), iVar44 = extraout_ECX_05, bVar33)) ||
             ((WATCHMODE_FLAG_P2____ == '\x01' &&
              (bVar33 = FUN_0007dc00(CONCAT31((int3)((uint)iVar44 >> 8),1)), bVar33)))))))) break;
        uVar12 = (uint)DAT_005a25fe;
        uVar11 = FUN_00011000((uint)(byte)(&DAT_0030e3f4)[uVar12]);
        if (((uVar11 >> 1 & 1) == 0) &&
           (((iVar44 = iVar32, DAT_00c59866 == '\0' || ((&DAT_00596a40)[uVar12] == '\0')) ||
            (uVar11 = FUN_00011000((uint)(byte)(&DAT_0030e3f6)[uVar12]), iVar44 = iVar32,
            (uVar11 >> 1 & 1) == 0)))) goto LAB_000748e8;
        ULONG_005a2630 = (ulong)((float)ULONG_005a2630 - fVar43);
        if ((float)ULONG_005a2630 < 0.0) {
          ULONG_005a2630 = 0;
        }
      }
      uVar35 = __ftol2();
      DAT_0059cf50 = (short)uVar35;
      iVar44 = iVar32;
    }
    uVar22 = 299;
    if (DAT_0059cf50 != 299) {
      FUN_0006bd10();
      _DAT_005a8d90 = 2;
      ULONG_005a8d8c = 2;
      ULONG_005a8d94 = 0;
      _DAT_005a8da2 = 0;
      DAT_00c59414 = DAT_00c59414 | 1;
      DAT_005a8da0 = 1;
      uVar22 = extraout_DX;
    }
    ULONG_005a2630 = 0x43958000;
    ULONG_005b1424 = 4;
    DAT_0059cf50 = uVar22;
    FUN_000b3950();
    if (((DAT_005a2858 == '\x02') && (DAT_00596a74 == '\0')) &&
       ((&DAT_005b1362)[(uint)DAT_00596adc * 8] == '\0')) {
      FUN_0007d5c0();
      FUN_0007c900();
      pcVar15 = (char *)FUN_0007d620();
      return pcVar15;
    }
    pcVar15 = (char *)FUN_0007c900();
    return pcVar15;
  case 4:
    iVar28 = 0x3c0;
    iVar42 = 0;
    iVar44 = 0x3c0;
    iVar45 = 1;
    if (DAT_00c59867 != '\0') {
      iVar28 = 800;
      iVar44 = 800;
    }
    if (DAT_005a2858 == '\n') {
      FUN_00085970();
    }
    else if (((DAT_005b20b0 != '\0') || (DAT_005b2078 != '\0')) || (DAT_005b3188 != '\0')) {
      FUN_0007d5c0();
      FUN_00085820();
      FUN_0007d620();
    }
    uVar6 = ULONG_005b13f4;
    pcVar15 = (char *)ULONG_005b1324;
    cVar5 = DAT_005a2858;
    uVar4 = ULONG_005a262c;
    bVar7 = DAT_00596adc;
    cVar25 = DAT_00596a74;
    DAT_00596490 = '\0';
    uVar17 = (uint)DAT_00596adc;
    DAT_005b1341 = DAT_00596a74;
    DAT_005b1474 = DAT_005a0cd7;
    uVar11 = CONCAT31((int3)((uint)in_stack_ffffffe4 >> 8),DAT_00596adc);
    uVar37 = 0;
    DAT_005c943e = 0;
    uVar14 = 0;
    if (DAT_00596a74 == '\0') {
      uVar37 = 0;
      if (DAT_005a2858 == '\x02') {
        uVar37 = 1;
        uVar14 = 0;
        if (((&DAT_005b1363)[(uint)DAT_00596adc * 8] != -1) &&
           ((&DAT_005b1362)[(uint)DAT_00596adc * 8] == '\0')) {
          uVar14 = 0x1000000;
        }
      }
      DAT_005c943e = 1;
    }
    else {
      DAT_005b1400 = 1;
    }
    if (DAT_005a25fe == 2) {
      if ((uint)DAT_00588837 * 2 - 1 == (uint)DAT_005998a8) {
        if (DAT_00596a74 == '\0') goto LAB_00074b65;
        goto LAB_00074b8b;
      }
      if ((DAT_0059cfb8 != DAT_0059d020) && (DAT_00588837 <= *(byte *)(ULONG_005b1324 + 0x60))) {
        cVar1 = *(char *)ULONG_005b1324;
        goto LAB_00074b89;
      }
      uVar38 = 0xb000000;
    }
    else {
      cVar1 = (&WATCHMODE_FLAG__)[(uint)DAT_005a25fe * 0x68];
LAB_00074b89:
      if (cVar1 == '\x01') {
LAB_00074b8b:
        uVar38 = 0x8000000;
      }
      else {
LAB_00074b65:
        uVar38 = 0x9000000;
      }
    }
    DAT_005a25fe = DAT_005b1485;
    uVar40 = CONCAT13(DAT_005b149a,(uint3)CONCAT11(WATCHMODE_FLAG__ != '\x01',uVar37));
    if (DAT_005a2858 == '\n') {
      pbVar26 = &DAT_00599880;
      pcVar41 = &WATCHMODE_FLAG__;
      iVar32 = -0x599882;
      iVar28 = 2;
      do {
        if (*pcVar41 == '\x01') {
          pbVar23 = pbVar26 + 1;
          for (uVar12 = (uint)*pbVar26; uVar12 != 0; uVar12 = uVar12 - 1) {
            pbVar13 = pbVar23 + iVar32;
            if (-1 < (int)pbVar13) {
              do {
                if (*pbVar23 == pbVar13[(int)(pbVar26 + 1)]) goto LAB_00074c49;
                pbVar13 = pbVar13 + -1;
              } while (-1 < (int)pbVar13);
            }
            sVar2 = (&DAT_0059f674)[(&BYTE_002ff868)[*pbVar23]];
            if (sVar2 != -1) {
              (&DAT_0059f674)[(&BYTE_002ff868)[*pbVar23]] = sVar2 + 1;
            }
LAB_00074c49:
            pbVar23 = pbVar23 + 1;
          }
        }
        pcVar41 = pcVar41 + 0x68;
        iVar32 = iVar32 + -0x10;
        pbVar26 = pbVar26 + 0x10;
        iVar28 = iVar28 + -1;
      } while (iVar28 != 0);
      iVar28 = iVar44;
      if ((DAT_00596a74 == '\x01') && (DAT_005b1485 != 2)) {
        if (DAT_005a0cd7 == DAT_005b1485) {
          ULONG_0059d07c = ULONG_005a262c;
          DAT_005b1486 = '\x01';
        }
        else {
          DAT_005a0cd7 = DAT_005b1485;
          ULONG_0059d07c = ULONG_005a262c;
          FUN_0007d7b0();
          iVar28 = iVar44;
        }
      }
      DAT_005a27e4 = DAT_005a27e4 + 1;
      if (100 < DAT_005a27e4) {
        DAT_005a27e4 = 10;
      }
      DAT_00596a74 = '\x03';
      cVar25 = '\x03';
      iVar44 = CONCAT31((int3)((uint)uVar14 >> 8),5);
      DAT_00592fb5 = '\x01';
      DAT_0059cf40 = 9;
      pcVar41 = pcVar15;
    }
    else {
      uVar39 = (uint3)((uint)uVar14 >> 8);
      pcVar41 = pcVar15;
      if (*(byte *)(ULONG_005b1324 + 0x60) < DAT_00588837) {
        iVar44 = (uint)uVar39 << 8;
      }
      else if (DAT_00596a74 == '\0') {
        iVar42 = 0;
        if (*(char *)ULONG_005b1324 == '\0') {
          if ((DAT_00598c20 == '\x01') && (DAT_005a2858 != '\x05')) {
            DAT_00596a74 = '\x02';
            DAT_00598b79 = 10;
            ULONG_005b1480 = 0;
            DAT_005b1435 = 0;
            iVar44 = CONCAT31(uVar39,5);
            cVar25 = '\x02';
          }
          else {
            DAT_00596a74 = '\x03';
            ULONG_005b1470 = 300;
            if (DAT_00c59867 != '\0') {
              ULONG_005b1470 = 0xfa;
            }
            *(undefined *)ULONG_005b13f4 = 0;
            iVar44 = CONCAT31(uVar39,5);
            cVar25 = '\x03';
          }
        }
        else {
          if (DAT_005a2858 != '\x05') {
            (&ULONG_005a0d94)[DAT_00596adc] =
                 ((uint)DAT_0059301d * 0x3c + (uint)DAT_0059cf4e) * (uint)(byte)ULONG_0030e400 +
                 (uint)DAT_0059c5b1;
          }
          ULONG_005c9318._0_2_ = *(undefined2 *)((int)pcVar15 + 0x20);
          uVar17 = (uint)(byte)(bVar7 + 1);
          if ((cVar5 == '\x05') && (99 < (byte)(bVar7 + 1))) {
            cVar25 = '\x03';
            DAT_00596a74 = '\x03';
            DAT_00592fb5 = '\x01';
            DAT_00596adc = 100;
          }
          FUN_00078060();
          bVar7 = (byte)uVar17;
          if (DAT_005a2858 == '\x02') {
            bVar33 = bVar7 < 7;
LAB_00074e11:
            if (bVar33) {
LAB_00074e13:
              if (DAT_00c59866 == '\0') goto LAB_00074e17;
              goto LAB_00074e1e;
            }
          }
          else {
            if (DAT_005a2858 != '\x03') goto LAB_00074e13;
            if (DAT_00c59866 != '\0') {
              bVar33 = bVar7 < 5;
              goto LAB_00074e11;
            }
LAB_00074e17:
            if (bVar7 < 8) {
LAB_00074e1e:
              if ((DAT_005a2858 != '\t') || (bVar7 < 5)) goto LAB_00074f67;
            }
          }
          DAT_00596a74 = '\x03';
          DAT_00592fb5 = '\x01';
          iVar44 = CONCAT31((int3)((uint)uVar14 >> 8),5);
          cVar25 = '\x03';
        }
      }
      else {
        DAT_005a27e4 = DAT_005a27e4 + 1;
        if (100 < DAT_005a27e4) {
          DAT_005a27e4 = 10;
        }
        uVar12 = CONCAT31((int3)(ULONG_005b1324 >> 8),DAT_005a0cd7);
        ULONG_0059d07c = ULONG_005a262c;
        if (DAT_005a0cd7 == DAT_005b1485) {
          DAT_005b1486 = '\x01';
          if (DAT_005a2858 == '\x05') {
            (&HITPOINT_P1)[(uint)DAT_005b1485 * 0x34] = (undefined2)ULONG_005c9318;
          }
        }
        else {
          DAT_00598af2 = DAT_005b1485;
          DAT_005a0cd7 = DAT_005b1485;
          uVar17 = 0;
          FUN_0007d7b0();
          DAT_009b3749 = 0;
          DAT_009b372a = 0;
          DAT_009b37a8 = 0;
          DAT_009b372f = 0;
          uVar12 = extraout_ECX_06;
        }
        if ((DAT_005964ff == 0) || (uVar12 = (uint)DAT_005964ff, uVar4 < uVar12)) {
          DAT_00596a74 = '\0';
          DAT_005b1486 = '\x01';
          DAT_005964a8 = 1;
          if (DAT_00598c20 == '\x01') {
            DAT_0059d079 = '\x01';
            DAT_00598b79 = 10;
          }
        }
        else {
          bVar33 = DAT_00c59867 != '\0';
          *(undefined *)uVar6 = 0;
          *pcVar15 = '\0';
          DAT_00596a74 = '\x03';
          ULONG_005b1470 = 300;
          if (bVar33) {
            ULONG_005b1470 = 250;
          }
        }
        FUN_00079bd0(uVar12);
        iVar42 = 1;
        cVar25 = DAT_00596a74;
        pcVar41 = pcVar15;
LAB_00074f67:
        iVar44 = CONCAT31((int3)((uint)uVar14 >> 8),5);
      }
      if (DAT_00592fb5 == '\0') {
        if ((DAT_0059cf43 == '\0') && (DAT_005a2724 == '\0')) {
          DAT_0059cf40 = 8;
        }
      }
      else {
        DAT_0059cf40 = 9;
      }
    }
    if (((((char)uVar40 == '\0') || ((char)iVar44 != '\x05')) ||
        ((&DAT_005b1362)[(uVar11 & 0xff) * 8] != '\0')) || (cVar25 == '\x02')) {
      if (DAT_005a2858 == '\x05') {
        bVar33 = cVar25 == '\x03';
LAB_00074fdf:
        if ((bVar33) && (DAT_005b1341 == '\0')) {
LAB_0007501e:
          DAT_00596a37 = 4;
          DAT_00588836 = 0xff;
          goto LAB_0007504e;
        }
      }
      else {
        if (DAT_005a2858 == '\x03') {
          bVar33 = DAT_00592fb5 == '\x01';
          goto LAB_00074fdf;
        }
        if ((DAT_005a2858 == '\n') && (cVar25 == '\x03')) goto LAB_0007501e;
      }
      if ((DAT_005b1485 == 2) || ((&CHARACTER_P1)[(DAT_005b1485 ^ 1) * 0x68] != '\x12')) {
        DAT_00588836 = (undefined)((uint)uVar38 >> 0x18);
        DAT_00596a37 = 4;
        FUN_001c7920();
        cVar25 = DAT_00596a74;
      }
      else {
        DAT_00596a37 = 4;
        DAT_00588836 = 0xff;
      }
    }
LAB_0007504e:
    if (((DAT_005a2858 == '\x05') && (cVar25 == '\x03')) && (DAT_005b1341 == '\0')) {
      DAT_005a25fe = (byte)((uint)uVar40 >> 8);
      uVar12 = (uint)DAT_005a25fe;
      (&WATCHMODE_FLAG__)[uVar12 * 0x68] = 1;
      pcVar15 = pcVar41;
      FUN_000b3950();
      (&WATCHMODE_FLAG__)[uVar12 * 0x68] = 0;
      (&load_file_flag___)[(uVar12 ^ 1) * 0x68] = 0;
      pcVar41 = pcVar15;
    }
    RenderGameState_FUN_001c65d8(1);
    bVar7 = (byte)iVar44;
    DAT_0059d064 = 0;
    if ((bVar7 == 5) && (DAT_005a2858 == '\x02')) {
      uVar11 = CONCAT31((int3)(uVar11 >> 8),DAT_00596adc);
    }
    if ((DAT_005a25fe == 2) && (iVar28 = 0x3c, DAT_00c59867 != '\0')) {
      iVar28 = 0x32;
    }
    cVar25 = (char)((uint)iVar44 >> 0x18);
    uVar12 = CONCAT13(cVar25,(uint3)bVar7);
    uVar22 = (undefined2)
             (CONCAT13((char)((uint)uVar40 >> 0x18),CONCAT12(DAT_00c59865,(short)uVar40)) >> 0x10);
    uVar30 = CONCAT22(uVar22,(short)uVar40) & 0xffff00ff;
    if (((DAT_005a25fe != 2) && ((&DAT_009b26bc)[DAT_005a25fe] == '\x01')) && (DAT_00c59862 == '\0')
       ) {
      uVar30 = CONCAT22(uVar22,CONCAT11(1,(char)uVar40));
    }
    uVar22 = (undefined2)(uVar12 >> 0x10);
    bVar8 = (byte)uVar17;
    if (((char)uVar30 == '\0') || (bVar7 != 5)) {
      if ((((DAT_005b1341 == '\0') && ((DAT_005a2858 == '\x03' && (DAT_005b1486 != '\x01')))) &&
          (bVar7 == 5)) && (DAT_00596a74 != '\x02')) {
        if (DAT_00c59866 == '\0') {
          bVar33 = bVar8 < 8;
        }
        else {
          bVar33 = bVar8 < 5;
        }
        if (bVar33) {
          uVar12 = CONCAT22(uVar22,0x305);
        }
      }
    }
    else if (DAT_00596a74 != '\x02') {
      uVar12 = CONCAT22(uVar22,CONCAT11((cVar25 == '\0') + '\x01',5));
    }
    if (((char)(uVar30 >> 8) == '\0') && (cVar25 = (char)(uVar12 >> 8), cVar25 != '\0')) {
      if (cVar25 == '\x02') {
        FUN_0007c340();
      }
      else {
        if (cVar25 != '\x03') goto LAB_000751b1;
        FUN_0007bd50(bVar8);
      }
      uVar12 = CONCAT13((char)(uVar12 >> 0x18),CONCAT12(1,(short)uVar12));
    }
LAB_000751b1:
    FUN_000a5a00();
    FUN_000a5a00();
    FUN_000a5a00();
    FUN_000a5a00();
    cVar25 = (char)((uint)uVar38 >> 0x18);
    if (DAT_005a2858 == '\x05') {
      if (DAT_00596a74 != '\x03') goto LAB_000751fd;
LAB_000751f9:
      if (DAT_005b1341 == '\0') goto LAB_00075267;
LAB_000751fd:
      if (((DAT_005b1341 == '\x01') && (DAT_00588837 <= (byte)pcVar15[0x60])) &&
         ((DAT_005a2858 == '\x03' ||
          ((((DAT_005a2858 == '\t' || (DAT_005a2858 == '\n')) || (DAT_005a2858 == '\x05')) ||
           (DAT_005a2858 == '\x02')))))) {
        FUN_000795b0();
        if ((DAT_00596a74 == '\x03') && (DAT_005a27c0 == '\0')) {
          iVar45 = 0;
        }
      }
      else {
LAB_00075271:
        if ((((char)uVar30 == '\0') || ((char)uVar12 == '\0')) ||
           (((&DAT_005b1362)[(uVar11 & 0xff) * 8] == '\x01' || (DAT_00596a74 == '\x02')))) {
          if (((&ACTCODE_P1_0059cf86)[(uint)DAT_005a25fe * 0x34] == 0xe7) &&
             ((&CHARACTER_P1)[(uint)DAT_005a25fe * 0x68] == '\r')) {
            iVar28 = 0xb4;
          }
          bVar7 = DAT_005a0cd7;
          if (DAT_005a25fe != 2) {
            bVar7 = DAT_005a25fe;
          }
          uVar12 = CONCAT13(bVar7,(int3)uVar12);
          DAT_005b1428 = 0;
          DAT_005b1429 = 0;
          DAT_005b142a = 0;
          DAT_005b142b = 0;
          DAT_005b142c = 0;
          _DAT_005b132c = 0xffff;
          _DAT_005b132e = 0xffff;
          if (iVar28 != 0) {
LAB_00075311:
            RenderGameState_FUN_001c65d8(1);
            bVar7 = (byte)(uVar12 >> 8);
            uVar24 = extraout_ECX_07;
            if (1 < bVar7) {
              cVar25 = (char)(uVar30 >> 8);
              uVar16 = (undefined3)(extraout_ECX_07 >> 8);
              uVar24 = CONCAT31(uVar16,cVar25);
              if (((cVar25 != '\0') &&
                  (bVar8 = (byte)(uVar30 >> 0x10), uVar24 = CONCAT31(uVar16,bVar8),
                  bVar8 != DAT_00c59865)) &&
                 (cVar25 = (char)(uVar12 >> 0x10), uVar24 = CONCAT31(uVar16,cVar25), cVar25 == '\0')
                 ) {
                if (bVar7 == 2) {
                  FUN_0007c340();
                  uVar24 = extraout_ECX_08;
                }
                else {
                  if (bVar7 != 3) goto LAB_00075360;
                  FUN_0007bd50((byte)uVar17);
                  uVar24 = extraout_ECX_09;
                }
                uVar12 = CONCAT13((char)(uVar12 >> 0x18),CONCAT12(1,(short)uVar12));
              }
            }
LAB_00075360:
            if (DAT_00596490 == '\0') {
              bVar7 = DAT_005a25fe;
              if (DAT_005a25fe == 2) {
                bVar7 = DAT_005a0cd7;
              }
              uVar21 = (uint)bVar7;
              uVar20 = uVar24 & 0xffffff00;
              uVar12 = CONCAT13(bVar7,(int3)uVar12);
              if ((((&ACTSTATE_P1_0059cf8b)[uVar21 * 0x68] == '\r') &&
                  ((&DAT_009b2884)[uVar21] == '\x01')) &&
                 ((&ACTCODE_P1_0059cf86)[uVar21 * 0x34] == (&DAT_009b26d4)[uVar21])) {
                uVar20 = CONCAT31((int3)(uVar24 >> 8),1);
              }
              uVar24 = uVar20;
              DAT_00596490 = (char)uVar24;
              if (DAT_00596490 != '\0') {
                FUN_00058fc0();
                if (((&ACTCODE_P1_0059cf86)[(uint)DAT_005a25fe * 0x34] == 0xe7) &&
                   ((&CHARACTER_P1)[(uint)DAT_005a25fe * 0x68] == '\r')) {
                  iVar28 = 0xb4;
                }
                uVar24 = (uVar21 ^ 1) * 0x68;
                (&load_file_flag___)[uVar24] = 0;
                (&DAT_005a0ec4)[uVar21] = 0;
              }
            }
            else {
              uVar21 = uVar12 >> 0x18;
            }
            if ((((&WATCHMODE_FLAG__)[uVar21 * 0x68] == '\x01') && (DAT_005a2858 == '\x03')) &&
               (DAT_00588837 <= (&DAT_0059cfb8)[uVar21 * 0x68])) {
              FUN_000680d0();
              uVar24 = extraout_ECX_10;
            }
            cVar5 = DAT_005b20b0;
            if ((((WATCHMODE_FLAG__ == '\x01') && (DAT_00592fb5 != '\x01')) &&
                ((DAT_00596a74 != '\x02' && ((DAT_005a25fe != 2 && (DAT_005b20b0 == '\0')))))) &&
               ((DAT_005b2078 == '\0' && ((DAT_005b3188 == '\0' && (DAT_00596490 != '\0')))))) {
              bVar33 = FUN_0007dc00(uVar24 & 0xffffff00);
              cVar25 = (char)((uint)uVar38 >> 0x18);
              uVar24 = extraout_ECX_11;
              if (bVar33) goto LAB_0007558a;
            }
            if (WATCHMODE_FLAG_P2____ == '\x01') {
              if (DAT_00592fb5 == '\x01') goto LAB_00075555;
              if (((((DAT_00596a74 != '\x02') && (DAT_005a25fe != 2)) && (cVar5 == '\0')) &&
                  ((DAT_005b2078 == '\0' && (DAT_005b3188 == '\0')))) && (DAT_00596490 != '\0')) {
                bVar33 = FUN_0007dc00(1);
                cVar25 = (char)((uint)uVar38 >> 0x18);
                uVar24 = extraout_ECX_12;
                if (!bVar33) goto LAB_000754f3;
                goto LAB_0007558a;
              }
            }
LAB_000754f3:
            if (((DAT_00592fb5 != '\x01') && (DAT_005a25fe != 2)) && (DAT_00596a74 == '\x03')) {
              if (ULONG_0059d07c < DAT_005964ff) {
                uVar24 = CONCAT31((int3)(uVar24 >> 8),DAT_005a25fe);
              }
              else {
                bVar33 = FUN_0007dc00(0);
                cVar25 = (char)((uint)uVar38 >> 0x18);
                if (bVar33) goto LAB_0007558a;
                uVar24 = CONCAT31((int3)((uint)extraout_ECX_13 >> 8),1);
              }
              bVar33 = FUN_0007dc00(uVar24);
              cVar25 = (char)((uint)uVar38 >> 0x18);
              if (bVar33) goto LAB_0007558a;
            }
LAB_00075555:
            cVar25 = (char)((uint)uVar38 >> 0x18);
            if ((((DAT_00596490 == '\x01') && ((&DAT_0059cf93)[(uint)DAT_005a25fe * 0x68] == '\x01')
                 ) && ((DAT_00c59866 == '\0' || (((byte)ULONG_005cde58 & 3) == 0)))) ||
               (iVar28 = iVar28 + -1, iVar28 == 0)) goto LAB_0007558a;
            goto LAB_00075311;
          }
        }
      }
    }
    else {
      if (DAT_005a2858 == '\n') goto LAB_000751f9;
      if (DAT_005a2858 != '\x04') {
        if ((DAT_005a2858 != '\x03') || (DAT_005b1341 != '\0')) goto LAB_000751fd;
        if (DAT_00592fb5 == '\x01') goto LAB_00075267;
        goto LAB_00075271;
      }
      if ((byte)pcVar15[0x60] < DAT_00588837) goto LAB_000751fd;
LAB_00075267:
      FUN_00078db0();
    }
LAB_0007558a:
    RenderGameState_FUN_001c65d8(1);
    cVar5 = DAT_00c59867;
    iVar28 = (uVar12 >> 0x18) * 0x68;
    if ((((&WATCHMODE_FLAG__)[iVar28] == '\x01') && (DAT_005a2858 == '\x03')) &&
       (DAT_00588837 <= (&DAT_0059cfb8)[iVar28])) {
      uVar24 = (uint)DAT_0059c5b1;
      if (DAT_00c59867 != '\0') {
        uVar24 = (uVar24 * 6) / 5;
      }
      uVar24 = ((uint)DAT_0059301d * 0x3c + (uint)DAT_0059cf4e) * 0x3c + uVar24;
      uVar21 = (uint)DAT_00596adc;
      if (DAT_00c59866 == '\x01') {
        if (uVar24 < *(uint *)(&DAT_0059ff38 + uVar21 * 4)) {
          *(uint *)(&DAT_0059ff38 + uVar21 * 4) = uVar24;
        }
      }
      else if (uVar24 < (&ULONG_0059ff04)[uVar21]) {
        (&ULONG_0059ff04)[uVar21] = uVar24;
      }
    }
    if (cVar25 != '\t') {
      ULONG_005a881c = (ulong)PTR_s_Dummy_0030afbc;
      DAT_005a8820 = 0;
      DAT_005a8826 = 0;
      DAT_005a8827 = 0;
      DAT_005a8828 = 0;
      DAT_005a8822 = -((-(ushort)(cVar5 != '\0') & 0xfffd) + 0x14);
    }
    if (iVar45 != 0) {
      iVar45 = FUN_0007c900();
    }
    while( true ) {
      bVar7 = (byte)uVar17;
      uVar16 = (undefined3)((uint)iVar45 >> 8);
      if (((DAT_005b20b0 == '\0') && (DAT_005b2078 == '\0')) && (DAT_005b3188 == '\0')) break;
      iVar45 = RenderGameState_FUN_001c65d8(1);
    }
    cVar25 = (char)(uVar12 >> 8);
    uVar17 = uVar11;
    if ((cVar25 != '\0') && ((char)(uVar12 >> 0x10) == '\0')) {
      if (cVar25 == '\x02') {
        uVar14 = FUN_0007c340();
      }
      else if (cVar25 == '\x03') {
        uVar14 = FUN_0007bd50(bVar7);
      }
      else {
        FUN_0007c310();
        uVar14 = FUN_0007cdb0(uVar11);
      }
      uVar16 = (undefined3)((uint)uVar14 >> 8);
      if (((DAT_005b20b0 != '\0') || (DAT_005b2078 != '\0')) || (DAT_005b3188 != '\0')) {
        DAT_005b13a7 = 1;
        FUN_001c6488(5);
        FUN_001c6488(6);
        FUN_001c6488(7);
        FUN_001c6488(8);
        FUN_001c6488(9);
        FUN_001c6488(10);
        FUN_001c6488(0xb);
        FUN_001c6488(0xd);
        FUN_001c6488(0xc);
        FUN_001c6488(0xe);
        FUN_00085820();
        FUN_001c6465(0xc);
        FUN_001c6465(5);
        FUN_001c6465(6);
        FUN_001c6465(7);
        FUN_001c6465(8);
        FUN_001c6465(9);
        FUN_001c6465(10);
        FUN_001c6465(0xb);
        FUN_001c6465(0xe);
        FUN_001c6465(0xd);
        uVar16 = extraout_var;
      }
    }
    cVar25 = (char)uVar12;
    DAT_005b13a7 = 0;
    if ((DAT_005a2858 == '\x05') && (DAT_00596a74 == '\x03')) {
      DAT_005a25fe = DAT_005b1485;
    }
    if (DAT_00592fb5 != '\x01') {
      if (((cVar25 == '\x05') && (DAT_00596a74 != '\x02')) && (iVar42 == 0)) {
        FUN_0007a180();
        DAT_009b3749 = DAT_0059301d;
        DAT_009b372a = DAT_0059cf4e;
        DAT_009b37a8 = DAT_0059c5b1;
        DAT_009b372f = DAT_009b379d;
      }
      DAT_005998a8 = (byte)(uVar30 >> 0x18);
      ULONG_005b1424 = uVar12 & 0xff;
      DAT_005964f1 = DAT_005964f1 + '\x01';
      uVar16 = 0;
    }
    DAT_00596adc = bVar7;
    bVar7 = DAT_00596adc;
    if (((char)uVar30 == '\0') || ((&DAT_005b1363)[(uVar17 & 0xff) * 8] == -1)) goto LAB_0007594f;
    if ((cVar25 == '\x05') && (DAT_00596a74 != '\x02')) {
      if (DAT_00592fb5 == '\x01') goto LAB_000758bb;
      FUN_000a5b40();
      FUN_001c6a80();
    }
    else {
      if (DAT_00592fb5 != '\x01') goto LAB_0007594f;
LAB_000758bb:
      ULONG_007fe2cc = 0;
      if (ULONG_002d3ea8 != 0xffffffff) {
        FUN_001c6bd0();
      }
      ULONG_00c59218 = 0;
      ULONG_002d3ea8 = 0xffffffff;
      FUN_000a5b40();
      FUN_001c6a80();
    }
    _DAT_005a8a90 = 0;
    FUN_00076490();
    DAT_0059cf94 = 1;
    DAT_0059cffc = 1;
    DAT_00588836 = 0xff;
    load_file_flag___ = 0;
    CHRDISP_P2 = 0;
    STAGE_DISPLAY = 0;
    FUN_00049180();
    FUN_0007cdb0(uVar11);
    FUN_0007ae20();
    uVar16 = extraout_var_00;
LAB_0007594f:
    if (cVar25 == '\x05') {
      if (*pcVar41 == '\x01') {
        ULONG_007fe2cc = 0;
        if (ULONG_002d3ea8 != 0xffffffff) {
          FUN_001c6bd0();
        }
        ULONG_00c59218 = 0;
        ULONG_002d3ea8 = 0xffffffff;
        FUN_000a5b40();
        FUN_001c6a80();
        uVar16 = extraout_var_01;
      }
      if ((DAT_00596a74 != '\x02') && ((DAT_005a2858 != '\t' || (DAT_00596adc != bVar7)))) {
        ULONG_007fe2cc = 0;
        if (ULONG_002d3ea8 != 0xffffffff) {
          FUN_001c6bd0();
        }
        ULONG_00c59218 = 0;
        ULONG_002d3ea8 = 0xffffffff;
        FUN_000a5b40();
        FUN_001c6a80();
        uVar16 = extraout_var_02;
      }
    }
    cVar25 = DAT_005b1469;
    pcVar15 = (char *)CONCAT31(uVar16,DAT_005a2858);
    if (DAT_00592fb5 == '\x01') {
      WATCHMODE_FLAG__ = '\0';
      WATCHMODE_FLAG_P2____ = '\0';
      if (DAT_005a2858 != '\x02') {
        WATCHMODE_FLAG__ = 0;
        WATCHMODE_FLAG_P2____ = 0;
        return pcVar15;
      }
      pcVar15 = (char *)((uint)DAT_005a25fe * 0x68);
      pcVar15[0x59cf59] = DAT_005b1468;
      pcVar15[0x59cf5a] = cVar25;
    }
    else if (DAT_005a2858 != '\x02') {
      return pcVar15;
    }
    cVar25 = DAT_005b1341;
    if (DAT_005b1341 == '\0') {
      DAT_005a2715 = DAT_00596a90;
      cVar25 = DAT_00596a90;
    }
    return (char *)CONCAT31((int3)((uint)pcVar15 >> 8),cVar25);
  case 5:
    DAT_005a0cbc = WATCHMODE_FLAG__ == '\x01';
    DAT_0059cf3f = 0;
    if (WATCHMODE_FLAG_P2____ == '\x01') {
      DAT_005a0cbc = DAT_005a0cbc | 2;
    }
    DAT_00588836 = 0xff;
    DAT_00596490 = 0;
    load_file_flag___ = 1;
    CHRDISP_P2 = 1;
    DAT_0059d064 = 0;
    if (DAT_00598e80 != '\x02') {
      FUN_001c1be4();
    }
    DAT_0059cfb8 = 0;
    DAT_0059d020 = 0;
    DAT_005998a8 = 0;
    DAT_005964f1 = 0;
    DAT_005b1400 = 0;
    FUN_00072930();
    FUN_000a5b40();
    FUN_00085820();
    uVar14 = extraout_ECX;
    if (DAT_00596a74 == '\0') {
      FUN_00072e90();
      uVar14 = extraout_ECX_00;
    }
    cVar25 = DAT_005a2858;
    DAT_005b145c = WATCHMODE_FLAG__;
    if (((DAT_005a2858 == '\x02') && (DAT_00596a74 == '\0')) && (5 < DAT_00596adc)) {
      (&HITPOINT_SETTING__)[WATCHMODE_FLAG__ != '\0'] =
           *(undefined2 *)(&DAT_00302f20 + (uint)DAT_00591fa4 * 2);
    }
    uVar17 = CONCAT31((int3)((uint)uVar14 >> 8),WATCHMODE_FLAG_P2____);
    DAT_005b145d = WATCHMODE_FLAG_P2____;
    if (((DAT_00596a74 == '\x01') || (DAT_00596a74 == '\x04')) ||
       ((DAT_00596a74 == '\0' &&
        ((cVar25 == 0x9 ||
         ((((cVar25 == '\x02' || (cVar25 == '\x05')) ||
           ((cVar25 == '\n' ||
            (((((cVar25 == '\a' || (cVar25 == '\v')) || (cVar25 == '\f')) ||
              ((cVar25 == '\r' || (cVar25 == '\x04')))) || (cVar25 == '\x03')))))) &&
          ((DAT_005b1486 == '\x01' || (DAT_00598b25 == '\x01')))))))))) {
      DAT_005b1486 = '\0';
      if (DAT_00596a74 == '\0') {
        FUN_00076ac0();
        cVar25 = DAT_005a2858;
      }
      if ((cVar25 == '\x02') && (DAT_00596a74 == '\0')) {
        if (DAT_00596adc == 0) {
          if (DAT_005b135c == -1) {
            FUN_00075a40();
            goto LAB_00073324;
          }
        }
        else {
LAB_00073324:
          FUN_0007c340();
          if (DAT_00596adc != 0) {
            FUN_00076d70();
          }
        }
        if (DAT_00c59863 != '\0') {
          DAT_00c59863 = '\0';
          DAT_00c59864 = 0;
          DAT_00591f50 = 0;
          DAT_00599878 = 1;
        }
        goto LAB_00073198;
      }
    }
    else {
      if (cVar25 == '\x02') {
        FUN_0007c340();
        if (DAT_00c59863 != '\0') {
          DAT_00c59863 = '\0';
          DAT_00c59864 = 0;
          DAT_00591f50 = 0;
          DAT_00599878 = 1;
        }
        if ((&DAT_005b135c)[(uint)DAT_00596adc * 8] == -1) {
          FUN_00076d70();
          FUN_00076dd0();
        }
        goto LAB_00073198;
      }
      if (DAT_00c59866 == '\0') {
        if (((DAT_00596a74 == '\0') && (cVar25 == '\x05')) &&
           (uVar17 = (uint)DAT_005b1340,
           (int)((ulonglong)DAT_00596adc % (ulonglong)(longlong)(int)uVar17) == 0)) {
          FUN_00076ac0();
          uVar17 = extraout_ECX_01;
        }
        FUN_0007b3d0(uVar17);
        load_file_flag___ = 1;
        CHRDISP_P2 = 1;
        STAGE_DISPLAY = 1;
        FUN_00076d70();
        if (DAT_00596a74 == '\0') {
          FUN_00076dd0();
        }
        goto LAB_00073198;
      }
      if (DAT_00596a74 == '\0') {
        FUN_00076ac0();
      }
    }
    FUN_00075a40();
LAB_00073198:
    FUN_00076ca0();
    FUN_000762b0();
    FUN_00076490();
    DAT_0059cf94 = 1;
    DAT_0059cffc = 1;
    DAT_00588836 = 0xff;
    load_file_flag___ = 0;
    CHRDISP_P2 = 0;
    STAGE_DISPLAY = 0;
    FUN_00049180();
    bVar7 = DAT_0059cf5b >> 1 & 1;
    CHARACTER_P1 = (&DAT_005b20b5)[(uint)DAT_0059cf5b * 6];
    COSTUME_P1 = (&DAT_005b20b6)[(uint)DAT_0059cf5b * 6];
    (&DAT_005a2620)[bVar7] = COSTUME_P1;
    (&DAT_0059cf44)[bVar7] = CHARACTER_P1;
    bVar7 = DAT_0059cfc3 >> 1 & 1;
    CHARACTER_P2 = (&DAT_005b20b5)[(uint)DAT_0059cfc3 * 6];
    COSTUME_P2 = (&DAT_005b20b6)[(uint)DAT_0059cfc3 * 6];
    (&DAT_0059cf49)[bVar7] = CHARACTER_P2;
    (&DAT_005a2625)[bVar7] = COSTUME_P2;
    cVar25 = DAT_005a2858;
    DAT_00596a37 = (undefined)ULONG_005b1424;
    bVar33 = DAT_005a2858 != '\n';
    (&DAT_0059d084)[DAT_00c59865] = (&DAT_005b20f8)[(uint)DAT_00c59865 * 3];
    DAT_00599878 = 1;
    DAT_005a0ec9 = 3;
    if (((((bVar33) && (DAT_00596a74 != '\0')) && ((DAT_00596a74 == '\x01' && (cVar25 != '\t')))) &&
        ((DAT_0059301b == '\0' ||
         ((((cVar25 == '\x04' || (cVar25 == '\x03')) || ((cVar25 == '\x05' || (cVar25 == '\x02'))))
          && (DAT_005a27c0 == '\x01')))))) &&
       (((&DAT_0059c5bc)[DAT_005a0cd7 ^ 1] != '\0' && (100 < DAT_005a27e4)))) {
      DAT_005a27e4 = 10;
    }
    FUN_0007c0a0();
    FUN_001c6465(5);
    FUN_001c6465(6);
    FUN_001c6465(7);
    FUN_001c6465(8);
    FUN_001c6465(9);
    FUN_001c6465(10);
    FUN_001c6465(0xb);
    FUN_001c6465(0xc);
    FUN_001c6465(0xd);
    FUN_001c6465(0xe);
    DAT_00c59860 = 0;
    FUN_000dba40();
    iVar28 = (uint)DAT_0059cf5b * 6;
    DAT_005a27c0 = 0;
    _DAT_005a8a90 = 1;
    if (((((&DAT_005b20b2)[(uint)DAT_0059cf5b * 6] == '\0') && ((&DAT_005b20b5)[iVar28] != -1)) &&
        ((&DAT_005b20b6)[iVar28] != -1)) &&
       (((iVar28 = (uint)DAT_0059cfbe * 8, (&DAT_005b20ca)[(uint)DAT_0059cfbe * 8] == '\0' &&
         ((&DAT_005b20ce)[iVar28] != -1)) && ((&DAT_005b20cf)[iVar28] != -1)))) {
      FUN_000ade30(0,0);
    }
    iVar28 = (uint)DAT_0059cfc3 * 6;
    if ((((&DAT_005b20b2)[(uint)DAT_0059cfc3 * 6] == '\0') && ((&DAT_005b20b5)[iVar28] != -1)) &&
       (((&DAT_005b20b6)[iVar28] != -1 &&
        (((iVar28 = (uint)DAT_0059d026 * 8, (&DAT_005b20ca)[(uint)DAT_0059d026 * 8] == '\0' &&
          ((&DAT_005b20ce)[iVar28] != -1)) && ((&DAT_005b20cf)[iVar28] != -1)))))) {
      FUN_000ade30(0,0);
    }
    fVar43 = 1.401298e-45;
    RenderGameState_FUN_001c65d8(1);
    ULONG_005b1424 = 0;
    DAT_005998a9 = 1;
    FLOAT_002fffe0 = 1.0;
    pfVar10 = FUN_0008abf0((float10 *)0x3f800000,fVar43);
    return (char *)pfVar10;
  default:
    return (char *)ULONG_005b1424;
  }
  if (CHARACTER_P1 == '\x05') {
    bVar33 = COSTUME_P1 == 0xa;
LAB_0007355e:
    if (!bVar33) goto LAB_00073560;
LAB_00073580:
    FUN_001c663f(0xe);
  }
  else {
    if (CHARACTER_P1 == '\x0e') {
      bVar33 = COSTUME_P1 == 0x7;
      goto LAB_0007355e;
    }
LAB_00073560:
    if (CHARACTER_P2 == '\x05') {
      if (COSTUME_P2 == 0xa) goto LAB_00073580;
    }
    else if ((CHARACTER_P2 == '\x0e') && (COSTUME_P2 == '\a')) goto LAB_00073580;
  }
  FUN_000a5a60();
  FUN_001c6a80();
  DAT_00596a37 = (undefined)ULONG_005b1424;
  bVar33 = DAT_005998a9 != '\x01';
  DAT_00598b26 = 0;
  DAT_005b13a8 = 0;
  DAT_00c59860 = 0;
  if (bVar33) {
    FUN_000765a0();
  }
  else {
    DAT_005b134a = 0;
    FUN_000762b0();
  }
  DAT_0059cf43 = DAT_0059c5c8;
  DAT_005a2724 = 0;
  DAT_00c59861 = bVar33;
  if (DAT_005998a9 == '\x01') {
    if ((DAT_00596a74 == '\0') && (DAT_005a2858 == '\x02')) {
      if ((&DAT_005b135c)[(uint)DAT_00596adc * 8] != -1) {
        DAT_0059d065 = 1;
        FUN_0007c310();
        uVar14 = FUN_0007a980();
        DAT_00598c70 = '\0';
        goto LAB_00073657;
      }
    }
    else if ((DAT_005a2858 == 0x7) || (DAT_005a2858 == 0xb)) {
      uVar17 = FUN_0007cba0((uint)(byte)(&DAT_0059d084)[DAT_00c59865],(&DAT_0059d084)[DAT_00c59865])
      ;
      if ((char)uVar17 != '\0') {
        FUN_00085120();
      }
      uVar14 = FUN_0007dcb0();
      if (DAT_005b1329 != '\0') {
        uVar14 = FUN_000a5ed0();
        DAT_005b1329 = '\0';
      }
      STAGE_DISPLAY = 1;
      goto LAB_00073657;
    }
    iVar28 = FUN_0007ed50();
    if (iVar28 == 0) {
      FUN_00076da0();
      FUN_0007a370(extraout_ECX_02);
    }
    else {
      FUN_00076da0();
      STAGE_DISPLAY = 1;
    }
  }
  uVar14 = FUN_0007a8d0();
LAB_00073657:
  pcVar15 = (char *)CONCAT31((int3)((uint)uVar14 >> 8),DAT_005a2858);
  if ((DAT_005a2858 == 0x7) || (DAT_005a2858 == '\v')) {
    pcVar15 = (char *)FUN_001894b0();
  }
  DAT_005b143c = 0;
  DAT_005b143d = 0;
  DAT_005998a9 = 0;
  DAT_005b13f0 = 0;
  DAT_00c59860 = 0;
  DAT_005b1357 = 0;
  DAT_005b133a = 0;
  ULONG_005b1424 = 1;
  DAT_005a0ec8 = 1;
  return pcVar15;
}

