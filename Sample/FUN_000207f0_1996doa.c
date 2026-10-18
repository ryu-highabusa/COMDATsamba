
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_000207f0(uint param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 (*pauVar3) [64];
  DOA_GRPLSLIP DVar4;
  DOA_ACTCODE_COMMON DVar5;
  DOA_ACTSTATE DVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [32];
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  int iVar29;
  uint uVar30;
  undefined1 in_register_0000000c [20];
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined1 in_register_00000030 [16];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar22 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  char cVar31;
  byte bVar32;
  bool bVar33;
  uint8_t uVar34;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar36;
  undefined1 auStackX_0 [64];
  undefined1 auStack_40 [64];
  undefined1 auStack_80 [999872];
  undefined1 auVar13 [64];
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar28 [60];
  int iVar35;
  
  uVar7 = ac;
  uVar8 = CONCAT44(auStackX_0,unaff_pfp);
  auVar9._8_4_ = unaff_retaddr;
  auVar9._0_8_ = uVar8;
  auVar9._12_20_ = in_register_0000000c;
  auVar10._32_4_ = unaff_r8;
  auVar10._0_32_ = auVar9;
  auVar10._36_4_ = unaff_r9;
  auVar10._40_4_ = unaff_r10;
  auVar10._44_4_ = unaff_r11;
  auVar10._48_16_ = in_register_00000030;
  auVar11._0_24_ = auVar9._0_24_;
  auVar11._24_4_ = param_1;
  auVar11._32_32_ = auVar10._32_32_;
  auVar11._28_4_ = param_1 ^ 1;
  auVar12._0_16_ = auVar9._0_16_;
  auVar12._16_4_ = &g_player1 + param_1;
  auVar12._24_40_ = auVar11._24_40_;
  auVar12._20_4_ = &g_player1 + auVar11._28_4_;
  bVar32 = (&g_player1)[param_1].animation_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar32) << 2 | (uint)(bVar32 == 1) << 1 | (uint)(bVar32 == 0);
  auVar13._12_52_ = auVar12._12_52_;
  if (((byte)ac & 1 | 1 < bVar32) == 1) {
    ac = uVar7 & 0xfffffff8 | (uint)((&g_player1)[param_1].animation_flag < 2);
    if (((byte)ac & 1 | 2 < (&g_player1)[param_1].animation_flag) != 1) {
      (&g_player1)[param_1].animation_flag = '\x03';
      uVar36 = (uint)(&g_player1)[param_1].action_request;
      uVar30 = uVar7 & 0xfffffff8 | (uint)(uVar36 < 0xff) << 2 | (uint)(uVar36 == 0xff) << 1;
      ac = uVar30 | 0xff < uVar36;
      if (((byte)(uVar30 >> 1) & 1) == 1) {
        ac = uVar7 & 0xfffffff8 |
             (uint)((&g_player1)[auVar11._28_4_].action_state < 0xA_THROWCAUGHT);
        if ((((byte)ac & 1 | 0xA_THROWCAUGHT < (&g_player1)[auVar11._28_4_].action_state) != 1) &&
           (ac = uVar7 & 0xfffffff8 | (uint)((&g_player1)[auVar11._28_4_].grapple_slip == Uknown0),
           ((byte)ac & 1 | Unknown1 < (&g_player1)[auVar11._28_4_].grapple_slip) != 1)) {
          DVar5 = (&g_player1)[auVar11._28_4_].action_code;
          ac = uVar7 & 0xfffffff8 | (uint)(DVar5 < 0x4e) << 2 | (uint)(DVar5 == 0x4e) << 1 |
               (uint)(0x4e < DVar5);
          if (((byte)ac & 1 | DVar5 < 0x4e) != 1) {
            (&g_player1)[auVar11._28_4_].grapple_slip = g14;
            DVar5 = (&g_player1)[param_1].action_code;
            goto LAB_000208f8;
          }
        }
      }
      else {
        auVar14._8_4_ = 0x20860;
        auVar14._0_8_ = uVar8;
        auVar14._12_52_ = auVar13._12_52_;
        *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar14;
        auVar12._8_56_ = auVar14._8_56_;
        auVar12._4_4_ = &auStack_40;
        auVar12._0_4_ = fp;
        cVar31 = Player_GetActionStateForCode(uVar36,param_1);
        uVar7 = ac;
        auVar15._0_8_ = auVar12._0_8_;
        auVar15._12_52_ = auVar12._12_52_;
        if (cVar31 == '\x04') {
          DVar4 = (&g_player1)[auVar11._28_4_].grapple_slip;
          ac = ac & 0xfffffff8 | (uint)(Unknown1 < DVar4) << 2 | (uint)(DVar4 == Unknown1) << 1 |
               (uint)(DVar4 == Uknown0);
          if (((byte)ac & 1 | Unknown1 < DVar4) == 1) {
            fp = &auStack_40;
            auVar15._8_4_ = 0x20888;
            auVar12._8_56_ = auVar15._8_56_;
            auVar12._4_4_ = (undefined1 (*) [64])auStack_80;
            auVar12._0_4_ = auStackX_0;
            auStackX_0 = auVar15;
            FUN_00024030(param_1);
          }
          else {
            (&g_player1)[auVar11._28_4_].grapple_slip = g14;
            DVar5 = (&g_player1)[param_1].action_request;
            fp = (undefined1 (*) [64])register0x00000004;
LAB_000208f8:
            (&g_player1)[auVar11._28_4_].action_request = DVar5 + CMD_BACK;
            puVar2 = (undefined1 *)(auVar12._4_4_ + 0x3fU & 0xffffffc0);
            auVar16._12_52_ = auVar12._12_52_;
            auVar16._0_8_ = auVar12._0_8_;
            auVar16._8_4_ = 0x20908;
            *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar16;
            auVar12._8_56_ = auVar16._8_56_;
            auVar12._4_4_ = (undefined1 (*) [64])(puVar2 + 0x40);
            auVar12._0_4_ = fp;
            FUN_00024030(auVar11._28_4_);
            fp = (undefined1 (*) [64])puVar2;
          }
        }
        else {
          ac = ac & 0xfffffff8 | (uint)((&g_player1)[param_1].action_state < 0x6_HOLDSUCCESSFUL);
          fp = (undefined1 (*) [64])register0x00000004;
          if (((byte)ac & 1 | 0x6_HOLDSUCCESSFUL < (&g_player1)[param_1].action_state) != 1) {
            DVar6 = (&g_player1)[auVar11._28_4_].action_state;
            ac = uVar7 & 0xfffffff8 | (uint)(0xB_HOLDCAUGHT < DVar6) << 2 |
                 (uint)(DVar6 == 0xB_HOLDCAUGHT) << 1 | (uint)(DVar6 < 0xB_HOLDCAUGHT);
            if (((byte)ac & 1 | 0xB_HOLDCAUGHT < DVar6) == 1) {
LAB_000208c0:
              bVar32 = (&g_player1)[param_1].action_request;
              auVar11._28_4_ = param_1;
            }
            else {
              DVar4 = (&g_player1)[auVar11._28_4_].grapple_slip;
              ac = uVar7 & 0xfffffff8 | (uint)(Unknown1 < DVar4) << 2 |
                   (uint)(DVar4 == Unknown1) << 1 | (uint)(DVar4 == Uknown0);
              if (((byte)ac & 1 | Unknown1 < DVar4) == 1) goto LAB_000208c0;
              (&g_player1)[auVar11._28_4_].grapple_slip = g14;
              (&g_player1)[auVar11._28_4_].action_request =
                   (&g_player1)[param_1].action_request + '\x02';
              bVar32 = (&g_player1)[auVar11._28_4_].action_request;
            }
            fp = &auStack_40;
            auStackX_0._8_4_ = 0x208d0;
            auStackX_0._0_8_ = auVar15._0_8_;
            auStackX_0._12_52_ = auVar15._12_52_;
            auVar12._8_56_ = auStackX_0._8_56_;
            auVar12._4_4_ = (undefined1 (*) [64])auStack_80;
            auVar12._0_4_ = auStackX_0;
            FUN_000229f0((uint)bVar32,auVar11._28_4_,0);
          }
        }
      }
    }
  }
  else {
    (&g_player1)[param_1].animation_flag = g14;
    auVar13._8_4_ = 0x20838;
    auVar13._0_8_ = uVar8;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar13;
    auVar12._8_56_ = auVar13._8_56_;
    auVar12._4_4_ = &auStack_40;
    auVar12._0_4_ = fp;
    FUN_00023da0(param_1);
    fp = (undefined1 (*) [64])register0x00000004;
  }
  bVar32 = (&g_player1)[param_1].danger_flag;
  ac = ac & 0xfffffff8 | (uint)(1 < bVar32) << 2 | (uint)(bVar32 == 1) << 1 | (uint)(bVar32 == 0);
  if (((byte)ac & 1 | 1 < bVar32) != 1) {
    pauVar3 = (undefined1 (*) [64])(auVar12._4_4_ + 0x3fU & 0xffffffc0);
    auVar17._12_52_ = auVar12._12_52_;
    auVar17._0_8_ = auVar12._0_8_;
    auVar17._8_4_ = 0x20918;
    *(undefined1 (*) [64])((uint)fp & 0xffffffc0) = auVar17;
    auVar12._8_56_ = auVar17._8_56_;
    auVar12._4_4_ = pauVar3 + 1;
    auVar12._0_4_ = fp;
    auVar11._28_4_ = FUN_00025210(param_1);
    uVar7 = ac;
    auVar11._28_4_ = auVar11._28_4_ & 0xff;
    ac = ac & 0xfffffff8 | (uint)(1 < auVar11._28_4_) << 2 | (uint)(auVar11._28_4_ == 1) << 1 |
         (uint)(auVar11._28_4_ == 0);
    if (((byte)ac & 1 | 1 < auVar11._28_4_) != 1) {
      uVar7 = uVar7 & 0xfffffff8;
      if ((&g_player1)[param_1].down_state == '\0') {
        DAT_00884004 = param_1 * 0xb4;
      }
      else {
        DAT_00884004 = (&DAT_005552e4)[param_1 * 0x2d];
      }
      uVar30 = auVar12._24_4_;
      iVar29 = auVar12._16_4_;
      DAT_008800a0 = 0xa0a;
      auVar18._0_32_ = auVar12._0_32_;
      auVar18._32_4_ = auVar11._28_4_;
      auVar18._36_4_ = DAT_00884004;
      uVar36 = *(uint *)PTR_DAT_000006a4;
      DAT_00884000 = auVar11._28_4_;
      *(uint *)(iVar29 + 0x14) = uVar36 & 0xffff;
      *(uint *)(iVar29 + 0x1c) = uVar36 & 0xffff;
      if (*(char *)(iVar29 + 0x4b) != '\0') {
        (&DAT_00557f80)[uVar30] = *(undefined1 *)(iVar29 + 0x4b);
      }
      if ((*(char *)(iVar29 + 0x50) == '\0') ||
         (*(ushort *)(iVar29 + 0x20) <= *(ushort *)(iVar29 + 0x22))) {
        *(DOA_GRPLSLIP *)(iVar29 + 0x35) = g14;
        *(undefined1 *)(iVar29 + 0x3f) = 1;
        *(DOA_GRPLSLIP *)(iVar29 + 0x3e) = g14;
        if ((*(ushort *)(iVar29 + 0x20) == 0) ||
           ((BYTE_0054fcfd == 1 && (*(ushort *)(iVar29 + 0x20) <= *(ushort *)(iVar29 + 0x22))))) {
          uVar7 = uVar7 | (uint)(*(char *)(iVar29 + 0x2f) != '\0') << 2;
          ac = uVar7 | (uint)(*(char *)(iVar29 + 0x2f) == '\0') << 1;
          bVar32 = 0x7d;
          if (((byte)(uVar7 >> 2) & 1) != 1) {
            bVar32 = 0x7c;
          }
        }
        else {
          uVar7 = uVar7 | (uint)(*(char *)(iVar29 + 0x2f) != '\0') << 2;
          ac = uVar7 | (uint)(*(char *)(iVar29 + 0x2f) == '\0') << 1;
          bVar32 = 0x7b;
          if (((byte)(uVar7 >> 2) & 1) != 1) {
            bVar32 = 0x7a;
          }
        }
        FUN_00024f80(bVar32,uVar30);
        fp = pauVar3;
        return;
      }
      DAT_008800a0 = 0xa0a;
      auVar18._40_4_ = *(uint *)(iVar29 + 4) ^ 0x80000000;
      auVar18._48_16_ = auVar12._48_16_;
      auVar18._44_4_ = *(uint *)(iVar29 + 0xc) ^ 0x80000000;
      auVar19._24_40_ = auVar18._24_40_;
      auVar19._0_20_ = auVar12._0_20_;
      bVar1 = (*(int *)(iVar29 + 0x14) - (*(uint *)PTR_DAT_000006a4 & 0xffff) & 0xffff) < 0x8000;
      auVar19[0x14] = bVar1;
      auVar19._21_3_ = 0;
      cVar31 = *(char *)(iVar29 + 0x2f);
      ac = uVar7 | (uint)(cVar31 != '\0') << 2 | (uint)(cVar31 == '\0') << 1;
      auVar21._0_8_ = auVar12._0_8_;
      auVar21._12_52_ = auVar19._12_52_;
      DAT_00884000 = auVar18._40_4_;
      DAT_00884004 = auVar18._44_4_;
      if (cVar31 != '\0') {
        fp = (undefined1 (*) [64])(auVar12._4_4_ + 0x3fU & 0xffffffc0);
        auVar23._8_4_ = 0x20b04;
        auVar23._0_8_ = auVar21._0_8_;
        auVar23._12_52_ = auVar21._12_52_;
        *pauVar3 = auVar23;
        auVar22._4_56_ = auVar23._8_56_;
        auVar22._0_4_ = fp + 1;
        auVar22._60_4_ = 0;
        auVar22 = auVar22 << 0x20;
        bVar33 = FUN_00025790(uVar30);
        auVar28 = auVar22._4_60_;
        iVar35 = CONCAT31(extraout_var_00,bVar33);
        ac = ac & 0xfffffff8 | (uint)(1 < iVar35) << 2 | (uint)(iVar35 == 1) << 1 |
             (uint)(iVar35 < 1);
        if (((byte)ac & 1 | 1 < iVar35) != 1) {
          uVar34 = '!';
          goto LAB_00020b0c;
        }
        uVar34 = ' ';
      }
      else {
        fp = (undefined1 (*) [64])(auVar12._4_4_ + 0x3fU & 0xffffffc0);
        auVar21._8_4_ = 0x20ae8;
        *pauVar3 = auVar21;
        auVar20._4_56_ = auVar21._8_56_;
        auVar20._0_4_ = fp + 1;
        auVar20._60_4_ = 0;
        auVar20 = auVar20 << 0x20;
        bVar33 = FUN_00025790(uVar30);
        auVar28 = auVar20._4_60_;
        iVar35 = CONCAT31(extraout_var,bVar33);
        ac = ac & 0xfffffff8 | (uint)(1 < iVar35) << 2 | (uint)(iVar35 == 1) << 1 |
             (uint)(iVar35 < 1);
        if (((byte)ac & 1 | 1 < iVar35) != 1) {
          uVar34 = '\x1e';
LAB_00020b0c:
          auVar24._4_60_ = auVar28;
          auVar24._0_4_ = pauVar3;
          auVar25._12_52_ = auVar28._8_52_;
          auVar25._0_8_ = auVar24._0_8_;
          auVar25._8_4_ = 0x20b14;
          *fp = auVar25;
          Player_SetActCode(uVar34,uVar30);
          *(bool *)(iVar29 + 0x34) = !bVar1;
          return;
        }
        uVar34 = '\x1f';
      }
      auVar26._4_60_ = auVar28;
      auVar26._0_4_ = pauVar3;
      auVar27._12_52_ = auVar28._8_52_;
      auVar27._0_8_ = auVar26._0_8_;
      auVar27._8_4_ = 0x20b2c;
      *fp = auVar27;
      auVar12._8_56_ = auVar27._8_56_;
      auVar12._4_4_ = (undefined1 (*) [64])0x0;
      auVar12._0_4_ = fp;
      Player_SetActCode(uVar34,uVar30);
      *(bool *)(iVar29 + 0x34) = bVar1;
    }
  }
  fp = (undefined1 (*) [64])auVar12._0_4_;
  return;
}

