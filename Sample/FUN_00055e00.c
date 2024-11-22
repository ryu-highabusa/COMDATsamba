
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00055e00(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined *puVar5;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_EDX;
  uint extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  byte *pbVar6;
  float10 fVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined local_54 [24];
  byte *local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined local_24;
  undefined local_23;
  byte local_20 [32];
  
  uVar2 = Settings_Language_Menu_0059ffae - 1;
  if (4 < (int)uVar2) {
    uVar2 = 4;
  }
  local_38 = 1.0;
  local_34 = 1.0;
  local_30 = 0x3f800000;
  uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
  local_2c = 0x3f800000;
  local_28 = 0;
  local_26 = 0;
  local_24 = 1;
  local_23 = 0x11;
  FUN_0006e2a0();
  uVar3 = (uint)DAT_00588836;
  DAT_005b12f0 = ((DAT_00596aa5 != '\x01') - 1U & 7) + 7;
  DAT_005b12cd = 1;
  _DAT_005b12e8 = 0;
  _DAT_005b12ea = 0;
  if (uVar3 == ULONG_005a8558) goto LAB_0005601a;
  ULONG_005a8560 = 0;
  ULONG_005a8558 = uVar3;
  if (0xff < uVar3) {
switchD_00055ec8_caseD_0:
    ULONG_005a855c = 0x40000000;
    goto LAB_0005602d;
  }
  if (uVar3 == 0xff) {
    ULONG_00404a00 = 0;
    goto LAB_0005601a;
  }
  switch(uVar3) {
  default:
    goto switchD_00055ec8_caseD_0;
  case 2:
    FUN_00058f60();
    ULONG_005a855c = (uint)(byte)ULONG_0030e400 * 0x14;
    break;
  case 3:
  case 0x18:
    FUN_00058f60();
    FUN_00059380();
    ULONG_005a855c = (uint)(byte)ULONG_0030e400 << 2;
    break;
  case 4:
    FUN_00059660();
    goto LAB_00056010;
  case 5:
    DAT_00c5944c = 1;
    ULONG_005a855c = (-(uint)(DAT_00c59867 != '\0') & 0xfffffff6) + 0x3c;
    break;
  case 6:
  case 0x10:
  case 0x16:
    ULONG_005a855c = (ulong)(byte)ULONG_0030e400;
    break;
  case 7:
    ULONG_005a855c = (ulong)(byte)ULONG_0030e400;
    break;
  case 0xb:
  case 0x15:
    ULONG_005a855c = (ulong)(byte)ULONG_0030e400;
    break;
  case 0xc:
    puVar5 = (&PTR_PTR_DAT_0030cb2c)[uVar2];
    DAT_00c5944c = 1;
    ULONG_005a855c = 0x3c;
    if ((DAT_005a25dc == '\x02') || (DAT_005a2858 == '\x05')) {
      if (uVar2 == 0) {
        FUN_00054d30(puVar5,0x3c,0x3fcccccd,0x3fcccccd);
        FUN_00069bb0(extraout_ECX_01,(int)local_54);
      }
      else {
        FUN_00054d30(puVar5,0x3c,0x3f800000,0x3f800000);
        FUN_00069bb0(extraout_ECX_02,(int)local_54);
      }
    }
    else if (uVar2 == 0) {
      FUN_00054d30(puVar5,0x3c,0x40800000,0x3fcccccd);
      FUN_00069bb0(extraout_ECX,(int)local_54);
    }
    else {
      FUN_00054d30(puVar5,0x3c,0x40000000,0x3f800000);
      FUN_00069bb0(extraout_ECX_00,(int)local_54);
    }
    break;
  case 0xd:
    goto LAB_00056010;
  case 0xe:
    puVar5 = (&PTR_s_GREA__9T_0030cb90)[uVar2];
    DAT_00c5944c = 1;
    ULONG_005a855c = 0x3c;
    uVar9 = 0x3fb33333;
    if (DAT_005a25dc == '\x02') {
      FUN_00054d30(puVar5,0x3c,0x3fb33333,0x3fb33333);
      FUN_00069bb0(extraout_ECX_03,(int)local_54);
    }
    else {
LAB_000560b7:
      DAT_00c5944c = 1;
      ULONG_005a855c = 0x3c;
      FUN_00054d30(puVar5,0x3c,0x40800000,uVar9);
      FUN_00069bb0(extraout_ECX_05,(int)local_54);
    }
    break;
  case 0xf:
    puVar5 = (&PTR_s_GREA__6TEST_0030cba4)[uVar2];
    DAT_00c5944c = 1;
    ULONG_005a855c = 0x3c;
    uVar9 = 0x3f800000;
    if (DAT_005a25dc != '\x02') goto LAB_000560b7;
    FUN_00054d30(puVar5,0x3c,0x3f800000,0x3f800000);
    FUN_00069bb0(extraout_ECX_04,(int)local_54);
    break;
  case 0x14:
LAB_00056010:
    uVar8 = __ftol2();
    ULONG_005a855c = (ulong)uVar8;
  }
LAB_0005601a:
  if ((int)ULONG_005a855c < 1) {
    ULONG_005a855c = 0xffffffff;
    ULONG_005a8560 = 0;
    return;
  }
LAB_0005602d:
  switch(ULONG_005a8558) {
  case 1:
  case 0x11:
  case 0x12:
  case 0x13:
    pbVar6 = (&PTR_s_CHALLENGER_APPEARS_0030cbb8)[uVar2];
    fVar10 = 0.6;
    local_3c = pbVar6;
    iVar4 = FUN_00058e40(ULONG_005a855c,0x1c);
    fVar7 = (float10)FUN_00059d50(extraout_ECX_06,extraout_EDX,pbVar6,iVar4,fVar10);
    local_38 = (float)fVar7;
    if ((int)ULONG_005a855c < 8) {
      local_34 = (float)((float10)ULONG_005a855c * fVar7 * (float10)0.125);
      break;
    }
    goto LAB_000565ad;
  case 2:
    PrepareMenuGraphics_FUN_001b7150(local_20,(byte *)"%s %d");
    local_3c = local_20;
    local_38 = 0.8;
    local_23 = 1;
    local_28 = 0;
    local_26 = 0x159;
    local_34 = 0.8;
    FUN_00069760(&local_3c);
    uVar8 = FUN_00054c70();
    DAT_00304640 = ((DAT_00596aa5 != '\x01') - 1U & 7) + 7;
    FLOAT_0030462c = (float)(int)uVar8 * 0.003921569;
    DAT_0030463c = DAT_00596a88 >> 1;
    FLOAT_00304630 = 1.0;
    FLOAT_00304634 = 0.9;
    FLOAT_00304638 = 0.9;
    DAT_00304641 = 0x21;
    DAT_0030463e = 0x19f;
    FUN_00059ce0();
    iVar4 = FUN_000da270();
    if (iVar4 == 0) {
      FUN_0006e2a0();
      FUN_000d2ab0();
      FUN_0005ac00(0x48);
      iVar4 = 0;
      uVar2 = extraout_EDX_00;
      do {
        uVar2 = CONCAT31((int3)(uVar2 >> 8),(&DAT_00c5985c)[iVar4]);
        if ((&DAT_00c5985c)[iVar4] != '\0') {
          uVar2 = 1 << ((byte)iVar4 & 0x1f);
          bVar1 = (byte)iVar4;
          if ((ULONG_0073c8c8 & uVar2) == 0) break;
        }
        iVar4 = iVar4 + 1;
        bVar1 = (byte)DWORD_003046cc;
      } while (iVar4 < 4);
      DWORD_003046cc._0_1_ = bVar1;
      _DAT_00303cc4 = 0xffe03030;
      FUN_0005ac50(iVar4,uVar2);
      _DAT_00303cc4 = 0xffffffff;
    }
    goto switchD_00056037_caseD_6;
  case 3:
    pbVar6 = (&PTR_s_GAME_OVER_0030caa0)[uVar2];
    fVar10 = 1.0;
    local_23 = 1;
    local_26 = 0x159;
    local_3c = pbVar6;
    iVar4 = FUN_00058e40(ULONG_005a855c,0xe);
    fVar7 = (float10)FUN_00059d50(extraout_ECX_07,extraout_EDX_01,pbVar6,iVar4,fVar10);
    local_38 = (float)fVar7;
    local_34 = (float)fVar7;
    FUN_00069760(&local_3c);
    goto switchD_00056037_caseD_6;
  case 4:
    pbVar6 = (&PTR_s_GET_READ__3Y_0030cab4)[uVar2];
    fVar10 = 1.0;
    local_3c = pbVar6;
    iVar4 = FUN_00058e40(ULONG_005a855c,0xf);
    fVar7 = (float10)FUN_00059d50(extraout_ECX_08,extraout_EDX_02,pbVar6,iVar4,fVar10);
    local_38 = (float)fVar7;
    if ((int)ULONG_005a855c < 8) {
      local_34 = (float)((float10)ULONG_005a855c * fVar7 * (float10)0.125);
    }
    else {
      local_34 = (float)fVar7;
    }
    break;
  case 5:
    FUN_000566e0();
    DAT_00c5944c = 1;
  default:
    goto switchD_00056037_caseD_6;
  case 7:
    pbVar6 = (&PTR_s_TIME_UP_0030cac8)[uVar2];
    iVar4 = 0x10;
    goto LAB_000563b8;
  case 8:
    local_3c = (&PTR_s_WINNER_0030cadc)[uVar2];
    local_23 = 1;
    local_26 = 0x159;
    if ((int)ULONG_005a855c < 8) {
      local_34 = (float)ULONG_005a855c * 0.125;
    }
    else {
      local_34 = 1.0;
    }
    break;
  case 9:
    pbVar6 = (&PTR_s_YOU_LOSE_0030caf0)[uVar2];
    local_23 = 1;
    local_26 = 0x159;
    iVar4 = 0x12;
LAB_000563b8:
    fVar10 = 1.0;
    local_3c = pbVar6;
    iVar4 = FUN_00058e40(ULONG_005a855c,iVar4);
    fVar7 = (float10)FUN_00059d50(extraout_ECX_09,extraout_EDX_03,pbVar6,iVar4,fVar10);
    local_38 = (float)fVar7;
    if ((int)ULONG_005a855c < 8) {
      local_34 = (float)((float10)ULONG_005a855c * fVar7 * (float10)0.125);
    }
    else {
      local_34 = (float)fVar7;
    }
    break;
  case 10:
    local_3c = (&PTR_s_REPLA__9Y_0030cb04)[uVar2];
    local_38 = 0.8;
    if ((int)ULONG_005a855c < 8) {
      local_34 = (float)ULONG_005a855c * 0.1;
    }
    else {
      local_34 = 0.8;
    }
    local_28 = 0;
    local_26 = 100;
    local_23 = 0x21;
    if ((((((DAT_00596a33 == '\x0e') || (DAT_00596a33 == '\x0f')) || (DAT_00596a33 == '\x11')) ||
         (DAT_00596a33 == '\x12')) && (DAT_005a27a0 != '\0')) ||
       (((int)ULONG_005a8560 < (int)(uint)(byte)ULONG_0030e400 &&
        (((char)((ulonglong)((longlong)(int)ULONG_005a8560 * 0x2aaaaaab) >> 0x20) -
          (char)((longlong)(int)ULONG_005a8560 * 0x2aaaaaab >> 0x3f) & 1U) == 0))))
    goto switchD_00056037_caseD_6;
    break;
  case 0xb:
    local_3c = (&PTR_s_DRA__7W_0030cb18)[uVar2];
    iVar4 = uVar2 + 1;
    if (iVar4 < 3) {
LAB_00056538:
      local_34 = 1.0;
    }
    else if (iVar4 < 5) {
      local_34 = 0.6;
    }
    else {
      if (iVar4 != 5) goto LAB_00056538;
      local_34 = 0.8;
    }
    local_38 = local_34 * 1.3;
    if ((int)ULONG_005a855c < 8) {
      local_34 = (float)ULONG_005a855c * 0.1625 * local_34;
    }
    else {
      local_34 = local_34 * 1.3;
    }
    break;
  case 0x10:
    local_3c = (&PTR_s_TIME_UP_0030cac8)[uVar2];
    goto LAB_00056598;
  case 0x15:
    local_3c = (&PTR_s_SEMI_FINAL_0030cb54)[uVar2];
    goto LAB_00056598;
  case 0x16:
    local_3c = (&PTR_s_FINAL_MATCH_0030cb68)[uVar2];
    goto LAB_00056598;
  case 0x17:
    local_3c = (&PTR_s_HIGHLIGHT_0030cb7c)[uVar2];
    goto LAB_00056598;
  case 0x18:
    local_3c = (&PTR_s_GAME_OVER_0030caa0)[uVar2];
    local_26 = 0x159;
LAB_00056598:
    if ((int)ULONG_005a855c < 8) {
      fVar7 = (float10)ULONG_005a855c * (float10)0.125;
LAB_000565ad:
      local_34 = (float)fVar7;
    }
    else {
      local_34 = 1.0;
    }
  }
  FUN_00069760(&local_3c);
switchD_00056037_caseD_6:
  if (0 < (int)ULONG_005a855c) {
    if ((int)ULONG_005a855c < 0x40000000) {
      ULONG_005a855c = ULONG_005a855c - 1;
    }
    if (0 < (int)ULONG_005a855c) {
      ULONG_005a8560 = ULONG_005a8560 + 1;
      return;
    }
  }
  ULONG_005a8560 = 0;
  ULONG_005a855c = 0xffffffff;
  return;
}

