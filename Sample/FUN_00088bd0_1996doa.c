
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Sound-test input/update handler */

void SoundTest_Update(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                     undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 (*pauVar3) [64];
  char cVar4;
  undefined8 uVar5;
  dword dVar6;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined1 in_register_00000014 [44];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar29 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  int iVar36;
  undefined1 auVar34 [64];
  DOA_SOUND_COMMAND DVar37;
  uint uVar38;
  dword dVar39;
  int iVar40;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar10 [64];
  undefined1 auVar15 [64];
  undefined1 auVar19 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar25 [64];
  undefined1 auVar28 [64];
  undefined1 auVar30 [64];
  undefined1 auVar33 [64];
  undefined1 auVar35 [64];
  
  uVar1 = ac;
  uVar5 = CONCAT44(auStackX_0,unaff_pfp);
  auVar7._8_4_ = unaff_retaddr;
  auVar7._0_8_ = uVar5;
  auVar7._12_4_ = unaff_r3;
  auVar7._16_4_ = unaff_r4;
  auVar7._20_44_ = in_register_00000014;
  uVar38 = (uint)DAT_005bfaf5;
  ac = ac & 0xfffffff8 | (uint)(1 < uVar38) << 2 | (uint)(uVar38 == 1) << 1 | (uint)(uVar38 == 0);
  auVar8._12_52_ = auVar7._12_52_;
  if (((byte)ac & 1 | 1 < uVar38) != 1) {
    DAT_005bfaf5 = (byte)g14;
    g_sound_test_entry_index = g14;
    DAT_005bfb54 = 0x14;
    auVar8._8_4_ = 0x88bfc;
    auVar8._0_8_ = uVar5;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar8;
    FUN_000890b0(param_1,param_2,0x14,param_4,uVar38,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
    return;
  }
  ac = uVar1 & 0xfffffff8;
  if ((ButtonPress_P1_0054fcd5 & button_hold) == button_none) {
    ac = ac | (uint)(0x10 < (int)g_sound_test_entry_index) << 2;
    uVar1 = ac;
    ac = ac | (uint)(g_sound_test_entry_index == 0x10) << 1;
    ac = ac | (int)g_sound_test_entry_index < 0x10;
    if (((byte)(uVar1 >> 2) & 1) == 1) {
      DVar37 = g_sound_test_se_catalog[g_sound_test_entry_index - 0x11].sound_id;
      auVar11._8_4_ = 0x88c5c;
      auVar11._0_8_ = uVar5;
      auVar11._12_52_ = auVar8._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar11;
      auVar7._8_56_ = auVar11._8_56_;
      auVar7._4_4_ = auStack_40;
      auVar7._0_4_ = fp;
      Sound_Request(DVar37);
      fp = (undefined1 (*) [64])register0x00000004;
    }
    else {
      auVar10._8_4_ = 0x88c24;
      auVar10._0_8_ = uVar5;
      auVar10._12_52_ = auVar8._12_52_;
      *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar10;
      auVar9._8_56_ = auVar10._8_56_;
      auVar9._4_4_ = auStackX_0;
      auVar9._0_4_ = fp;
      Sound_Request(0xa00001);
      fp = &auStack_40;
      auStackX_0._12_52_ = auVar9._12_52_;
      auStackX_0._0_8_ = auVar9._0_8_;
      auStackX_0._8_4_ = 0x88c3c;
      auVar7._8_56_ = auStackX_0._8_56_;
      auVar7._4_4_ = auStack_80;
      auVar7._0_4_ = auStackX_0;
      Sound_Request(g_sound_test_bgm_catalog[g_sound_test_entry_index].sound_id);
    }
  }
  else if ((ButtonPress_P1_0054fcd5 & button_punch) == button_none) {
    auVar12._8_4_ = 0x88c78;
    auVar12._0_8_ = uVar5;
    auVar12._12_52_ = auVar8._12_52_;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar12;
    auVar7._8_56_ = auVar12._8_56_;
    auVar7._4_4_ = auStack_40;
    auVar7._0_4_ = fp;
    Sound_Request(0xa00001);
    fp = (undefined1 (*) [64])register0x00000004;
  }
  uVar1 = ac & 0xfffffff8;
  ac = uVar1 | 2;
  if (((ButtonCoinTestServiceStart_0054fcd4 & button_test) == off) ||
     (ac = uVar1, (ButtonPress_P1_0054fcd5 & button_kick) == button_none)) {
    puVar2 = (undefined1 *)(auVar7._4_4_ + 0x3fU & 0xffffffc0);
    auVar13._12_52_ = auVar7._12_52_;
    auVar13._0_8_ = auVar7._0_8_;
    auVar13._8_4_ = 0x88c94;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
    auVar7._8_56_ = auVar13._8_56_;
    auVar7._4_4_ = puVar2 + 0x40;
    auVar7._0_4_ = fp;
    SoundTest_StopAndExit_candidate();
    fp = (undefined1 (*) [64])puVar2;
  }
  dVar39 = g_sound_test_entry_index;
  uVar1 = ac & 0xfffffff8;
  if ((ButtonPress_P1 & lever_8) == button_none) {
    if ((ButtonPress_P1_0054fcd5 & lever_8) == button_none) {
      dVar39 = g_sound_test_entry_index + 1;
      param_3 = 0x11e;
      ac = uVar1 | (uint)((int)dVar39 < 0x11e) << 2;
      uVar1 = ac;
      ac = ac | (uint)(dVar39 == 0x11e) << 1;
      uVar38 = ac;
      ac = ac | 0x11e < (int)dVar39;
      g_sound_test_entry_index = dVar39;
      if (((byte)(uVar38 >> 1) & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
        g_sound_test_entry_index = g14;
      }
      goto LAB_00088e00;
    }
    uVar38 = uVar1 | (uint)(0 < (int)DAT_005bfb54) << 2;
    ac = uVar38 | (uint)(DAT_005bfb54 == 0) << 1;
    ac = ac | (int)DAT_005bfb54 < 0;
    if (((byte)ac & 1 | (byte)(uVar38 >> 2) & 1) != 1) {
      dVar39 = g_sound_test_entry_index + 1;
      param_3 = 0x11e;
      uVar1 = uVar1 | (uint)((int)dVar39 < 0x11e) << 2 | (uint)(dVar39 == 0x11e) << 1;
      ac = uVar1 | 0x11e < (int)dVar39;
      g_sound_test_entry_index = dVar39;
      if (((byte)(uVar1 >> 1) & 1 | (int)dVar39 < 0x11e) != 1) {
        g_sound_test_entry_index = g14;
      }
      goto LAB_00088e00;
    }
LAB_00088d64:
    dVar39 = DAT_005bfb54 - 1;
    DAT_005bfb54 = dVar39;
  }
  else {
    if ((ButtonPress_P1 & lever_2) != button_none) {
      param_3 = 0x14;
      DAT_005bfb54 = 0x14;
      dVar39 = (dword)ButtonCoinTestServiceStart_0054fcd4;
      ac = uVar1 | 2;
      if ((ButtonCoinTestServiceStart_0054fcd4 & button_service) == off) {
        g_sound_test_entry_index = g_sound_test_entry_index + 1;
        param_3 = 0x11e;
        ac = uVar1 | (uint)((int)g_sound_test_entry_index < 0x11e) << 2;
        uVar1 = ac;
        ac = ac | (uint)(g_sound_test_entry_index == 0x11e) << 1;
        uVar38 = ac;
        ac = ac | 0x11e < (int)g_sound_test_entry_index;
        if (((byte)(uVar38 >> 1) & 1 | (byte)(uVar1 >> 2) & 1) != 1) {
          g_sound_test_entry_index = g14;
        }
        uVar1 = auVar7._4_4_ + 0x3f;
        uVar38 = uVar1 & 0xffffffc0;
        auVar15._12_52_ = auVar7._12_52_;
        auVar15._0_8_ = auVar7._0_8_;
        auVar15._8_4_ = 0x88dc4;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar15;
        auVar14._8_56_ = auVar15._8_56_;
        auVar14._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
        Sound_Request(0xa00001);
        ac = ac & 0xfffffff8 | (uint)(0x10 < (int)g_sound_test_entry_index) << 2 |
             (uint)(g_sound_test_entry_index == 0x10) << 1 |
             (uint)((int)g_sound_test_entry_index < 0x10);
        auVar16._0_8_ = auVar14._0_8_;
        auVar16._12_52_ = auVar14._12_52_;
        if (0x10 < (int)g_sound_test_entry_index) {
          dVar39 = (g_sound_test_entry_index - 0x11) * 0x20;
          DVar37 = g_sound_test_se_catalog[g_sound_test_entry_index - 0x11].sound_id;
          fp = (undefined1 (*) [64])(uVar38 + 0x40);
          auVar17._8_4_ = 0x88e00;
          auVar17._0_8_ = auVar16._0_8_;
          auVar17._12_52_ = auVar16._12_52_;
          *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar17;
          auVar7._8_56_ = auVar17._8_56_;
          auVar7._0_8_ = CONCAT44(uVar38 + 0x80,uVar1) & 0xffffffffffffffc0;
          Sound_Request(DVar37);
        }
        else {
          dVar39 = g_sound_test_entry_index * 0x20;
          DVar37 = g_sound_test_bgm_catalog[g_sound_test_entry_index].sound_id;
          fp = (undefined1 (*) [64])(uVar38 + 0x40);
          auVar16._8_4_ = 0x88de0;
          *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar16;
          auVar7._8_56_ = auVar16._8_56_;
          auVar7._0_8_ = CONCAT44(uVar38 + 0x80,uVar1) & 0xffffffffffffffc0;
          Sound_Request(DVar37);
        }
      }
      goto LAB_00088e00;
    }
    ac = uVar1;
    if ((ButtonPress_P1_0054fcd5 & lever_2) != button_none) {
      uVar1 = uVar1 | (uint)(0 < (int)DAT_005bfb54) << 2;
      ac = uVar1 | (uint)(DAT_005bfb54 == 0) << 1;
      ac = ac | (int)DAT_005bfb54 < 0;
      if (((byte)ac & 1 | (byte)(uVar1 >> 2) & 1) == 1) goto LAB_00088d64;
    }
    ac = ac & 0xfffffff8 | (uint)(0 < (int)g_sound_test_entry_index) << 2 |
         (uint)(g_sound_test_entry_index == 0) << 1 | (uint)((int)g_sound_test_entry_index < 0);
    if (((byte)ac & 1 | 0 < (int)g_sound_test_entry_index) == 1) {
      dVar39 = g_sound_test_entry_index - 1;
      g_sound_test_entry_index = dVar39;
    }
    else {
      param_3 = 0x11e;
      g_sound_test_entry_index = 0x11e;
    }
  }
LAB_00088e00:
  uVar1 = auVar7._4_4_ + 0x3f;
  uVar38 = uVar1 & 0xffffffc0;
  auVar19._12_52_ = auVar7._12_52_;
  auVar19._0_8_ = auVar7._0_8_;
  auVar19._8_4_ = 0x88e0c;
  *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar19;
  auVar18._8_56_ = auVar19._8_56_;
  auVar18._0_8_ = CONCAT44(uVar1,fp) & 0xffffffc0ffffffff;
  Debug_SetTextPosition(0x1a,0x10);
  dVar6 = g_sound_test_entry_index;
  auVar21._12_52_ = auVar18._12_52_;
  auVar21._0_8_ = auVar18._0_8_;
  auVar21._8_4_ = 0x88e20;
  *(undefined1 (*) [64])(uVar1 & 0xffffffc0) = auVar21;
  auVar20._8_56_ = auVar21._8_56_;
  auVar20._0_8_ = CONCAT44(uVar38 + 0x40,uVar1) & 0xffffffffffffffc0;
  FUN_0008e740(s_No___3d_00088b90,dVar6,param_3,param_4,dVar39,param_6,param_7,param_8,param_9,
               param_10,param_11,param_12);
  auVar23._12_52_ = auVar20._12_52_;
  auVar23._0_8_ = auVar20._0_8_;
  auVar23._8_4_ = 0x88e2c;
  *(undefined1 (*) [64])(uVar38 + 0x40) = auVar23;
  auVar22._8_56_ = auVar23._8_56_;
  auVar22._4_4_ = uVar38 + 0x80;
  auVar22._0_4_ = uVar38 + 0x40;
  Debug_SetTextPosition(0x1a,0x12);
  iVar36 = uVar38 + 0xc0;
  auVar25._12_52_ = auVar22._12_52_;
  auVar25._0_8_ = auVar22._0_8_;
  auVar25._8_4_ = 0x88e38;
  *(undefined1 (*) [64])(uVar38 + 0x80) = auVar25;
  auVar24._8_56_ = auVar25._8_56_;
  auVar24._4_4_ = iVar36;
  auVar24._0_4_ = uVar38 + 0x80;
  thunk_FUN_00008b0c(s__00088ba0);
  ac = ac & 0xfffffff8 | (uint)(0x10 < (int)g_sound_test_entry_index) << 2 |
       (uint)(g_sound_test_entry_index == 0x10) << 1 | (uint)((int)g_sound_test_entry_index < 0x10);
  auVar26._0_16_ = auVar24._0_16_;
  auVar26._20_44_ = auVar24._20_44_;
  auVar28._0_8_ = auVar24._0_8_;
  if (0x10 < (int)g_sound_test_entry_index) {
    auVar31._16_4_ = 0;
    auVar31._0_16_ = auVar26._0_16_;
    auVar31._20_44_ = auVar26._20_44_;
    auVar33._12_52_ = auVar31._12_52_;
    auVar33._8_4_ = 0x88ebc;
    auVar33._0_8_ = auVar28._0_8_;
    *(undefined1 (*) [64])(uVar38 + 0xc0) = auVar33;
    auVar32._8_56_ = auVar33._8_56_;
    auVar32._4_4_ = uVar38 + 0x140;
    auVar32._0_4_ = iVar36;
    Debug_SetTextPosition(0x1a,0x12);
    cVar4 = g_sound_test_bgm_catalog[g_sound_test_entry_index + 1].sound_name[0];
    uVar1 = ac & 0xfffffff8 | (uint)('\0' < cVar4) << 2 | (uint)(cVar4 == '\0') << 1;
    ac = uVar1 | cVar4 < '\0';
    fp = (undefined1 (*) [64])(uVar38 + 0x100);
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      do {
        iVar36 = auVar32._16_4_;
        iVar40 = g_sound_test_entry_index * 0x20;
        cVar4 = *(char *)(iVar40 + 0x209c884 + iVar36);
        pauVar3 = (undefined1 (*) [64])(auVar32._4_4_ + 0x3fU & 0xffffffc0);
        auVar35._12_52_ = auVar32._12_52_;
        auVar35._0_8_ = auVar32._0_8_;
        auVar35._8_4_ = 0x88ef4;
        *fp = auVar35;
        auVar34._8_56_ = auVar35._8_56_;
        auVar34._4_4_ = pauVar3 + 1;
        auVar34._0_4_ = fp;
        FUN_0008e740(s__c_00088bc0,(int)cVar4,param_3,param_4,iVar40,param_6,param_7,param_8,param_9
                     ,param_10,param_11,param_12);
        auVar32._20_44_ = auVar34._20_44_;
        auVar32._0_16_ = auVar34._0_16_;
        auVar32._16_4_ = iVar36 + 1;
        cVar4 = *(char *)(g_sound_test_entry_index * 0x20 + 0x209c884 + auVar32._16_4_);
        ac = ac & 0xfffffff8 | (uint)('\0' < cVar4) << 2 | (uint)(cVar4 == '\0') << 1 |
             (uint)(cVar4 < '\0');
        fp = pauVar3;
      } while (((byte)ac & 1 | '\0' < cVar4) == 1);
    }
    fp = (undefined1 (*) [64])auVar32._0_4_;
    return;
  }
  auVar26._16_4_ = 0;
  auVar28._12_52_ = auVar26._12_52_;
  auVar28._8_4_ = 0x88e54;
  *(undefined1 (*) [64])(uVar38 + 0xc0) = auVar28;
  auVar27._8_56_ = auVar28._8_56_;
  auVar27._4_4_ = uVar38 + 0x140;
  auVar27._0_4_ = iVar36;
  Debug_SetTextPosition(0x1a,0x12);
  cVar4 = g_sound_test_bgm_catalog[g_sound_test_entry_index].sound_name[0];
  uVar1 = ac & 0xfffffff8 | (uint)('\0' < cVar4) << 2 | (uint)(cVar4 == '\0') << 1;
  ac = uVar1 | cVar4 < '\0';
  fp = (undefined1 (*) [64])(uVar38 + 0x100);
  if (((byte)(uVar1 >> 1) & 1) != 1) {
    do {
      iVar36 = auVar27._16_4_;
      iVar40 = g_sound_test_entry_index * 0x20;
      cVar4 = *(char *)(iVar40 + 0x209c864 + iVar36);
      pauVar3 = (undefined1 (*) [64])(auVar27._4_4_ + 0x3fU & 0xffffffc0);
      auVar30._12_52_ = auVar27._12_52_;
      auVar30._0_8_ = auVar27._0_8_;
      auVar30._8_4_ = 0x88e8c;
      *fp = auVar30;
      auVar29._8_56_ = auVar30._8_56_;
      auVar29._4_4_ = pauVar3 + 1;
      auVar29._0_4_ = fp;
      FUN_0008e740(s__c_00088bc0,(int)cVar4,param_3,param_4,iVar40,param_6,param_7,param_8,param_9,
                   param_10,param_11,param_12);
      auVar27._20_44_ = auVar29._20_44_;
      auVar27._0_16_ = auVar29._0_16_;
      auVar27._16_4_ = iVar36 + 1;
      cVar4 = *(char *)(g_sound_test_entry_index * 0x20 + 0x209c864 + auVar27._16_4_);
      ac = ac & 0xfffffff8 | (uint)('\0' < cVar4) << 2 | (uint)(cVar4 == '\0') << 1 |
           (uint)(cVar4 < '\0');
      fp = pauVar3;
    } while (((byte)ac & 1 | '\0' < cVar4) == 1);
  }
  fp = (undefined1 (*) [64])auVar27._0_4_;
  return;
}

