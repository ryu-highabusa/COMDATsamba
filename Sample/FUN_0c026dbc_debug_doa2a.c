
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [DOA port: doa2a_static_analysis:0c026dbc | Debug_PauseMenuDispatch | source scope:  |
   inspected_native_code] */

undefined4 Debug_PauseMenuDispatch(double param_1)

{
  undefined8 uVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  char *pcVar14;
  uint uVar15;
  char in_FPSCR_SZ;
  undefined *puVar16;
  undefined4 local_24;
  
  local_24 = 0;
  (*(code *)PTR_Debug_SetTextCursor_0c026e3c)(5);
  puVar4 = PTR_Debug_Printf_0c026e48;
  puVar3 = PTR_s__s_0c026e44;
  puVar16 = PTR_s_Pause___0c026e40;
  (*(code *)PTR_Debug_Printf_0c026e48)(PTR_s__s_0c026e44,PTR_s_Pause___0c026e40);
  puVar5 = PTR_FUN_0c026e60;
  iVar10 = _LAB_0c026e4c;
  if (*(short *)puVar4 != 0xb) {
    if (in_FPSCR_SZ == '\0') {
      *(dword *)(_LAB_0c026e4c + 4) = DWORD_0c026e50;
      *(dword *)(iVar10 + 8) = DWORD_0c026e54;
      *(dword *)(iVar10 + 0x10) = DWORD_0c026e58;
      *(dword *)(iVar10 + 0x14) = DWORD_0c026e5c;
    }
    else {
      *(ulonglong *)(_LAB_0c026e4c + 4) = CONCAT44(DWORD_0c026e54,DWORD_0c026e50);
      *(ulonglong *)(iVar10 + 8) = CONCAT44(DWORD_0c026e58,DWORD_0c026e54);
      *(ulonglong *)(iVar10 + 0x10) = CONCAT44(DWORD_0c026e5c,DWORD_0c026e58);
      *(ulonglong *)(iVar10 + 0x14) = CONCAT44(PTR_FUN_0c026e60,DWORD_0c026e5c);
    }
    (*(code *)puVar5)();
  }
  puVar6 = PTR_DAT_0c026e68;
  puVar5 = PTR_DAT_0c026e64;
  switch(*PTR_DAT_0c026e64) {
  case 0:
    puVar11 = puVar16;
    (*(code *)puVar4)(puVar3,puVar16 + 0x10,puVar16);
    uVar15 = 0;
    puVar13 = puVar11 + 0x30;
    puVar11 = puVar11 + 0x20;
    do {
      puVar12 = puVar11;
      if (uVar15 != (byte)puVar6[3]) {
        puVar12 = puVar13;
      }
      (*(code *)puVar4)(puVar3,puVar12);
      (*(code *)puVar4)(puVar3,puVar16 + (uVar15 + 4) * 0x10,uVar15 + 4);
      puVar12 = puVar11;
      if (uVar15 + 1 != (uint)(byte)puVar6[3]) {
        puVar12 = puVar13;
      }
      (*(code *)puVar4)(puVar3,puVar12);
      (*(code *)puVar4)(puVar3,puVar16 + (uVar15 + 5) * 0x10,uVar15 + 5);
      puVar12 = puVar11;
      if (uVar15 + 2 != (uint)(byte)puVar6[3]) {
        puVar12 = puVar13;
      }
      (*(code *)puVar4)(puVar3,puVar12);
      (*(code *)puVar4)(puVar3,puVar16 + (uVar15 + 6) * 0x10,uVar15 + 6);
      puVar12 = puVar11;
      if (uVar15 + 3 != (uint)(byte)puVar6[3]) {
        puVar12 = puVar13;
      }
      (*(code *)puVar4)(puVar3,puVar12);
      (*(code *)puVar4)(puVar3,puVar16 + (uVar15 + 7) * 0x10,uVar15 + 7);
      uVar15 = uVar15 + 4;
    } while ((int)uVar15 < 10);
    for (; (int)uVar15 < 0xe; uVar15 = uVar15 + 1) {
      puVar12 = puVar11;
      if (uVar15 != (byte)puVar6[3]) {
        puVar12 = puVar13;
      }
      (*(code *)puVar4)(puVar3,puVar12);
      (*(code *)puVar4)(puVar3,puVar16 + (uVar15 + 4) * 0x10,uVar15 + 4);
    }
    Debug_UpdateMenuCursor(PTR_DAT_0c026fac);
    if ((*(ushort *)(PTR_DAT_0c026fb0 + 2) & 2) != 0) {
      if (puVar6[3] == '\0') {
        local_24 = 1;
      }
      else {
        *puVar5 = puVar6[3];
        if (*puVar5 == '\x01') {
          uVar9 = (*(code *)PTR_FUN_0c027098)();
          (*(code *)PTR_FUN_0c02709c)(uVar9,1);
        }
        if (*puVar5 == '\x02') {
          (*(code *)PTR_FUN_0c0270a0)();
        }
        if (*puVar5 == '\x04') {
          uVar9 = (*(code *)PTR_FUN_0c027098)();
          (*(code *)PTR_FUN_0c02709c)(uVar9,1);
        }
        puVar4 = PTR_DAT_0c0270ac;
        puVar3 = PTR_DAT_0c0270a8;
        puVar16 = PTR_DAT_0c0270a4;
        if (*puVar5 == '\x05') {
          *PTR_DAT_0c0270a4 = 0;
          *puVar3 = 0;
          *puVar4 = 3;
          puVar4 = PTR_DAT_0c0270b4;
          puVar3 = PTR_DAT_0c0270b0;
          puVar16[3] = 0;
          *puVar3 = 0;
          *puVar4 = 0;
          puVar4 = PTR_DAT_0c0270c4;
          puVar3 = PTR_DAT_0c0270c0;
          *PTR_DAT_0c0270b8 = 0;
          puVar16 = PTR_DAT_0c0270bc;
          if (in_FPSCR_SZ == '\0') {
            *(undefined **)puVar3 = PTR_DAT_0c0270bc;
            *(undefined **)puVar4 = puVar16;
          }
          else {
            uVar1 = CONCAT44(PTR_DAT_0c0270c0,PTR_DAT_0c0270bc);
            *(undefined8 *)puVar3 = uVar1;
            *(undefined8 *)puVar4 = uVar1;
          }
        }
        puVar3 = PTR_DAT_0c0270cc;
        puVar16 = PTR_DAT_0c0270c8;
        if (*puVar5 == '\x06') {
          *PTR_DAT_0c0270c8 = 0;
          *puVar3 = 2;
          *PTR_DAT_0c0270d0 = 0xd;
          puVar16[3] = 0;
        }
        if ((*puVar5 == '\v') && (iVar10 = (*(code *)PTR_FUN_0c0270d4)(1), iVar10 == 0)) {
          *puVar5 = 0;
          puVar6[3] = 0xb;
        }
        if (*puVar5 == '\f') {
          (*(code *)PTR_FUN_0c0270d8)();
        }
        puVar4 = PTR_DAT_0c0270e4;
        puVar3 = PTR_DAT_0c0270e0;
        puVar16 = PTR_DAT_0c0270dc;
        if (*puVar5 == '\r') {
          *PTR_DAT_0c0270dc = 0;
          *puVar3 = 0;
          *puVar4 = 9;
          puVar16[3] = 0;
        }
      }
    }
    puVar3 = PTR_DAT_0c0270ec;
    puVar16 = PTR_DOA2_PLAYER_0c0270e8;
    iVar10 = (int)DAT_0c027096;
    PTR_DOA2_PLAYER_0c0270e8[0x53] = *PTR_DAT_0c0270ec;
    puVar16[iVar10] = puVar3[1];
    break;
  case 1:
    (*(code *)puVar4)(puVar3,puVar16 + 0x50);
    (*(code *)puVar4)(puVar3,puVar16 + DAT_0c02718c);
    (*(code *)puVar4)(puVar3,puVar16 + 0x40);
    (*(code *)puVar4)(puVar3,puVar16 + DAT_0c02718e);
    (*(code *)puVar4)(puVar3,puVar16 + DAT_0c027190);
    (*(code *)puVar4)(PTR_s__0c027194);
    puVar16 = PTR_FUN_0c0271a0;
    if (((*(ushort *)PTR_DAT_0c027198 & 2) != 0) &&
       ((*(ushort *)(PTR_DAT_0c027198 + 2) & DAT_0c02719c) != 0)) {
      *puVar5 = 0;
      puVar6[3] = 1;
      uVar9 = (*(code *)puVar16)();
      (*(code *)PTR_FUN_0c0271a4)(uVar9,0);
    }
    break;
  case 2:
    iVar10 = (*(code *)PTR_FUN_0c0271a8)();
    if (iVar10 == 0) {
      *puVar5 = 0;
      puVar6[3] = 2;
    }
    break;
  case 3:
    iVar10 = (*(code *)PTR_FUN_0c0271ac)();
    if (iVar10 != 0) {
      *puVar5 = 0;
      puVar6[3] = 3;
    }
    break;
  case 4:
    (*(code *)puVar4)(puVar3,puVar16 + DAT_0c027298);
    (*(code *)puVar4)(PTR_s__0c0272a0);
    (*(code *)puVar4)(puVar3,puVar16 + 0x50);
    (*(code *)puVar4)(puVar3,puVar16 + DAT_0c02729a);
    (*(code *)puVar4)(puVar3,puVar16 + 0x40);
    (*(code *)puVar4)(puVar3,puVar16 + DAT_0c02729c);
    (*(code *)puVar4)(puVar3,puVar16 + DAT_0c02729e);
    (*(code *)puVar4)(PTR_s__0c0272a0);
    puVar16 = PTR_FUN_0c0272b4;
    pbVar8 = DAT_0c0272a8;
    pbVar7 = DAT_0c0272a4;
    if (((*(ushort *)PTR_DAT_0c0272ac & 2) != 0) &&
       ((*(ushort *)(PTR_DAT_0c0272ac + 2) & DAT_0c0272b0) != 0)) {
      *puVar5 = 0;
      puVar6[3] = 4;
      uVar9 = (*(code *)puVar16)();
      (*(code *)PTR_FUN_0c0272b8)(uVar9,0);
      puVar16 = PTR_FUN_0c0272bc;
      *pbVar8 = 0;
      *pbVar7 = 0;
      (*(code *)puVar16)();
    }
    if ((((*(ushort *)PTR_DAT_0c0272ac & 2) == 0) && ((*(ushort *)PTR_DAT_0c0272ac & 1) == 0)) &&
       ((*(ushort *)(PTR_DAT_0c0272ac + 2) & DAT_0c0272b0) != 0)) {
      *pbVar8 = *pbVar8 ^ 1;
    }
    if ((((*(ushort *)(PTR_DAT_0c0272ac + 2) & 2) != 0) && ((*(ushort *)PTR_DAT_0c0272ac & 1) == 0))
       && ((*(ushort *)PTR_DAT_0c0272ac & DAT_0c0272b0) == 0)) {
      *pbVar7 = *pbVar7 ^ 1;
    }
    puVar16 = PTR_s_UNDU_2P_K___OFF_0c0272c4;
    if (*pbVar8 == 1) {
      puVar16 = PTR_s_UNDU_2P_K___ON_0c0272c0;
    }
    (*(code *)puVar4)(puVar16);
    puVar16 = PTR_s_ATRI_2P_F___OFF_0c02740c;
    if (*pbVar7 == 1) {
      puVar16 = PTR_s_ATRI_2P_F___ON_0c0272c8;
    }
    (*(code *)puVar4)(puVar16);
    puVar16 = PTR_FUN_0c027418;
    if ((*pbVar8 == 1) &&
       ((((*(ushort *)PTR_DAT_0c027410 & 0x20) == 0 && (*(ushort *)PTR_DAT_0c027410 & 0x10) == 0) &&
        (*(ushort *)PTR_DAT_0c027410 & 8) == 0) && (*(ushort *)PTR_DAT_0c027410 & 4) == 0)) {
      (*(code *)PTR_FUN_0c027414)();
    }
    else {
      *pbVar8 = 0;
      (*(code *)puVar16)();
    }
    if (*pbVar7 == 1) {
      (*(code *)PTR_FUN_0c02741c)();
    }
    break;
  case 5:
    pcVar14 = PTR_DAT_0c026e6c;
    if (*DAT_0c027420 != '\x01') {
      pcVar14 = DAT_0c027424;
      Debug_UpdateMenuCursor(DAT_0c027424);
    }
    if (*DAT_0c027428 == 2) {
      if (*DAT_0c027420 == '\0') {
        if ((*(ushort *)(PTR_DAT_0c027448 + 2) & 2) != 0) {
          *DAT_0c027420 = '\x01';
        }
      }
      else {
        (*(code *)puVar4)(PTR_s_ChrPos_Chng_Mode_0c02742c);
        (*(code *)puVar4)(PTR_s__0c027430);
        (*(code *)puVar4)(PTR_s_Lever_Only___Rot_0c027434);
        (*(code *)puVar4)(PTR_s_P___Lever___XZ_Pos_0c027438);
        (*(code *)puVar4)(PTR_s_K___Lever___Y_Pos_0c02743c);
        (*(code *)puVar4)(PTR_s_P_K_Lever___Center_Rot_0c027440);
        (*(code *)puVar4)(PTR_s_F_Button___EXIT_0c027444);
        Debug_EditCharacterPosition(param_1);
        if ((*(ushort *)(PTR_DAT_0c027448 + 2) & 2) != 0) {
          *DAT_0c027420 = '\0';
        }
      }
      pcVar14 = (char *)0x0;
    }
    if (*DAT_0c027420 != '\x01') {
      pcVar14 = (char *)FUN_0c027810(SUB84(param_1,0),*DAT_0c027428);
    }
    if (pcVar14 != (char *)0x0) {
      *puVar5 = 0;
      puVar6[3] = 5;
    }
    break;
  case 6:
    Debug_UpdateMenuCursor(PTR_DAT_0c02744c);
    iVar10 = FUN_0c0280e4(*PTR_DAT_0c027450);
    if (iVar10 != 0) {
      *puVar5 = 0;
      puVar6[3] = 6;
    }
    break;
  case 7:
    if ((*(ushort *)PTR_DAT_0c026e6c & 1) != 0) {
      *PTR_DAT_0c026e64 = 0;
      puVar6[3] = 7;
    }
    break;
  case 8:
    if ((*(ushort *)PTR_DAT_0c026e6c & 1) != 0) {
      *PTR_DAT_0c026e64 = 0;
      puVar6[3] = 8;
    }
    break;
  case 9:
    (*(code *)puVar4)(puVar3,puVar16 + DAT_0c027542);
    (*(code *)puVar4)(PTR_s_P_Button___Chng_0c02754c);
    (*(code *)puVar4)(PTR_s_F_Button___Exit_0c027550);
    (*(code *)puVar4)(PTR_s_Dsip___0c027554);
    pbVar7 = DAT_0c027558;
    sVar2 = DAT_0c027546;
    if (*DAT_0c027558 == 1) {
      sVar2 = DAT_0c027544;
    }
    (*(code *)puVar4)(puVar3,puVar16 + sVar2);
    if ((*(ushort *)(PTR_DAT_0c02755c + 2) & 1) != 0) {
      *pbVar7 = *pbVar7 ^ 1;
    }
    if ((*(ushort *)(PTR_DAT_0c02755c + 2) & 2) != 0) {
      *puVar5 = 0;
      puVar6[3] = 9;
    }
    break;
  case 10:
    (*(code *)PTR_FUN_0c027560)();
    (*(code *)puVar4)(PTR_s_BGM_FLG___1P_Lever___0c027564);
    pbVar7 = DAT_0c027568;
    puVar16 = PTR_s_OFF_0c027570;
    if (*DAT_0c027568 == 1) {
      puVar16 = PTR_s_ON_0c02756c;
    }
    (*(code *)puVar4)(puVar16);
    (*(code *)puVar4)(PTR_s_EXIT___1P_FPK_Button_0c027574);
    if ((((*(ushort *)(PTR_DAT_0c027578 + 2) & 4) != 0) ||
        ((*(ushort *)(PTR_DAT_0c027578 + 2) & 8) != 0)) && (*pbVar7 = *pbVar7 ^ 1, *pbVar7 != 1)) {
      (*(code *)PTR_FUN_0c02757c)(3,(int)DAT_0c027548,0);
    }
    if ((*(ushort *)(PTR_DAT_0c027578 + 2) & DAT_0c027580) != 0) {
      *puVar5 = 0;
      puVar6[3] = 10;
      *DAT_0c027584 = 1;
    }
    break;
  case 0xb:
    break;
  case 0xc:
    iVar10 = (*(code *)PTR_Debug_LightingEditor_0c027588)();
    if (iVar10 == 0) {
      *puVar5 = 0;
      puVar6[3] = 0xc;
    }
    break;
  case 0xd:
    Debug_UpdateMenuCursor(DAT_0c02769c);
    iVar10 = (*(code *)PTR_FUN_0c0276a4)((int)*DAT_0c0276a0);
    if (iVar10 != 0) {
      *puVar5 = 0;
      puVar6[3] = 0xd;
    }
  }
  return local_24;
}

