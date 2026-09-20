
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00018280(void)

{
  byte bVar1;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined1 in_register_00000014 [44];
  undefined1 auVar2 [64];
  undefined1 auVar3 [64];
  uint uVar7;
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  uint uVar8;
  uint uVar9;
  DOA_ARCADE_PLAYER *pDVar10;
  DOA_ARCADE_PLAYER *pDVar11;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [999808];
  undefined1 auVar4 [64];
  
  uVar9 = ac;
  auVar2._8_4_ = unaff_retaddr;
  auVar2._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
  auVar2._12_4_ = unaff_r3;
  auVar2._16_4_ = unaff_r4;
  auVar2._20_44_ = in_register_00000014;
  if (GameOverFlag____0054fcb4 != 0) {
    ac = ac & 0xfffffff8 | (uint)(4 < GameOverFlag____0054fcb4) << 2 |
         (uint)(GameOverFlag____0054fcb4 == 4) << 1 | (uint)(GameOverFlag____0054fcb4 < 4);
    if (((byte)ac & 1 | 4 < GameOverFlag____0054fcb4) != 1) {
      auVar4._12_52_ = auVar2._12_52_;
      auVar4._8_4_ = 0x18310;
      auVar4._0_8_ = CONCAT44(auStackX_0,unaff_pfp);
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
      auVar3._8_56_ = auVar4._8_56_;
      auVar3._4_4_ = auStackX_0;
      auVar3._0_4_ = fp;
      uVar8 = FUN_0008e6f0();
      auVar5._20_44_ = auVar3._20_44_;
      auVar5._0_16_ = auVar3._0_16_;
      uVar9 = ac & 0xfffffff8 | (uint)(0 < (int)uVar8) << 2 | (uint)(uVar8 == 0) << 1;
      ac = uVar9 | (int)uVar8 < 0;
      uVar7 = uVar8;
      if (((byte)(uVar9 >> 1) & 1 | 0 < (int)uVar8) != 1) {
        uVar7 = uVar8 + 7;
      }
      auVar5._16_4_ = uVar8 - (uVar7 & 0xfffffff8);
      g_player1.character_id = OrderCharactersVsCOM_00090cb0[auVar5._16_4_ & 0xff];
      fp = &auStack_40;
      auStackX_0._12_52_ = auVar5._12_52_;
      auStackX_0._0_8_ = auVar3._0_8_;
      auStackX_0._8_4_ = 0x18344;
      auVar2._8_56_ = auStackX_0._8_56_;
      auVar2._4_4_ = auStack_80;
      auVar2._0_4_ = auStackX_0;
      uVar9 = FUN_0008e6f0();
      uVar9 = auVar5._16_4_ + (int)uVar9 % (int)uVar9 + 1;
      if (7 < (uVar9 & 0xff)) {
        uVar9 = uVar9 + 0xf8;
      }
      g_player2.character_id = OrderCharactersVsCOM_00090cb0[uVar9 & 0xff];
      bVar1 = (&DAT_00090d80_legalcharactersmaybe__)[g_player1.character_id];
      ac = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 | (uint)(bVar1 == 0);
      if (((byte)ac & 1 | 1 < bVar1) == 1) {
        g_player1.costume_id = g14;
      }
      else {
        auStack_40._12_52_ = auVar2._12_52_;
        auStack_40._0_8_ = auVar2._0_8_;
        auStack_40._8_4_ = 0x18394;
        auVar2._8_56_ = auStack_40._8_56_;
        auVar2._4_4_ = auStack_c0;
        auVar2._0_4_ = fp;
        uVar9 = FUN_0008e6f0();
        g_player1.costume_id = (DOA_U8)(((int)uVar9 % 2 & 0xffU) << 1);
        fp = &auStack_80;
      }
      uVar7 = ac;
      uVar9 = ac & 0xfffffff8 | (uint)(2 < g_player1.costume_id) << 2 |
              (uint)(g_player1.costume_id == '\x02') << 1;
      ac = uVar9 | g_player1.costume_id < 2;
      if (((byte)(uVar9 >> 1) & 1) != 1) {
        bVar1 = (&DAT_00090d80_legalcharactersmaybe__)[g_player2.character_id];
        ac = uVar7 & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 |
             (uint)(bVar1 == 0);
        if (((byte)ac & 1 | 1 < bVar1) != 1) {
          auVar6._12_52_ = auVar2._12_52_;
          auVar6._0_8_ = auVar2._0_8_;
          auVar6._8_4_ = 0x183e8;
          *fp = auVar6;
          uVar9 = FUN_0008e6f0();
          g_player2.costume_id = (char)((int)uVar9 % 2) + '\x01';
          return;
        }
      }
      g_player2.costume_id = '\x01';
    }
    fp = (undefined1 (*) [64])auVar2._0_4_;
    return;
  }
  if (g_player1.controller_type == MAN) {
    pDVar11 = &g_player1;
    pDVar10 = &g_player2;
  }
  else {
    pDVar11 = &g_player2;
    pDVar10 = &g_player1;
  }
  pDVar10->character_id = OrderCharactersVsCOM_00090cb0[DAT_0054fceb];
  uVar7 = ac & 0xfffffff8 | (uint)(pDVar11->costume_id != '\0') << 2 |
          (uint)(pDVar11->costume_id == '\0') << 1;
  if (((byte)(uVar7 >> 1) & 1) != 1) {
    bVar1 = pDVar11->costume_id;
    ac = ac & 0xfffffff8 | (uint)(1 < bVar1) << 2 | (uint)(bVar1 == 1) << 1 | (uint)(bVar1 == 0);
    if (((byte)ac & 1 | 1 < bVar1) == 1) {
      ac = uVar9 & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
           (uint)(g_player1.controller_type == MAN) << 1 | (uint)(g_player1.controller_type == COM);
      uVar7 = ac;
      if (((byte)ac & 1 | MAN < g_player1.controller_type) != 1) goto LAB_000182f4;
    }
    pDVar10->costume_id = g14;
    fp = (undefined1 (*) [64])unaff_pfp;
    return;
  }
LAB_000182f4:
  ac = uVar7;
  pDVar10->costume_id = '\x01';
  fp = (undefined1 (*) [64])unaff_pfp;
  return;
}

