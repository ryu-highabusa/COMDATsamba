
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Motion_ResetPlayerScriptState_candidate
               (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,short *param_6,short *param_7,int param_8,undefined4 param_9,
               undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  uint uVar2;
  DOA_ACTCODE_COMMON DVar3;
  DOA1_CHARACTER_ID DVar4;
  byte bVar5;
  ushort uVar6;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  int iVar16;
  undefined1 in_register_0000000c [52];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  int iVar17;
  short sVar18;
  undefined4 extraout_g1;
  undefined4 extraout_g1_00;
  undefined4 uVar19;
  ushort uVar20;
  uint uVar21;
  short sVar22;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [999744];
  undefined1 auVar12 [64];
  undefined1 auVar15 [64];
  undefined1 auVar8 [64];
  
  uVar2 = ac;
  auVar7._8_4_ = unaff_retaddr;
  auVar7._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar7._12_52_ = in_register_0000000c;
  auVar8._28_36_ = in_register_0000000c._16_36_;
  auVar8._0_24_ = auVar7._0_24_;
  auVar8._24_4_ = param_1 * 2;
  auVar9._36_28_ = in_register_0000000c._24_28_;
  auVar9._0_32_ = auVar8._0_32_;
  auVar9._32_4_ = param_1 << 1;
  auVar10._0_16_ = auVar7._0_16_;
  auVar10._16_4_ = param_1;
  auVar10._24_40_ = auVar9._24_40_;
  auVar10._20_4_ = &g_player1 + param_1;
  uVar21 = (uint)(&g_player1)[param_1].animation_request;
  uVar19 = 0xffffffff;
  (&g_motion_command_decode_pending_candidate)[param_1] = (uint8_t)g14;
  (&DAT_0056adb8)[param_1] = (uint8_t)g14;
  (&g_motion_next_command_frame_P1_candidate)[param_1] = 0xffff;
  uVar1 = ac & 0xfffffff8 | (uint)(uVar21 == 0) << 2 | (uint)(uVar21 == 1) << 1;
  ac = uVar1 | 1 < uVar21;
  auVar11._32_32_ = auVar9._32_32_;
  auVar11._0_28_ = auVar10._0_28_;
  auVar11._28_4_ = 0;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    uVar21 = (uint)(char)(&DAT_0056ac46)[param_1];
    ac = uVar2 & 0xfffffff8 | (uint)(1 < (int)uVar21) << 2 | (uint)(uVar21 == 1) << 1 |
         (uint)((int)uVar21 < 1);
    if (((byte)ac & 1 | 1 < (int)uVar21) == 1) goto LAB_00042af0;
  }
  auVar12._12_52_ = auVar11._12_52_;
  auVar12._8_4_ = 0x429a0;
  auVar12._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
  auVar11._8_56_ = auVar12._8_56_;
  auVar11._4_4_ = auStack_40;
  auVar11._0_4_ = fp;
  ClearPlayerTransientActionFlags
            (param_1,param_2,param_3,0xffffffff,uVar21,param_6,(uint)param_7,param_8,param_9,
             param_10,param_11,param_12);
  uVar21 = (uint)GameMode;
  ac = ac & 0xfffffff8 | (uint)(uVar21 != 0) << 2 | (uint)(uVar21 == 0) << 1;
  (&DAT_0056ac34)[param_1] = (undefined2)g14;
  param_2 = extraout_g1;
  fp = (undefined1 *)register0x00000004;
  if (((byte)(ac >> 1) & 1) == 1) goto LAB_00042af0;
  auStackX_0._12_52_ = auVar11._12_52_;
  auStackX_0._0_8_ = auVar11._0_8_;
  auStackX_0._8_4_ = 0x429c0;
  auVar13._8_56_ = auStackX_0._8_56_;
  auVar13._4_4_ = auStack_40;
  auVar13._0_4_ = auStackX_0;
  iVar17 = FUN_000447c0(param_1);
  uVar1 = ac;
  sVar18 = (short)iVar17;
  param_7 = (short *)(int)sVar18;
  if (param_7 != (short *)0x0) {
    sVar22 = (&DAT_0056ac94)[param_1];
    param_6 = (short *)(int)sVar22;
    (&DAT_0056ac94)[param_1] = sVar18;
    (&DAT_0056ac44)[param_1] = 2;
    uVar19 = 1;
    (&DAT_0056adb8)[param_1] = 1;
    (&DAT_0056adc0)[param_1] = param_7;
    *(undefined4 *)(&DAT_0056adb0 + param_1 * 4) = g14;
    (&DAT_0056ada0)[param_1] = sVar22;
  }
  if ((&g_player1)[param_1].animation_flag == '\x03') {
    if ((&DAT_0056ac30)[param_1] == '\x02') {
      auVar13._28_4_ = 1;
    }
  }
  uVar21 = (uint)(&g_player1)[param_1].action_state;
  (&g_player1)[param_1].animation_flag = (uint8_t)g14;
  ac = ac & 0xfffffff8 | (uint)(uVar21 == 0) << 1 | (uint)(uVar21 != 0);
  (&DAT_0056ac30)[param_1] = (uint8_t)g14;
  if (((byte)ac & 1) != 1) {
    uVar21 = (uint)(&g_player1)[param_1].action_code;
    ac = uVar1 & 0xfffffff8 | (uint)(uVar21 == 0) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      ac = uVar1 & 0xfffffff8 | (uint)(10 < uVar21) << 2 | (uint)(uVar21 == 10) << 1 |
           (uint)(uVar21 < 10);
      if (((byte)ac & 1 | 10 < uVar21) == 1) goto LAB_00042a58;
    }
    uVar21 = (&DAT_0056ac78)[param_1];
    ac = ac & 0xfffffff8 | (uint)(1 < (int)uVar21) << 2 | (uint)(uVar21 == 1) << 1 |
         (uint)((int)uVar21 < 1);
    if (((byte)ac & 1 | 1 < (int)uVar21) != 1) {
      sVar18 = 7;
    }
  }
LAB_00042a58:
  (&DAT_0056ac34)[param_1] = sVar18;
  auStack_40._12_52_ = auVar13._12_52_;
  auStack_40._0_8_ = auVar13._0_8_;
  auStack_40._8_4_ = 0x42a68;
  auVar11._8_56_ = auStack_40._8_56_;
  auVar11._4_4_ = auStack_c0;
  auVar11._0_4_ = auStack_40;
  iVar17 = FUN_0004bc30(param_1);
  uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar17) << 2 | (uint)(iVar17 == 0) << 1;
  ac = uVar1 | iVar17 < 0;
  fp = auStack_80;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    DVar3 = (&g_player1)[param_1].action_code;
    DVar4 = (&g_player1)[param_1].character_id;
    (&DAT_0056ac34)[param_1] = 3;
    (&DAT_0056ada0)[param_1] = (&DAT_0056ac94)[param_1];
    fp = auStack_c0;
    auStack_80._12_52_ = auVar11._12_52_;
    auStack_80._0_8_ = auVar11._0_8_;
    auStack_80._8_4_ = 0x42a94;
    auVar11._8_56_ = auStack_80._8_56_;
    auVar11._4_4_ = auStack_100;
    auVar11._0_4_ = auStack_80;
    Action_LoadCachedMotionMetadata((uint)DVar3,(uint)DVar4);
    param_6 = (short *)(uint)DAT_00555602;
    param_7 = &DAT_0056ac94 + param_1;
    ac = ac & 0xfffffff8 | (uint)(param_6 == (short *)0x0) << 1 | (uint)(param_6 != (short *)0x0);
    if (((byte)ac & 1) != 1) {
      param_6 = (short *)((int)&DWORD_00000000 + 1);
    }
    (&DAT_0056ac44)[param_1] = 2;
    uVar19 = DAT_00555604;
    *param_7 = (short)param_6;
    uVar21 = (uint)(short)param_6;
    (&DAT_0056adc0)[param_1] = uVar21;
    *(undefined4 *)(&DAT_0056adb0 + param_1 * 4) = uVar19;
    uVar19 = 1;
    (&DAT_0056adb8)[param_1] = 1;
    param_2 = extraout_g1_00;
  }
LAB_00042af0:
  auVar15._12_52_ = auVar11._12_52_;
  auVar15._0_8_ = auVar11._0_8_;
  auVar15._8_4_ = 0x42af8;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
  auVar14._8_56_ = auVar15._8_56_;
  auVar14._4_4_ = (auVar11._4_4_ + 0x3fU & 0xffffffc0) + 0x40;
  auVar14._0_4_ = fp;
  InterpretCharacterActionScript_candidate
            (param_1,param_2,param_3,uVar19,uVar21,param_6,param_7,param_8,param_9,param_10,param_11
             ,param_12);
  uVar1 = ac & 0xfffffff8 | (uint)(GameMode != MODE_LOAD) << 2 | (uint)(GameMode == MODE_LOAD) << 1;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    uVar21 = ac & 0xfffffff8;
    iVar17 = auVar14._16_4_;
    if ((&g_player1)[param_1].cancel_use == '\x01') {
      (&DAT_0056adc8)[param_1] = 3;
      iVar16 = (&DAT_0056adc8)[param_1];
      uVar19 = (&DAT_0056add0)[iVar17];
      uVar20 = *(ushort *)(&DAT_0056adc8 + iVar17);
      (&DAT_0056adc0)[iVar17] = (int)(short)(&DAT_0056ac94)[iVar17];
      uVar6 = *(ushort *)(&DAT_0056adc0 + iVar17);
      (&DAT_0056ac34)[iVar17] = (short)(uVar20 + 1);
      uVar1 = (int)(float10)iVar16 + -1 + (uint)uVar6;
      sVar18 = (short)uVar1;
      (&DAT_0056add8)[iVar17] = (int)((uVar20 + 1) * 0x10000) >> 0x10;
      if ((uVar1 & 0xffff) == 0) {
        sVar18 = 1;
      }
      (&DAT_0056ac44)[iVar17] = 1;
      (&DAT_0056adb8)[iVar17] = 1;
      (&DAT_0056ac94)[iVar17] = sVar18;
      (&DAT_0056ade0)[iVar17] = uVar19;
    }
    iVar16 = auVar14._28_4_;
    uVar2 = uVar21 | (uint)(0 < iVar16) << 2 | (uint)(iVar16 == 0) << 1;
    ac = uVar2 | iVar16 < 0;
    uVar1 = ac;
    if (((byte)(uVar2 >> 1) & 1) != 1) {
      iVar16 = (&DAT_0056adc8)[iVar17];
      bVar5 = *(byte *)(&DAT_0056ac6c + iVar17);
      uVar20 = (ushort)bVar5;
      (&DAT_0056ac6c)[iVar17] = 1;
      *(byte *)(auVar14._20_4_ + 0x34) = bVar5;
      if (iVar16 == 0) {
        sVar18 = 0;
      }
      else {
        uVar20 = *(ushort *)(&DAT_0056adc8 + iVar17);
        sVar18 = uVar20 + 1;
      }
      (&DAT_0056adc0)[iVar17] = (int)(short)(&DAT_0056ac94)[iVar17];
      uVar1 = (int)(float10)uVar20 + -1 + (uint)*(ushort *)(&DAT_0056adc0 + iVar17);
      sVar22 = (short)uVar1;
      iVar16 = (int)sVar18;
      (&DAT_0056add8)[iVar17] = iVar16;
      if ((uVar1 & 0xffff) == 0) {
        sVar22 = 1;
      }
      uVar21 = uVar21 | (uint)(iVar16 < 0) << 2 | (uint)(iVar16 == 0) << 1;
      ac = uVar21 | 0 < iVar16;
      (&DAT_0056ac94)[iVar17] = sVar22;
      *(short *)((int)&DAT_0056ac34 + auVar14._32_4_) = sVar18;
      uVar1 = ac;
      if (((byte)(uVar21 >> 1) & 1) != 1) {
        (&DAT_0056ade0)[iVar17] = (&DAT_0056add0)[iVar17];
        (&DAT_0056ac44)[iVar17] = 1;
        (&DAT_0056adb8)[iVar17] = 1;
      }
    }
  }
  ac = uVar1;
  fp = (undefined1 *)auVar14._0_4_;
  return;
}

