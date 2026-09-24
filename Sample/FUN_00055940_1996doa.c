
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00055940(void)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [64];
  undefined1 auStack_140 [999680];
  undefined1 auVar5 [64];
  undefined1 auVar11 [64];
  
  uVar2 = ac;
  uVar1 = CONCAT44(auStackX_0,unaff_pfp);
  auVar3._8_4_ = unaff_retaddr;
  auVar3._0_8_ = uVar1;
  auVar3._12_52_ = in_register_0000000c;
  ac = ac & 0xfffffff8 | (uint)('\x01' < DAT_00589de0) << 2 | (uint)(DAT_00589de0 == '\x01') << 1 |
       (uint)(DAT_00589de0 < '\x01');
  if (((byte)ac & 1 | '\x01' < DAT_00589de0) != 1) {
    auVar5._8_4_ = 0x55950;
    auVar5._0_8_ = uVar1;
    auVar5._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
    auVar4._8_56_ = auVar5._8_56_;
    auVar4._4_4_ = auStackX_0;
    auVar4._0_4_ = fp;
    MotionRuntime_ResetState();
    auStackX_0._12_52_ = auVar4._12_52_;
    auStackX_0._0_8_ = auVar4._0_8_;
    auStackX_0._8_4_ = 0x55958;
    auVar6._8_56_ = auStackX_0._8_56_;
    auVar6._4_4_ = auStack_40;
    auVar6._0_4_ = auStackX_0;
    FUN_00055730(0);
    auStack_40._12_52_ = auVar6._12_52_;
    auStack_40._0_8_ = auVar6._0_8_;
    auStack_40._8_4_ = 0x55960;
    auVar7._8_56_ = auStack_40._8_56_;
    auVar7._4_4_ = auStack_80;
    auVar7._0_4_ = auStack_40;
    FUN_00055730(1);
    auStack_80._12_52_ = auVar7._12_52_;
    auStack_80._0_8_ = auVar7._0_8_;
    auStack_80._8_4_ = 0x55970;
    auVar8._8_56_ = auStack_80._8_56_;
    auVar8._4_4_ = auStack_c0;
    auVar8._0_4_ = auStack_80;
    FUN_000419b0_kasumicostumecheckmaybe(0,(uint)g_player1.character_id);
    auStack_c0._12_52_ = auVar8._12_52_;
    auStack_c0._0_8_ = auVar8._0_8_;
    auStack_c0._8_4_ = 0x55980;
    auVar9._8_56_ = auStack_c0._8_56_;
    auVar9._4_4_ = auStack_100;
    auVar9._0_4_ = auStack_c0;
    FUN_000419b0_kasumicostumecheckmaybe(1,(uint)g_player2.character_id);
    auStack_100._12_52_ = auVar9._12_52_;
    auStack_100._0_8_ = auVar9._0_8_;
    auStack_100._8_4_ = 0x55990;
    Player_InitSecondaryMotionParts((uint)g_player1.character_id,0);
    Player_InitSecondaryMotionParts((uint)g_player2.character_id,1);
    DAT_00589de0 = '\x02';
    fp = auStack_140;
    return;
  }
  ac = uVar2 & 0xfffffff8 | (uint)('\x02' < DAT_00589de0) << 2 | (uint)(DAT_00589de0 == '\x02') << 1
       | (uint)(DAT_00589de0 < '\x02');
  if (((byte)ac & 1 | '\x02' < DAT_00589de0) != 1) {
    ac = uVar2 & 0xfffffff8 | (uint)(DAT_005555dd != '\0') << 2 | (uint)(DAT_005555dd == '\0') << 1;
    if (DAT_005555dd == '\0') {
      auVar11._8_4_ = 0x559c8;
      auVar11._0_8_ = uVar1;
      auVar11._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
      auVar10._8_56_ = auVar11._8_56_;
      auVar10._4_4_ = auStackX_0;
      auVar10._0_4_ = fp;
      FUN_0004f9e0(0);
      fp = auStack_40;
      auStackX_0._12_52_ = auVar10._12_52_;
      auStackX_0._0_8_ = auVar10._0_8_;
      auStackX_0._8_4_ = 0x559d0;
      auVar3._8_56_ = auStackX_0._8_56_;
      auVar3._4_4_ = auStack_80;
      auVar3._0_4_ = auStackX_0;
      FUN_0004f9e0(1);
    }
    DAT_00588f20 = 0;
    DAT_00588f24 = 0;
    DAT_00588f28 = 0;
    DAT_00588f2c = 0;
    DAT_00588f30 = 0;
    DAT_00588f34 = 0;
    auVar12._12_52_ = auVar3._12_52_;
    auVar12._0_8_ = auVar3._0_8_;
    auVar12._8_4_ = 0x55a08;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
    auVar3._8_56_ = auVar12._8_56_;
    auVar3._4_4_ = (undefined1 *)0x0;
    auVar3._0_4_ = fp;
    Sound_Request(SE_CANCEL_SERI);
    DAT_00589de0 = g14;
  }
  fp = (undefined1 *)auVar3._0_4_;
  return;
}

