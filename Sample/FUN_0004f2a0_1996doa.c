
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void UndefinedFunction_0004f2a0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined1 in_register_00000014 [44];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined4 uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [999808];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  
  auVar4._8_4_ = unaff_retaddr;
  auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar4._12_4_ = unaff_r3;
  auVar4._16_4_ = unaff_r4;
  auVar4._20_44_ = in_register_00000014;
  uVar24 = (uint)g_debug_anime_mode;
  ac = ac & 0xfffffff8 | (uint)(2 < uVar24) << 2 | (uint)(uVar24 == 2) << 1 | (uint)(uVar24 < 2);
  if (((byte)ac & 1 | 2 < uVar24) != 1) {
    auVar6._12_52_ = auVar4._12_52_;
    auVar6._8_4_ = 0x4f2b8;
    auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
    auVar5._8_56_ = auVar6._8_56_;
    auVar5._4_4_ = auStackX_0;
    auVar5._0_4_ = fp;
    Debug_SetTextPosition(2,0x29);
    auStackX_0._12_52_ = auVar5._12_52_;
    auStackX_0._0_8_ = auVar5._0_8_;
    auStackX_0._8_4_ = 0x4f2cc;
    auVar7._8_56_ = auStackX_0._8_56_;
    auVar7._4_4_ = auStack_40;
    auVar7._0_4_ = auStackX_0;
    FUN_0008e740(s_1P_COUNT____3d_0004f220,DAT_00589f68,param_3,param_4,uVar24,param_6,param_7,
                 param_8,param_9,param_10,param_11,param_12);
    fp = auStack_80;
    auStack_40._12_52_ = auVar7._12_52_;
    auStack_40._0_8_ = auVar7._0_8_;
    auStack_40._8_4_ = 0x4f2e0;
    auVar4._8_56_ = auStack_40._8_56_;
    auVar4._4_4_ = auStack_c0;
    auVar4._0_4_ = auStack_40;
    FUN_0008e740(s_2P_COUNT____3d_0004f230,DAT_00589f6c,param_3,param_4,uVar24,param_6,param_7,
                 param_8,param_9,param_10,param_11,param_12);
  }
  iVar26 = DAT_00589f6c;
  iVar25 = DAT_00589f68;
  if (DAT_00589f64 == '\x01') {
    if (g_player1.action_cancel == '\x01') {
      param_4 = 0xfff;
      DAT_00589f70 = 0xfff;
    }
    if (g_player2.action_cancel == '\x01') {
      param_4 = 0xfff;
      DAT_00589f74 = 0xfff;
    }
  }
  uVar24 = ac & 0xfffffff8 | (uint)(g_player1.animation_id == 0xfff) << 1;
  auVar14 = auVar4;
  if (((byte)(uVar24 >> 1) & 1) != 1) {
    ac = ac & 0xfffffff8;
    uVar24 = ac;
    if (g_player1.action_state != STATE_NEUTRAL) goto LAB_0004f3f4;
  }
  ac = uVar24;
  uVar24 = ac & 0xfffffff8 | (uint)(g_player2.animation_id == 0xfff) << 1;
  if (((byte)(uVar24 >> 1) & 1) != 1) {
    ac = ac & 0xfffffff8;
    uVar24 = ac;
    if (g_player2.action_state != STATE_NEUTRAL) goto LAB_0004f3f4;
  }
  ac = uVar24;
  uVar1 = ac;
  uVar27 = (uint)g_debug_anime_mode;
  uVar24 = ac & 0xfffffff8 | (uint)(uVar27 < 2) << 2;
  ac = uVar24 | (uint)(uVar27 == 2) << 1 | (uint)(2 < uVar27);
  auVar14._20_44_ = auVar4._20_44_;
  auVar14._0_16_ = auVar4._0_16_;
  auVar14._16_4_ = DAT_00589f68 - DAT_00589f6c;
  auVar9._0_8_ = auVar4._0_8_;
  auVar9._12_52_ = auVar14._12_52_;
  if (((byte)ac & 1 | (byte)(uVar24 >> 2) & 1) == 1) {
    ac = uVar1 & 0xfffffff8 | (uint)(1 < uVar27) << 2 | (uint)(uVar27 == 1) << 1 |
         (uint)(uVar27 == 0);
    if (((byte)ac & 1 | 1 < uVar27) != 1) {
      uVar24 = auVar4._4_4_ + 0x3f;
      uVar1 = uVar24 & 0xffffffc0;
      auVar17._8_4_ = 0x4f3c8;
      auVar17._0_8_ = auVar9._0_8_;
      auVar17._12_52_ = auVar9._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
      auVar16._8_56_ = auVar17._8_56_;
      auVar16._0_8_ = CONCAT44(uVar24,fp) & 0xffffffc0ffffffff;
      Debug_SetTextPosition(1,0x2b);
      auVar19._12_52_ = auVar16._12_52_;
      auVar19._0_8_ = auVar16._0_8_;
      auVar19._8_4_ = 0x4f3d8;
      *(undefined1 (*) [64])(uVar24 & 0xffffffc0) = auVar19;
      auVar18._8_56_ = auVar19._8_56_;
      auVar18._0_8_ = CONCAT44(uVar1 + 0x40,uVar24) & 0xffffffffffffffc0;
      FUN_0008e740(s_K__4d_0004f298,auVar14._16_4_,param_3,param_4,iVar25,iVar26,uVar27,param_8,
                   param_9,param_10,param_11,param_12);
      auVar21._12_52_ = auVar18._12_52_;
      auVar21._0_8_ = auVar18._0_8_;
      auVar21._8_4_ = 0x4f3e4;
      *(undefined1 (*) [64])(uVar1 + 0x40) = auVar21;
      auVar20._8_56_ = auVar21._8_56_;
      auVar20._4_4_ = uVar1 + 0x80;
      auVar20._0_4_ = uVar1 + 0x40;
      Debug_SetTextPosition(0x34,0x2b);
      iVar2 = -auVar14._16_4_;
      auVar22._12_52_ = auVar20._12_52_;
      auVar22._0_8_ = auVar20._0_8_;
      auVar22._8_4_ = 0x4f3f4;
      *(undefined1 (*) [64])(uVar1 + 0x80) = auVar22;
      auVar14._8_56_ = auVar22._8_56_;
      auVar14._4_4_ = 0;
      auVar14._0_4_ = uVar1 + 0x80;
      FUN_0008e740(s_K__4d_0004f298,iVar2,param_3,param_4,iVar25,iVar26,uVar27,param_8,param_9,
                   param_10,param_11,param_12);
    }
  }
  else {
    uVar23 = 0x2b;
    uVar24 = auVar4._4_4_ + 0x3f;
    uVar1 = uVar24 & 0xffffffc0;
    auVar9._8_4_ = 0x4f378;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
    auVar8._8_56_ = auVar9._8_56_;
    auVar8._0_8_ = CONCAT44(uVar24,fp) & 0xffffffc0ffffffff;
    Debug_SetTextPosition(2,0x2b);
    auVar11._12_52_ = auVar8._12_52_;
    auVar11._0_8_ = auVar8._0_8_;
    auVar11._8_4_ = 0x4f384;
    *(undefined1 (*) [64])(uVar24 & 0xffffffc0) = auVar11;
    auVar10._8_56_ = auVar11._8_56_;
    auVar10._0_8_ = CONCAT44(uVar1 + 0x40,uVar24) & 0xffffffffffffffc0;
    FUN_0008e740(s_______KOUTYOKU_______0004f240,uVar23,param_3,param_4,iVar25,iVar26,uVar27,param_8
                 ,param_9,param_10,param_11,param_12);
    iVar2 = DAT_00589f68;
    auVar13._12_52_ = auVar10._12_52_;
    auVar13._0_8_ = auVar10._0_8_;
    auVar13._8_4_ = 0x4f39c;
    *(undefined1 (*) [64])(uVar1 + 0x40) = auVar13;
    auVar12._8_56_ = auVar13._8_56_;
    auVar12._4_4_ = uVar1 + 0x80;
    auVar12._0_4_ = uVar1 + 0x40;
    FUN_0008e740(s_1P____3d___>__5d_0004f260,iVar2,auVar14._16_4_,param_4,iVar25,iVar26,uVar27,
                 param_8,param_9,param_10,param_11,param_12);
    iVar3 = DAT_00589f6c;
    iVar2 = -auVar14._16_4_;
    auVar15._12_52_ = auVar12._12_52_;
    auVar15._0_8_ = auVar12._0_8_;
    auVar15._8_4_ = 0x4f3b4;
    *(undefined1 (*) [64])(uVar1 + 0x80) = auVar15;
    auVar14._8_56_ = auVar15._8_56_;
    auVar14._4_4_ = 0;
    auVar14._0_4_ = uVar1 + 0x80;
    FUN_0008e740(s_2P____3d___>__5d_0004f280,iVar3,iVar2,param_4,iVar25,iVar26,uVar27,param_8,
                 param_9,param_10,param_11,param_12);
  }
LAB_0004f3f4:
  uVar24 = ac & 0xfffffff8 | (uint)(g_player1.action_state != STATE_NEUTRAL) << 2 |
           (uint)(g_player1.action_state == STATE_NEUTRAL) << 1;
  if (g_player1.action_state == STATE_NEUTRAL) {
    uVar24 = ac & 0xfffffff8 | (uint)(g_player2.action_state != STATE_NEUTRAL) << 2 |
             (uint)(g_player2.action_state == STATE_NEUTRAL) << 1;
    if (g_player2.action_state == STATE_NEUTRAL) {
      DAT_00589f64 = g14;
    }
  }
  ac = uVar24;
  fp = (undefined1 *)auVar14._0_4_;
  return;
}

