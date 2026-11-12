
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void InterpretCharacterActionScript_candidate
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,short *param_6,short *param_7,int param_8,undefined4 param_9,
               undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  undefined2 uVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 auVar8 [20];
  ushort *puVar9;
  short sVar10;
  undefined4 unaff_pfp;
  int iVar29;
  undefined4 unaff_retaddr;
  undefined8 in_register_0000000c;
  undefined4 unaff_r5;
  undefined1 in_register_00000018 [40];
  undefined1 auVar12 [64];
  uint uVar30;
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  DOA_SOUND_COMMAND DVar31;
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined4 uVar32;
  undefined4 uVar33;
  char *pcVar34;
  undefined *puVar35;
  undefined1 uVar36;
  short *psVar37;
  int iVar38;
  int iVar39;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar14 [64];
  undefined1 auVar27 [64];
  undefined1 auVar11 [64];
  
  auVar8._4_4_ = auStackX_0;
  auVar8._0_4_ = unaff_pfp;
  auVar8._8_4_ = unaff_retaddr;
  auVar8._12_8_ = in_register_0000000c;
  auVar11._20_4_ = unaff_r5;
  auVar11._0_20_ = auVar8;
  auVar11._24_40_ = in_register_00000018;
  auVar12._20_44_ = auVar11._20_44_;
  auVar12._0_16_ = auVar8._0_16_;
  auVar12._16_4_ = param_1;
  auVar13._28_36_ = in_register_00000018._4_36_;
  auVar13._0_24_ = auVar12._0_24_;
  auVar13._24_4_ = &g_player1 + param_1;
LAB_00042ccc:
  while( true ) {
    uVar3 = ac;
    iVar39 = auVar13._24_4_;
    uVar30 = auVar13._16_4_;
    iVar29 = auVar13._4_4_;
    uVar32 = auVar13._0_4_;
    uVar33 = 0x45;
    puVar35 = (undefined *)
              ((**(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 1) * 0x10000 >> 0x10);
    ac = ac & 0xfffffff8 | (uint)(puVar35 < (undefined *)0x45) << 2 |
         (uint)(puVar35 == (undefined *)0x45) << 1 | (uint)((undefined *)0x45 < puVar35);
    auVar14._0_8_ = auVar13._0_8_;
    auVar15._12_52_ = auVar13._12_52_;
    if (((byte)ac & 1) != 1) break;
switchD_00042cf8_caseD_44058:
    uVar32 = 0x1e;
    uVar3 = iVar29 + 0x3f;
    auVar27._8_4_ = 0x44064;
    auVar27._0_8_ = auVar14._0_8_;
    auVar27._12_52_ = auVar15._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar27;
    auVar26._8_56_ = auVar27._8_56_;
    auVar26._0_8_ = CONCAT44(uVar3,fp) & 0xffffffc0ffffffff;
    Debug_SetTextPosition(0x19,0x1e);
    auVar28._12_52_ = auVar26._12_52_;
    auVar28._0_8_ = auVar26._0_8_;
    auVar28._8_4_ = 0x44070;
    *(undefined1 (*) [64])(uVar3 & 0xffffffc0) = auVar28;
    auVar13._8_56_ = auVar28._8_56_;
    auVar13._0_8_ = CONCAT44((uVar3 & 0xffffffc0) + 0x80,uVar3) & 0xffffffffffffffc0;
    FUN_0008e740(s_COMMAND_ERROR_____00042c90,uVar32,uVar33,param_4,puVar35,param_6,param_7,param_8,
                 param_9,param_10,param_11,param_12);
    fp = (uVar3 & 0xffffffc0) + 0x40;
  }
  puVar35 = (&switchD_00042cf8::switchdataD_00042cfc)[(int)puVar35];
  switch(puVar35) {
  case (undefined *)0x42e14:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar39 + 4;
    param_7 = *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    uVar5 = *(undefined2 *)(iVar39 + 2);
    param_6 = param_7 + 1;
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6;
    (&DAT_0056ac4c)[uVar30] = uVar5;
    (&DAT_0056ac94)[uVar30] = *param_7;
    goto LAB_00042ccc;
  case (undefined *)0x42e58:
    uVar3 = uVar3 & 0xfffffff8 | (uint)('\x01' < DAT_0056aca0) << 2 |
            (uint)(DAT_0056aca0 == '\x01') << 1;
    ac = uVar3 | DAT_0056aca0 < '\x01';
    if (((byte)(uVar3 >> 1) & 1) != 1) {
      iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
      *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar39 + 4;
      g_motion_next_command_frame[uVar30] = *(uint16_t *)(iVar39 + 2);
      fp = uVar32;
      return;
    }
    fp = uVar32;
    return;
  case (undefined *)0x42e8c:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (short *)(iVar39 + 2);
    (&DAT_0056add0)[uVar30] = (int)*(short *)(iVar39 + 2);
    param_6 = (short *)0x40240000;
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    (&DAT_0056add0)[uVar30] = 0x40240000;
    goto LAB_00042ccc;
  case (undefined *)0x42ef4:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar39 + 4;
    DVar31 = (int)*(short *)(iVar39 + 2) | 0xa00000;
    if (uVar30 != 0) {
      DVar31 = DVar31 + 0x1000;
    }
    auVar13._20_4_ = DVar31;
    ac = uVar3 & 0xfffffff8 | (uint)(GameMode == MODE_NAMELOAD) << 1;
    if ((((byte)(ac >> 1) & 1) != 1) &&
       ((ac = uVar3 & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
              (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL),
        ((byte)ac & 1 | MODE_CHARSEL < GameMode) == 1 ||
        (ac = uVar3 & 0xfffffff8 | (uint)(1 < g_effective_demo_sound) << 2 |
              (uint)(g_effective_demo_sound == '\x01') << 1 | (uint)(g_effective_demo_sound == '\0')
        , ((byte)ac & 1 | 1 < g_effective_demo_sound) != 1)))) {
      auVar14._12_52_ = auVar13._12_52_;
      auVar14._8_4_ = 0x42f4c;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar14;
      auVar13._8_56_ = auVar14._8_56_;
      auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
      auVar13._0_4_ = fp;
      Sound_Request(DVar31);
      fp = iVar29 + 0x3fU & 0xffffffc0;
    }
    param_6 = (short *)(uint)DAT_0056adea;
    cVar4 = (&DAT_0056ade8)[uVar30];
    (&DAT_0056ade8)[uVar30] = (&DAT_0056ade8)[uVar30] + '\x01';
    param_7 = (short *)(uVar30 * 60000);
    param_8 = (int)(char)(&DAT_0056ade8)[uVar30];
    uVar3 = ac & 0xfffffff8 | (uint)(param_8 < 5) << 2;
    ac = uVar3 | (uint)(param_8 == 5) << 1;
    *(DOA_SOUND_COMMAND *)(param_7 + (int)param_6 * 100 + cVar4 * 2 + 0x2b5708) = DVar31;
    bVar2 = (byte)(ac >> 1) & 1 | (byte)(uVar3 >> 2) & 1;
    goto joined_r0x000436b0;
  case (undefined *)0x42fb0:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac60)[uVar30] = 1;
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar39 + 2;
    auVar15._8_4_ = 0x42fdc;
    auVar15._0_8_ = auVar14._0_8_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar15;
    auVar13._8_56_ = auVar15._8_56_;
    auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
    auVar13._0_4_ = fp;
    FUN_0004cbf0(uVar30,1);
    fp = iVar29 + 0x3fU & 0xffffffc0;
    goto LAB_00042ccc;
  case (undefined *)0x42fe0:
    *(undefined1 *)(iVar39 + 0x33) = 2;
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_00565e40)[uVar30] = g14;
    (&DAT_0056ac60)[uVar30] = (byte)g14;
    goto LAB_00043cf4;
  case (undefined *)0x43004:
    (&DAT_005882b0)[uVar30] = 1;
    fp = uVar32;
    return;
  case (undefined *)0x43014:
    param_6 = *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    param_7 = param_6 + 1;
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_7;
    ac = uVar3 & 0xfffffff8 | (uint)(DAT_0056aca0 < '\0');
    if (((byte)ac & 1 | '\0' < DAT_0056aca0) == 1) {
      *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6 + 2;
    }
    else {
      *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6 + 2;
      (&DAT_0056ac34)[uVar30] = *param_7;
    }
    goto LAB_00042ccc;
  case (undefined *)0x43060:
    *(undefined1 *)(iVar39 + 0x35) = 2;
    break;
  case (undefined *)0x4306c:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    *(byte *)(iVar39 + 0x34) = *(byte *)(iVar39 + 0x34) ^ 1;
    break;
  case (undefined *)0x43090:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac52)[uVar30] = 1;
    goto LAB_00043cf4;
  case (undefined *)0x430a8:
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(undefined1 **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (undefined1 *)(iVar38 + 2);
    *(undefined1 *)(iVar39 + 0x30) = *(undefined1 *)(iVar38 + 2);
    break;
  case (undefined *)0x430c8:
    uVar3 = uVar3 & 0xfffffff8 | (uint)((short)(&DAT_00550144)[uVar30] < 1) << 2;
    ac = uVar3 | 1 < (short)(&DAT_00550144)[uVar30];
    psVar37 = (short *)(*(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = psVar37;
    if (((byte)ac & 1 | (byte)(uVar3 >> 2) & 1) == 1) {
      *(int *)(iVar39 + 0x18) = *(int *)(iVar39 + 0x18) - (int)(float10)(int)*psVar37;
      param_6 = (short *)(int)(float10)(int)**(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4)
      ;
      pcVar34 = (char *)(*(int *)(iVar39 + 0x1c) - (int)param_6);
    }
    else {
      *(int *)(iVar39 + 0x18) = (int)(float10)(int)*psVar37 + *(int *)(iVar39 + 0x18);
      param_6 = *(short **)(iVar39 + 0x1c);
      pcVar34 = (char *)((int)(float10)(int)**(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4)
                        + (int)param_6);
    }
    param_8 = 0x40768000;
    param_7 = (short *)0x0;
    *(char **)(iVar39 + 0x1c) = pcVar34;
    break;
  case (undefined *)0x431e0:
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_005882b4)[uVar30] = (&DAT_005882b4)[uVar30] + '\x01';
    uVar36 = (&DAT_005882b4)[uVar30];
    param_6 = (short *)(iVar38 + 2);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6;
    *(undefined1 *)(iVar39 + 0x4b) = uVar36;
    goto LAB_00042ccc;
  case (undefined *)0x43218:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    FUN_000448c0(uVar30);
    return;
  case (undefined *)0x43234:
    param_6 = (short *)(int)(char)(&DAT_0056ac66)[uVar30];
    uVar3 = uVar3 & 0xfffffff8 | (uint)((int)param_6 < 0) << 2;
    ac = uVar3 | 0 < (int)param_6;
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    bVar1 = ((byte)ac & 1 | (byte)(uVar3 >> 2) & 1) != 1;
    param_7 = (short *)(uint)bVar1;
    (&DAT_0056ac66)[uVar30] = bVar1;
    goto LAB_00042ccc;
  case (undefined *)0x4326c:
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(undefined1 **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (undefined1 *)(iVar38 + 2);
    *(undefined1 *)(iVar39 + 0x3b) = *(undefined1 *)(iVar38 + 2);
    break;
  case (undefined *)0x4328c:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(undefined1 **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (undefined1 *)(iVar39 + 2);
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_005882b6)[uVar30] = *(undefined1 *)(iVar39 + 2);
    goto LAB_00043df0;
  case (undefined *)0x432b8:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    DAT_005555ad = 1;
    goto LAB_00042ccc;
  case (undefined *)0x432dc:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    param_6 = (short *)(iVar39 + 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6;
    uVar5 = *(undefined2 *)(iVar39 + 2);
    (&DAT_005882b8)[uVar30] = (byte)g14;
    (&DAT_005882bc)[uVar30] = uVar5;
    goto LAB_00042ccc;
  case (undefined *)0x43308:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(undefined2 **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (undefined2 *)(iVar39 + 2);
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac14)[uVar30] = *(undefined2 *)(iVar39 + 2);
    goto LAB_00043df0;
  case (undefined *)0x43334:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac50)[uVar30] = 1;
    goto LAB_00043cf4;
  case (undefined *)0x4334c:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    (&DAT_0056ac18)[uVar30] = 1;
    param_6 = (short *)0x40590000;
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    (&DAT_0056ac20)[uVar30] = 0x40590000;
    (&DAT_0056ac28)[uVar30] = 0x40590000;
    goto LAB_00042ccc;
  case (undefined *)0x433bc:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac20)[uVar30] = g14;
    (&DAT_0056ac18)[uVar30] = (byte)g14;
    goto LAB_00043cf4;
  case (undefined *)0x433d8:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac62)[uVar30] = 1;
    goto LAB_00043cf4;
  case (undefined *)0x433f0:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&g_pending_grasp_state_set)[uVar30] = 1;
    goto LAB_00043cf4;
  case (undefined *)0x43408:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    *(byte *)(iVar39 + 0x42) = (byte)g14;
    (&g_pending_grasp_state_set)[uVar30] = (byte)g14;
    goto LAB_00042ccc;
  case (undefined *)0x4342c:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    *(undefined1 *)(iVar39 + 0x43) = 1;
    goto LAB_00042ccc;
  case (undefined *)0x4344c:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    *(byte *)(iVar39 + 0x43) = (byte)g14;
    goto LAB_00042ccc;
  case (undefined *)0x43468:
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(undefined1 **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (undefined1 *)(iVar38 + 2);
    *(undefined1 *)(iVar39 + 0x44) = *(undefined1 *)(iVar38 + 2);
    break;
  case (undefined *)0x43488:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(ushort **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (ushort *)(iVar39 + 2);
    uVar6 = *(ushort *)(iVar39 + 2);
    auVar16._8_4_ = 0x434a8;
    auVar16._0_8_ = auVar14._0_8_;
    auVar16._12_52_ = auVar15._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar16;
    auVar13._8_56_ = auVar16._8_56_;
    auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
    auVar13._0_4_ = fp;
    FUN_0004cce0(uVar30,(uint)uVar6);
    fp = iVar29 + 0x3fU & 0xffffffc0;
    break;
  case (undefined *)0x434ac:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    puVar9 = *(ushort **)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac60)[uVar30] = 1;
    uVar6 = *puVar9;
    auVar17._8_4_ = 0x434e0;
    auVar17._0_8_ = auVar14._0_8_;
    auVar17._12_52_ = auVar15._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar17;
    auVar13._8_56_ = auVar17._8_56_;
    auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
    auVar13._0_4_ = fp;
    FUN_0004cbf0(uVar30,(uint)uVar6);
    fp = iVar29 + 0x3fU & 0xffffffc0;
    break;
  case (undefined *)0x434e4:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (short *)(iVar39 + 2);
    uVar3 = uVar3 & 0xfffffff8 | (uint)((int)uVar30 < 0) << 2;
    ac = uVar3 | 0 < (int)uVar30;
    (&DAT_005882c0)[uVar30] = (int)*(short *)(iVar39 + 2);
    if (((byte)ac & 1 | (byte)(uVar3 >> 2) & 1) != 1) {
      DAT_005882c0 = DAT_005882c0 + 0x1000;
    }
    param_6 = (short *)((&DAT_005882c0)[uVar30] | 0xa00000);
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    (&DAT_005882c0)[uVar30] = (int)param_6;
    goto LAB_00042ccc;
  case (undefined *)0x43558:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    if (((*(char *)(iVar39 + 0x3e) == '\x03') || (*(char *)(iVar39 + 0x3e) == '\a')) &&
       (*(char *)(iVar39 + 0x2d) != '\x0f')) {
      ac = uVar3 & 0xfffffff8 | (uint)(GameMode == MODE_NAMELOAD) << 1;
      if ((((byte)(ac >> 1) & 1) != 1) &&
         ((ac = uVar3 & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
                (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL),
          ((byte)ac & 1 | MODE_CHARSEL < GameMode) == 1 ||
          (ac = uVar3 & 0xfffffff8 | (uint)(1 < g_effective_demo_sound) << 2 |
                (uint)(g_effective_demo_sound == '\x01') << 1 |
                (uint)(g_effective_demo_sound == '\0'),
          ((byte)ac & 1 | 1 < g_effective_demo_sound) != 1)))) {
        DVar31 = (&DAT_005882c8)[uVar30 ^ 1];
        auVar18._8_4_ = 0x435ac;
        auVar18._0_8_ = auVar14._0_8_;
        auVar18._12_52_ = auVar15._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar18;
        auVar13._8_56_ = auVar18._8_56_;
        auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
        auVar13._0_4_ = fp;
        Sound_Request(DVar31);
        fp = iVar29 + 0x3fU & 0xffffffc0;
      }
      param_6 = (short *)(uint)DAT_0056adea;
      cVar4 = (&DAT_0056ade8)[uVar30];
      (&DAT_0056ade8)[uVar30] = (&DAT_0056ade8)[uVar30] + '\x01';
      param_7 = (short *)(int)(char)(&DAT_0056ade8)[uVar30];
      param_8 = (&DAT_005882c8)[uVar30 ^ 1];
      uVar3 = ac & 0xfffffff8 | (uint)((int)param_7 < 5) << 2;
      ac = uVar3 | (uint)(param_7 == (short *)((int)&DWORD_00000004 + 1)) << 1;
      *(int *)(uVar30 * 60000 + (int)param_6 * 200 + 0x56ae10 + cVar4 * 4) = param_8;
      bVar2 = (byte)(ac >> 1) & 1 | (byte)(uVar3 >> 2) & 1;
    }
    else {
      ac = uVar3 & 0xfffffff8 | (uint)(GameMode == MODE_NAMELOAD) << 1;
      if ((((byte)(ac >> 1) & 1) != 1) &&
         ((ac = uVar3 & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
                (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL),
          ((byte)ac & 1 | MODE_CHARSEL < GameMode) == 1 ||
          (ac = uVar3 & 0xfffffff8 | (uint)(1 < g_effective_demo_sound) << 2 |
                (uint)(g_effective_demo_sound == '\x01') << 1 |
                (uint)(g_effective_demo_sound == '\0'),
          ((byte)ac & 1 | 1 < g_effective_demo_sound) != 1)))) {
        DVar31 = (&DAT_005882c0)[uVar30 ^ 1];
        auVar19._8_4_ = 0x43648;
        auVar19._0_8_ = auVar14._0_8_;
        auVar19._12_52_ = auVar15._12_52_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar19;
        auVar13._8_56_ = auVar19._8_56_;
        auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
        auVar13._0_4_ = fp;
        Sound_Request(DVar31);
        fp = iVar29 + 0x3fU & 0xffffffc0;
      }
      param_6 = (short *)(uint)DAT_0056adea;
      cVar4 = (&DAT_0056ade8)[uVar30];
      (&DAT_0056ade8)[uVar30] = (&DAT_0056ade8)[uVar30] + '\x01';
      param_7 = (short *)(int)(char)(&DAT_0056ade8)[uVar30];
      param_8 = (&DAT_005882c0)[uVar30 ^ 1];
      uVar3 = ac & 0xfffffff8 | (uint)((int)param_7 < 5) << 2;
      ac = uVar3 | (uint)(param_7 == (short *)((int)&DWORD_00000004 + 1)) << 1;
      *(int *)(uVar30 * 60000 + (int)param_6 * 200 + 0x56ae10 + cVar4 * 4) = param_8;
      bVar2 = (byte)(ac >> 1) & 1 | (byte)(uVar3 >> 2) & 1;
    }
    goto joined_r0x000436b0;
  case (undefined *)0x436b8:
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(undefined1 **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (undefined1 *)(iVar38 + 2);
    *(undefined1 *)(iVar39 + 0x3b) = *(undefined1 *)(iVar38 + 2);
    break;
  case (undefined *)0x436d8:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (short *)(iVar39 + 2);
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(int *)(&DAT_00565d48 + uVar30 * 4) = (int)*(short *)(iVar39 + 2);
    goto LAB_00043df0;
  case (undefined *)0x43704:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (short *)(iVar39 + 2);
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(int *)(&DAT_00565d48 + uVar30 * 4) = -(int)*(short *)(iVar39 + 2);
    goto LAB_00043df0;
  case (undefined *)0x43734:
    uVar3 = uVar3 & 0xfffffff8 | (uint)((short)(&DAT_00550144)[uVar30] < 1) << 2;
    ac = uVar3 | 1 < (short)(&DAT_00550144)[uVar30];
    psVar37 = (short *)(*(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = psVar37;
    if (((byte)ac & 1 | (byte)(uVar3 >> 2) & 1) == 1) {
      param_6 = (short *)(int)(float10)(int)*psVar37;
      pcVar34 = (char *)(*(int *)(iVar39 + 0x18) - (int)param_6);
    }
    else {
      param_6 = *(short **)(iVar39 + 0x18);
      pcVar34 = (char *)((int)(float10)(int)*psVar37 + (int)param_6);
    }
    param_8 = 0x40768000;
    param_7 = (short *)0x0;
    *(char **)(iVar39 + 0x18) = pcVar34;
    break;
  case (undefined *)0x437e4:
    uVar3 = uVar3 & 0xfffffff8 | (uint)((short)(&DAT_00550144)[uVar30] < 1) << 2;
    ac = uVar3 | 1 < (short)(&DAT_00550144)[uVar30];
    psVar37 = (short *)(*(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = psVar37;
    if (((byte)ac & 1 | (byte)(uVar3 >> 2) & 1) == 1) {
      param_6 = (short *)(int)(float10)(int)*psVar37;
      pcVar34 = (char *)(*(int *)(iVar39 + 0x1c) - (int)param_6);
    }
    else {
      param_6 = *(short **)(iVar39 + 0x1c);
      pcVar34 = (char *)((int)(float10)(int)*psVar37 + (int)param_6);
    }
    param_8 = 0x40768000;
    param_7 = (short *)0x0;
    *(char **)(iVar39 + 0x1c) = pcVar34;
    break;
  case (undefined *)0x43894:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    param_6 = (short *)(iVar39 + 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6;
    (&DAT_0056ac10)[uVar30] = *(undefined2 *)(iVar39 + 2);
    goto LAB_00042ccc;
  case (undefined *)0x438b8:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac68)[uVar30] = 1;
    goto LAB_00043f7c;
  case (undefined *)0x438d0:
    *(byte *)(iVar39 + 0x4a) = (byte)g14;
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac68)[uVar30] = (byte)g14;
    goto LAB_00043cf4;
  case (undefined *)0x438e8:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_005882d0)[uVar30] = 1;
    goto LAB_00043cf4;
  case (undefined *)0x43900:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (short *)(iVar39 + 2);
    uVar3 = uVar3 & 0xfffffff8 | (uint)((int)uVar30 < 0) << 2;
    ac = uVar3 | 0 < (int)uVar30;
    (&DAT_005882c8)[uVar30] = (int)*(short *)(iVar39 + 2) | 0xa00000;
    if (((byte)ac & 1 | (byte)(uVar3 >> 2) & 1) != 1) {
      DAT_005882c8 = DAT_005882c8 + 0x1000;
    }
    break;
  case (undefined *)0x43950:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    param_7 = (short *)(iVar39 + 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_7;
    uVar6 = *(ushort *)(iVar39 + 2);
    param_8 = (int)(short)uVar6;
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar39 + 6;
    uVar7 = uVar3 & 0xfffffff8 | (uint)(2 < param_8) << 2;
    ac = uVar7 | param_8 < 2;
    param_6 = (short *)(int)*param_7;
    uVar36 = (undefined1)*param_7;
    if (((byte)ac & 1 | (byte)(uVar7 >> 2) & 1) == 1) {
      ac = uVar3 & 0xfffffff8 | (uint)((&DAT_00550144)[uVar30] == -1) << 1;
      if (((byte)(ac >> 1) & 1) == 1) {
        (&DAT_005882d4)[uVar30 * 2 + (int)(short)(uVar6 ^ 1)] = uVar36;
      }
      else {
        (&DAT_005882d4)[uVar30 * 2 + param_8] = uVar36;
      }
    }
    else {
      (&DAT_005882d4)[uVar30 * 2] = uVar36;
      (&DAT_005882d5)[uVar30 * 2] = uVar36;
    }
    goto LAB_00042ccc;
  case (undefined *)0x439d0:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    param_6 = (short *)(iVar39 + 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6;
    (&DAT_005882d8)[uVar30] = *(undefined1 *)(iVar39 + 2);
    goto LAB_00042ccc;
  case (undefined *)0x439f4:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (short *)(iVar39 + 2);
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(int *)(&DAT_00565d40 + uVar30 * 4) = (int)*(short *)(iVar39 + 2);
    goto LAB_00043df0;
  case (undefined *)0x43a20:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (short *)(iVar39 + 2);
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(int *)(&DAT_00565d40 + uVar30 * 4) = -(int)*(short *)(iVar39 + 2);
    goto LAB_00043df0;
  case (undefined *)0x43a50:
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (short *)(iVar38 + 2);
    param_7 = (short *)0x0;
    param_8 = 0x40768000;
    param_6 = *(short **)(iVar39 + 0x14);
    *(char **)(iVar39 + 0x14) = (char *)((int)(float10)(int)*(short *)(iVar38 + 2) + (int)param_6);
    break;
  case (undefined *)0x43aac:
    param_6 = (short *)(int)(short)(&DAT_00550144)[uVar30];
    param_7 = (short *)0xffffffff;
    uVar3 = uVar3 & 0xfffffff8 | (uint)((int)param_6 < -1) << 2;
    ac = uVar3 | -1 < (int)param_6;
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    if (((byte)ac & 1 | (byte)(uVar3 >> 2) & 1) == 1) {
      (&DAT_00550144)[uVar30] = 0xffff;
    }
    else {
      (&DAT_00550144)[uVar30] = 1;
      param_7 = (short *)0xffffffff;
    }
    goto LAB_00042ccc;
  case (undefined *)0x43af0:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(ushort **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (ushort *)(iVar39 + 2);
    uVar6 = *(ushort *)(iVar39 + 2);
    auVar20._8_4_ = 0x43b10;
    auVar20._0_8_ = auVar14._0_8_;
    auVar20._12_52_ = auVar15._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar20;
    auVar13._8_56_ = auVar20._8_56_;
    auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
    auVar13._0_4_ = fp;
    FUN_0004cdd0(uVar30,(uint)uVar6);
    fp = iVar29 + 0x3fU & 0xffffffc0;
    break;
  case (undefined *)0x43b14:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    param_6 = (short *)(iVar39 + 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6;
    DAT_005555ad = *(undefined1 *)(iVar39 + 2);
    goto LAB_00042ccc;
  case (undefined *)0x43b38:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    param_6 = (short *)(iVar39 + 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6;
    uVar5 = *(undefined2 *)(iVar39 + 2);
    (&DAT_0056adb8)[uVar30] = 1;
    (&DAT_0056ac34)[uVar30] = uVar5;
    goto LAB_00042ccc;
  case (undefined *)0x43b68:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(ushort **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (ushort *)(iVar39 + 2);
    uVar6 = *(ushort *)(iVar39 + 2);
    auVar21._8_4_ = 0x43b88;
    auVar21._0_8_ = auVar14._0_8_;
    auVar21._12_52_ = auVar15._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar21;
    auVar13._8_56_ = auVar21._8_56_;
    auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
    auVar13._0_4_ = fp;
    FUN_0004cbf0(uVar30,(uint)uVar6);
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac60)[uVar30] = 1;
    (&DAT_00565e40)[uVar30] = 1;
    fp = iVar29 + 0x3fU & 0xffffffc0;
    goto LAB_00043cf4;
  case (undefined *)0x43ba8:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    param_6 = (short *)(iVar39 + 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6;
    (&DAT_005882e0)[uVar30] = (int)*(short *)(iVar39 + 2);
    goto LAB_00042ccc;
  case (undefined *)0x43bcc:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    *(undefined1 *)(iVar39 + 0x35) = 2;
    (&DAT_0056ac30)[uVar30] = 1;
    goto LAB_00042ccc;
  case (undefined *)0x43bf8:
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    (&DAT_0056ac30)[uVar30] = (byte)g14;
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar38 + 2;
    *(byte *)(iVar39 + 0x35) = (byte)g14;
    goto LAB_00042ccc;
  case (undefined *)0x43c1c:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    param_6 = (short *)(iVar39 + 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6;
    (&DAT_0056adc8)[uVar30] = (int)*(short *)(iVar39 + 2);
    goto LAB_00042ccc;
  case (undefined *)0x43c40:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    param_6 = (short *)0x40240000;
    goto LAB_00043c9c;
  case (undefined *)0x43c70:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    param_6 = (short *)0xc0240000;
LAB_00043c9c:
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) =
         *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) + 2;
    (&DAT_005882e8)[uVar30] = param_6;
    goto LAB_00042ccc;
  case (undefined *)0x43ccc:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(ushort **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (ushort *)(iVar39 + 2);
    uVar6 = *(ushort *)(iVar39 + 2);
    auVar22._8_4_ = 0x43cec;
    auVar22._0_8_ = auVar14._0_8_;
    auVar22._12_52_ = auVar15._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar22;
    auVar13._8_56_ = auVar22._8_56_;
    auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
    auVar13._0_4_ = fp;
    FUN_0004d750(uVar30,(uint)uVar6);
    fp = iVar29 + 0x3fU & 0xffffffc0;
    break;
  case (undefined *)0x43d04:
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar38 + 4;
    DVar31 = (&SE_PTR_000c6c90)[(uint)*(byte *)(iVar39 + 1) * 3 + (int)*(short *)(iVar38 + 2)];
    if (uVar30 != 0) {
      DVar31 = DVar31 + 0x1000;
    }
    auVar13._20_4_ = DVar31;
    ac = uVar3 & 0xfffffff8 | (uint)(GameMode == MODE_NAMELOAD) << 1;
    if ((((byte)(ac >> 1) & 1) != 1) &&
       ((ac = uVar3 & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
              (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL),
        ((byte)ac & 1 | MODE_CHARSEL < GameMode) == 1 ||
        (ac = uVar3 & 0xfffffff8 | (uint)(1 < g_effective_demo_sound) << 2 |
              (uint)(g_effective_demo_sound == '\x01') << 1 | (uint)(g_effective_demo_sound == '\0')
        , ((byte)ac & 1 | 1 < g_effective_demo_sound) != 1)))) {
      auVar23._12_52_ = auVar13._12_52_;
      auVar23._8_4_ = 0x43d64;
      auVar23._0_8_ = auVar14._0_8_;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar23;
      auVar13._8_56_ = auVar23._8_56_;
      auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
      auVar13._0_4_ = fp;
      Sound_Request(DVar31);
      fp = iVar29 + 0x3fU & 0xffffffc0;
    }
    param_6 = (short *)(uint)DAT_0056adea;
    cVar4 = (&DAT_0056ade8)[uVar30];
    (&DAT_0056ade8)[uVar30] = (&DAT_0056ade8)[uVar30] + '\x01';
    param_8 = (int)(char)(&DAT_0056ade8)[uVar30];
    uVar3 = ac & 0xfffffff8 | (uint)(param_8 < 5) << 2;
    ac = uVar3 | (uint)(param_8 == 5) << 1;
    *(DOA_SOUND_COMMAND *)(uVar30 * 60000 + ((int)param_6 * 100 + cVar4 * 2 + 0x2b5708) * 2) =
         DVar31;
    bVar2 = (byte)(ac >> 1) & 1 | (byte)(uVar3 >> 2) & 1;
joined_r0x00043f50:
    param_7 = (short *)(uVar30 * 60000);
    goto joined_r0x000436b0;
  case (undefined *)0x43dc8:
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = (short *)(iVar39 + 2);
    iVar38 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(int *)(&DAT_00565d58 + uVar30 * 4) = (int)*(short *)(iVar39 + 2);
LAB_00043df0:
    param_6 = (short *)(iVar38 + 2);
    *(short **)(&g_actionScriptCursorByPlayer + uVar30 * 4) = param_6;
    goto LAB_00042ccc;
  case (undefined *)0x43e00:
    goto switchD_00042cf8_caseD_43e00;
  case (undefined *)0x43e80:
    ac = uVar3 & 0xfffffff8 | (uint)((&g_player1)[uVar30].character_id < CHAR_RYU);
    if (((byte)ac & 1 | CHAR_RYU < (&g_player1)[uVar30].character_id) != 1) {
      iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
      *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar39 + 4;
      DVar31 = (int)*(short *)(iVar39 + 2) | 0xa00000;
      if (uVar30 != 0) {
        DVar31 = DVar31 + 0x1000;
      }
      auVar13._20_4_ = DVar31;
      ac = uVar3 & 0xfffffff8 | (uint)(GameMode == MODE_NAMELOAD) << 1;
      if ((((byte)(ac >> 1) & 1) != 1) &&
         ((ac = uVar3 & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
                (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL),
          ((byte)ac & 1 | MODE_CHARSEL < GameMode) == 1 ||
          (ac = uVar3 & 0xfffffff8 | (uint)(1 < g_effective_demo_sound) << 2 |
                (uint)(g_effective_demo_sound == '\x01') << 1 |
                (uint)(g_effective_demo_sound == '\0'),
          ((byte)ac & 1 | 1 < g_effective_demo_sound) != 1)))) {
        auVar24._12_52_ = auVar13._12_52_;
        auVar24._8_4_ = 0x43ef4;
        auVar24._0_8_ = auVar14._0_8_;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar24;
        auVar13._8_56_ = auVar24._8_56_;
        auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
        auVar13._0_4_ = fp;
        Sound_Request(DVar31);
        fp = iVar29 + 0x3fU & 0xffffffc0;
      }
      param_6 = (short *)(uint)DAT_0056adea;
      cVar4 = (&DAT_0056ade8)[uVar30];
      (&DAT_0056ade8)[uVar30] = (&DAT_0056ade8)[uVar30] + '\x01';
      param_8 = (int)(char)(&DAT_0056ade8)[uVar30];
      uVar3 = ac & 0xfffffff8 | (uint)(param_8 < 5) << 2;
      ac = uVar3 | (uint)(param_8 == 5) << 1;
      *(DOA_SOUND_COMMAND *)(uVar30 * 60000 + ((int)param_6 * 100 + cVar4 * 2 + 0x2b5708) * 2) =
           DVar31;
      bVar2 = (byte)(ac >> 1) & 1 | (byte)(uVar3 >> 2) & 1;
      goto joined_r0x00043f50;
    }
    goto switchD_00042cf8_caseD_43f74;
  case (undefined *)0x43f58:
    ac = uVar3 & 0xfffffff8 | (uint)((&g_player1)[uVar30].character_id == CHAR_RAIDOU) << 1;
    if (((byte)(ac >> 1) & 1) != 1) goto switchD_00042cf8_caseD_43f74;
    iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
    *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar39 + 4;
    DVar31 = (int)*(short *)(iVar39 + 2) | 0xa00000;
    if (uVar30 != 0) {
      DVar31 = DVar31 + 0x1000;
    }
    auVar13._20_4_ = DVar31;
    ac = uVar3 & 0xfffffff8 | (uint)(GameMode == MODE_NAMELOAD) << 1;
    if ((((byte)(ac >> 1) & 1) != 1) &&
       ((ac = uVar3 & 0xfffffff8 | (uint)(MODE_CHARSEL < GameMode) << 2 |
              (uint)(GameMode == MODE_CHARSEL) << 1 | (uint)(GameMode < MODE_CHARSEL),
        ((byte)ac & 1 | MODE_CHARSEL < GameMode) == 1 ||
        (ac = uVar3 & 0xfffffff8 | (uint)(1 < g_effective_demo_sound) << 2 |
              (uint)(g_effective_demo_sound == '\x01') << 1 | (uint)(g_effective_demo_sound == '\0')
        , ((byte)ac & 1 | 1 < g_effective_demo_sound) != 1)))) {
      auVar25._12_52_ = auVar13._12_52_;
      auVar25._8_4_ = 0x43fe4;
      auVar25._0_8_ = auVar14._0_8_;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar25;
      auVar13._8_56_ = auVar25._8_56_;
      auVar13._4_4_ = (iVar29 + 0x3fU & 0xffffffc0) + 0x40;
      auVar13._0_4_ = fp;
      Sound_Request(DVar31);
      fp = iVar29 + 0x3fU & 0xffffffc0;
    }
    param_6 = (short *)(uint)DAT_0056adea;
    cVar4 = (&DAT_0056ade8)[uVar30];
    (&DAT_0056ade8)[uVar30] = (&DAT_0056ade8)[uVar30] + '\x01';
    param_7 = (short *)(uVar30 * 60000);
    param_8 = (int)(char)(&DAT_0056ade8)[uVar30];
    uVar3 = ac & 0xfffffff8 | (uint)(param_8 < 5) << 2;
    ac = uVar3 | (uint)(param_8 == 5) << 1;
    *(DOA_SOUND_COMMAND *)(param_7 + (int)param_6 * 100 + cVar4 * 2 + 0x2b5708) = DVar31;
    bVar2 = (byte)(ac >> 1) & 1 | (byte)(uVar3 >> 2) & 1;
joined_r0x000436b0:
    if (bVar2 != 1) {
      (&DAT_0056ade8)[uVar30] = 5;
    }
    goto LAB_00042ccc;
  case (undefined *)0x43f74:
    goto switchD_00042cf8_caseD_43f74;
  case (undefined *)0x44054:
    fp = uVar32;
    return;
  case (undefined *)0x44058:
    goto switchD_00042cf8_caseD_44058;
  }
  iVar39 = *(int *)(&g_actionScriptCursorByPlayer + auVar13._16_4_ * 4);
LAB_00043cf4:
  *(int *)(&g_actionScriptCursorByPlayer + auVar13._16_4_ * 4) = iVar39 + 2;
  goto LAB_00042ccc;
switchD_00042cf8_caseD_43e00:
  iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
  *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar39 + 4;
  param_8 = (int)*(short *)(iVar39 + 2);
  param_6 = (short *)(&DWORD_000c56d0)[param_8];
  (&DAT_005882b8)[uVar30] = 1;
  *(short **)(&DAT_005882f0 + uVar30 * 4) = param_6;
  ac = uVar3 & 0xfffffff8 | (uint)((char)*param_6 == -1) << 1;
  if (((byte)(ac >> 1) & 1) != 1) {
    *(char **)(&DAT_005882f0 + uVar30 * 4) = (char *)((int)param_6 + 1);
    param_7 = *(short **)(&DAT_005882f0 + uVar30 * 4);
    sVar10 = *param_6;
    param_6 = (short *)((int)param_7 + 1);
    *(short **)(&DAT_005882f0 + uVar30 * 4) = param_6;
    (&DAT_005882bc)[uVar30] = (short)(char)sVar10;
    (&DAT_005882f8)[uVar30] = (char)*param_7;
  }
  goto LAB_00042ccc;
switchD_00042cf8_caseD_43f74:
  iVar39 = *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4);
LAB_00043f7c:
  *(int *)(&g_actionScriptCursorByPlayer + uVar30 * 4) = iVar39 + 4;
  goto LAB_00042ccc;
}

