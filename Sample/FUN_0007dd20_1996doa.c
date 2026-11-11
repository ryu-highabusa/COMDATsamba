
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0007dd20(void)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 unaff_pfp;
  int iVar85;
  undefined4 unaff_retaddr;
  undefined1 in_register_0000000c [52];
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar32 [64];
  undefined1 auVar34 [64];
  undefined1 auVar36 [64];
  undefined1 auVar38 [64];
  undefined1 auVar40 [64];
  undefined1 auVar42 [64];
  undefined1 auVar44 [64];
  undefined1 auVar46 [64];
  undefined1 auVar48 [64];
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar56 [64];
  undefined1 auVar58 [64];
  undefined1 auVar60 [64];
  undefined1 auVar62 [64];
  undefined1 auVar64 [64];
  undefined1 auVar66 [64];
  undefined1 auVar67 [64];
  undefined1 auVar68 [64];
  undefined1 auVar70 [64];
  undefined1 auVar72 [64];
  undefined1 auVar74 [64];
  undefined1 auVar75 [64];
  undefined1 auVar77 [64];
  undefined1 auVar79 [64];
  undefined1 auVar81 [64];
  undefined1 auVar83 [64];
  undefined1 auVar84 [64];
  byte bVar86;
  uint uVar87;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [999936];
  undefined1 auVar31 [64];
  undefined1 auVar33 [64];
  undefined1 auVar35 [64];
  undefined1 auVar37 [64];
  undefined1 auVar39 [64];
  undefined1 auVar41 [64];
  undefined1 auVar43 [64];
  undefined1 auVar45 [64];
  undefined1 auVar47 [64];
  undefined1 auVar49 [64];
  undefined1 auVar52 [64];
  undefined1 auVar55 [64];
  undefined1 auVar57 [64];
  undefined1 auVar59 [64];
  undefined1 auVar61 [64];
  undefined1 auVar63 [64];
  undefined1 auVar65 [64];
  undefined1 auVar69 [64];
  undefined1 auVar71 [64];
  undefined1 auVar73 [64];
  undefined1 auVar76 [64];
  undefined1 auVar78 [64];
  undefined1 auVar80 [64];
  undefined1 auVar82 [64];
  
  uVar1 = ac;
  uVar4 = CONCAT44(auStackX_0,unaff_pfp);
  auVar6._8_4_ = unaff_retaddr;
  auVar6._0_8_ = uVar4;
  auVar6._12_52_ = in_register_0000000c;
  ac = ac & 0xfffffff8 | (uint)(g_player1.action_state < 0x6_HOLDSUCCESSFUL);
  if (((((byte)ac & 1 | 0x6_HOLDSUCCESSFUL < g_player1.action_state) == 1) ||
      (uVar1 = uVar1 & 0xfffffff8 | (uint)(0xB_HOLDCAUGHT < g_player2.action_state) << 2 |
               (uint)(g_player2.action_state == 0xB_HOLDCAUGHT) << 1,
      ac = uVar1 | g_player2.action_state < 0xB_HOLDCAUGHT, ((byte)(uVar1 >> 1) & 1) != 1)) &&
     ((uVar1 = ac, ac = ac & 0xfffffff8 | (uint)(g_player1.action_state < 0x4_THROW),
      ((byte)ac & 1 | 0x4_THROW < g_player1.action_state) == 1 ||
      (ac = uVar1 & 0xfffffff8 | (uint)(0xA_THROWCAUGHT < g_player2.action_state) << 2 |
            (uint)(g_player2.action_state == 0xA_THROWCAUGHT) << 1 |
            (uint)(g_player2.action_state < 0xA_THROWCAUGHT),
      ((byte)ac & 1 | 0xA_THROWCAUGHT < g_player2.action_state) == 1)))) {
    uVar1 = ac;
    ac = ac & 0xfffffff8 | (uint)(g_player2.action_state < 0x6_HOLDSUCCESSFUL);
    if (((((byte)ac & 1 | 0x6_HOLDSUCCESSFUL < g_player2.action_state) == 1) ||
        (uVar1 = uVar1 & 0xfffffff8 | (uint)(0xB_HOLDCAUGHT < g_player1.action_state) << 2 |
                 (uint)(g_player1.action_state == 0xB_HOLDCAUGHT) << 1,
        ac = uVar1 | g_player1.action_state < 0xB_HOLDCAUGHT, ((byte)(uVar1 >> 1) & 1) != 1)) &&
       ((uVar1 = ac, ac = ac & 0xfffffff8 | (uint)(g_player2.action_state < 0x4_THROW),
        ((byte)ac & 1 | 0x4_THROW < g_player2.action_state) == 1 ||
        (ac = uVar1 & 0xfffffff8 | (uint)(0xA_THROWCAUGHT < g_player1.action_state) << 2 |
              (uint)(g_player1.action_state == 0xA_THROWCAUGHT) << 1 |
              (uint)(g_player1.action_state < 0xA_THROWCAUGHT),
        ((byte)ac & 1 | 0xA_THROWCAUGHT < g_player1.action_state) == 1)))) {
      ac = ac & 0xfffffff8 | (uint)(DAT_005bf91e == -1) << 1;
      if (((byte)(ac >> 1) & 1) != 1) {
        DAT_005bf931 = 1;
        DAT_005bf91e = -1;
      }
    }
    else {
      auVar8._8_4_ = 0x7dd9c;
      auVar8._0_8_ = uVar4;
      auVar8._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
      auVar6._8_56_ = auVar8._8_56_;
      auVar6._4_4_ = auStack_40;
      auVar6._0_4_ = fp;
      FUN_0007e670(1);
      DAT_005bf924 = 1;
      fp = (undefined1 (*) [64])register0x00000004;
    }
  }
  else {
    auVar7._8_4_ = 0x7dd58;
    auVar7._0_8_ = uVar4;
    auVar7._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
    auVar6._8_56_ = auVar7._8_56_;
    auVar6._4_4_ = auStack_40;
    auVar6._0_4_ = fp;
    FUN_0007e670(0);
    DAT_005bf924 = (byte)g14;
    fp = (undefined1 (*) [64])register0x00000004;
  }
  uVar87 = ac;
  iVar85 = auVar6._4_4_;
  g13 = 0xff;
  uVar1 = ac & 0xfffffff8 | (uint)(DAT_005bf91e != -1) << 2 | (uint)(DAT_005bf91e == -1) << 1;
  auVar9._0_8_ = auVar6._0_8_;
  auVar9._12_52_ = auVar6._12_52_;
  uVar3 = uVar1;
  switch(DAT_005bf91e) {
  case '\0':
    auVar9._8_4_ = 0x7e1f4;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
    auVar6._8_56_ = auVar9._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007e900();
    uVar1 = ac;
    break;
  case '\x01':
    auVar11._8_4_ = 0x7e208;
    auVar11._0_8_ = auVar9._0_8_;
    auVar11._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
    auVar6._8_56_ = auVar11._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007ea40(2);
    uVar1 = ac;
    break;
  case '\x02':
    auVar10._8_4_ = 0x7e1fc;
    auVar10._0_8_ = auVar9._0_8_;
    auVar10._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
    auVar6._8_56_ = auVar10._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007ea30();
    uVar1 = ac;
    break;
  case '\x03':
    auVar12._8_4_ = 0x7e214;
    auVar12._0_8_ = auVar9._0_8_;
    auVar12._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
    auVar6._8_56_ = auVar12._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007ec60(1);
    uVar1 = ac;
    break;
  case '\x04':
    auVar13._8_4_ = 0x7e21c;
    auVar13._0_8_ = auVar9._0_8_;
    auVar13._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
    auVar6._8_56_ = auVar13._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007ee80();
    uVar1 = ac;
    break;
  case '\x05':
    auVar14._8_4_ = 0x7e224;
    auVar14._0_8_ = auVar9._0_8_;
    auVar14._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
    auVar6._8_56_ = auVar14._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007efb0();
    uVar1 = ac;
    break;
  default:
    ac = ac & 0xfffffff8 | (uint)(1 < DAT_005bf931) << 2 | (uint)(DAT_005bf931 == 1) << 1 |
         (uint)(DAT_005bf931 == 0);
    uVar1 = ac;
    if (((byte)ac & 1 | 1 < DAT_005bf931) != 1) {
      g13 = 1;
      DAT_005bf932 = 1;
      uVar1 = uVar87 & 0xfffffff8 | (uint)(1 < DAT_005bf933) << 2 | (uint)(DAT_005bf933 == 1) << 1;
      ac = uVar1 | DAT_005bf933 == 0;
      if (((byte)(uVar1 >> 1) & 1) == 1) {
        DAT_005bf930 = (byte)g14;
        uVar1 = ac;
      }
      else if (DAT_005bf933 < 2) {
        uVar1 = uVar87 & 0xfffffff8 | (uint)(DAT_005bf933 != 0) << 2 |
                (uint)(DAT_005bf933 == 0) << 1;
        if (((byte)(uVar1 >> 1) & 1) == 1) {
          g13 = 1;
          DAT_005bf930 = 1;
        }
      }
      else {
        uVar1 = uVar87 & 0xfffffff8 | (uint)(2 < DAT_005bf933) << 2 | (uint)(DAT_005bf933 == 2) << 1
        ;
        ac = uVar1 | DAT_005bf933 < 2;
        if (((byte)(uVar1 >> 1) & 1) == 1) {
          uVar1 = iVar85 + 0x3f;
          uVar87 = uVar1 & 0xffffffc0;
          auVar69._8_4_ = 0x7e558;
          auVar69._0_8_ = auVar9._0_8_;
          auVar69._12_52_ = auVar9._12_52_;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar69;
          auVar68._8_56_ = auVar69._8_56_;
          auVar68._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
          FUN_00085400();
          auVar71._12_52_ = auVar68._12_52_;
          auVar71._0_8_ = auVar68._0_8_;
          auVar71._8_4_ = 0x7e564;
          *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar71;
          auVar70._8_56_ = auVar71._8_56_;
          auVar70._0_8_ = CONCAT44(uVar87 + 0x40,uVar1) & 0xffffffffffffffc0;
          FUN_00085800(&DAT_005bf8d4);
          auVar73._12_52_ = auVar70._12_52_;
          auVar73._0_8_ = auVar70._0_8_;
          auVar73._8_4_ = 0x7e580;
          *(undefined1 (*) [64])(uVar87 + 0x40) = auVar73;
          auVar72._8_56_ = auVar73._8_56_;
          auVar72._4_4_ = uVar87 + 0x80;
          auVar72._0_4_ = uVar87 + 0x40;
          FUN_00086870(&DAT_005bf8d4,0x404ccccd,0x42480000);
          fp = (undefined1 (*) [64])(uVar87 + 0xc0);
          auVar74._12_52_ = auVar72._12_52_;
          auVar74._0_8_ = auVar72._0_8_;
          auVar74._8_4_ = 0x7e59c;
          *(undefined1 (*) [64])(uVar87 + 0x80) = auVar74;
          auVar6._8_56_ = auVar74._8_56_;
          auVar6._4_4_ = (undefined1 *)(uVar87 + 0x100);
          auVar6._0_4_ = uVar87 + 0x80;
          FUN_000855c0(&DAT_005bf8b0,&DAT_005bf8b4,&DAT_005bf8b8);
          ac = ac & 0xfffffff8 | (uint)(DAT_005555a2 != 0) << 2 | (uint)(DAT_005555a2 == 0) << 1;
          if (DAT_005555a2 != 0) {
LAB_0007e618:
            DAT_005bf8cc = g_p1_to_p2_heading_bam16 + 0x8000U & 0xffff;
          }
          else {
            DAT_005bf8cc = g_p1_to_p2_heading_bam16 & 0xffff;
          }
        }
        else {
          uVar87 = uVar87 & 0xfffffff8 | (uint)(3 < DAT_005bf933) << 2 |
                   (uint)(DAT_005bf933 == 3) << 1;
          ac = uVar87 | DAT_005bf933 < 3;
          uVar1 = ac;
          if (((byte)(uVar87 >> 1) & 1) != 1) goto switchD_0007ddec_caseD_7e658;
          uVar1 = iVar85 + 0x3f;
          uVar87 = uVar1 & 0xffffffc0;
          auVar76._8_4_ = 0x7e5b8;
          auVar76._0_8_ = auVar9._0_8_;
          auVar76._12_52_ = auVar9._12_52_;
          *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar76;
          auVar75._8_56_ = auVar76._8_56_;
          auVar75._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
          FUN_00085400();
          auVar78._12_52_ = auVar75._12_52_;
          auVar78._0_8_ = auVar75._0_8_;
          auVar78._8_4_ = 0x7e5c4;
          *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar78;
          auVar77._8_56_ = auVar78._8_56_;
          auVar77._0_8_ = CONCAT44(uVar87 + 0x40,uVar1) & 0xffffffffffffffc0;
          FUN_00085800(&DAT_005bf8d4);
          auVar80._12_52_ = auVar77._12_52_;
          auVar80._0_8_ = auVar77._0_8_;
          auVar80._8_4_ = 0x7e5e0;
          *(undefined1 (*) [64])(uVar87 + 0x40) = auVar80;
          auVar79._8_56_ = auVar80._8_56_;
          auVar79._4_4_ = uVar87 + 0x80;
          auVar79._0_4_ = uVar87 + 0x40;
          FUN_00086870(&DAT_005bf8d4,0x404ccccd,0x42480000);
          auVar82._12_52_ = auVar79._12_52_;
          auVar82._0_8_ = auVar79._0_8_;
          auVar82._8_4_ = 0x7e5fc;
          *(undefined1 (*) [64])(uVar87 + 0x80) = auVar82;
          auVar81._8_56_ = auVar82._8_56_;
          auVar81._4_4_ = uVar87 + 0xc0;
          auVar81._0_4_ = uVar87 + 0x80;
          FUN_000855c0(&DAT_005bf8b0,&DAT_005bf8b4,&DAT_005bf8b8);
          fp = (undefined1 (*) [64])(uVar87 + 0x100);
          auVar83._12_52_ = auVar81._12_52_;
          auVar83._0_8_ = auVar81._0_8_;
          auVar83._8_4_ = 0x7e600;
          *(undefined1 (*) [64])(uVar87 + 0xc0) = auVar83;
          auVar6._8_56_ = auVar83._8_56_;
          auVar6._4_4_ = (undefined1 *)(uVar87 + 0x140);
          auVar6._0_4_ = uVar87 + 0xc0;
          FUN_00085760();
          ac = ac & 0xfffffff8 | (uint)(DAT_005555a2 != 0) << 2 | (uint)(DAT_005555a2 == 0) << 1;
          if (DAT_005555a2 != 0) goto LAB_0007e618;
          DAT_005bf8cc = g_p1_to_p2_heading_bam16 & 0xffff;
        }
        DAT_005bf8c8 = g14;
        DAT_005bf8d0 = g14;
        g13 = 2;
        Camera_Angle = camera_battle;
        uVar1 = ac;
      }
    }
  case '@':
switchD_0007ddec_caseD_7e658:
    ac = uVar1;
    auVar84._12_52_ = auVar6._12_52_;
    auVar84._0_8_ = auVar6._0_8_;
    auVar84._8_4_ = 0x7e65c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar84;
    auVar6._8_56_ = auVar84._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    FUN_0007e710();
    uVar1 = ac;
    break;
  case '\x10':
    auVar15._8_4_ = 0x7e22c;
    auVar15._0_8_ = auVar9._0_8_;
    auVar15._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
    auVar6._8_56_ = auVar15._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007f150();
    uVar1 = ac;
    break;
  case '\x11':
    ac = ac & 0xfffffff8 | (uint)(1 < DAT_005bf931) << 2 | (uint)(DAT_005bf931 == 1) << 1 |
         (uint)(DAT_005bf931 == 0);
    if (((byte)ac & 1 | 1 < DAT_005bf931) != 1) {
      auVar27._8_4_ = 0x7e2c8;
      auVar27._0_8_ = auVar9._0_8_;
      auVar27._12_52_ = auVar9._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar27;
      auVar6._8_56_ = auVar27._8_56_;
      auVar6._4_4_ = (undefined1 *)(iVar85 + 0x3fU & 0xffffffc0) + 0x40;
      auVar6._0_4_ = fp;
      FUN_0007e900();
      fp = (undefined1 (*) [64])(iVar85 + 0x3fU & 0xffffffc0);
    }
    bVar86 = DAT_005bf924;
    auVar28._12_52_ = auVar6._12_52_;
    auVar28._0_8_ = auVar6._0_8_;
    auVar28._8_4_ = 0x7e2d8;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar28;
    auVar6._8_56_ = auVar28._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    FUN_0007f400(bVar86,0x36);
    uVar1 = ac;
    break;
  case '\x12':
    auVar16._8_4_ = 0x7e234;
    auVar16._0_8_ = auVar9._0_8_;
    auVar16._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
    auVar6._8_56_ = auVar16._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007f2a0();
    uVar1 = ac;
    break;
  case '\x13':
    auVar17._8_4_ = 0x7e23c;
    auVar17._0_8_ = auVar9._0_8_;
    auVar17._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
    auVar6._8_56_ = auVar17._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007f2b0();
    uVar1 = ac;
    break;
  case '!':
switchD_0007ddec_caseD_7e250:
    ac = uVar3;
    auVar20._12_52_ = auVar6._12_52_;
    auVar20._0_8_ = auVar6._0_8_;
    auVar20._8_4_ = 0x7e254;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar20;
    auVar6._8_56_ = auVar20._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    FUN_0007f690();
    uVar1 = ac;
    break;
  case '\"':
    puVar2 = (undefined1 *)(iVar85 + 0x3fU & 0xffffffc0);
    auVar18._8_4_ = 0x7e244;
    auVar18._0_8_ = auVar9._0_8_;
    auVar18._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
    auVar6._8_56_ = auVar18._8_56_;
    auVar6._4_4_ = puVar2 + 0x40;
    auVar6._0_4_ = fp;
    ac = uVar1;
    uVar87 = FUN_0008e6f0();
    uVar1 = ac & 0xfffffff8;
    ac = uVar1 | 2;
    fp = (undefined1 (*) [64])puVar2;
    uVar3 = ac;
    if ((uVar87 & 1) == 0) goto switchD_0007ddec_caseD_7e250;
  case ' ':
    ac = uVar1;
    auVar19._12_52_ = auVar6._12_52_;
    auVar19._0_8_ = auVar6._0_8_;
    auVar19._8_4_ = 0x7e24c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar19;
    auVar6._8_56_ = auVar19._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    FUN_0007f5b0();
    uVar1 = ac;
    break;
  case '$':
switchD_0007ddec_caseD_7e268:
    ac = uVar3;
    auVar23._12_52_ = auVar6._12_52_;
    auVar23._0_8_ = auVar6._0_8_;
    auVar23._8_4_ = 0x7e26c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar23;
    auVar6._8_56_ = auVar23._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    FUN_0007f780();
    uVar1 = ac;
    break;
  case '%':
    puVar2 = (undefined1 *)(iVar85 + 0x3fU & 0xffffffc0);
    auVar21._8_4_ = 0x7e25c;
    auVar21._0_8_ = auVar9._0_8_;
    auVar21._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar21;
    auVar6._8_56_ = auVar21._8_56_;
    auVar6._4_4_ = puVar2 + 0x40;
    auVar6._0_4_ = fp;
    ac = uVar1;
    uVar87 = FUN_0008e6f0();
    uVar1 = ac & 0xfffffff8;
    ac = uVar1 | 2;
    fp = (undefined1 (*) [64])puVar2;
    uVar3 = ac;
    if ((uVar87 & 1) == 0) goto switchD_0007ddec_caseD_7e268;
  case '#':
    ac = uVar1;
    auVar22._12_52_ = auVar6._12_52_;
    auVar22._0_8_ = auVar6._0_8_;
    auVar22._8_4_ = 0x7e264;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar22;
    auVar6._8_56_ = auVar22._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    FUN_0007f770();
    uVar1 = ac;
    break;
  case '0':
    auVar24._8_4_ = 0x7e27c;
    auVar24._0_8_ = auVar9._0_8_;
    auVar24._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar24;
    auVar6._8_56_ = auVar24._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007f4a0(0x5b,0x7f);
    uVar1 = ac;
    break;
  case '1':
    auVar25._8_4_ = 0x7e290;
    auVar25._0_8_ = auVar9._0_8_;
    auVar25._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar25;
    auVar6._8_56_ = auVar25._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007f590();
    uVar1 = ac;
    break;
  case '2':
    bVar86 = DAT_005bf924;
    goto LAB_0007e2ac;
  case '3':
    bVar86 = DAT_005bf924 ^ 1;
LAB_0007e2ac:
    auVar26._8_4_ = 0x7e2b4;
    auVar26._0_8_ = auVar9._0_8_;
    auVar26._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar26;
    auVar6._8_56_ = auVar26._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007f400(bVar86,0x91);
    uVar1 = ac;
    break;
  case '4':
    auVar29._8_4_ = 0x7e2ec;
    auVar29._0_8_ = auVar9._0_8_;
    auVar29._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar29;
    auVar6._8_56_ = auVar29._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_0007f490();
    uVar1 = ac;
    break;
  case 'P':
    uVar87 = iVar85 + 0x3f;
    uVar3 = uVar87 & 0xffffffc0;
    auVar41._8_4_ = 0x7e370;
    auVar41._0_8_ = auVar9._0_8_;
    auVar41._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar41;
    auVar40._8_56_ = auVar41._8_56_;
    auVar40._0_8_ = CONCAT44(uVar87,fp) & 0xffffffc0ffffffff;
    ac = uVar1;
    FUN_00085800(&DAT_005bf920);
    auVar43._12_52_ = auVar40._12_52_;
    auVar43._0_8_ = auVar40._0_8_;
    auVar43._8_4_ = 0x7e38c;
    *(undefined1 (*) [64])(uVar87 & 0xffffffc0) = auVar43;
    auVar42._8_56_ = auVar43._8_56_;
    auVar42._0_8_ = CONCAT44(uVar3 + 0x40,uVar87) & 0xffffffffffffffc0;
    FUN_00086870(&DAT_005bf920,0x404ccccd,0x42480000);
    iVar5 = DAT_005bf920;
    auVar45._12_52_ = auVar42._12_52_;
    auVar45._0_8_ = auVar42._0_8_;
    auVar45._8_4_ = 0x7e3b4;
    *(undefined1 (*) [64])(uVar3 + 0x40) = auVar45;
    auVar44._8_56_ = auVar45._8_56_;
    auVar44._4_4_ = uVar3 + 0x80;
    auVar44._0_4_ = uVar3 + 0x40;
    FUN_00086670(&DAT_005bf8d4,iVar5,0,0x3f800000,0x40400000);
    auVar47._12_52_ = auVar44._12_52_;
    auVar47._0_8_ = auVar44._0_8_;
    auVar47._8_4_ = 0x7e3d0;
    *(undefined1 (*) [64])(uVar3 + 0x80) = auVar47;
    auVar46._8_56_ = auVar47._8_56_;
    auVar46._4_4_ = uVar3 + 0xc0;
    auVar46._0_4_ = uVar3 + 0x80;
    FUN_000855c0(&DAT_005bf8b0,&DAT_005bf8b4,&DAT_005bf8b8);
    ac = ac & 0xfffffff8 | (uint)(DAT_005555a2 != 0) << 2 | (uint)(DAT_005555a2 == 0) << 1;
    uVar1 = g_p1_to_p2_heading_bam16;
    if (DAT_005555a2 != 0) {
      g13 = 0xffff;
      uVar1 = g_p1_to_p2_heading_bam16 + 0x8000;
    }
    DAT_005bf8cc = uVar1 & 0xffff;
    auVar49._12_52_ = auVar46._12_52_;
    auVar49._0_8_ = auVar46._0_8_;
    auVar49._8_4_ = 0x7e428;
    *(undefined1 (*) [64])(uVar3 + 0xc0) = auVar49;
    auVar48._8_56_ = auVar49._8_56_;
    auVar48._4_4_ = uVar3 + 0x100;
    auVar48._0_4_ = uVar3 + 0xc0;
    FUN_000866f0(&DAT_005bf8c8,0,0,8,0x222);
    fp = (undefined1 (*) [64])(uVar3 + 0x140);
    auVar50._12_52_ = auVar48._12_52_;
    auVar50._0_8_ = auVar48._0_8_;
    auVar50._8_4_ = 0x7e444;
    *(undefined1 (*) [64])(uVar3 + 0x100) = auVar50;
    auVar38._8_56_ = auVar50._8_56_;
    auVar38._4_4_ = uVar3 + 0x180;
    auVar38._0_4_ = uVar3 + 0x100;
    FUN_000866f0(&DAT_005bf8d0,0,0,8,0x38e);
    goto LAB_0007e444;
  case 'Q':
    uVar87 = iVar85 + 0x3f;
    uVar3 = uVar87 & 0xffffffc0;
    auVar31._8_4_ = 0x7e2f4;
    auVar31._0_8_ = auVar9._0_8_;
    auVar31._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar31;
    auVar30._8_56_ = auVar31._8_56_;
    auVar30._0_8_ = CONCAT44(uVar87,fp) & 0xffffffc0ffffffff;
    ac = uVar1;
    FUN_00085710();
    auVar33._12_52_ = auVar30._12_52_;
    auVar33._0_8_ = auVar30._0_8_;
    auVar33._8_4_ = 0x7e300;
    *(undefined1 (*) [64])(uVar87 & 0xffffffc0) = auVar33;
    auVar32._8_56_ = auVar33._8_56_;
    auVar32._0_8_ = CONCAT44(uVar3 + 0x40,uVar87) & 0xffffffffffffffc0;
    FUN_00085800(&DAT_005bf920);
    auVar35._12_52_ = auVar32._12_52_;
    auVar35._0_8_ = auVar32._0_8_;
    auVar35._8_4_ = 0x7e31c;
    *(undefined1 (*) [64])(uVar3 + 0x40) = auVar35;
    auVar34._8_56_ = auVar35._8_56_;
    auVar34._4_4_ = uVar3 + 0x80;
    auVar34._0_4_ = uVar3 + 0x40;
    FUN_00086870(&DAT_005bf920,0x404ccccd,0x42480000);
    iVar5 = DAT_005bf920;
    auVar37._12_52_ = auVar34._12_52_;
    auVar37._0_8_ = auVar34._0_8_;
    auVar37._8_4_ = 0x7e344;
    *(undefined1 (*) [64])(uVar3 + 0x80) = auVar37;
    auVar36._8_56_ = auVar37._8_56_;
    auVar36._4_4_ = uVar3 + 0xc0;
    auVar36._0_4_ = uVar3 + 0x80;
    FUN_00086670(&DAT_005bf8d4,iVar5,0,0x3f800000,0x40400000);
    fp = (undefined1 (*) [64])(uVar3 + 0x100);
    auVar39._12_52_ = auVar36._12_52_;
    auVar39._0_8_ = auVar36._0_8_;
    auVar39._8_4_ = 0x7e360;
    *(undefined1 (*) [64])(uVar3 + 0xc0) = auVar39;
    auVar38._8_56_ = auVar39._8_56_;
    auVar38._4_4_ = uVar3 + 0x140;
    auVar38._0_4_ = uVar3 + 0xc0;
    FUN_000855c0(&DAT_005bf8b0,&DAT_005bf8b4,&DAT_005bf8b8);
LAB_0007e444:
    uVar1 = auVar38._4_4_ + 0x3f;
    auVar52._12_52_ = auVar38._12_52_;
    auVar52._0_8_ = auVar38._0_8_;
    auVar52._8_4_ = 0x7e448;
    *fp = auVar52;
    auVar51._8_56_ = auVar52._8_56_;
    auVar51._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
    FUN_000809f0();
    auVar53._12_52_ = auVar51._12_52_;
    auVar53._0_8_ = auVar51._0_8_;
    auVar53._8_4_ = 0x7e44c;
    *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar53;
    auVar6._8_56_ = auVar53._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = uVar1 & 0xffffffc0;
    FUN_000859e0();
    uVar1 = ac;
    break;
  case 'R':
    uVar87 = iVar85 + 0x3f;
    uVar3 = uVar87 & 0xffffffc0;
    auVar55._8_4_ = 0x7e454;
    auVar55._0_8_ = auVar9._0_8_;
    auVar55._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar55;
    auVar54._8_56_ = auVar55._8_56_;
    auVar54._0_8_ = CONCAT44(uVar87,fp) & 0xffffffc0ffffffff;
    ac = uVar1;
    FUN_00085710();
    auVar57._12_52_ = auVar54._12_52_;
    auVar57._0_8_ = auVar54._0_8_;
    auVar57._8_4_ = 0x7e460;
    *(undefined1 (*) [64])(uVar87 & 0xffffffc0) = auVar57;
    auVar56._8_56_ = auVar57._8_56_;
    auVar56._0_8_ = CONCAT44(uVar3 + 0x40,uVar87) & 0xffffffffffffffc0;
    FUN_00085800(&DAT_005bf920);
    auVar59._12_52_ = auVar56._12_52_;
    auVar59._0_8_ = auVar56._0_8_;
    auVar59._8_4_ = 0x7e47c;
    *(undefined1 (*) [64])(uVar3 + 0x40) = auVar59;
    auVar58._8_56_ = auVar59._8_56_;
    auVar58._4_4_ = uVar3 + 0x80;
    auVar58._0_4_ = uVar3 + 0x40;
    FUN_00086870(&DAT_005bf920,0x404ccccd,0x42480000);
    iVar5 = DAT_005bf920;
    auVar61._12_52_ = auVar58._12_52_;
    auVar61._0_8_ = auVar58._0_8_;
    auVar61._8_4_ = 0x7e4a4;
    *(undefined1 (*) [64])(uVar3 + 0x80) = auVar61;
    auVar60._8_56_ = auVar61._8_56_;
    auVar60._4_4_ = uVar3 + 0xc0;
    auVar60._0_4_ = uVar3 + 0x80;
    FUN_00086670(&DAT_005bf8d4,iVar5,0,0x3f800000,0x40400000);
    auVar63._12_52_ = auVar60._12_52_;
    auVar63._0_8_ = auVar60._0_8_;
    auVar63._8_4_ = 0x7e4c0;
    *(undefined1 (*) [64])(uVar3 + 0xc0) = auVar63;
    auVar62._8_56_ = auVar63._8_56_;
    auVar62._4_4_ = uVar3 + 0x100;
    auVar62._0_4_ = uVar3 + 0xc0;
    FUN_000855c0(&DAT_005bf8b0,&DAT_005bf8b4,&DAT_005bf8b8);
    auVar65._12_52_ = auVar62._12_52_;
    auVar65._0_8_ = auVar62._0_8_;
    auVar65._8_4_ = 0x7e4c4;
    *(undefined1 (*) [64])(uVar3 + 0x100) = auVar65;
    auVar64._8_56_ = auVar65._8_56_;
    auVar64._4_4_ = uVar3 + 0x140;
    auVar64._0_4_ = uVar3 + 0x100;
    FUN_000809f0();
    auVar66._12_52_ = auVar64._12_52_;
    auVar66._0_8_ = auVar64._0_8_;
    auVar66._8_4_ = 0x7e4c8;
    *(undefined1 (*) [64])(uVar3 + 0x140) = auVar66;
    auVar6._8_56_ = auVar66._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = uVar3 + 0x140;
    FUN_000859e0();
    uVar87 = ac & 0xfffffff8 | (uint)(DAT_005bf91a < DAT_005555a2) << 2 |
             (uint)(DAT_005bf91a == DAT_005555a2) << 1;
    ac = uVar87 | DAT_005555a2 < DAT_005bf91a;
    uVar1 = ac;
    if (((byte)(uVar87 >> 1) & 1) != 1) {
      g13 = 0xff;
      DAT_005bf91e = -1;
    }
    break;
  case '`':
    uVar87 = (uint)DAT_005bf924;
    auVar67._8_4_ = 0x7e4f8;
    auVar67._0_8_ = auVar9._0_8_;
    auVar67._12_52_ = auVar9._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar67;
    auVar6._8_56_ = auVar67._8_56_;
    auVar6._4_4_ = (undefined1 *)0x0;
    auVar6._0_4_ = fp;
    ac = uVar1;
    FUN_00080240(uVar87);
    uVar1 = ac;
    break;
  case -0x10:
  case -0xf:
    break;
  }
  ac = uVar1;
  DAT_005bf931 = (byte)g14;
  fp = (undefined1 (*) [64])auVar6._0_4_;
  return;
}

