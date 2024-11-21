
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00185790(void)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  int iVar5;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  int extraout_ECX_06;
  ulong uVar6;
  ulong extraout_EDX;
  ulong extraout_EDX_00;
  ulong extraout_EDX_01;
  ulong extraout_EDX_02;
  ulong extraout_EDX_03;
  ulong extraout_EDX_04;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  float fVar13;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  undefined4 local_34 [4];
  ulong local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  
  uVar6 = ULONG_00c58e4c;
  local_c = 8.407791e-44;
  local_10 = (float)ULONG_00c58e4c;
  local_14 = 0x40;
  local_18 = 0x1857a7;
  uVar12 = FUN_00054c70();
  ULONG_00c58e4c = uVar6 + 1;
  FLOAT_00259f18 = (float)(int)uVar12 * 0.00390625;
  if (((Sparring_Menu_Cursor_XPOS_00c58e1c != 5) || (DAT_00c58e2e != '\x01')) ||
     (DAT_00c58e3b = '\x01', DAT_00c58e3a == '\0')) {
    DAT_00c58e3b = '\0';
  }
  FLOAT_00304630 = 1.0;
  if (DAT_00c58e3a == '\0') {
    FUN_00185830();
  }
  FUN_00185f30();
  if (DAT_00c58e49 != '\0') {
    local_34[0] = 0xff0071fd;
    local_34[1] = 0xfffd0000;
    local_34[2] = 0xff2ec36f;
    local_34[3] = 0xffffff22;
    local_4c = 2.0501e-42;
    local_48 = 0x80310e8;
    if ((DAT_00c58e3a == '\0') && (FUN_001849f0(), DAT_00c58e29 == '\x14')) {
      FUN_00188e80(ULONG_00c58d9c);
    }
    if (DAT_00c58e3b != '\0') {
      FUN_00182d60((uint)DAT_00c58e47);
      return;
    }
    if (DAT_00c58e3a == '\0') {
      return;
    }
    FUN_0006e2a0();
    local_1c = (float)ULONG_00a48c2c;
    local_10 = (float)ULONG_00a48cd0;
    local_50._0_1_ = 0xb;
    local_44 = (undefined *)0x80000000;
    local_40 = 0x80000000;
    local_3c = (undefined *)0x80000000;
    local_38 = 0x80000000;
    local_24 = 0;
    local_20 = 0;
    local_18 = 0;
    local_14 = 0;
    local_c = local_1c;
    FUN_0006e330(&local_24,(char *)&local_50,0);
    local_50._0_1_ = 10;
    local_44 = (undefined *)0x80000000;
    local_40 = 0x80000000;
    local_3c = (undefined *)0x80000000;
    local_38 = 0x80000000;
    local_24 = 0x42280000;
    local_20 = 0x422c0000;
    local_1c = 636.0;
    local_18 = 0;
    local_14 = 0x42280000;
    local_10 = 83.0;
    local_c = 636.0;
    FUN_0006e330(&local_24,(char *)&local_50,0);
    FUN_0006df00(0);
    _DAT_00303cc4 = local_34[DAT_00c58e17];
    local_50 = CONCAT31(local_50._1_3_,10);
    local_44 = (undefined *)0x80000000;
    local_40 = 0x80000000;
    local_3c = (undefined *)0x0;
    local_38 = 0;
    local_24 = 0x42280000;
    local_20 = 0x42860000;
    local_1c = 636.0;
    local_18 = 0;
    local_14 = 0x42280000;
    local_10 = 91.0;
    local_c = 636.0;
    FUN_00189430();
    _DAT_00303cc4 = 0xffffffff;
    uVar4 = extraout_ECX;
    if (DAT_00c58e2f != '\x01') {
      local_50 = CONCAT31(local_50._1_3_,8);
      local_44 = &LAB_001a1a1a;
      local_40 = 0xff1a1a1a;
      local_3c = &LAB_001a1a1a;
      local_38 = 0xff1a1a1a;
      local_24 = 0x4405c000;
      local_20 = 0x43c68000;
      local_1c = 100.0;
      local_18 = 0;
      local_14 = 0x4405c000;
      local_10 = 415.0;
      local_c = 100.0;
      FUN_0006e330(&local_24,(char *)&local_50,0);
      local_44 = &LAB_001a1a1a;
      local_40 = 0xff1a1a1a;
      local_3c = &LAB_001a1a1a;
      local_38 = 0xff1a1a1a;
      local_24 = 0x43c48000;
      local_20 = 0x43c68000;
      local_1c = 100.0;
      local_18 = 0;
      local_14 = 0x43c48000;
      local_10 = 415.0;
      local_c = 100.0;
      FUN_0006e330(&local_24,(char *)&local_50,0);
      local_24 = 0xaa;
      local_20 = 0x18301e8;
      local_1c = 2.369357e-38;
      local_14 = 0;
      local_10 = 1.0;
      local_c = 1.0;
      FUN_0006ee40((int *)0x0,0);
      local_20 = CONCAT22(USHORT_00259f1e,USHORT_00259f1c);
      local_24 = 0;
      local_1c = 2.369357e-38;
      local_14 = 0;
      local_10 = 1.0;
      local_c = 1.0;
      FUN_0005afe0((int)&local_24);
      local_24 = 0xab;
      local_20 = 0x1830276;
      local_14 = 0;
      local_1c = 2.369357e-38;
      local_10 = 1.0;
      local_c = 1.0;
      FUN_0006ee40((int *)0x0,0);
      local_24 = 0;
      local_14 = 0;
      local_20 = CONCAT22(USHORT_00259f22,USHORT_00259f20);
      local_1c = 2.369357e-38;
      local_10 = 1.0;
      local_c = 1.0;
      FUN_0005afe0((int)&local_24);
      DAT_0030463c = 0xce;
      DAT_0030463e = 0x191;
      DAT_00304641 = 1;
      FLOAT_00304630 = FLOAT_00259f18;
      FLOAT_00304634 = 0.9;
      FLOAT_00304638 = 0.9;
      PTR_s_DUMMY_00304628 =
           *(undefined **)((&PTR_PTR_s_OPTIONS_0029dad4)[Settings_Language_Menu_0059ffae] + 0x1d0);
      RenderMenuElement_FUN_00059970();
      FLOAT_00304634 = 1.0;
      FLOAT_00304638 = 1.0;
      uVar4 = extraout_ECX_00;
    }
    iVar5 = CONCAT31((int3)((uint)uVar4 >> 8),DAT_00c58e17);
    uVar6 = 1 << (DAT_00c58e17 & 0x1f);
    if ((ULONG_0073c8c8 & uVar6) == 0) {
      Mode_Select_003046c8 = 0x48;
      DWORD_003046cc._0_1_ = 0xff;
      ULONG_00c59444 = (-(uint)(DAT_00c59867 != '\0') & 0xffffd556) + 0xffff;
      ULONG_005a882c = *(ulong *)(ULONG_005a7598 + 0x120);
      iVar5 = 0;
      uVar6 = ULONG_005a7598;
      do {
        uVar6 = CONCAT31((int3)(uVar6 >> 8),(&DAT_00c5985c)[iVar5]);
        if ((&DAT_00c5985c)[iVar5] != '\0') {
          uVar6 = 1 << ((byte)iVar5 & 0x1f);
          if ((ULONG_0073c8c8 & uVar6) == 0) {
            _DAT_00303cc4 = 0xffe03030;
            DWORD_003046cc._0_1_ = (byte)iVar5;
            goto LAB_00186c90;
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      _DAT_00303cc4 = 0xffe03030;
    }
    else {
      switch(Sparring_Menu_Cursor_XPOS_00c58e1c) {
      case 0:
        FUN_0005ac00(0x62);
        iVar5 = extraout_ECX_01;
        uVar6 = extraout_EDX;
        break;
      default:
        ULONG_00c59444 = 0;
        ULONG_005a882c = (ulong)s__0022e511;
        Mode_Select_003046c8 = 0xffffffff;
        DWORD_003046cc._0_1_ = 0xff;
        break;
      case 4:
        FUN_0005ac00(99);
        iVar5 = extraout_ECX_02;
        uVar6 = extraout_EDX_00;
        break;
      case 5:
        FUN_0005ac00(100);
        iVar5 = extraout_ECX_03;
        uVar6 = extraout_EDX_01;
        break;
      case 6:
        FUN_0005ac00(0x65);
        iVar5 = extraout_ECX_04;
        uVar6 = extraout_EDX_02;
        break;
      case 7:
        FUN_0005ac00(0x66);
        iVar5 = extraout_ECX_05;
        uVar6 = extraout_EDX_03;
        break;
      case 8:
        FUN_0005ac00(0x67);
        iVar5 = extraout_ECX_06;
        uVar6 = extraout_EDX_04;
      }
    }
LAB_00186c90:
    FUN_0005ac50(iVar5,uVar6);
    _DAT_00303cc4 = 0xffffffff;
    FUN_000d2ab0();
    if (DAT_00c58e2e != '\0') {
      if ((DAT_00c58e2e != '\x01') && (DAT_00c58e2e != '\x02')) goto LAB_00186dda;
      DAT_0030463e = ((short)ULONG_00259dc8 + (short)Sparring_Menu_Cursor_XPOS_00c58e1c) * 0x18;
      DAT_0030463c = 0x2238;
      FLOAT_0030462c = 1.0;
      if ((6 < (int)Sparring_Menu_Cursor_XPOS_00c58e1c) &&
         ((int)Sparring_Menu_Cursor_XPOS_00c58e1c < 9)) {
        FUN_00188f00(*(undefined **)
                      ((&PTR_PTR_s_OPTIONS_0029dad4)[Settings_Language_Menu_0059ffae] + 0x1bc));
      }
    }
    DAT_0030463e = (short)ULONG_00259dc8 * 0x18;
    DAT_0030463c = 0x348;
    FLOAT_0030462c = 1.0;
    puVar9 = &ULONG_0021c378;
    local_50 = 100;
    do {
      local_4c = (float)local_50;
      local_50 = local_50 + 0x1e;
      FUN_00186310(42.0,local_4c,0x43600000);
      FUN_00186580((int *)puVar9,2);
      puVar9 = puVar9 + 1;
    } while ((int)puVar9 < 0x21c399);
LAB_00186dda:
    _DAT_00c58cc0 = 0;
    _DAT_00c58cc2 = 0;
    _DAT_00c58cc4 = 0x280;
    _DAT_00c58cc6 = 0xe0;
    uVar12 = __ftol2();
    _DAT_00c58cbc = (int)uVar12 << 0x18;
    return;
  }
  local_34[0] = 0xff0071fd;
  local_34[1] = 0xfffd0000;
  local_34[2] = 0xff2ec36f;
  local_34[3] = 0xffffff22;
  local_4c = 2.048698e-42;
  local_48 = 0x80310e8;
  if (DAT_00c58e3b != '\0') {
    FUN_00182a40();
    return;
  }
  if (DAT_00c58e3a == '\0') {
    return;
  }
  FUN_0006e2a0();
  local_1c = (float)ULONG_00a48c2c;
  local_10 = (float)ULONG_00a48cd0;
  local_44 = (undefined *)0x80000000;
  local_40 = 0x80000000;
  local_3c = (undefined *)0x80000000;
  local_38 = 0x80000000;
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = local_1c;
  FUN_0006e330(&local_24,&stack0xffffffa8,0);
  local_44 = (undefined *)0x80000000;
  local_40 = 0x80000000;
  local_3c = (undefined *)0x80000000;
  local_38 = 0x80000000;
  local_24 = 0x42280000;
  local_20 = 0x422c0000;
  local_1c = 636.0;
  local_18 = 0;
  local_14 = 0x42280000;
  local_10 = 83.0;
  local_c = 636.0;
  FUN_0006e330(&local_24,&stack0xffffffa8,0);
  FUN_0006df00(0);
  _DAT_00303cc4 = local_34[DAT_00c58e17];
  local_44 = (undefined *)0x80000000;
  local_40 = 0x80000000;
  local_3c = (undefined *)0x0;
  local_38 = 0;
  local_24 = 0x42280000;
  local_20 = 0x42860000;
  local_1c = 636.0;
  local_18 = 0;
  local_14 = 0x42280000;
  local_10 = 107.0;
  local_c = 636.0;
  FUN_00189430();
  _DAT_00303cc4 = 0xffffffff;
  if (DAT_00c58e2f != '\x01') {
    local_44 = &LAB_001a1a1a;
    local_40 = 0xff1a1a1a;
    local_3c = &LAB_001a1a1a;
    local_38 = 0xff1a1a1a;
    local_24 = 0x4405c000;
    local_20 = 0x43c68000;
    local_1c = 100.0;
    local_18 = 0;
    local_14 = 0x4405c000;
    local_10 = 415.0;
    local_c = 100.0;
    FUN_0006e330(&local_24,&stack0xffffffa8,0);
    local_44 = &LAB_001a1a1a;
    local_40 = 0xff1a1a1a;
    local_3c = &LAB_001a1a1a;
    local_38 = 0xff1a1a1a;
    local_24 = 0x43c48000;
    local_20 = 0x43c68000;
    local_1c = 100.0;
    local_18 = 0;
    local_14 = 0x43c48000;
    local_10 = 415.0;
    local_c = 100.0;
    FUN_0006e330(&local_24,&stack0xffffffa8,0);
    local_24 = 0xaa;
    local_20 = 0x18301e8;
    local_1c = 2.369357e-38;
    local_14 = 0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_0006ee40((int *)0x0,0);
    local_20 = CONCAT22(USHORT_00259f1e,USHORT_00259f1c);
    local_24 = 0;
    local_1c = 2.369357e-38;
    local_14 = 0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_0005afe0((int)&local_24);
    local_24 = 0xab;
    local_20 = 0x1830276;
    local_14 = 0;
    local_1c = 2.369357e-38;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_0006ee40((int *)0x0,0);
    local_24 = 0;
    local_14 = 0;
    local_20 = CONCAT22(USHORT_00259f22,USHORT_00259f20);
    local_1c = 2.369357e-38;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_0005afe0((int)&local_24);
    DAT_0030463c = 0xce;
    DAT_0030463e = 0x191;
    DAT_00304641 = 1;
    FLOAT_00304630 = FLOAT_00259f18;
    FLOAT_00304634 = 0.9;
    FLOAT_00304638 = 0.9;
    PTR_s_DUMMY_00304628 =
         *(undefined **)((&PTR_PTR_s_OPTIONS_0029dad4)[Settings_Language_Menu_0059ffae] + 0x1d0);
    RenderMenuElement_FUN_00059970();
    FLOAT_00304634 = 1.0;
    FLOAT_00304638 = 1.0;
  }
  DWORD_003046cc._0_1_ = 0xff;
  if ((ULONG_0073c8c8 & 1 << (DAT_00c58e17 & 0x1f)) == 0) {
    Mode_Select_003046c8 = 0x48;
    ULONG_005a882c = *(ulong *)(ULONG_005a7598 + 0x120);
    uVar6 = 0;
    uVar7 = ULONG_005a882c;
    do {
      uVar7 = CONCAT31((int3)(uVar7 >> 8),(&DAT_00c5985c)[uVar6]);
      if ((&DAT_00c5985c)[uVar6] != '\0') {
        uVar7 = 1 << ((byte)uVar6 & 0x1f);
        bVar1 = (byte)uVar6;
        if ((ULONG_0073c8c8 & uVar7) == 0) break;
      }
      uVar6 = uVar6 + 1;
      bVar1 = (byte)DWORD_003046cc;
    } while ((int)uVar6 < 4);
    DWORD_003046cc._0_1_ = bVar1;
    _DAT_00303cc4 = 0xffe03030;
  }
  else {
    Mode_Select_003046c8 = Sparring_Menu_Cursor_XPOS_00c58e1c + 0x59;
    uVar6 = *(ulong *)(ULONG_005a7598 + Mode_Select_003046c8 * 4);
    uVar7 = ULONG_005a7598;
    ULONG_005a882c = uVar6;
  }
  ULONG_00c59444 = (-(uint)(DAT_00c59867 != '\0') & 0xffffd556) + 0xffff;
  FUN_0005ac50(uVar6,uVar7);
  _DAT_00303cc4 = 0xffffffff;
  FUN_000d2ab0();
  if (DAT_00c58e2e != '\0') {
    if (DAT_00c58e2e == '\x01') goto LAB_00187b21;
    if (DAT_00c58e2e != '\x02') goto LAB_001882b7;
    FLOAT_0030462c = 1.0;
    if (Sparring_Menu_Cursor_XPOS_00c58e1c == 1) {
      if (ULONG_00c58e20 == 6) {
        iVar11 = ((int)(char)((ushort)DAT_00259d76 >> 8) - (int)(char)DAT_00259d76) + -1;
        iVar5 = 0;
        if (-1 < iVar11) {
          iVar2 = iVar11 * 0x1e + 100;
          do {
            FUN_00186310(438.0,(float)iVar2,0x436e0000);
            FUN_00186580((int *)(&ULONG_0021c3cc + (char)(&DAT_00259d70)[ULONG_00c58e20] + iVar5),0)
            ;
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -0x1e;
          } while (iVar5 <= iVar11);
        }
      }
      else if (ULONG_00c58e20 == 3) {
        if ((&DAT_0059d0d2)[DAT_00c58e47] == '\0') {
          local_50 = (uint)(1 < (int)ULONG_00c58e24);
          local_4c = (float)(((int)DAT_00259d74 - (int)DAT_00259d73) - 2);
          iVar11 = 0;
          iVar5 = 0;
          if (-1 < (int)local_4c) {
            iVar2 = 100;
            do {
              FUN_00186310(438.0,(float)iVar2,0x436e0000);
              if (iVar11 == 1) {
                FUN_00186580((int *)&ULONG_0021c444,0);
                iVar11 = 2;
              }
              else {
                FUN_00186580((int *)(&ULONG_0021c3cc +
                                    (char)(&DAT_00259d70)[ULONG_00c58e20] + iVar11),0);
              }
              iVar11 = iVar11 + 1;
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 0x1e;
            } while (iVar5 <= (int)local_4c);
          }
        }
        else {
LAB_0018756b:
          iVar5 = ((int)(char)(&DAT_00259d71)[ULONG_00c58e20] -
                  (int)(char)(&DAT_00259d70)[ULONG_00c58e20]) + -1;
          iVar11 = 0;
          if (-1 < iVar5) {
            iVar2 = 100;
            do {
              FUN_00186310(438.0,(float)iVar2,0x436e0000);
              FUN_00186580((int *)(&ULONG_0021c3cc + (char)(&DAT_00259d70)[ULONG_00c58e20] + iVar11)
                           ,0);
              iVar11 = iVar11 + 1;
              iVar2 = iVar2 + 0x1e;
            } while (iVar11 <= iVar5);
          }
        }
      }
      else {
        if (ULONG_00c58e20 != 5) goto LAB_0018756b;
        local_4c = (float)(uint)(&SPARRING_COM1STACTION_COMBO_LIST_LENGTH)
                                [(byte)(&CHARACTER_P1)[(uint)DAT_00c58e48 * 0x68]];
        if (5 < (uint)local_4c) {
          FUN_0002cbd0(0x59a,0x220,0x69,2);
          FUN_0006ee40((int *)0x0,0);
          FUN_0002cbd0(0x59b,0x220,0x13a,2);
          FUN_0006ee40((int *)0x0,0);
        }
        if ((int)ULONG_00c58e24 < (int)(uint)DAT_00c58d9a) {
          DAT_00c58d9a = DAT_00c58d9a - 1;
          DAT_00c58d4c = DAT_00c58d4c - 1;
        }
        bVar1 = SUB41(local_4c,0);
        if (((int)(uint)DAT_00c58d4c <= (int)ULONG_00c58e24) &&
           (bVar3 = DAT_00c58d4c + 1, DAT_00c58d4c = bVar1, (int)(uint)bVar3 <= (int)local_4c)) {
          DAT_00c58d9a = DAT_00c58d9a + 1;
          DAT_00c58d4c = bVar3;
        }
        if (ULONG_00c58e24 == 0) {
          DAT_00c58d9a = 0;
          DAT_00c58d4c = 6;
          if ((int)local_4c < 7) {
            DAT_00c58d4c = bVar1;
          }
        }
        if (ULONG_00c58e24 == (int)local_4c - 1U) {
          DAT_00c58d9a = bVar1 - 6;
          DAT_00c58d4c = bVar1;
        }
        if ((int)local_4c < 6) {
          DAT_00c58d9a = 0;
          DAT_00c58d4c = bVar1;
        }
        uVar8 = (uint)DAT_00c58d4c;
        uVar10 = (uint)DAT_00c58d9a;
        if (uVar10 < uVar8) {
          iVar5 = 0x82;
          do {
            fVar13 = (float)iVar5;
            _DAT_00c58cdc = 0x1ba;
            uVar12 = __ftol2();
            _DAT_00c58cde = (undefined2)uVar12;
            FUN_00186310(438.0,fVar13,0x436e0000);
            FUN_001888a0();
            uVar10 = uVar10 + 1;
            iVar5 = iVar5 + 0x1e;
          } while ((int)uVar10 < (int)uVar8);
        }
      }
    }
    else if (Sparring_Menu_Cursor_XPOS_00c58e1c == 2) {
      if (ULONG_00c58e20 == 3) {
        if ((&DAT_0059d0d2)[DAT_00c58e47] == '\0') {
          local_50 = (uint)(1 < (int)ULONG_00c58e24);
          local_4c = (float)(((int)(char)((uint)_DAT_00259d7b >> 8) - (int)(char)_DAT_00259d7b) - 2)
          ;
          iVar11 = 0;
          iVar5 = 0;
          if (-1 < (int)local_4c) {
            iVar2 = 100;
            do {
              FUN_00186310(438.0,(float)iVar2,0x436e0000);
              if (iVar11 == 1) {
                FUN_00186580((int *)&ULONG_0021c494,0);
                iVar11 = 2;
              }
              else {
                FUN_00186580((int *)(&ULONG_0021c44c +
                                    (char)(&DAT_00259d78)[ULONG_00c58e20] + iVar11),0);
              }
              iVar11 = iVar11 + 1;
              iVar5 = iVar5 + 1;
              iVar2 = iVar2 + 0x1e;
            } while (iVar5 <= (int)local_4c);
          }
        }
        else {
LAB_001878cb:
          iVar5 = ((int)(char)(&DAT_00259d79)[ULONG_00c58e20] -
                  (int)(char)(&DAT_00259d78)[ULONG_00c58e20]) + -1;
          iVar11 = 0;
          if (-1 < iVar5) {
            iVar2 = 100;
            do {
              FUN_00186310(438.0,(float)iVar2,0x436e0000);
              FUN_00186580((int *)(&ULONG_0021c44c + (char)(&DAT_00259d78)[ULONG_00c58e20] + iVar11)
                           ,0);
              iVar11 = iVar11 + 1;
              iVar2 = iVar2 + 0x1e;
            } while (iVar11 <= iVar5);
          }
        }
      }
      else {
        if (ULONG_00c58e20 != 5) goto LAB_001878cb;
        local_4c = (float)(uint)(&SPARRING_COM1STACTION_COMBO_LIST_LENGTH)
                                [(byte)(&CHARACTER_P1)[(uint)DAT_00c58e48 * 0x68]];
        if (5 < (uint)local_4c) {
          FUN_0002cbd0(0x59a,0x220,0x69,2);
          FUN_0006ee40((int *)0x0,0);
          FUN_0002cbd0(0x59b,0x220,0x13a,2);
          FUN_0006ee40((int *)0x0,0);
        }
        if ((int)ULONG_00c58e24 < (int)(uint)DAT_00c58cfc) {
          DAT_00c58cfc = DAT_00c58cfc - 1;
          DAT_00c58c96 = DAT_00c58c96 - 1;
        }
        bVar1 = SUB41(local_4c,0);
        if (((int)(uint)DAT_00c58c96 <= (int)ULONG_00c58e24) &&
           (bVar3 = DAT_00c58c96 + 1, DAT_00c58c96 = bVar1, (int)(uint)bVar3 <= (int)local_4c)) {
          DAT_00c58cfc = DAT_00c58cfc + 1;
          DAT_00c58c96 = bVar3;
        }
        if (ULONG_00c58e24 == 0) {
          DAT_00c58cfc = 0;
          DAT_00c58c96 = 6;
          if ((int)local_4c < 7) {
            DAT_00c58c96 = bVar1;
          }
        }
        if (ULONG_00c58e24 == (int)local_4c - 1U) {
          DAT_00c58cfc = bVar1 - 6;
          DAT_00c58c96 = bVar1;
        }
        if ((int)local_4c < 6) {
          DAT_00c58cfc = 0;
          DAT_00c58c96 = bVar1;
        }
        uVar8 = (uint)DAT_00c58c96;
        uVar10 = (uint)DAT_00c58cfc;
        if (uVar10 < uVar8) {
          iVar5 = 0x82;
          do {
            fVar13 = (float)iVar5;
            _DAT_00c58cdc = 0x1ba;
            uVar12 = __ftol2();
            _DAT_00c58cde = (undefined2)uVar12;
            FUN_00186310(438.0,fVar13,0x436e0000);
            FUN_001888a0();
            uVar10 = uVar10 + 1;
            iVar5 = iVar5 + 0x1e;
          } while ((int)uVar10 < (int)uVar8);
        }
      }
    }
LAB_00187b21:
    DAT_0030463e = ((short)ULONG_00259dc8 + (short)Sparring_Menu_Cursor_XPOS_00c58e1c) * 0x18;
    DAT_0030463c = 0x2238;
    FLOAT_0030462c = 1.0;
    switch(Sparring_Menu_Cursor_XPOS_00c58e1c) {
    case 1:
      puVar9 = &ULONG_0021c39c;
      local_50 = 100;
      do {
        uVar8 = local_50;
        FUN_00186310(274.0,(float)local_50,0x431c0000);
        FUN_00186580((int *)puVar9,0);
        local_50 = uVar8 + 0x1e;
        puVar9 = puVar9 + 1;
      } while ((int)local_50 < 0x119);
      break;
    case 2:
      puVar9 = &ULONG_0021c39c;
      local_50 = 100;
      do {
        uVar8 = local_50;
        FUN_00186310(274.0,(float)local_50,0x431c0000);
        FUN_00186580((int *)puVar9,0);
        local_50 = uVar8 + 0x1e;
        puVar9 = puVar9 + 1;
      } while ((int)local_50 < 0xfb);
      break;
    case 3:
      puVar9 = &ULONG_0021c3bc;
      local_50 = 100;
      do {
        uVar8 = local_50;
        FUN_00186310(274.0,(float)local_50,0x431c0000);
        FUN_00186580((int *)puVar9,0);
        local_50 = uVar8 + 0x1e;
        puVar9 = puVar9 + 1;
      } while ((int)local_50 < 0xa1);
      break;
    case 7:
    case 8:
      FUN_00188f00(*(undefined **)
                    ((&PTR_PTR_s_OPTIONS_0029dad4)[Settings_Language_Menu_0059ffae] + 0x1bc));
    }
  }
  DAT_0030463e = (short)ULONG_00259dc8 * 0x18;
  DAT_0030463c = 0x348;
  FLOAT_0030462c = 1.0;
  puVar9 = &ULONG_0021c354;
  iVar5 = 100;
  do {
    if ((DAT_00c59866 == '\0') || (puVar9 != &ULONG_0021c364)) {
      fVar13 = (float)iVar5;
      iVar5 = iVar5 + 0x1e;
      if (((DAT_00c58e2e < '\x01') && (('\x16' < DAT_00c58e0b && (DAT_00c58e0b < '\x1f')))) &&
         (((int)puVar9 < 0x21c35c || (FLOAT_0030462c = 0.5, 0x21c360 < (int)puVar9)))) {
        FLOAT_0030462c = 1.0;
      }
      FUN_00186310(42.0,fVar13,0x43600000);
      FUN_00186580((int *)puVar9,2);
    }
    puVar9 = puVar9 + 1;
  } while ((int)puVar9 < 0x21c375);
  if (DAT_00c58e2e == '\0') {
    DAT_0030463e = ((short)ULONG_00259dc8 * 3 + 3) * 8;
    FLOAT_0030462c = 1.0;
    DAT_0030463c = 0x1568;
    FUN_00186310(274.0,130.0,0x43740000);
    if (((&DAT_0059d0d2)[DAT_00c58e47] == '\0') && (DAT_00c58e0b == '\x11')) {
      _DAT_00303cc4 = 0xffffffff;
      local_24 = 0x5ed;
      uVar12 = __ftol2();
      local_20 = CONCAT22(local_20._2_2_,(short)uVar12);
      uVar12 = __ftol2();
      local_20 = CONCAT22((short)uVar12,(undefined2)local_20);
      local_14 = 0;
      local_1c = 2.369356e-38;
      local_10 = 1.0;
      local_c = 1.0;
      FUN_0006ee40((int *)0x0,0);
      _DAT_00303cc4 = 0xffffffff;
    }
    else if (DAT_00c58e0b == '\x16') {
      _DAT_00c58cdc = 0x116;
      _DAT_00c58cde = 0x85;
      FUN_001888a0();
    }
    else {
      _DAT_00303cc4 = 0xffffffff;
      if ((&ULONG_0021c3c8)[DAT_00c58e0b] == 0) {
        _DAT_00303cc4 = 0xffffffff;
      }
      else {
        local_24 = (&ULONG_0021c3c8)[DAT_00c58e0b];
        uVar12 = __ftol2();
        local_20 = CONCAT22(local_20._2_2_,(short)uVar12);
        uVar12 = __ftol2();
        local_20 = CONCAT22((short)uVar12,(undefined2)local_20);
        local_14 = 0;
        local_1c = 2.369356e-38;
        local_10 = 1.0;
        local_c = 1.0;
        FUN_0006ee40((int *)0x0,0);
        _DAT_00303cc4 = 0xffffffff;
      }
    }
    if (('\x16' < DAT_00c58e0b) && (DAT_00c58e0b < '\x1f')) {
      FLOAT_0030462c = 0.5;
    }
    DAT_0030463e = ((short)ULONG_00259dc8 * 3 + 6) * 8;
    DAT_0030463c = 0x1568;
    FUN_00186310(274.0,160.0,0x43740000);
    if ((DAT_00c58e0b < '\x17') && (DAT_00c58e0b < '\x1f')) {
      if (((&DAT_0059d0d2)[DAT_00c58e47] == '\0') && (DAT_00c58df4 == '\r')) {
        _DAT_00303cc4 = 0xffffffff;
        local_24 = 0x5ed;
        uVar12 = __ftol2();
        local_20 = CONCAT22(local_20._2_2_,(short)uVar12);
        uVar12 = __ftol2();
        local_20 = CONCAT22((short)uVar12,(undefined2)local_20);
        local_14 = 0;
        local_1c = 2.369356e-38;
        local_10 = 1.0;
        local_c = 1.0;
        FUN_0006ee40((int *)0x0,0);
        _DAT_00303cc4 = 0xffffffff;
      }
      else if (DAT_00c58df4 == '\x12') {
        _DAT_00c58cdc = 0x116;
        _DAT_00c58cde = 0xa3;
        FUN_001888a0();
      }
      else {
        _DAT_00303cc4 = 0xffffffff;
        if ((&ULONG_0021c448)[DAT_00c58df4] == 0) {
          _DAT_00303cc4 = 0xffffffff;
        }
        else {
          local_24 = (&ULONG_0021c448)[DAT_00c58df4];
          uVar12 = __ftol2();
          local_20 = CONCAT22(local_20._2_2_,(short)uVar12);
          uVar12 = __ftol2();
          local_20 = CONCAT22((short)uVar12,(undefined2)local_20);
          local_14 = 0;
          local_1c = 2.369356e-38;
          local_10 = 1.0;
          local_c = 1.0;
          FUN_0006ee40((int *)0x0,0);
          _DAT_00303cc4 = 0xffffffff;
        }
      }
    }
    FUN_00186310(274.0,190.0,0x43740000);
    if ((DAT_00c58e0b < '\x17') && (DAT_00c58e0b < '\x1f')) {
      _DAT_00303cc4 = 0xffffffff;
      if ((&ULONG_0021c3bc)[DAT_00c58e04] != 0) {
        local_24 = (&ULONG_0021c3bc)[DAT_00c58e04];
        uVar12 = __ftol2();
        local_20 = CONCAT22(local_20._2_2_,(short)uVar12);
        uVar12 = __ftol2();
        local_20 = CONCAT22((short)uVar12,(undefined2)local_20);
        local_14 = 0;
        local_1c = 2.369356e-38;
        local_10 = 1.0;
        local_c = 1.0;
        FUN_0006ee40((int *)0x0,0);
      }
      _DAT_00303cc4 = 0xffffffff;
    }
  }
LAB_001882b7:
  _DAT_00c58cc0 = 0;
  _DAT_00c58cc2 = 0;
  _DAT_00c58cc4 = 0x280;
  _DAT_00c58cc6 = 0xe0;
  uVar12 = __ftol2();
  _DAT_00c58cbc = (int)uVar12 << 0x18;
  return;
}

