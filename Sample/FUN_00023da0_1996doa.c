
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00023da0(uint param_1)

{
  uint uVar1;
  undefined1 (*pauVar2) [64];
  uint uVar3;
  byte bVar4;
  DOA_ACTCODE_COMMON DVar5;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  uint8_t action_code;
  char cVar23;
  DOA_ACTSTATE DVar24;
  bool bVar25;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar9 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar7 [64];
  undefined1 auVar22 [60];
  int iVar26;
  
  auVar6._8_4_ = unaff_retaddr;
  auVar6._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar6._12_52_ = in_register_0000000c;
  auVar7._24_40_ = in_register_0000000c._12_40_;
  auVar7._0_20_ = auVar6._0_20_;
  auVar7._20_4_ = param_1;
  auVar8._20_44_ = auVar7._20_44_;
  auVar8._0_16_ = auVar6._0_16_;
  auVar8._16_4_ = &g_player1 + param_1;
  action_code = 0xff;
  uVar1 = ac & 0xfffffff8;
  if ((byte)((&g_player1)[param_1].action_state - 0x2_JUMPATTACK) < 2) {
    bVar4 = (&DAT_00557f84)[param_1];
    ac = ac & 0xfffffff8 | (uint)(1 < bVar4) << 2 | (uint)(bVar4 == 1) << 1 | (uint)(bVar4 == 0);
    uVar1 = ac;
    if (((byte)ac & 1 | 1 < bVar4) != 1) {
      auVar9._12_52_ = auVar8._12_52_;
      auVar9._8_4_ = 0x23de8;
      auVar9._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
      auVar8._8_56_ = auVar9._8_56_;
      auVar8._4_4_ = auStack_40;
      auVar8._0_4_ = fp;
      action_code = FUN_00025470(param_1);
      fp = (undefined1 (*) [64])register0x00000004;
      uVar1 = ac;
    }
  }
  ac = uVar1;
  ac = ac & 0xfffffff8 | (uint)(action_code != 0xff) << 2 | (uint)(action_code == 0xff) << 1;
  auVar10._0_8_ = auVar8._0_8_;
  auVar10._12_52_ = auVar8._12_52_;
  if (((byte)(ac >> 1) & 1) == 1) {
    uVar1 = auVar8._4_4_ + 0x3f;
    uVar3 = uVar1 & 0xffffffc0;
    auVar12._8_4_ = 0x23e0c;
    auVar12._0_8_ = auVar10._0_8_;
    auVar12._12_52_ = auVar10._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
    auVar11._8_56_ = auVar12._8_56_;
    auVar11._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
    cVar23 = Player_SelectActionEndTransition(param_1);
    ac = ac & 0xfffffff8 | (uint)(cVar23 != '\0') << 2 | (uint)(cVar23 == '\0') << 1;
    auVar14._0_8_ = auVar11._0_8_;
    auVar14._12_52_ = auVar11._12_52_;
    if (cVar23 != '\0') {
      (&g_player1)[param_1].action_flag = g14;
      auVar16._8_4_ = 0x23e34;
      auVar16._0_8_ = auVar14._0_8_;
      auVar16._12_52_ = auVar14._12_52_;
      *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar16;
      auVar15._4_56_ = auVar16._8_56_;
      auVar15._0_4_ = uVar3 + 0x80;
      auVar15._60_4_ = 0;
      auVar15 = auVar15 << 0x20;
      DVar24 = FUN_00024310(param_1);
      auVar22 = auVar15._4_60_;
    }
    else {
      (&g_player1)[param_1].action_flag = g14;
      auVar14._8_4_ = 0x23e24;
      *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar14;
      auVar13._4_56_ = auVar14._8_56_;
      auVar13._0_4_ = uVar3 + 0x80;
      auVar13._60_4_ = 0;
      auVar13 = auVar13 << 0x20;
      DVar24 = Player_GetCurrentActionRecordState(param_1);
      auVar22 = auVar13._4_60_;
    }
    fp = (undefined1 (*) [64])(uVar3 + 0x40);
    auVar17._4_60_ = auVar22;
    auVar17._0_4_ = uVar3;
    (&g_player1)[param_1].action_state = DVar24;
    (&g_player1)[param_1].action_request = 0xff;
    (&g_player1)[param_1].animation_flag = g14;
    (&g_player1)[param_1].animation_request = '\x01';
  }
  else {
    (&g_player1)[param_1].animation_flag = g14;
    pauVar2 = (undefined1 (*) [64])(auVar8._4_4_ + 0x3fU & 0xffffffc0);
    auVar10._8_4_ = 0x23e00;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
    auVar17._8_56_ = auVar10._8_56_;
    auVar17._4_4_ = pauVar2 + 1;
    auVar17._0_4_ = fp;
    Player_SetActCode(action_code,param_1);
    fp = pauVar2;
  }
  uVar1 = ac;
  DVar24 = (&g_player1)[param_1].action_state;
  ac = ac & 0xfffffff8 | (uint)(0xC_GROUNDED < DVar24) << 2 | (uint)(DVar24 == 0xC_GROUNDED) << 1 |
       (uint)(DVar24 < 0xC_GROUNDED);
  if (((byte)ac & 1 | 0xC_GROUNDED < DVar24) != 1) {
    DVar5 = (&g_player1)[param_1].action_code;
    ac = uVar1 & 0xfffffff8 | (uint)(DVar5 < 0x33) << 2 | (uint)(DVar5 == 0x33) << 1 |
         (uint)(0x33 < DVar5);
    auVar19._0_8_ = auVar17._0_8_;
    auVar19._12_52_ = auVar17._12_52_;
    if (((byte)ac & 1 | DVar5 < 0x33) == 1) {
      (&g_player1)[param_1].down_state = g14;
      auVar21._8_4_ = 0x23e84;
      auVar21._0_8_ = auVar19._0_8_;
      auVar21._12_52_ = auVar19._12_52_;
      *fp = auVar21;
      auVar20._4_56_ = auVar21._8_56_;
      auVar20._0_4_ = (auVar17._4_4_ + 0x3fU & 0xffffffc0) + 0x40;
      auVar20._60_4_ = 0;
      auVar20 = auVar20 << 0x20;
      bVar25 = FUN_00025790(param_1);
      auVar22 = auVar20._4_60_;
      iVar26 = CONCAT31(extraout_var_00,bVar25);
      ac = ac & 0xfffffff8 | (uint)(1 < iVar26) << 2 | (uint)(iVar26 == 1) << 1 | (uint)(iVar26 < 1)
      ;
      bVar4 = (byte)ac & 1 | 1 < iVar26;
    }
    else {
      (&g_player1)[param_1].down_state = '\x01';
      auVar19._8_4_ = 0x23e70;
      *fp = auVar19;
      auVar18._4_56_ = auVar19._8_56_;
      auVar18._0_4_ = (auVar17._4_4_ + 0x3fU & 0xffffffc0) + 0x40;
      auVar18._60_4_ = 0;
      auVar18 = auVar18 << 0x20;
      bVar25 = FUN_00025790(param_1);
      auVar22 = auVar18._4_60_;
      iVar26 = CONCAT31(extraout_var,bVar25);
      uVar1 = ac & 0xfffffff8 | (uint)(1 < iVar26) << 2 | (uint)(iVar26 == 1) << 1;
      ac = uVar1 | iVar26 < 1;
      bVar4 = (byte)(uVar1 >> 1) & 1;
    }
    if (bVar4 != 1) {
      (&g_player1)[param_1].down_direction = g14;
      return;
    }
    auVar17._4_60_ = auVar22;
    auVar17._0_4_ = fp;
    (&g_player1)[param_1].down_direction = '\x01';
  }
  fp = (undefined1 (*) [64])auVar17._0_4_;
  return;
}

