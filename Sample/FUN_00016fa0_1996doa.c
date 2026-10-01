
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00016fa0(void)

{
  undefined1 (*pauVar1) [64];
  undefined1 *puVar2;
  DOA1_NAME_ID DVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [20];
  undefined1 auVar7 [40];
  byte bVar8;
  undefined4 unaff_pfp;
  undefined1 auVar9 [20];
  undefined1 auVar10 [20];
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 in_register_00000030 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  undefined1 auVar33 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar40 [64];
  undefined1 auVar42 [64];
  int iVar81;
  undefined1 auVar43 [64];
  undefined1 auVar45 [64];
  undefined1 auVar47 [64];
  undefined1 auVar49 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar54 [64];
  undefined1 auVar56 [64];
  undefined1 auVar58 [64];
  undefined1 auVar60 [64];
  undefined1 auVar62 [64];
  undefined1 auVar63 [64];
  undefined1 auVar65 [64];
  undefined1 auVar67 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [64];
  undefined1 auVar71 [64];
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  undefined1 auVar76 [64];
  undefined1 auVar78 [64];
  undefined1 auVar79 [64];
  uint uVar82;
  int iVar83;
  uint uVar84;
  uint uVar85;
  DOA_U8 *pDVar86;
  uint uVar87;
  DOA_BUTTON_FIGHT DVar88;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_100 [999744];
  undefined1 auVar14 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar25 [64];
  undefined1 auVar27 [64];
  undefined1 auVar30 [64];
  undefined1 auVar32 [64];
  undefined1 auVar34 [64];
  undefined1 auVar39 [64];
  undefined1 auVar41 [64];
  undefined1 auVar44 [64];
  undefined1 auVar46 [64];
  undefined1 auVar48 [64];
  undefined1 auVar50 [64];
  undefined1 auVar55 [64];
  undefined1 auVar53 [64];
  undefined1 auVar57 [64];
  undefined1 auVar59 [64];
  undefined1 auVar61 [64];
  undefined1 auVar64 [64];
  undefined1 auVar66 [64];
  undefined1 auVar72 [64];
  undefined1 auVar75 [64];
  undefined1 auVar77 [64];
  undefined1 auVar80 [64];
  undefined1 auVar68 [64];
  
  uVar82 = ac;
  uVar4 = CONCAT44(auStackX_0,unaff_pfp);
  auVar5._8_4_ = unaff_retaddr;
  auVar5._0_8_ = uVar4;
  auVar5._12_4_ = unaff_r3;
  auVar6._16_4_ = unaff_r4;
  auVar6._0_16_ = auVar5;
  auVar7._20_4_ = unaff_r5;
  auVar7._0_20_ = auVar6;
  auVar7._24_4_ = unaff_r6;
  auVar7._28_4_ = unaff_r7;
  auVar7._32_4_ = unaff_r8;
  auVar7._36_4_ = unaff_r9;
  auVar11._40_4_ = unaff_r10;
  auVar11._0_40_ = auVar7;
  auVar11._44_4_ = unaff_r11;
  auVar11._48_16_ = in_register_00000030;
  ac = ac & 0xfffffff8 | (uint)(5 < DAT_00557c44) << 2 | (uint)(DAT_00557c44 == 5) << 1 |
       (uint)(DAT_00557c44 < 5);
  bVar8 = g14._0_1_;
  switch(DAT_00557c44) {
  case 0:
    auVar12._20_4_ = 0x28;
    auVar12._0_20_ = auVar6;
    auVar12._28_36_ = auVar11._28_36_;
    auVar12._24_4_ = 0x2d;
    ac = uVar82 & 0xfffffff8 | (uint)(4 < GameOverFlag____0054fcb4) << 2 |
         (uint)(GameOverFlag____0054fcb4 == 4) << 1 | (uint)(GameOverFlag____0054fcb4 < 4);
    auVar14._12_52_ = auVar12._12_52_;
    if (((byte)ac & 1 | 4 < GameOverFlag____0054fcb4) == 1) {
      DAT_0054fcfd = g14._0_1_;
      TimeCurrentMatch_Seconds_005555a0 = SettingsUnlistedGameMode_Time_0054fd78;
      TimeCurrentMatch_MilliSeconds_005555a1 = g14._0_1_;
      DAT_005555a8 = g14;
      DAT_005555e3 = g14._0_1_;
      SPRT_DAT = clear;
      FIX_DISP = 1;
      DAT_005555e9 = 1;
      FIX_DISP_LoadFlag = 1;
      auVar18._8_4_ = 0x170e8;
      auVar18._0_8_ = uVar4;
      auVar18._12_52_ = auVar14._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
      auVar17._8_56_ = auVar18._8_56_;
      auVar17._4_4_ = auStack_40;
      auVar17._0_4_ = fp;
      FUN_000185c0();
      uVar82 = ac;
      ac = ac & 0xfffffff8 | (uint)(1 < DAT_005555e4) << 2 | (uint)(DAT_005555e4 == 1) << 1 |
           (uint)(DAT_005555e4 == 0);
      auVar20._0_8_ = auVar17._0_8_;
      auVar20._12_52_ = auVar17._12_52_;
      if (((byte)ac & 1 | 1 < DAT_005555e4) == 1) {
        Camera_Angle = camera_introZoom2;
        fp = &auStack_40;
        auStackX_0._8_4_ = 0x172bc;
        auStackX_0._0_8_ = auVar20._0_8_;
        auStackX_0._12_52_ = auVar20._12_52_;
        auVar51._8_56_ = auStackX_0._8_56_;
        auVar51._4_4_ = auStack_80;
        auVar51._0_4_ = auStackX_0;
        Battle_ResetBothPlayersForRound();
      }
      else {
        DAT_005555dc = g14._0_1_;
        DAT_005555dd = g14._0_1_;
        ac = uVar82 & 0xfffffff8 | (uint)(GameOverFlag____0054fcb4 != 0) << 2 |
             (uint)(GameOverFlag____0054fcb4 == 0) << 1;
        if ((GameOverFlag____0054fcb4 != 0) ||
           (ac = uVar82 & 0xfffffff8 | (uint)(8 < DAT_0054fceb) << 2 |
                 (uint)(DAT_0054fceb == 8) << 1 | (uint)(DAT_0054fceb < 8),
           ((byte)ac & 1 | 8 < DAT_0054fceb) == 1)) {
          Camera_Angle = camera_introZoom1;
          auVar51._20_44_ = auVar17._20_44_;
          auVar51._0_16_ = auVar17._0_16_;
          auVar51._16_4_ = 0x78;
          fp = (undefined1 (*) [64])register0x00000004;
          do {
            iVar81 = auVar51._16_4_;
            uVar82 = auVar51._4_4_ + 0x3f;
            auVar48._12_52_ = auVar51._12_52_;
            auVar48._0_8_ = auVar51._0_8_;
            auVar48._8_4_ = 0x1729c;
            *fp = auVar48;
            auVar47._8_56_ = auVar48._8_56_;
            auVar47._0_8_ = CONCAT44(uVar82,fp) & 0xffffffc0ffffffff;
            FUN_00008250(1);
            fp = (undefined1 (*) [64])((uVar82 & 0xffffffc0) + 0x40);
            auVar50._12_52_ = auVar47._12_52_;
            auVar50._0_8_ = auVar47._0_8_;
            auVar50._8_4_ = 0x172a0;
            *(undefined1 (*) [64])(uVar82 & 0xffffffc0) = auVar50;
            auVar49._8_56_ = auVar50._8_56_;
            auVar49._0_8_ = CONCAT44((uVar82 & 0xffffffc0) + 0x80,uVar82) & 0xffffffffffffffc0;
            FUN_00016e40();
            uVar82 = ac & 0xfffffff8 | (uint)(1 < iVar81) << 2;
            ac = uVar82 | (uint)(iVar81 == 1) << 1 | (uint)(iVar81 < 1);
            auVar51._20_44_ = auVar49._20_44_;
            auVar51._0_16_ = auVar49._0_16_;
            auVar51._16_4_ = iVar81 + -1;
          } while (((byte)ac & 1 | (byte)(uVar82 >> 2) & 1) == 1);
        }
        else {
          Camera_Angle = camera_freezecurrframe;
          auVar20._8_4_ = 0x17130;
          auVar19._8_56_ = auVar20._8_56_;
          auVar19._4_4_ = auStack_40;
          auVar19._0_4_ = auStackX_0;
          auStackX_0 = auVar20;
          FUN_000082f0(6);
          auVar21._20_44_ = auVar19._20_44_;
          auVar21._0_16_ = auVar19._0_16_;
          auVar21._16_4_ = 0x7c;
          ac = ac & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
               (uint)(g_player1.controller_type == MAN) << 1 |
               (uint)(g_player1.controller_type == COM);
          if (((byte)ac & 1 | MAN < g_player1.controller_type) == 1) {
            g_player1.animation_id = 0x162e;
            g_player1.animation_request = '\x01';
          }
          else {
            g_player2.animation_id = 0x162e;
            g_player2.animation_request = '\x01';
          }
          auStack_40._12_52_ = auVar21._12_52_;
          auStack_40._0_8_ = auVar19._0_8_;
          auStack_40._8_4_ = 0x17184;
          auVar22._8_56_ = auStack_40._8_56_;
          auVar22._4_4_ = auStack_80;
          auVar22._0_4_ = auStack_40;
          FUN_00008250(1);
          fp = &auStack_c0;
          auStack_80._12_52_ = auVar22._12_52_;
          auStack_80._0_8_ = auVar22._0_8_;
          auStack_80._8_4_ = 0x17188;
          auVar23._8_56_ = auStack_80._8_56_;
          auVar23._4_4_ = auStack_100;
          auVar23._0_4_ = auStack_80;
          FUN_00016e40();
          g_player1.player_display = g14._0_1_;
          g_player2.player_display = g14._0_1_;
          ac = ac & 0xfffffff8 | 4;
          do {
            iVar81 = auVar23._16_4_;
            uVar82 = auVar23._4_4_ + 0x3f;
            auVar25._12_52_ = auVar23._12_52_;
            auVar25._0_8_ = auVar23._0_8_;
            auVar25._8_4_ = 0x171a4;
            *fp = auVar25;
            auVar24._8_56_ = auVar25._8_56_;
            auVar24._0_8_ = CONCAT44(uVar82,fp) & 0xffffffc0ffffffff;
            FUN_00008250(1);
            fp = (undefined1 (*) [64])((uVar82 & 0xffffffc0) + 0x40);
            auVar27._12_52_ = auVar24._12_52_;
            auVar27._0_8_ = auVar24._0_8_;
            auVar27._8_4_ = 0x171a8;
            *(undefined1 (*) [64])(uVar82 & 0xffffffc0) = auVar27;
            auVar26._8_56_ = auVar27._8_56_;
            auVar26._0_8_ = CONCAT44((uVar82 & 0xffffffc0) + 0x80,uVar82) & 0xffffffffffffffc0;
            FUN_00016e40();
            uVar84 = ac & 0xfffffff8;
            uVar82 = uVar84 | (uint)(1 < iVar81) << 2;
            ac = uVar82 | (uint)(iVar81 == 1) << 1 | (uint)(iVar81 < 1);
            auVar23._20_44_ = auVar26._20_44_;
            auVar23._0_16_ = auVar26._0_16_;
            auVar23._16_4_ = iVar81 + -1;
          } while (((byte)ac & 1 | (byte)(uVar82 >> 2) & 1) == 1);
          ac = uVar84 | (uint)(MAN < g_player1.controller_type) << 2 |
               (uint)(g_player1.controller_type == MAN) << 1 |
               (uint)(g_player1.controller_type == COM);
          if (((byte)ac & 1 | MAN < g_player1.controller_type) == 1) {
            g_player1.player_display = '\x01';
          }
          else {
            g_player2.player_display = '\x01';
          }
          auVar28._16_4_ = 0x3c;
          auVar28._0_16_ = auVar23._0_16_;
          auVar28._20_44_ = auVar23._20_44_;
          do {
            iVar81 = auVar28._16_4_;
            uVar82 = auVar28._4_4_ + 0x3f;
            uVar84 = uVar82 & 0xffffffc0;
            auVar30._12_52_ = auVar28._12_52_;
            auVar30._0_8_ = auVar28._0_8_;
            auVar30._8_4_ = 0x171e4;
            *fp = auVar30;
            auVar29._8_56_ = auVar30._8_56_;
            auVar29._0_8_ = CONCAT44(uVar82,fp) & 0xffffffc0ffffffff;
            FUN_00008250(1);
            auVar32._12_52_ = auVar29._12_52_;
            auVar32._0_8_ = auVar29._0_8_;
            auVar32._8_4_ = 0x171e8;
            *(undefined1 (*) [64])(uVar82 & 0xffffffc0) = auVar32;
            auVar31._8_56_ = auVar32._8_56_;
            auVar31._0_8_ = CONCAT44(uVar84 + 0x80,uVar82) & 0xffffffffffffffc0;
            FUN_00016e40();
            uVar82 = ac & 0xfffffff8 | (uint)(1 < iVar81) << 2;
            ac = uVar82 | (uint)(iVar81 == 1) << 1 | (uint)(iVar81 < 1);
            auVar28._20_44_ = auVar31._20_44_;
            auVar28._0_16_ = auVar31._0_16_;
            auVar28._16_4_ = iVar81 + -1;
            fp = (undefined1 (*) [64])(uVar84 + 0x40);
          } while (((byte)ac & 1 | (byte)(uVar82 >> 2) & 1) == 1);
          fp = (undefined1 (*) [64])(uVar84 + 0x80);
          auVar34._12_52_ = auVar28._12_52_;
          auVar34._0_8_ = auVar31._0_8_;
          auVar34._8_4_ = 0x171f8;
          *(undefined1 (*) [64])(uVar84 + 0x40) = auVar34;
          auVar33._8_56_ = auVar34._8_56_;
          auVar33._4_4_ = uVar84 + 0xc0;
          auVar33._0_4_ = (undefined1 (*) [64])(uVar84 + 0x40);
          FUN_00008320(6);
          auVar35._20_44_ = auVar33._20_44_;
          auVar35._0_16_ = auVar33._0_16_;
          auVar35._16_4_ = 0x32;
          auVar36._40_24_ = auVar33._40_24_;
          auVar36._0_36_ = auVar35._0_36_;
          auVar36._36_4_ = &g_player1;
          auVar37._36_28_ = auVar36._36_28_;
          auVar37._0_32_ = auVar35._0_32_;
          auVar37._32_4_ = 0x54fc10;
          auVar42._32_32_ = auVar37._32_32_;
          auVar42._0_28_ = auVar35._0_28_;
          auVar42._28_4_ = 0x54fc68;
          do {
            iVar81 = auVar42._16_4_;
            ac = ac & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
                 (uint)(g_player1.controller_type == MAN) << 1 |
                 (uint)(g_player1.controller_type == COM);
            if (((byte)ac & 1 | MAN < g_player1.controller_type) == 1) {
              g_player2.animation_speed = g14;
            }
            else {
              g_player1.animation_speed = g14;
            }
            uVar82 = auVar42._4_4_ + 0x3f;
            auVar39._12_52_ = auVar42._12_52_;
            auVar39._0_8_ = auVar42._0_8_;
            auVar39._8_4_ = 0x17230;
            *fp = auVar39;
            auVar38._8_56_ = auVar39._8_56_;
            auVar38._0_8_ = CONCAT44(uVar82,fp) & 0xffffffc0ffffffff;
            FUN_00008250(1);
            fp = (undefined1 (*) [64])((uVar82 & 0xffffffc0) + 0x40);
            auVar41._12_52_ = auVar38._12_52_;
            auVar41._0_8_ = auVar38._0_8_;
            auVar41._8_4_ = 0x17234;
            *(undefined1 (*) [64])(uVar82 & 0xffffffc0) = auVar41;
            auVar40._8_56_ = auVar41._8_56_;
            auVar40._0_8_ = CONCAT44((uVar82 & 0xffffffc0) + 0x80,uVar82) & 0xffffffffffffffc0;
            FUN_00016e40();
            uVar82 = ac & 0xfffffff8 | (uint)(1 < iVar81) << 2;
            ac = uVar82 | (uint)(iVar81 == 1) << 1 | (uint)(iVar81 < 1);
            auVar42._20_44_ = auVar40._20_44_;
            auVar42._0_16_ = auVar40._0_16_;
            auVar42._16_4_ = iVar81 + -1;
          } while (((byte)ac & 1 | (byte)(uVar82 >> 2) & 1) == 1);
          g_player1.animation_speed = SUB104((float10)'\x01',0);
          g_player1.player_display = '\x01';
          g_player2.player_display = '\x01';
          auVar51._16_4_ = 0x2d;
          auVar51._0_16_ = auVar42._0_16_;
          auVar51._20_44_ = auVar42._20_44_;
          g_player2.animation_speed = g_player1.animation_speed;
          do {
            iVar81 = auVar51._16_4_;
            uVar82 = auVar51._4_4_ + 0x3f;
            auVar44._12_52_ = auVar51._12_52_;
            auVar44._0_8_ = auVar51._0_8_;
            auVar44._8_4_ = 0x17274;
            *fp = auVar44;
            auVar43._8_56_ = auVar44._8_56_;
            auVar43._0_8_ = CONCAT44(uVar82,fp) & 0xffffffc0ffffffff;
            FUN_00008250(1);
            fp = (undefined1 (*) [64])((uVar82 & 0xffffffc0) + 0x40);
            auVar46._12_52_ = auVar43._12_52_;
            auVar46._0_8_ = auVar43._0_8_;
            auVar46._8_4_ = 0x17278;
            *(undefined1 (*) [64])(uVar82 & 0xffffffc0) = auVar46;
            auVar45._8_56_ = auVar46._8_56_;
            auVar45._0_8_ = CONCAT44((uVar82 & 0xffffffc0) + 0x80,uVar82) & 0xffffffffffffffc0;
            FUN_00016e40();
            uVar82 = ac & 0xfffffff8 | (uint)(1 < iVar81) << 2;
            ac = uVar82 | (uint)(iVar81 == 1) << 1 | (uint)(iVar81 < 1);
            auVar51._20_44_ = auVar45._20_44_;
            auVar51._0_16_ = auVar45._0_16_;
            auVar51._16_4_ = iVar81 + -1;
          } while (((byte)ac & 1 | (byte)(uVar82 >> 2) & 1) == 1);
        }
      }
      iVar83 = auVar51._24_4_;
      SPRT_DAT = set_suddendeath;
      iVar81 = (uint)BYTE_0054fcea * 2 + -1;
      ac = ac & 0xfffffff8 | (uint)((int)(uint)DAT_005555dc < iVar81);
      if (((byte)ac & 1 | iVar81 < (int)(uint)DAT_005555dc) != 1) {
        g_player1.pendingDamage = HIT_POINT_CurrentSetting_005555e6 - 0x32;
        TimeCurrentMatch_Seconds_005555a0 = 10;
        g_player2.pendingDamage = g_player1.pendingDamage;
      }
      while( true ) {
        iVar81 = auVar51._20_4_;
        ac = ac & 0xfffffff8 | (uint)(0 < iVar81) << 2 | (uint)(iVar81 == 0) << 1 |
             (uint)(iVar81 < 0);
        auVar53._0_8_ = auVar51._0_8_;
        auVar53._12_52_ = auVar51._12_52_;
        if (((byte)ac & 1 | 0 < iVar81) != 1) break;
        uVar82 = auVar51._4_4_ + 0x3f;
        auVar53._8_4_ = 0x1731c;
        *fp = auVar53;
        auVar52._8_56_ = auVar53._8_56_;
        auVar52._0_8_ = CONCAT44(uVar82,fp) & 0xffffffc0ffffffff;
        FUN_00008250(1);
        fp = (undefined1 (*) [64])((uVar82 & 0xffffffc0) + 0x40);
        auVar55._12_52_ = auVar52._12_52_;
        auVar55._0_8_ = auVar52._0_8_;
        auVar55._8_4_ = 0x17320;
        *(undefined1 (*) [64])(uVar82 & 0xffffffc0) = auVar55;
        auVar54._8_56_ = auVar55._8_56_;
        auVar54._0_8_ = CONCAT44((uVar82 & 0xffffffc0) + 0x80,uVar82) & 0xffffffffffffffc0;
        FUN_00016e40();
        auVar51._24_40_ = auVar54._24_40_;
        auVar51._0_20_ = auVar54._0_20_;
        auVar51._20_4_ = iVar81 + -1;
      }
      SPRT_DAT = getready;
      pauVar1 = (undefined1 (*) [64])(auVar51._4_4_ + 0x3fU & 0xffffffc0);
      auVar57._8_4_ = 0x17340;
      auVar57._0_8_ = auVar53._0_8_;
      auVar57._12_52_ = auVar53._12_52_;
      *fp = auVar57;
      auVar56._8_56_ = auVar57._8_56_;
      auVar56._4_4_ = pauVar1 + 1;
      auVar56._0_4_ = fp;
      Sound_Request(SE_READY);
      uVar82 = ac & 0xfffffff8 | (uint)(0 < iVar83) << 2 | (uint)(iVar83 == 0) << 1;
      ac = uVar82 | iVar83 < 0;
      fp = pauVar1;
      if (((byte)(uVar82 >> 1) & 1) != 1) {
        do {
          iVar81 = auVar56._24_4_;
          uVar82 = auVar56._4_4_ + 0x3f;
          auVar59._12_52_ = auVar56._12_52_;
          auVar59._0_8_ = auVar56._0_8_;
          auVar59._8_4_ = 0x1734c;
          *fp = auVar59;
          auVar58._8_56_ = auVar59._8_56_;
          auVar58._0_8_ = CONCAT44(uVar82,fp) & 0xffffffc0ffffffff;
          FUN_00008250(1);
          fp = (undefined1 (*) [64])((uVar82 & 0xffffffc0) + 0x40);
          auVar61._12_52_ = auVar58._12_52_;
          auVar61._0_8_ = auVar58._0_8_;
          auVar61._8_4_ = 0x17350;
          *(undefined1 (*) [64])(uVar82 & 0xffffffc0) = auVar61;
          auVar60._8_56_ = auVar61._8_56_;
          auVar60._0_8_ = CONCAT44((uVar82 & 0xffffffc0) + 0x80,uVar82) & 0xffffffffffffffc0;
          FUN_00016e40();
          uVar82 = ac & 0xfffffff8 | (uint)(1 < iVar81) << 2;
          ac = uVar82 | (uint)(iVar81 == 1) << 1 | (uint)(iVar81 < 1);
          auVar56._28_36_ = auVar60._28_36_;
          auVar56._0_24_ = auVar60._0_24_;
          auVar56._24_4_ = iVar81 + -1;
        } while (((byte)ac & 1 | (byte)(uVar82 >> 2) & 1) == 1);
      }
      DAT_005555e4 = g14._0_1_;
      DAT_005555e7 = 1;
      DAT_00557c44 = 1;
      DAT_0054fcfd = 1;
      Sound_Request(SE_FIGHT);
      return;
    }
    DAT_0054fcfd = g14._0_1_;
    TimeCurrentMatch_Seconds_005555a0 = SettingsUnlistedGameMode_Time_0054fd78;
    TimeCurrentMatch_MilliSeconds_005555a1 = g14._0_1_;
    DAT_005555a8 = g14;
    DAT_005555e3 = g14._0_1_;
    auVar14._8_4_ = 0x17038;
    auVar14._0_8_ = uVar4;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
    auVar13._8_56_ = auVar14._8_56_;
    auVar13._4_4_ = auStackX_0;
    auVar13._0_4_ = fp;
    FUN_000185c0();
    DAT_005555dc = g14._0_1_;
    DAT_005555dd = g14._0_1_;
    Camera_Angle = camera_floor1;
    auStackX_0._12_52_ = auVar13._12_52_;
    auStackX_0._0_8_ = auVar13._0_8_;
    auStackX_0._8_4_ = 0x17058;
    auVar15._8_56_ = auStackX_0._8_56_;
    auVar15._4_4_ = auStack_40;
    auVar15._0_4_ = auStackX_0;
    Battle_ResetBothPlayersForRound();
    auStack_40._12_52_ = auVar15._12_52_;
    auStack_40._0_8_ = auVar15._0_8_;
    auStack_40._8_4_ = 0x1705c;
    auVar16._8_56_ = auStack_40._8_56_;
    auVar16._4_4_ = auStack_80;
    auVar16._0_4_ = auStack_40;
    FUN_000185c0();
    auStack_80._12_52_ = auVar16._12_52_;
    auStack_80._0_8_ = auVar16._0_8_;
    auStack_80._8_4_ = 0x17064;
    FUN_00008250(1);
    DAT_005555e4 = g14._0_1_;
    DAT_005555e7 = 1;
    DAT_00557c44 = 1;
    DAT_0054fcfd = 1;
    fp = &auStack_80;
    return;
  case 1:
    ac = uVar82 & 0xfffffff8 | (uint)(1 < DAT_005555e3) << 2 | (uint)(DAT_005555e3 == 1) << 1 |
         (uint)(DAT_005555e3 == 0);
    if (((byte)ac & 1 | 1 < DAT_005555e3) == 1) {
      fp = (undefined1 (*) [64])unaff_pfp;
      return;
    }
    uVar84 = uVar82 & 0xfffffff8 | (uint)(4 < GameOverFlag____0054fcb4) << 2 |
             (uint)(GameOverFlag____0054fcb4 == 4) << 1;
    ac = uVar84 | GameOverFlag____0054fcb4 < 4;
    if (((byte)(uVar84 >> 1) & 1) == 1) {
      fp = (undefined1 (*) [64])unaff_pfp;
      return;
    }
    DAT_005555e3 = g14._0_1_;
    ac = uVar82 & 0xfffffff8 | (uint)(2 < DAT_0054fd13) << 2 | (uint)(DAT_0054fd13 == 2) << 1 |
         (uint)(DAT_0054fd13 < 2);
    if (((byte)ac & 1 | 2 < DAT_0054fd13) == 1) {
      (&g_player1)[DAT_0054fd13].rounds_won = (&g_player1)[DAT_0054fd13].rounds_won + '\x01';
      fp = (undefined1 (*) [64])unaff_pfp;
      DAT_005555e9 = 1;
      DAT_00557c44 = 2;
      return;
    }
    uVar87 = (uint)BYTE_0054fcea * 2 - 2;
    uVar85 = (uint)DAT_005555dc;
    uVar84 = uVar82 & 0xfffffff8 | (uint)((int)uVar87 < (int)uVar85) << 2 |
             (uint)(uVar87 == uVar85) << 1;
    ac = uVar84 | (int)uVar85 < (int)uVar87;
    if (((byte)(uVar84 >> 1) & 1) == 1) {
      fp = (undefined1 (*) [64])unaff_pfp;
      DAT_005555e3 = bVar8;
      DAT_005555e9 = 1;
      DAT_00557c44 = 2;
      return;
    }
    uVar84 = (uint)BYTE_0054fcea * 2 - 1;
    ac = uVar82 & 0xfffffff8 | (uint)((int)uVar84 < (int)uVar85) << 2 |
         (uint)(uVar84 == uVar85) << 1 | (uint)((int)uVar85 < (int)uVar84);
    if (((byte)ac & 1 | (int)uVar84 < (int)uVar85) == 1) {
      g_player1.rounds_won = g_player1.rounds_won + '\x01';
    }
    else if (GameOverFlag____0054fcb4 == 0) {
      uVar82 = uVar82 & 0xfffffff8 | (uint)(MAN < g_player1.controller_type) << 2 |
               (uint)(g_player1.controller_type == MAN) << 1;
      ac = uVar82 | g_player1.controller_type == COM;
      if (((byte)(uVar82 >> 1) & 1) != 1) {
        pDVar86 = &g_player1.rounds_won;
        goto LAB_00017430;
      }
    }
    else {
      ac = uVar82 & 0xfffffff8 | (uint)(DAT_0054fd11 != '\0') << 2 |
           (uint)(DAT_0054fd11 == '\0') << 1;
      if (DAT_0054fd11 == '\0') {
        pDVar86 = &g_player1.rounds_won;
        goto LAB_00017430;
      }
    }
    pDVar86 = &g_player2.rounds_won;
LAB_00017430:
    *pDVar86 = *pDVar86 + '\x01';
    DAT_00557c44 = 2;
    DAT_005555e9 = 1;
    fp = (undefined1 (*) [64])unaff_pfp;
    return;
  case 2:
    auVar62._20_44_ = auVar11._20_44_;
    auVar62._16_4_ = 0x78;
    auVar62._0_16_ = auVar5;
    DAT_0054fcfd = 2;
    do {
      iVar81 = auVar62._16_4_;
      uVar82 = auVar62._4_4_ + 0x3f;
      uVar84 = uVar82 & 0xffffffc0;
      auVar64._12_52_ = auVar62._12_52_;
      auVar64._0_8_ = auVar62._0_8_;
      auVar64._8_4_ = 0x174a8;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar64;
      auVar63._8_56_ = auVar64._8_56_;
      auVar63._0_8_ = CONCAT44(uVar82,fp) & 0xffffffc0ffffffff;
      FUN_00008250(1);
      fp = (undefined1 (*) [64])(uVar84 + 0x40);
      auVar66._12_52_ = auVar63._12_52_;
      auVar66._0_8_ = auVar63._0_8_;
      auVar66._8_4_ = 0x174ac;
      *(undefined1 (*) [64])(uVar82 & 0xffffffc0) = auVar66;
      auVar65._8_56_ = auVar66._8_56_;
      auVar65._0_8_ = CONCAT44(uVar84 + 0x80,uVar82) & 0xffffffffffffffc0;
      FUN_00016e40();
      uVar82 = ac & 0xfffffff8 | (uint)(1 < iVar81) << 2;
      ac = uVar82 | (uint)(iVar81 == 1) << 1 | (uint)(iVar81 < 1);
      auVar62._20_44_ = auVar65._20_44_;
      auVar62._0_16_ = auVar65._0_16_;
      auVar62._16_4_ = iVar81 + -1;
    } while (((byte)ac & 1 | (byte)(uVar82 >> 2) & 1) == 1);
    DAT_00557c44 = 3;
    fp = (undefined1 (*) [64])uVar84;
    return;
  case 3:
    break;
  case 4:
    FUN_000179a0();
    return;
  case 5:
    FUN_00018040();
    return;
  default:
    fp = (undefined1 (*) [64])unaff_pfp;
    return;
  }
  auVar67._44_20_ = auVar11._44_20_;
  auVar67._40_4_ = 0;
  auVar67._0_40_ = auVar7;
  auVar68._20_44_ = auVar67._20_44_;
  auVar9._16_4_ = 0x1a4;
  auVar9._0_16_ = auVar5;
  auVar68._0_20_ = auVar9;
  auVar69._40_24_ = auVar67._40_24_;
  auVar69._0_36_ = auVar68._0_36_;
  auVar69._36_4_ = 0;
  auVar70._24_40_ = auVar69._24_40_;
  auVar70._20_4_ = 0;
  auVar70._0_20_ = auVar9;
  DAT_0054fcfd = 3;
  ReplayLength_____005555ec = 0x78;
  ac = uVar82 & 0xfffffff8 | (uint)(DAT_0054fd13 == 2) << 1;
  if ((((byte)(ac >> 1) & 1) == 1) ||
     ((TimeCurrentMatch_Seconds_005555a0 == 0 &&
      (ac = uVar82 & 0xfffffff8, TimeCurrentMatch_MilliSeconds_005555a1 == 0)))) {
    auVar70._16_4_ = 0;
    auVar70._0_16_ = auVar5;
    goto LAB_00017738;
  }
  Camera_Angle = camera_loadintoreplay;
  SPRT_DAT = replay;
  if (DAT_0054fd13 == 0) {
    if ((ButtonPress_P1 & button_punch) == button_none) {
LAB_00017598:
      DVar88 = button_none;
    }
    else {
      DVar88 = ButtonPress_P1 >> 2 & button_hold & ButtonPress_P1 & button_hold;
    }
  }
  else {
    if ((ButtonPress_P2 & button_punch) == button_none) goto LAB_00017598;
    DVar88 = ButtonPress_P2 >> 2 & button_hold & ButtonPress_P2 & button_hold;
  }
  uVar87 = (uint)DAT_0054fd13;
  uVar84 = uVar82 & 0xfffffff8 | (uint)(MAN < (&g_player1)[uVar87].controller_type) << 2;
  ac = uVar84 | (&g_player1)[uVar87].controller_type == COM;
  if (((((byte)ac & 1 | (byte)(uVar84 >> 2) & 1) == 1) ||
      (ac = uVar82 & 0xfffffff8 | (uint)((&DAT_0054fd00)[uVar87] == 0),
      ((byte)ac & 1 | 1 < (byte)(&DAT_0054fd00)[uVar87]) == 1)) ||
     (ac = uVar82 & 0xfffffff8 | (uint)(DVar88 == button_none),
     ((byte)ac & 1 | button_hold < DVar88) == 1)) {
    if ((((((&g_player1)[DAT_0054fd13].controller_type == MAN) &&
          ((&g_player1)[DAT_0054fd13 ^ 1].currentHealth == 0)) &&
         ((TimeCurrentMatch_Seconds_005555a0 != 0 || (TimeCurrentMatch_MilliSeconds_005555a1 != 0)))
         ) && (((DAT_0055560f == '\0' && ((&g_player1)[DAT_0054fd13].combo_count < 2)) ||
               ((byte)(DAT_0055560f - 1U) < 2)))) && (uVar82 = (uint)DAT_00555610, 0x99 < uVar82)) {
      auVar70._40_4_ = 1;
      auVar70._44_20_ = auVar67._44_20_;
      ac = ac & 0xfffffff8 | (uint)(DAT_0055560f != '\0') << 2 | (uint)(DAT_0055560f == '\0') << 1;
      if (DAT_0055560f != '\0') {
        ReplayLength_____005555ec = 0x87;
      }
      else {
        DVar3 = (&g_player1)[DAT_0054fd13].character_id;
        auVar72._12_52_ = auVar70._12_52_;
        auVar72._8_4_ = 0x176d8;
        auVar72._0_8_ = uVar4;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar72;
        auVar71._8_56_ = auVar72._8_56_;
        auVar71._4_4_ = auStack_40;
        auVar71._0_4_ = fp;
        Action_LoadCachedMotionMetadata(uVar82,(uint)DVar3);
        auVar70._48_16_ = auVar71._48_16_;
        auVar70._0_44_ = auVar71._0_44_;
        auVar70._44_2_ = DAT_005555fc;
        auVar70._46_2_ = 0;
        ReplayLength_____005555ec = 0xaf - DAT_005555fc;
        fp = (undefined1 (*) [64])register0x00000004;
      }
    }
    else {
      uVar82 = ac & 0xfffffff8;
      if (((TimeCurrentMatch_Seconds_005555a0 != 0) ||
          (ac = ac & 0xfffffff8 | (uint)(TimeCurrentMatch_MilliSeconds_005555a1 == 0) << 1,
          uVar82 = ac, ((byte)(ac >> 1) & 1) != 1)) &&
         (ac = uVar82, ac = ac & 0xfffffff8, (byte)(DAT_0055560f - 1U) < 2)) {
        ReplayLength_____005555ec = 0x3c;
      }
    }
  }
  else {
    auVar70._40_4_ = 2;
    auVar70._44_20_ = auVar67._44_20_;
    (&DAT_0054fd00)[uVar87] = g14._0_1_;
  }
LAB_00017738:
  ac = ac & 0xfffffff8 | (uint)(auVar70._16_4_ != 0) << 2 | (uint)(auVar70._16_4_ == 0) << 1;
  auVar76 = auVar70;
  if (((byte)(ac >> 1) & 1) != 1) {
    auVar73._36_28_ = auVar70._36_28_;
    auVar73._0_32_ = auVar70._0_32_;
    auVar73._32_4_ = &g_player1;
    auVar78._0_24_ = auVar70._0_24_;
    auVar78._24_4_ = &ButtonCoinTestServiceStart_0054fcd4;
    auVar78._32_32_ = auVar73._32_32_;
    auVar78._28_4_ = &g_player2;
    do {
      iVar81 = auVar78._16_4_;
      uVar82 = auVar78._4_4_ + 0x3f;
      uVar84 = uVar82 & 0xffffffc0;
      auVar75._12_52_ = auVar78._12_52_;
      auVar75._0_8_ = auVar78._0_8_;
      auVar75._8_4_ = 0x1775c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar75;
      auVar74._8_56_ = auVar75._8_56_;
      auVar74._0_8_ = CONCAT44(uVar82,fp) & 0xffffffc0ffffffff;
      FUN_00008250(1);
      puVar2 = (undefined1 *)(uVar84 + 0x40);
      auVar77._12_52_ = auVar74._12_52_;
      auVar77._0_8_ = auVar74._0_8_;
      auVar77._8_4_ = 0x17760;
      *(undefined1 (*) [64])(uVar82 & 0xffffffc0) = auVar77;
      auVar76._8_56_ = auVar77._8_56_;
      auVar76._0_8_ = CONCAT44(uVar84 + 0x80,uVar82) & 0xffffffffffffffc0;
      FUN_00016e40();
      uVar82 = ac;
      fp = (undefined1 (*) [64])puVar2;
      if (auVar70._40_4_ == 0) {
        ac = ac & 0xfffffff8 | (uint)(g_player1.controller_type == COM);
        uVar84 = ac;
        if (((byte)ac & 1 | MAN < g_player1.controller_type) != 1) {
          ac = uVar82 & 0xfffffff8 | 2;
          uVar84 = uVar82 & 0xfffffff8;
          if ((ButtonCoinTestServiceStart_0054fcd4 & START_P1) == off) break;
        }
        ac = uVar84;
        uVar82 = ac;
        ac = ac & 0xfffffff8 | (uint)(g_player2.controller_type == COM);
        uVar84 = ac;
        if (((byte)ac & 1 | MAN < g_player2.controller_type) != 1) {
          ac = uVar82 & 0xfffffff8 | 2;
          uVar84 = uVar82 & 0xfffffff8;
          if ((ButtonCoinTestServiceStart_0054fcd4 & START_P2) == off) break;
        }
        ac = uVar84;
        auVar78._20_44_ = auVar76._20_44_;
        auVar78._0_16_ = auVar76._0_16_;
        auVar78._16_4_ = iVar81 + -1;
        ac = ac & 0xfffffff8;
        if (ReplayLength_____005555ec < 299) {
          ReplayLength_____005555ec = ReplayLength_____005555ec + 1;
        }
        else {
LAB_00017830:
          auVar78._16_4_ = 0;
        }
      }
      else if (auVar70._40_4_ == 1) {
        ac = ac & 0xfffffff8 | (uint)(g_player1.controller_type == COM);
        uVar87 = ac;
        if (((byte)ac & 1 | MAN < g_player1.controller_type) != 1) {
          ac = uVar82 & 0xfffffff8 | 2;
          uVar87 = uVar82 & 0xfffffff8;
          if ((ButtonCoinTestServiceStart_0054fcd4 & START_P1) == off) break;
        }
        ac = uVar87;
        uVar82 = ac;
        ac = ac & 0xfffffff8 | (uint)(MAN < g_player2.controller_type) << 2 |
             (uint)(g_player2.controller_type == MAN) << 1 |
             (uint)(g_player2.controller_type == COM);
        uVar87 = ac;
        if (((byte)ac & 1 | MAN < g_player2.controller_type) != 1) {
          ac = uVar82 & 0xfffffff8 | 2;
          uVar87 = uVar82 & 0xfffffff8;
          if ((ButtonCoinTestServiceStart_0054fcd4 & START_P2) == off) break;
        }
        ac = uVar87;
        fp = (undefined1 (*) [64])(uVar84 + 0x80);
        auVar80._12_52_ = auVar76._12_52_;
        auVar80._0_8_ = auVar76._0_8_;
        auVar80._8_4_ = 0x177dc;
        *(undefined1 (*) [64])(uVar84 + 0x40) = auVar80;
        auVar79._8_56_ = auVar80._8_56_;
        auVar79._4_4_ = uVar84 + 0xc0;
        auVar79._0_4_ = puVar2;
        iVar83 = FUN_00017950(auVar78._36_4_);
        if (iVar83 == 1) {
          if (DAT_0055560f == '\0') {
            ReplayLength_____005555ec = 0xb4 - auVar70._44_2_;
          }
          else {
            ReplayLength_____005555ec = 0x87;
          }
          auVar79._36_4_ = auVar78._36_4_ + 1;
          Camera_Angle = camera_loadintoreplay;
        }
        auVar78._20_44_ = auVar79._20_44_;
        auVar78._0_16_ = auVar79._0_16_;
        auVar78._16_4_ = iVar81 + -1;
        ac = ac & 0xfffffff8;
        if (0x12a < ReplayLength_____005555ec) goto LAB_00017830;
      }
      else {
        if ((DAT_0054fd13 == 0) && (g_player1.controller_type == MAN)) {
          ac = ac & 0xfffffff8 | 2;
          if ((ButtonCoinTestServiceStart_0054fcd4 & START_P1) == off) break;
LAB_0001789c:
          auVar76._20_4_ = 1;
        }
        else if ((DAT_0054fd13 == 1) && (g_player2.controller_type == MAN)) {
          ac = ac & 0xfffffff8 | 2;
          if ((ButtonCoinTestServiceStart_0054fcd4 & START_P2) != off) goto LAB_0001789c;
          break;
        }
        auVar78._20_44_ = auVar76._20_44_;
        auVar10._0_16_ = auVar76._0_16_;
        auVar10._16_4_ = iVar81 + -1;
        auVar78._0_20_ = auVar10;
        if (auVar76._20_4_ == 0) {
          ac = uVar82 & 0xfffffff8;
          if (0x12a < ReplayLength_____005555ec) {
            auVar78._16_4_ = 0;
            auVar78._0_16_ = auVar10._0_16_;
            DAT_00555611 = g14._0_1_;
            goto LAB_0001791c;
          }
          ReplayLength_____005555ec = ReplayLength_____005555ec + 1;
          DAT_00555611 = 1;
        }
        else {
          if (ReplayLength_____005555ec == 0) {
            auVar78._24_40_ = auVar76._24_40_;
            auVar78._20_4_ = 0;
          }
          else {
            ReplayLength_____005555ec = ReplayLength_____005555ec - 1;
          }
          DAT_00555611 = 2;
        }
        ac = uVar82 & 0xfffffff8;
      }
LAB_0001791c:
      iVar81 = auVar78._16_4_;
      ac = ac | (uint)(0 < iVar81) << 2 | (uint)(iVar81 == 0) << 1 | (uint)(iVar81 < 0);
      auVar76 = auVar78;
    } while (((byte)ac & 1 | 0 < iVar81) == 1);
  }
  DAT_00555611 = g14._0_1_;
  ReplayLength_____005555ec = 299;
  DAT_00557c44 = 4;
  fp = (undefined1 (*) [64])auVar76._0_4_;
  return;
}

