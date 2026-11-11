
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0002f690(void)

{
  uint uVar1;
  DOA_ACTSTATE DVar2;
  byte bVar3;
  undefined1 auVar4 [20];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined8 in_register_0000000c;
  undefined4 unaff_r5;
  undefined1 in_register_00000018 [40];
  undefined1 auVar6 [64];
  uint uVar11;
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  int iVar12;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar8 [64];
  undefined1 auVar5 [64];
  
  auVar4._4_4_ = auStackX_0;
  auVar4._0_4_ = unaff_pfp;
  auVar4._8_4_ = unaff_retaddr;
  auVar4._12_8_ = in_register_0000000c;
  auVar5._20_4_ = unaff_r5;
  auVar5._0_20_ = auVar4;
  auVar5._24_40_ = in_register_00000018;
  auVar6._20_44_ = auVar5._20_44_;
  auVar6._0_16_ = auVar4._0_16_;
  auVar6._16_4_ = 0;
  do {
    uVar11 = auVar6._16_4_;
    auVar7._24_40_ = auVar6._24_40_;
    auVar7._0_20_ = auVar6._0_20_;
    auVar7._20_4_ = &g_player1 + uVar11;
    uVar1 = ac & 0xfffffff8 | (uint)((&g_player1)[uVar11].action_state == 0x7_BLOCKSTUN) << 1;
    if (((byte)(uVar1 >> 1) & 1) == 1) {
LAB_0002f6c8:
      ac = uVar1;
      uVar1 = ac & 0xfffffff8 | (uint)((&g_player1)[uVar11].action_code == CMD_SIT_REAR_UP_F) << 1;
      if (((byte)(uVar1 >> 1) & 1 | (&g_player1)[uVar11].action_code < CMD_SIT_REAR_UP_F) != 1) {
        DVar2 = (&g_player1)[uVar11].action_state;
        ac = ac & 0xfffffff8 | (uint)(0x8_CRITICALSTUN < DVar2) << 2 |
             (uint)(DVar2 == 0x8_CRITICALSTUN) << 1 | (uint)(DVar2 < 0x8_CRITICALSTUN);
        if (((byte)ac & 1 | 0x8_CRITICALSTUN < DVar2) != 1) {
          uVar1 = auVar6._4_4_ + 0x3fU & 0xffffffc0;
          auVar8._12_52_ = auVar7._12_52_;
          auVar8._0_8_ = auVar6._0_8_;
          auVar8._8_4_ = 0x2f6e4;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar8;
          auVar7._8_56_ = auVar8._8_56_;
          auVar7._4_4_ = uVar1 + 0x40;
          auVar7._0_4_ = fp;
          iVar12 = Player_ActionEndReturnsToStandOrCrouch(uVar11);
          ac = ac & 0xfffffff8 | (uint)(iVar12 == 0) << 1;
          fp = uVar1;
          uVar1 = ac;
          if (((byte)(ac >> 1) & 1) != 1) goto LAB_0002f6e8;
        }
        goto LAB_0002f704;
      }
LAB_0002f6e8:
      ac = uVar1;
      bVar3 = (&g_player1)[uVar11].animation_request;
      ac = ac & 0xfffffff8 | (uint)(1 < bVar3) << 2 | (uint)(bVar3 == 1) << 1 | (uint)(bVar3 == 0);
      if (((byte)ac & 1 | 1 < bVar3) != 1) {
        uVar1 = auVar7._4_4_ + 0x3fU & 0xffffffc0;
        auVar9._12_52_ = auVar7._12_52_;
        auVar9._0_8_ = auVar7._0_8_;
        auVar9._8_4_ = 0x2f6f8;
        *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar9;
        auVar7._8_56_ = auVar9._8_56_;
        auVar7._4_4_ = uVar1 + 0x40;
        auVar7._0_4_ = fp;
        FUN_00032210(uVar11);
        fp = uVar1;
      }
      uVar1 = auVar7._4_4_ + 0x3fU & 0xffffffc0;
      auVar10._12_52_ = auVar7._12_52_;
      auVar10._0_8_ = auVar7._0_8_;
      auVar10._8_4_ = 0x2f700;
      *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar10;
      auVar7._8_56_ = auVar10._8_56_;
      auVar7._4_4_ = uVar1 + 0x40;
      auVar7._0_4_ = fp;
      FUN_00032330(uVar11);
      fp = uVar1;
    }
    else {
      ac = ac & 0xfffffff8;
      uVar1 = ac;
      if ((byte)((&g_player1)[uVar11].action_state - 0x8_CRITICALSTUN) < 2) goto LAB_0002f6c8;
LAB_0002f704:
      (&DAT_005647f8)[uVar11] = g14;
      (&DAT_00564800)[uVar11] = g14;
    }
    auVar6._20_44_ = auVar7._20_44_;
    auVar6._0_16_ = auVar7._0_16_;
    auVar6._16_4_ = uVar11 + 1;
    uVar1 = ac & 0xfffffff8 | (uint)(1 < auVar6._16_4_) << 2 | (uint)(auVar6._16_4_ == 1) << 1;
    ac = uVar1 | auVar6._16_4_ < 1;
    if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
      fp = auVar7._0_4_;
      return;
    }
  } while( true );
}

