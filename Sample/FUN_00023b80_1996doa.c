
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_00023b80(uint param_1)

{
  bool bVar1;
  uint uVar2;
  DOA_ACTSTATE DVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_pfp;
  undefined1 auVar6 [20];
  undefined1 auVar7 [24];
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  char cVar12;
  byte bVar13;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar11 [64];
  undefined1 auVar9 [64];
  
  uVar4 = ac;
  auVar8._8_4_ = unaff_retaddr;
  auVar8._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar8._12_52_ = in_register_0000000c;
  auVar6._0_16_ = auVar8._0_16_;
  auVar6._16_4_ = &g_player1 + param_1;
  auVar9._24_40_ = in_register_0000000c._12_40_;
  auVar7._20_4_ = 0;
  auVar7._0_20_ = auVar6;
  auVar9._0_24_ = auVar7;
  bVar13 = (&g_player1)[param_1].mount_state - 2;
  uVar2 = ac & 0xfffffff8 | (uint)(1 < bVar13) << 2 | (uint)(bVar13 == 1) << 1;
  ac = uVar2 | (&g_player1)[param_1].mount_state == '\x02';
  uVar5 = ac;
  if (((byte)ac & 1 | (byte)(uVar2 >> 1) & 1) != 1) {
    bVar13 = (&g_player1)[param_1].upside_down_head;
    uVar2 = uVar4 & 0xfffffff8 | (uint)(1 < bVar13) << 2 | (uint)(bVar13 == 1) << 1;
    ac = uVar2 | bVar13 == 0;
    uVar5 = ac;
    if (((byte)(uVar2 >> 1) & 1) != 1) {
      if ((byte)((&g_player1)[param_1].action_state - 0x1_JUMP) < 2) {
        bVar13 = (&g_player1)[param_1].jump_state - 1;
        bVar1 = 1 < bVar13;
        ac = uVar4 & 0xfffffff8 | (uint)bVar1 << 2 | (uint)(bVar13 == 1) << 1 |
             (uint)((&g_player1)[param_1].jump_state == '\x01');
      }
      else {
        if ((&g_player1)[param_1].action_state != 0xE_DOWNATTACK) {
          DVar3 = (&g_player1)[param_1].action_state;
          ac = uVar4 & 0xfffffff8 | (uint)(0x9_HITSTUN < DVar3) << 2 |
               (uint)(DVar3 == 0x9_HITSTUN) << 1 | (uint)(DVar3 < 0x9_HITSTUN);
          if (((byte)ac & 1 | 0x9_HITSTUN < DVar3) == 1) {
            DVar3 = (&g_player1)[param_1].action_state;
            ac = uVar4 & 0xfffffff8 | (uint)(0xD_SPECIALMOVE < DVar3) << 2 |
                 (uint)(DVar3 == 0xD_SPECIALMOVE) << 1 | (uint)(DVar3 < 0xD_SPECIALMOVE);
            if (((byte)ac & 1 | 0xD_SPECIALMOVE < DVar3) == 1) goto LAB_00023c50;
            bVar13 = (&g_player1)[param_1].action_code - 0x34;
            ac = uVar4 & 0xfffffff8 | (uint)(0xb < bVar13) << 2 | (uint)(bVar13 == 0xb) << 1 |
                 (uint)(bVar13 < 0xb);
            uVar5 = ac;
            if (0xb < bVar13) goto LAB_00023c50;
          }
          else {
            auVar11._12_52_ = auVar9._12_52_;
            auVar11._8_4_ = 0x23c0c;
            auVar11._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
            *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar11;
            auVar10._8_56_ = auVar11._8_56_;
            auVar10._4_4_ = auStack_40;
            auVar10._0_4_ = fp;
            cVar12 = FUN_000256f0(param_1);
            auVar6 = auVar10._0_20_;
            auVar7 = auVar10._0_24_;
            uVar5 = ac & 0xfffffff8 | (uint)(cVar12 != -1) << 2 | (uint)(cVar12 == -1) << 1;
            if (cVar12 == -1) {
              bVar13 = (&g_player1)[param_1].action_code + CMD_LO_F_JMP_SYNC_P;
              ac = ac & 0xfffffff8 | (uint)(0x16 < bVar13) << 2 | (uint)(bVar13 == 0x16) << 1 |
                   (uint)(bVar13 < 0x16);
              uVar5 = ac;
              if (0x16 < bVar13) goto LAB_00023c50;
            }
          }
          goto LAB_00023c4c;
        }
        bVar13 = (&g_player1)[param_1].jump_state - 1;
        bVar1 = 1 < bVar13;
        ac = uVar4 & 0xfffffff8 | (uint)bVar1 << 2 | (uint)(bVar13 == 1) << 1 |
             (uint)((&g_player1)[param_1].jump_state == '\x01');
      }
      uVar5 = ac;
      if (bVar1) goto LAB_00023c50;
    }
  }
LAB_00023c4c:
  ac = uVar5;
  auVar7._20_4_ = 1;
  auVar7._0_20_ = auVar6;
LAB_00023c50:
  fp = auVar7._0_4_;
  return auVar7._20_4_;
}

