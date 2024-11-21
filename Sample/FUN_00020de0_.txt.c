
void HandleSaveLoadInitialization_FUN_00020de0(void)

{
  float fVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 unaff_EDI;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  undefined local_e6a;
  char local_e69;
  int local_e64;
  undefined4 local_e60;
  uint local_e5c [2];
  int local_e54 [5];
  byte local_e40 [256];
  undefined4 local_d40 [80];
  undefined4 local_c00;
  undefined4 local_bfc;
  undefined4 local_bf8;
  undefined4 local_bf4;
  
  local_e69 = '\0';
  DAT_00c5939c = 1;
  if (DAT_00c59870 == '\x01') {
    DAT_00c5939c = 1;
    return;
  }
  uVar3 = DetermineGameMode_FUN_0018b210();
  switch(uVar3) {
  case 2:
    DAT_00304644 = 1;
    Settings_Language_Menu_0059ffae = 0;
    Settings_Language_Subtitle_0059d0d0 = 1;
    Settings_Language_Subtitle_0059d0d1 = 1;
    local_e6a = 1;
    goto LAB_00020eb3;
  case 3:
    Settings_Language_Menu_0059ffae = 3;
    Settings_Language_Subtitle_0059d0d0 = 4;
    Settings_Language_Subtitle_0059d0d1 = 4;
    break;
  case 4:
    Settings_Language_Menu_0059ffae = 2;
    Settings_Language_Subtitle_0059d0d0 = 3;
    Settings_Language_Subtitle_0059d0d1 = 3;
    break;
  case 5:
    Settings_Language_Menu_0059ffae = 5;
    Settings_Language_Subtitle_0059d0d0 = 6;
    Settings_Language_Subtitle_0059d0d1 = 6;
    break;
  case 6:
    Settings_Language_Menu_0059ffae = 4;
    Settings_Language_Subtitle_0059d0d0 = 5;
    Settings_Language_Subtitle_0059d0d1 = 5;
    break;
  default:
    Settings_Language_Menu_0059ffae = 1;
    Settings_Language_Subtitle_0059d0d0 = 2;
    Settings_Language_Subtitle_0059d0d1 = 2;
  }
  DAT_00304644 = 0;
  local_e6a = 0;
LAB_00020eb3:
  ConstructSaveFilePath_FUN_0018b343("T:\\",local_e5c,(undefined4 *)0x0,(undefined4 *)0x0);
  iVar4 = LoadSaveFileData_FUN_0018b090(PTR_s_T__DOA3SAVE_DAT_003f4574,local_d40);
  if ((local_e5c[0] < 0x8000) && (iVar4 == -1)) {
    ResetSaveFile_FUN_0005ab90();
    fVar1 = (float)(0x8000 - local_e5c[0]);
    if ((int)(0x8000 - local_e5c[0]) < 0) {
      fVar1 = fVar1 + 4.294967e+09;
    }
    CalculateDelayOrWaitTime_FUN_001b82b9
              (SUB84((double)(fVar1 * 6.103516e-05),0),(double)CONCAT44(unaff_ESI,unaff_EDI));
    __ftol2();
    do {
      RenderGameState_FUN_001c65d8(1);
      FLOAT_00304630 = 1.0;
      FLOAT_0030462c = 1.0;
      DAT_00304641 = 0;
      DAT_0030463c = 0x78;
      DAT_0030463e = 200;
      PrepareMenuGraphics_FUN_001b7150(local_e40,*(byte **)(ULONG_005a7598 + 0x128));
      PTR_s_DUMMY_00304628 = local_e40;
      RenderMenuElement_FUN_00059970();
      DAT_0030463c = 0x78;
      DAT_0030463e = 0xec;
      PTR_s_DUMMY_00304628 = *(undefined **)(ULONG_005a7598 + 300);
      RenderMenuElement_FUN_00059970();
      if (((((((DAT_0073c8d8 & 0x10) != 0) || ((ULONG_0073c904 & 0x10) != 0)) ||
            ((DAT_0073c930 & 0x10) != 0)) ||
           (((ULONG_0073c95c & 0x10) != 0 || ((DAT_0073c8d8 & 0x100) != 0)))) ||
          ((ULONG_0073c904 & 0x100) != 0)) ||
         (((DAT_0073c930 & 0x100) != 0 || ((ULONG_0073c95c & 0x100) != 0)))) {
        HandleUserInput_FUN_000a5610();
        DAT_0059d0da = 1;
        local_e69 = '\x02';
        DAT_00c5939c = 0;
        goto LAB_00021083;
      }
    } while (((((DAT_0073c8d0 & 0x20) == 0) && ((DAT_0073c8fc & 0x20) == 0)) &&
             (((byte)ULONG_0073c928 & 0x20) == 0)) &&
            (((((byte)ULONG_0073c954 & 0x20) == 0 && ((DAT_0073c8d8 & 0x200) == 0)) &&
             (((ULONG_0073c904 & 0x200) == 0 &&
              (((DAT_0073c930 & 0x200) == 0 && ((ULONG_0073c95c & 0x200) == 0))))))));
    HandleUserInput_FUN_000a5610();
    local_e69 = '\x01';
LAB_00021083:
    local_e64 = 0;
    while( true ) {
      do {
        RenderGameState_FUN_001c65d8(1);
        DAT_00304641 = 0;
        DAT_0030463c = 0x78;
        DAT_0030463e = 200;
        FLOAT_0030462c = 1.0 - (float)local_e64 * 0.05;
        PrepareMenuGraphics_FUN_001b7150(local_e40,*(byte **)(ULONG_005a7598 + 0x128));
        PTR_s_DUMMY_00304628 = local_e40;
        RenderMenuElement_FUN_00059970();
        DAT_0030463c = 0x78;
        DAT_0030463e = 0xec;
        PTR_s_DUMMY_00304628 = *(undefined **)(ULONG_005a7598 + 300);
        RenderMenuElement_FUN_00059970();
        iVar9 = local_e64 + 1;
        bVar2 = local_e64 < 0x14;
        local_e64 = iVar9;
      } while (bVar2);
      if (local_e69 != '\x01') break;
      local_c00 = 2;
      local_bfc = 0;
      local_bf8 = 0x54;
      local_bf4 = 2;
      XAPILIB::XLaunchNewImageA((char *)0x0,&local_c00);
    }
  }
  DAT_00304644 = local_e6a;
  if ((ULONG_0073c0a4 != 0) || (iVar4 == -1)) {
    FUN_0006d790(1);
    ULONG_00406f64 = 0;
    ULONG_00406f60 = 0;
    DAT_00406f5d = 0;
    DAT_00406f5c = 1;
    ULONG_005a8830 = 0;
    iVar4 = 0;
    do {
      RenderGameState_FUN_001c65d8(1);
      if ((int)((uint)(byte)ULONG_0030e400 * 6) < iVar4) {
        DAT_00c59142 = 1;
        ULONG_005a8830 =
             (ulong)(1.0 - (float)(iVar4 + (uint)(byte)ULONG_0030e400 * -6) * 0.01666667);
        if ((float)ULONG_005a8830 <= 1.0) {
          if ((float)ULONG_005a8830 < 0.0 != NAN((float)ULONG_005a8830)) {
            ULONG_005a8830 = 0;
          }
        }
        else {
          ULONG_005a8830 = 0x3f800000;
        }
      }
      DAT_005a8834 = 1;
      FUN_0005a770();
      bVar2 = iVar4 <= (int)((uint)(byte)ULONG_0030e400 * 7);
      iVar4 = iVar4 + 1;
    } while (bVar2);
    RenderGameState_FUN_001c65d8(1);
    DAT_00406f58 = 0;
    DAT_00406f54 = 0;
    DAT_00406f51 = 0;
    DAT_00406f50 = 1;
    ULONG_005a8830 = 0;
    DAT_00c59142 = 0;
    if (local_e69 == '\x02') {
      DAT_00406f50 = 1;
      DAT_00406f51 = 0;
      DAT_00406f54 = 0;
      DAT_00406f58 = 0;
      ULONG_005a8830 = 0;
      DAT_00c59142 = 0;
      return;
    }
  }
  iVar4 = FUN_0018a4f0((int)PTR_s_T__DOA3SAVE_DAT_003f4574,0x80000000,0,0,3,0x20);
  if (iVar4 != -1) {
    puVar5 = (undefined4 *)AllocateMemoryForSaveData_FUN_0018a67b(0,0x4000,0x1000,4);
    DAT_00304644 = 0;
    ReadSaveFileData_FUN_0018a6e5(iVar4,puVar5,0x3c48,&local_e60,(undefined4 *)0x0);
    iVar9 = 0x3e;
    do {
      RenderGameState_FUN_001c65d8(1);
      FLOAT_00304630 = 1.0;
      FLOAT_0030462c = 1.0;
      DAT_00304641 = 2;
      DAT_0030463c = 0x296;
      DAT_0030463e = 0x1ac;
      PTR_s_DUMMY_00304628 =
           *(undefined **)((&PTR_PTR_s_OPTIONS_0029dad4)[Settings_Language_Menu_0059ffae] + 0x1cc);
      RenderMenuElement_FUN_00059970();
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    DAT_00304644 = local_e6a;
    FUN_0018b726(iVar4);
    bVar2 = FUN_000216b0();
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = (uint *)XAPILIB::XCalculateSignatureBegin(0);
      CalculateSaveFileSignature_FUN_0018af99((int)puVar6,puVar5,0x3c34);
      FUN_0018afb3(puVar6,(undefined *)local_e54);
    }
    if (bVar2) {
      iVar4 = 5;
      bVar2 = true;
      piVar7 = local_e54;
      piVar10 = puVar5 + 0xf0d;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar2 = *piVar7 == *piVar10;
        piVar7 = piVar7 + 1;
        piVar10 = piVar10 + 1;
      } while (bVar2);
      if (bVar2) {
        puVar8 = puVar5;
        puVar11 = (undefined4 *)&Settings_Game_Difficulty_0059d088;
        for (iVar4 = 0xf0d; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        }
        FUN_0018a6a9(puVar5,0,0x8000);
        DAT_0059d0da = 0;
        if (((char)Settings_Audio_Music_Volume_0059d094 < DAT_003f4528) ||
           (DAT_003f4529 < (char)Settings_Audio_Music_Volume_0059d094)) {
          Settings_Audio_Music_Volume_0059d094 = DAT_003f452a;
        }
        if (((char)Settings_Audio_SoundEffect_Volume_0059d095 < DAT_003f452b) ||
           ((char)BYTE_003f452c < (char)Settings_Audio_SoundEffect_Volume_0059d095)) {
          Settings_Audio_SoundEffect_Volume_0059d095 = DAT_003f452d;
        }
        if (((char)Settings_Audio_SoundEffect_Volume_0059d095 < DAT_003f452b) ||
           ((char)BYTE_003f452c < (char)Settings_Audio_SoundEffect_Volume_0059d095)) {
          Settings_Audio_SoundEffect_Volume_0059d095 = DAT_003f452d;
        }
        if (((char)Settings_Audio_Voice_Volume_0059d096 < DAT_003f452e) ||
           ((char)BYTE_003f452f < (char)Settings_Audio_Voice_Volume_0059d096)) {
          Settings_Audio_Voice_Volume_0059d096 = DAT_003f4530;
        }
        SetMusicVolume_FUN_000a61c0();
        Settings_Audio_SoundEffect_Volume_002d3ea0 =
             (ulong)(char)Settings_Audio_SoundEffect_Volume_0059d095;
        if (100 < (int)Settings_Audio_SoundEffect_Volume_002d3ea0) {
          Settings_Audio_SoundEffect_Volume_002d3ea0 = 100;
        }
        uVar12 = __ftol2();
        ULONG_002d3ea4 = (ulong)uVar12;
        if (100 < (int)ULONG_002d3ea4) {
          ULONG_002d3ea4 = 100;
        }
        FUN_001c6ae0();
        FLOAT_002d4ce8 = 0.75;
        if (DAT_0059fb4c != '\0') {
          FLOAT_002d4ce8 = 1.0;
        }
        FUN_0017b800(ULONG_0059fb48,ULONG_0059fb40,ULONG_0059fb44);
        FUN_000c4260();
        DAT_00304644 = Settings_Language_Menu_0059ffae == 0;
        DAT_00c5939c = 0;
        return;
      }
    }
    ULONG_005a7598 = (ulong)(&PTR_MENUTEXT_MAIN_JP_0030e19c)[Settings_Language_Menu_0059ffae];
    ULONG_00c59444 = 0;
    ULONG_005a882c = 0;
    DAT_003046c8 = 0xffffffff;
    DWORD_003046cc._0_1_ = 0xff;
    while( true ) {
      RenderGameState_FUN_001c65d8(1);
      FLOAT_00304630 = 1.0;
      FLOAT_0030462c = 1.0;
      DAT_00304641 = 1;
      DAT_0030463c = 0x168;
      DAT_0030463e = 200;
      PTR_s_DUMMY_00304628 = *(undefined **)(ULONG_005a7598 + 0x11c);
      RenderMenuElement_FUN_00059970();
      if ((((DAT_0073c8d8 & 0x10) != 0) || ((ULONG_0073c904 & 0x10) != 0)) ||
         ((DAT_0073c930 & 0x10) != 0)) break;
      if ((((ULONG_0073c95c & 0x10) != 0) || ((DAT_0073c8d8 & 0x100) != 0)) ||
         (((ULONG_0073c904 & 0x100) != 0 ||
          (((DAT_0073c930 & 0x100) != 0 || ((ULONG_0073c95c & 0x100) != 0)))))) break;
    }
    PTR_s_DUMMY_00304628 = s__0022e511;
    RenderMenuElement_FUN_00059970();
    HandleUserInput_FUN_000a5610();
    local_e64 = 0;
    do {
      RenderGameState_FUN_001c65d8(1);
      DAT_00304641 = 1;
      DAT_0030463c = 0x168;
      DAT_0030463e = 200;
      FLOAT_0030462c = 1.0 - (float)local_e64 * 0.1;
      PTR_s_DUMMY_00304628 = *(undefined **)(ULONG_005a7598 + 0x11c);
      RenderMenuElement_FUN_00059970();
      bVar2 = local_e64 < 10;
      local_e64 = local_e64 + 1;
    } while (bVar2);
    DAT_0059d0da = 0;
    FUN_0018a6a9(puVar5,0,0x8000);
  }
  DAT_00c5939c = 0;
  return;
}

