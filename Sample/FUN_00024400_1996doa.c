
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1 FUN_00024400(uint param_1)

{
  uint uVar1;
  DOA_ACTSTATE DVar2;
  DOA_COMMON_ACTCODE DVar3;
  uint uVar4;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined *puVar8;
  uint uVar9;
  byte bVar10;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar7 [64];
  
  uVar4 = ac;
  auVar5._8_4_ = unaff_retaddr;
  auVar5._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar5._12_52_ = in_register_0000000c;
  auVar6._20_44_ = in_register_0000000c._8_44_;
  auVar6._0_16_ = auVar5._0_16_;
  auVar6._16_4_ = param_1;
  uVar9 = param_1;
  if ((&g_player1)[param_1].action_flag == '\x01') {
    uVar9 = param_1 ^ 1;
  }
  bVar10 = (&g_player1)[param_1].action_state - STATE_BLOCKSTUN;
  uVar1 = ac & 0xfffffff8 | (uint)(1 < bVar10) << 2 | (uint)(bVar10 == 1) << 1;
  ac = uVar1 | (&g_player1)[param_1].action_state == STATE_BLOCKSTUN;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    DVar2 = (&g_player1)[param_1].action_state;
    uVar1 = uVar4 & 0xfffffff8 | (uint)(STATE_HITSTUN < DVar2) << 2 |
            (uint)(DVar2 == STATE_HITSTUN) << 1;
    ac = uVar1 | DVar2 < STATE_HITSTUN;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      ac = uVar4 & 0xfffffff8 | (uint)(STATE_DOWNATTACKSTUN < DVar2) << 2 |
           (uint)(DVar2 == STATE_DOWNATTACKSTUN) << 1 | (uint)(DVar2 < STATE_DOWNATTACKSTUN);
      if (((byte)ac & 1 | STATE_DOWNATTACKSTUN < DVar2) == 1) {
        bVar10 = g_character_act_record_tables[(&g_player1)[uVar9].character_id]
                 [(uint)(&g_player1)[param_1].action_code * 8 + 2];
        goto LAB_000244dc;
      }
    }
  }
  DVar3 = (&g_player1)[param_1].action_code;
  auVar7._12_52_ = auVar6._12_52_;
  auVar7._8_4_ = 0x2448c;
  auVar7._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar7;
  auVar6._8_56_ = auVar7._8_56_;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = fp;
  puVar8 = FUN_00025680(param_1,uVar9,DVar3);
  bVar10 = puVar8[2];
LAB_000244dc:
  (&g_player1)[param_1].action_code = (&DAT_000956f1)[(uint)bVar10 * 2];
  fp = auVar6._0_4_;
  return (&DAT_000956f0)[(uint)bVar10 * 2];
}

