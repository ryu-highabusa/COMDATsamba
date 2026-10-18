
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000213b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  DOA_ACTSTATE DVar4;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar5 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  byte bVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar6 [64];
  
  uVar21 = ac;
  auVar5._8_4_ = unaff_retaddr;
  auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar5._12_52_ = in_register_0000000c;
  auVar6._24_40_ = in_register_0000000c._12_40_;
  auVar6._0_20_ = auVar5._0_20_;
  auVar6._20_4_ = param_1;
  auVar7._32_32_ = in_register_0000000c._20_32_;
  auVar7._0_28_ = auVar6._0_28_;
  auVar7._28_4_ = param_1 ^ 1;
  auVar8._20_44_ = auVar7._20_44_;
  auVar8._0_16_ = auVar5._0_16_;
  auVar8._16_4_ = &g_player1 + param_1;
  auVar9._28_36_ = auVar7._28_36_;
  auVar9._0_24_ = auVar8._0_24_;
  auVar9._24_4_ = &g_player1 + auVar7._28_4_;
  bVar18 = (&g_player1)[param_1].animation_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar18) << 2 | (uint)(bVar18 == 1) << 1 | (uint)(bVar18 == 0);
  if (((byte)ac & 1 | 1 < bVar18) != 1) {
    bVar18 = (&g_player1)[param_1].action_code + CMD_NML_UP_F_LK;
    uVar1 = uVar21 & 0xfffffff8 | (uint)(7 < bVar18) << 2 | (uint)(bVar18 == 7) << 1;
    ac = uVar1 | bVar18 < 7;
    if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
      (&g_player1)[param_1].animation_flag = g14._0_1_;
      DVar4 = (&g_player1)[param_1].action_state;
      ac = uVar21 & 0xfffffff8 | (uint)(0xD_SPECIALMOVE < DVar4) << 2 |
           (uint)(DVar4 == 0xD_SPECIALMOVE) << 1 | (uint)(DVar4 < 0xD_SPECIALMOVE);
      if (((byte)ac & 1 | 0xD_SPECIALMOVE < DVar4) != 1) {
        bVar18 = (&g_player1)[param_1].action_code - 0x34;
        ac = uVar21 & 0xfffffff8 | (uint)(0xb < bVar18) << 2 | (uint)(bVar18 == 0xb) << 1 |
             (uint)(bVar18 < 0xb);
        if (0xb >= bVar18) {
          (&g_player1)[param_1].y_position = g14;
        }
      }
      auVar10._12_52_ = auVar9._12_52_;
      auVar10._8_4_ = 0x2142c;
      auVar10._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
      auVar9._8_56_ = auVar10._8_56_;
      auVar9._4_4_ = auStack_40;
      auVar9._0_4_ = fp;
      FUN_00023da0(param_1);
      fp = (undefined1 *)register0x00000004;
    }
  }
  bVar18 = (&g_player1)[auVar7._28_4_].action_request;
  uVar1 = auVar9._4_4_ + 0x3f;
  uVar3 = uVar1 & 0xffffffc0;
  auVar12._12_52_ = auVar9._12_52_;
  auVar12._0_8_ = auVar9._0_8_;
  auVar12._8_4_ = 0x21438;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
  auVar11._8_56_ = auVar12._8_56_;
  auVar11._4_4_ = uVar3 + 0x40;
  auVar11._0_4_ = fp;
  bVar18 = Player_GetActionStateForCode((uint)bVar18,auVar7._28_4_);
  uVar2 = ac;
  uVar20 = (uint)(&g_player1)[param_1].action_request;
  uVar21 = ac & 0xfffffff8 | (uint)(uVar20 < 0xff) << 2 | (uint)(uVar20 == 0xff) << 1;
  ac = uVar21 | 0xff < uVar20;
  if (((byte)(uVar21 >> 1) & 1) == 1) {
    ac = uVar2 & 0xfffffff8 | (uint)((&g_player1)[auVar7._28_4_].action_request != 0xff) << 2 |
         (uint)((&g_player1)[auVar7._28_4_].action_request == 0xff) << 1;
    if (((byte)(ac >> 1) & 1) != 1) {
      DVar4 = (&g_player1)[auVar7._28_4_].action_state;
      uVar21 = uVar2 & 0xfffffff8 | (uint)(0xA_THROWCAUGHT < DVar4) << 2 |
               (uint)(DVar4 == 0xA_THROWCAUGHT) << 1;
      ac = uVar21 | DVar4 < 0xA_THROWCAUGHT;
      if ((((byte)(uVar21 >> 1) & 1) != 1) &&
         (ac = uVar2 & 0xfffffff8 | (uint)(4 < bVar18) << 2 | (uint)(bVar18 == 4) << 1 |
               (uint)(bVar18 < 4), ((byte)ac & 1 | 4 < bVar18) != 1)) {
LAB_000214c0:
        fp = (undefined1 *)uVar3;
        FUN_00024030(auVar7._28_4_);
        return;
      }
    }
    return;
  }
  uVar21 = uVar3 + 0x40;
  auVar14._12_52_ = auVar11._12_52_;
  auVar14._0_8_ = auVar11._0_8_;
  auVar14._8_4_ = 0x21450;
  *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar14;
  fp = (undefined1 *)uVar21;
  auVar13._8_56_ = auVar14._8_56_;
  auVar13._0_8_ = CONCAT44(uVar3 + 0x80,uVar1) & 0xffffffffffffffc0;
  cVar19 = Player_GetActionStateForCode(uVar20,param_1);
  if (cVar19 != '\x04') {
    bVar18 = (&g_player1)[param_1].animation_flag;
    ac = ac & 0xfffffff8 | (uint)(2 < bVar18) << 2 | (uint)(bVar18 == 2) << 1 | (uint)(bVar18 < 2);
    if (((byte)ac & 1 | 2 < bVar18) == 1) {
      fp = (undefined1 *)uVar3;
      return;
    }
    (&g_player1)[param_1].animation_flag = '\x03';
    Player_SetActCode((&g_player1)[param_1].action_request,param_1);
    return;
  }
  uVar20 = (uint)(&g_player1)[auVar7._28_4_].action_request;
  uVar1 = ac & 0xfffffff8 | (uint)(uVar20 < 0xff) << 2 | (uint)(uVar20 == 0xff) << 1;
  ac = uVar1 | 0xff < uVar20;
  uVar2 = ac;
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    fp = (undefined1 *)(uVar3 + 0x80);
    auVar16._12_52_ = auVar13._12_52_;
    auVar16._0_8_ = auVar13._0_8_;
    auVar16._8_4_ = 0x2146c;
    *(undefined1 (*) [64])(uVar3 + 0x40) = auVar16;
    auVar15._8_56_ = auVar16._8_56_;
    auVar15._4_4_ = uVar3 + 0xc0;
    auVar15._0_4_ = uVar21;
    bVar18 = Player_GetActionStateForCode(uVar20,param_1);
    ac = ac & 0xfffffff8 | (uint)(4 < bVar18) << 2 | (uint)(bVar18 == 4) << 1 | (uint)(bVar18 < 4);
    uVar2 = ac;
    if (((byte)ac & 1 | 4 < bVar18) != 1) {
      fp = (undefined1 *)(uVar3 + 0xc0);
      auVar17._12_52_ = auVar15._12_52_;
      auVar17._0_8_ = auVar15._0_8_;
      auVar17._8_4_ = 0x2147c;
      *(undefined1 (*) [64])(uVar3 + 0x80) = auVar17;
      uVar21 = FUN_0008e6f0();
      uVar2 = ac & 0xfffffff8;
      ac = uVar2 | 2;
      uVar3 = (uint)fp;
      if ((uVar21 & 1) == 0) goto LAB_000214c0;
    }
  }
  ac = uVar2;
  FUN_00024030(param_1);
  return;
}

