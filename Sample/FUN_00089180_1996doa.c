
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00089180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 auVar1 [64];
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar2 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
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
  undefined1 auVar17 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  uint uVar26;
  uint uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar3 [64];
  undefined1 auVar16 [64];
  undefined1 auVar18 [64];
  undefined1 auVar21 [64];
  undefined1 auVar25 [64];
  
  uVar26 = ac;
  uVar29 = CONCAT44(auStackX_0,unaff_pfp);
  uVar27 = (uint)DAT_005bfaf5;
  ac = ac & 0xfffffff8 | (uint)(1 < uVar27) << 2 | (uint)(uVar27 == 1) << 1 | (uint)(uVar27 == 0);
  if (((byte)ac & 1 | 1 < uVar27) != 1) {
    DAT_005bfaf5 = g14;
    auVar3._8_4_ = 0x89198;
    auVar3._0_8_ = uVar29;
    auVar3._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar3;
    auVar2._8_56_ = auVar3._8_56_;
    auVar2._4_4_ = auStackX_0;
    auVar2._0_4_ = fp;
    uVar29 = FUN_00089990();
    DAT_005bfb60 = 0xb;
    auStackX_0._12_52_ = auVar2._12_52_;
    auStackX_0._0_8_ = auVar2._0_8_;
    auStackX_0._8_4_ = 0x891a8;
    FUN_00089d50((int)uVar29,(int)((ulonglong)uVar29 >> 0x20),0xb,param_4,uVar27,param_6,param_7,
                 param_8,param_9,param_10,param_11,param_12);
    fp = auStackX_0;
    return;
  }
  uVar26 = uVar26 & 0xfffffff8;
  if (((ButtonPress_P1_0054fcd5 & button_hold) != button_none) &&
     ((ButtonCoinTestServiceStart_0054fcd4 & button_test) != off)) {
    ac = uVar26 | 2;
    if (((ButtonPress_P1_0054fcd5 & lever_2) == button_none) ||
       (ac = uVar26, (ButtonCoinTestServiceStart_0054fcd4 & button_service) == off)) {
      uVar26 = (uint)DAT_005bfb60;
      auVar18._8_4_ = 0x8929c;
      auVar18._0_8_ = uVar29;
      auVar18._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar18;
      auVar17._8_56_ = auVar18._8_56_;
      auVar17._4_4_ = auStackX_0;
      auVar17._0_4_ = fp;
      Debug_SetTextPosition(0x16,uVar26 * 3 + 8);
      auStackX_0._12_52_ = auVar17._12_52_;
      auStackX_0._0_8_ = auVar17._0_8_;
      auStackX_0._8_4_ = 0x892a8;
      auVar19._4_56_ = auStackX_0._8_56_;
      auVar19._0_4_ = auStack_80;
      auVar19._60_4_ = 0;
      auVar19 = auVar19 << 0x20;
      thunk_FUN_00008b0c(s__00089170);
      ac = ac & 0xfffffff8 | (uint)(10 < DAT_005bfb60) << 2 | (uint)(DAT_005bfb60 == 10) << 1 |
           (uint)(DAT_005bfb60 < 10);
      if (10 < DAT_005bfb60) {
        DAT_005bfb60 = g14;
      }
      else {
        DAT_005bfb60 = DAT_005bfb60 + 1;
      }
    }
    else {
      ac = uVar26 | 2;
      if ((ButtonPress_P1_0054fcd5 & lever_8) != button_none) {
        fp = (undefined1 *)unaff_pfp;
        return;
      }
      uVar27 = (uint)DAT_005bfb60;
      auVar21._8_4_ = 0x892fc;
      auVar21._0_8_ = uVar29;
      auVar21._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar21;
      auVar20._8_56_ = auVar21._8_56_;
      auVar20._4_4_ = auStackX_0;
      auVar20._0_4_ = fp;
      ac = uVar26;
      Debug_SetTextPosition(0x16,uVar27 * 3 + 8);
      auStackX_0._12_52_ = auVar20._12_52_;
      auStackX_0._0_8_ = auVar20._0_8_;
      auStackX_0._8_4_ = 0x89308;
      auVar1._4_56_ = auStackX_0._8_56_;
      auVar1._0_4_ = auStack_80;
      auVar1._60_4_ = 0;
      auVar19 = auVar1 << 0x20;
      thunk_FUN_00008b0c(s__00089170);
      ac = ac & 0xfffffff8 | (uint)(DAT_005bfb60 != 0) << 2 | (uint)(DAT_005bfb60 == 0) << 1;
      if (((byte)(ac >> 1) & 1) == 1) {
        DAT_005bfb60 = 0xb;
      }
      else {
        DAT_005bfb60 = DAT_005bfb60 - 1;
      }
    }
    auVar22._8_56_ = auVar19._8_56_;
    auVar22._4_4_ = auStackX_0;
    auVar22._0_4_ = auStackX_0;
    auStack_40._12_52_ = auVar19._12_52_;
    auStack_40._0_8_ = auVar22._0_8_;
    auStack_40._8_4_ = 0x89350;
    auVar23._4_56_ = auStack_40._8_56_;
    auVar23._0_4_ = auStack_80;
    auVar23._60_4_ = 0;
    auVar23 = auVar23 << 0x20;
    Debug_SetTextPosition(0x16,(uint)DAT_005bfb60 * 3 + 8);
    auVar25._12_52_ = auVar23._12_52_;
    auVar25._0_8_ = auVar23._0_8_;
    auVar25._8_4_ = 0x8935c;
    auVar24._8_56_ = auVar25._8_56_;
    auVar24._4_4_ = 0;
    auVar24._0_4_ = auStack_80;
    thunk_FUN_00008b0c(s__>_00089174);
    fp = (undefined1 *)auVar24._0_4_;
    return;
  }
  uVar27 = (uint)DAT_005bfb60;
  uVar26 = uVar26 | (uint)(0xb < uVar27) << 2;
  ac = uVar26 | (uint)(uVar27 == 0xb) << 1;
  ac = ac | uVar27 < 0xb;
  if (((byte)(uVar26 >> 2) & 1) != 1) {
    puVar28 = (&switchD_000891d8::switchdataD_000891dc)[uVar27];
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(DAT_005bfb60) {
    case 0:
      auVar4._8_4_ = 0x89210;
      auVar4._0_8_ = uVar29;
      auVar4._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar4;
      FUN_00089370(param_1,param_2,param_3,param_4,puVar28,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      return;
    case 1:
      auVar5._8_4_ = 0x89218;
      auVar5._0_8_ = uVar29;
      auVar5._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar5;
      FUN_000893d0(param_1,param_2,param_3,param_4,puVar28,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      return;
    case 2:
      auVar6._8_4_ = 0x89220;
      auVar6._0_8_ = uVar29;
      auVar6._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar6;
      FUN_00089430();
      return;
    case 3:
      auVar7._8_4_ = 0x89228;
      auVar7._0_8_ = uVar29;
      auVar7._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar7;
      FUN_00089480();
      return;
    case 4:
      auVar8._8_4_ = 0x89230;
      auVar8._0_8_ = uVar29;
      auVar8._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
      FUN_000894d0();
      return;
    case 5:
      auVar9._8_4_ = 0x89238;
      auVar9._0_8_ = uVar29;
      auVar9._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar9;
      FUN_00089520();
      return;
    case 6:
      auVar10._8_4_ = 0x89240;
      auVar10._0_8_ = uVar29;
      auVar10._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
      FUN_000895a0();
      return;
    case 7:
      auVar11._8_4_ = 0x89248;
      auVar11._0_8_ = uVar29;
      auVar11._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
      FUN_00089620();
      return;
    case 8:
      auVar12._8_4_ = 0x89250;
      auVar12._0_8_ = uVar29;
      auVar12._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
      FUN_00089680(param_1,param_2,param_3,param_4,puVar28,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      return;
    case 9:
      auVar13._8_4_ = 0x89258;
      auVar13._0_8_ = uVar29;
      auVar13._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
      FUN_000896f0();
      return;
    case 10:
      auVar14._8_4_ = 0x89260;
      auVar14._0_8_ = uVar29;
      auVar14._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
      FUN_00089750();
      return;
    case 0xb:
      auVar16._8_4_ = 0x89268;
      auVar16._0_8_ = uVar29;
      auVar16._12_52_ = in_register_0000000c;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
      auVar15._8_56_ = auVar16._8_56_;
      auVar15._4_4_ = 0;
      auVar15._0_4_ = fp;
      FUN_00089960();
      unaff_pfp = auVar15._0_4_;
    }
  }
  fp = (undefined1 *)unaff_pfp;
  return;
}

