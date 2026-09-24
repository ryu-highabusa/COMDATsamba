
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0004b5e0(int param_1)

{
  uint uVar1;
  char *pcVar2;
  DOA_ACTSTATE DVar3;
  undefined8 uVar4;
  undefined1 auVar5 [60];
  uint uVar6;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  byte bVar12;
  undefined *puVar13;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar11 [56];
  
  uVar6 = ac;
  uVar4 = CONCAT44(auStackX_0,unaff_pfp);
  auVar7._8_4_ = unaff_retaddr;
  auVar7._0_8_ = uVar4;
  auVar7._12_52_ = in_register_0000000c;
  DVar3 = (&g_player1)[param_1].action_state;
  uVar1 = ac & 0xfffffff8 | (uint)(DVar3 == STATE_HITSTUN) << 1;
  ac = uVar1 | DVar3 == STATE_CRITICALSTUN;
  auVar10._20_44_ = in_register_0000000c._8_44_;
  auVar10._0_16_ = auVar7._0_16_;
  auVar10._16_4_ = param_1;
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    uVar1 = uVar6 & 0xfffffff8 | (uint)(DVar3 == STATE_HOLDCAUGHT) << 1;
    ac = uVar1 | DVar3 == STATE_THROWCAUGHT;
    if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
      ac = uVar6 & 0xfffffff8 | (uint)(DVar3 == STATE_DOWNATTACKSTUN) << 1;
      if (((byte)(ac >> 1) & 1) != 1) {
        ac = uVar6 & 0xfffffff8 | (uint)(STATE_SPECIALMOVE < DVar3) << 2 |
             (uint)(DVar3 == STATE_SPECIALMOVE) << 1 | (uint)(DVar3 < STATE_SPECIALMOVE);
        if (((byte)ac & 1 | STATE_SPECIALMOVE < DVar3) == 1) goto LAB_0004b704;
        bVar12 = (&g_player1)[param_1].action_code - 0x34;
        ac = uVar6 & 0xfffffff8 | (uint)(0xb < bVar12) << 2 | (uint)(bVar12 == 0xb) << 1 |
             (uint)(bVar12 < 0xb);
        if (0xb < bVar12) goto LAB_0004b704;
      }
    }
  }
  ac = ac & 0xfffffff8 | (uint)(0 < param_1) << 2 | (uint)(param_1 == 0) << 1 | (uint)(param_1 < 0);
  auVar8._12_52_ = auVar10._12_52_;
  if (((byte)ac & 1 | 0 < param_1) == 1) {
    auVar9._8_4_ = 0x4b690;
    auVar9._0_8_ = uVar4;
    auVar9._12_52_ = auVar8._12_52_;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar9;
    auVar11 = auVar9._8_56_;
    Sound_Request(SE_CANCEL_2P);
    *(undefined4 *)
     (param_1 * 60000 + (uint)DAT_0056adea * 200 + 0x56ae10 + (&DAT_0056ade8)[param_1] * 4) =
         0xa01601;
  }
  else {
    auVar8._8_4_ = 0x4b648;
    auVar8._0_8_ = uVar4;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar8;
    auVar11 = auVar8._8_56_;
    Sound_Request(SE_CANCEL_1P);
    *(undefined4 *)((uint)DAT_0056adea * 200 + 0x56ae10 + DAT_0056ade8 * 4) = 0xa01600;
  }
  auVar5._56_4_ = 0;
  auVar5._0_56_ = auVar11;
  auVar10._4_60_ = auVar5 << 0x20;
  auVar10._0_4_ = fp;
  pcVar2 = &DAT_0056ade8 + param_1;
  puVar13 = (undefined *)((*pcVar2 + 1) * 0x1000000);
  uVar1 = ac & 0xfffffff8 | (uint)(0x5000000 < (int)puVar13) << 2 |
          (uint)(puVar13 == &DAT_05000000) << 1;
  ac = uVar1 | (int)puVar13 < 0x5000000;
  *pcVar2 = (char)(*pcVar2 + 1);
  if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
    *pcVar2 = '\x05';
  }
LAB_0004b704:
  fp = auVar10._0_4_;
  return;
}

