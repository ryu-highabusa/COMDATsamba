
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0001f5d0(void)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  int iVar12;
  undefined1 in_register_0000000c [52];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar8 [64];
  
  uVar5 = ac;
  auVar6._8_4_ = unaff_retaddr;
  auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar6._12_52_ = in_register_0000000c;
  uVar1 = ac & 0xfffffff8 | (uint)(0xb < (byte)(g_player1.action_code - 0x34)) << 2;
  auVar7._20_44_ = in_register_0000000c._8_44_;
  auVar7._0_16_ = auVar6._0_16_;
  auVar7._16_4_ = 0xffffffff;
  if (((((byte)(uVar1 >> 2) & 1) != 1) &&
      (ac = ac & 0xfffffff8 | (uint)(g_player1.action_state < 0xD_SPECIALMOVE), uVar1 = ac,
      ((byte)ac & 1 | 0xD_SPECIALMOVE < g_player1.action_state) != 1)) &&
     (ac = uVar5 & 0xfffffff8 | (uint)(g_player1.mount_state == '\0'), uVar1 = ac,
     ((byte)ac & 1 | 1 < g_player1.mount_state) != 1)) {
    BYTE_0054fd13 = 1;
    g_roundEndTriggered = 1;
    uVar1 = uVar5 & 0xfffffff8 | (uint)(GameMode < MODE_CHARSEL) << 2 |
            (uint)(GameMode == MODE_CHARSEL) << 1;
    ac = uVar1 | MODE_CHARSEL < GameMode;
    SPRT_DAT = ringout;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      auVar8._12_52_ = auVar7._12_52_;
      auVar8._8_4_ = 0x1f644;
      auVar8._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
      auVar7._8_56_ = auVar8._8_56_;
      auVar7._4_4_ = auStack_40;
      auVar7._0_4_ = fp;
      Sound_Request(SE_RINGOUT);
      fp = (undefined1 *)register0x00000004;
    }
    auVar7._16_4_ = 0;
    g_greatestEligibleP1 = g14;
    g_greatestEligibleP2 = g14;
    uVar1 = ac;
  }
  ac = uVar1;
  iVar12 = auVar7._16_4_;
  uVar1 = ac & 0xfffffff8;
  if ((((byte)(g_player2.action_code - 0x34) < 0xc) &&
      (uVar1 = ac & 0xfffffff8, g_player2.action_state == 0xD_SPECIALMOVE)) &&
     (uVar1 = ac & 0xfffffff8, g_player2.mount_state == '\x01')) {
    g_roundEndTriggered = 1;
    BYTE_0054fd13 = g14;
    uVar1 = ac & 0xfffffff8 | (uint)(GameMode < MODE_CHARSEL) << 2 |
            (uint)(GameMode == MODE_CHARSEL) << 1;
    ac = uVar1 | MODE_CHARSEL < GameMode;
    SPRT_DAT = ringout;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      puVar4 = (undefined1 *)(auVar7._4_4_ + 0x3fU & 0xffffffc0);
      auVar9._12_52_ = auVar7._12_52_;
      auVar9._0_8_ = auVar7._0_8_;
      auVar9._8_4_ = 0x1f6c4;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
      auVar7._8_56_ = auVar9._8_56_;
      auVar7._4_4_ = puVar4 + 0x40;
      auVar7._0_4_ = fp;
      Sound_Request(SE_RINGOUT);
      fp = puVar4;
    }
    if (iVar12 == 0) {
      BYTE_0054fd13 = 2;
    }
    else {
      auVar7._16_4_ = 1;
    }
    g_greatestEligibleP1 = g14;
    g_greatestEligibleP2 = g14;
    uVar1 = ac & 0xfffffff8;
  }
  ac = uVar1;
  iVar12 = auVar7._16_4_;
  if ((float10)(int)g_player1.y_position <= (float10)'\0') {
    BYTE_0054fd13 = 1;
    g_roundEndTriggered = 1;
    uVar1 = ac | (uint)(GameMode < MODE_CHARSEL) << 2 | (uint)(GameMode == MODE_CHARSEL) << 1;
    ac = uVar1 | MODE_CHARSEL < GameMode;
    SPRT_DAT = ringout;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      puVar4 = (undefined1 *)(auVar7._4_4_ + 0x3fU & 0xffffffc0);
      auVar10._12_52_ = auVar7._12_52_;
      auVar10._0_8_ = auVar7._0_8_;
      auVar10._8_4_ = 0x1f73c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
      auVar7._8_56_ = auVar10._8_56_;
      auVar7._4_4_ = puVar4 + 0x40;
      auVar7._0_4_ = fp;
      Sound_Request(SE_RINGOUT);
      fp = puVar4;
    }
    ac = ac & 0xfffffff8;
    if (iVar12 == 1) {
      BYTE_0054fd13 = 2;
    }
    else {
      auVar7._16_4_ = 0;
    }
    g_greatestEligibleP1 = g14;
    g_greatestEligibleP2 = g14;
  }
  iVar12 = auVar7._16_4_;
  fVar2 = (float10)(int)g_player2.y_position;
  fVar3 = (float10)'\0';
  if (!NAN(fVar3) && !NAN(fVar2)) {
    ac = ac | (uint)(fVar3 < fVar2) << 2;
    ac = ac | (uint)(fVar3 == fVar2) << 1;
    ac = ac | fVar2 < fVar3;
  }
  if (((byte)(ac >> 2) & 1) != 1) {
    g_roundEndTriggered = 1;
    BYTE_0054fd13 = g14;
    uVar1 = ac & 0xfffffff8 | (uint)(GameMode < MODE_CHARSEL) << 2 |
            (uint)(GameMode == MODE_CHARSEL) << 1;
    ac = uVar1 | MODE_CHARSEL < GameMode;
    SPRT_DAT = ringout;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      auVar11._12_52_ = auVar7._12_52_;
      auVar11._0_8_ = auVar7._0_8_;
      auVar11._8_4_ = 0x1f7b4;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
      auVar7._8_56_ = auVar11._8_56_;
      auVar7._4_4_ = (undefined1 *)0x0;
      auVar7._0_4_ = fp;
      Sound_Request(SE_RINGOUT);
    }
    ac = ac & 0xfffffff8 | (uint)(0 < iVar12) << 2 | (uint)(iVar12 == 0) << 1 | (uint)(iVar12 < 0);
    if (((byte)ac & 1 | 0 < iVar12) != 1) {
      BYTE_0054fd13 = 2;
    }
    g_greatestEligibleP1 = g14;
    g_greatestEligibleP2 = g14;
  }
  fp = (undefined1 *)auVar7._0_4_;
  return;
}

