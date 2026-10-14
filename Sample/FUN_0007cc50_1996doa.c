
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0007cc50(uint param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 unaff_pfp;
  undefined1 in_register_0000000c [52];
  undefined1 auVar3 [64];
  undefined1 auVar4 [64];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined1 auVar8 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  int iVar14;
  undefined *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar7 [64];
  undefined1 auVar9 [64];
  
  uVar1 = ac;
  puVar17 = DAT_005bf870;
  puVar15 = DAT_005b9978;
  uVar2 = CONCAT44(auStackX_0,unaff_pfp);
  uVar18 = param_2 & 0x80;
  g13 = (undefined1 *)((int)&DWORD_0000007c + 3);
  uVar16 = param_2 & 0x7f;
  if (DAT_005b975a != 1) {
    if (DAT_005b975a < 2) {
      ac = ac & 0xfffffff8 | (uint)(DAT_005b975a != 0) << 2 | (uint)(DAT_005b975a == 0) << 1;
      if (((byte)(ac >> 1) & 1) == 1) {
        g13 = (undefined1 *)0x1;
        DAT_0054b158 = g14;
        DAT_005b975a = 1;
        fp = unaff_pfp;
        return;
      }
    }
    else {
      if (DAT_005b975a == 2) {
        ac = ac & 0xfffffff8 | (uint)(5 < param_1) << 2 | (uint)(param_1 == 5) << 1 |
             (uint)(param_1 < 5);
        switch(param_1) {
        case 0:
        case 3:
          ac = uVar1 & 0xfffffff8 | (uint)(uVar18 != 0) << 2 | (uint)(uVar18 == 0) << 1;
          if (uVar18 == 0) {
            auVar3._8_4_ = 0x7cdd4;
            auVar3._0_8_ = uVar2;
            auVar3._12_52_ = in_register_0000000c;
            *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar3;
            iVar14 = FUN_0007d080(puVar15,puVar17,0,0,0x1ff,0x7f);
            uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar14) << 2 | (uint)(iVar14 == 0) << 1;
            ac = uVar1 | iVar14 < 0;
            if (((byte)(uVar1 >> 1) & 1) != 1) {
              DAT_005b975a = DAT_005b975a + 1;
            }
            return;
          }
          puVar15 = DAT_005b9978 + 0x20000;
          auVar4._8_4_ = 0x7ce1c;
          auVar4._0_8_ = uVar2;
          auVar4._12_52_ = in_register_0000000c;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar4;
          iVar14 = FUN_0007d080(puVar15,puVar17,0,0,0x1ff,0x7f);
          uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar14) << 2 | (uint)(iVar14 == 0) << 1;
          ac = uVar1 | iVar14 < 0;
          if (((byte)(uVar1 >> 1) & 1) != 1) {
            DAT_005b975a = DAT_005b975a + 1;
          }
          return;
        case 1:
        case 4:
          goto switchD_0007cd90_caseD_1;
        case 2:
        case 5:
          auVar9._8_4_ = 0x7cef4;
          auVar9._0_8_ = uVar2;
          auVar9._12_52_ = in_register_0000000c;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar9;
          auVar8._8_56_ = auVar9._8_56_;
          auVar8._4_4_ = 0;
          auVar8._0_4_ = fp;
          iVar14 = FUN_0007d080(puVar15,puVar17,0,0x100,0x1ff,0x1ff);
          unaff_pfp = auVar8._0_4_;
          uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar14) << 2 | (uint)(iVar14 == 0) << 1;
          ac = uVar1 | iVar14 < 0;
          if (((byte)(uVar1 >> 1) & 1) != 1) {
            g13 = (undefined1 *)((int)&DWORD_000000fc + 3);
            DAT_005b975a = 0xff;
          }
        default:
          fp = unaff_pfp;
          return;
        }
      }
      uVar16 = ac & 0xfffffff8 | (uint)(3 < DAT_005b975a) << 2 | (uint)(DAT_005b975a == 3) << 1;
      ac = uVar16 | DAT_005b975a < 3;
      if (((byte)(uVar16 >> 1) & 1) == 1) {
        ac = uVar1 & 0xfffffff8 | (uint)(5 < param_1) << 2 | (uint)(param_1 == 5) << 1 |
             (uint)(param_1 < 5);
        switch(param_1) {
        case 0:
        case 3:
          ac = uVar1 & 0xfffffff8 | (uint)(uVar18 != 0) << 2 | (uint)(uVar18 == 0) << 1;
          if (uVar18 == 0) {
            puVar15 = DAT_005b9978 + 0x80000;
            puVar17 = DAT_005bf870 + 0x80000;
            auVar10._8_4_ = 0x7cf64;
            auVar10._0_8_ = uVar2;
            auVar10._12_52_ = in_register_0000000c;
            *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar10;
            iVar14 = FUN_0007d080(puVar15,puVar17,0,0,0x1ff,0x7f);
            uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar14) << 2 | (uint)(iVar14 == 0) << 1;
            ac = uVar1 | iVar14 < 0;
            if (((byte)(uVar1 >> 1) & 1) != 1) {
              g13 = (undefined1 *)((int)&DWORD_000000fc + 3);
              DAT_005b975a = 0xff;
            }
            return;
          }
          puVar15 = DAT_005b9978 + 0xa0000;
          puVar17 = DAT_005bf870 + 0x80000;
          auVar11._8_4_ = 0x7cfac;
          auVar11._0_8_ = uVar2;
          auVar11._12_52_ = in_register_0000000c;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar11;
          iVar14 = FUN_0007d080(puVar15,puVar17,0,0,0x1ff,0x7f);
          uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar14) << 2 | (uint)(iVar14 == 0) << 1;
          ac = uVar1 | iVar14 < 0;
          if (((byte)(uVar1 >> 1) & 1) != 1) {
            g13 = (undefined1 *)((int)&DWORD_000000fc + 3);
            DAT_005b975a = 0xff;
          }
          return;
        case 1:
        case 4:
          ac = uVar1 & 0xfffffff8 | (uint)(uVar18 != 0) << 2 | (uint)(uVar18 == 0) << 1;
          if (uVar18 == 0) {
            puVar15 = DAT_005b9978 + 0x80000;
            puVar17 = DAT_005bf870 + 0xa0000;
            auVar12._8_4_ = 0x7cff8;
            auVar12._0_8_ = uVar2;
            auVar12._12_52_ = in_register_0000000c;
            *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar12;
            iVar14 = FUN_0007d080(puVar15,puVar17,0,0,0x1ff,0x7f);
            uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar14) << 2 | (uint)(iVar14 == 0) << 1;
            ac = uVar1 | iVar14 < 0;
            if (((byte)(uVar1 >> 1) & 1) != 1) {
              g13 = (undefined1 *)((int)&DWORD_000000fc + 3);
              DAT_005b975a = 0xff;
            }
            return;
          }
          puVar15 = DAT_005b9978 + 0xa0000;
          puVar17 = DAT_005bf870 + 0xa0000;
          auVar13._8_4_ = 0x7d040;
          auVar13._0_8_ = uVar2;
          auVar13._12_52_ = in_register_0000000c;
          *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar13;
          iVar14 = FUN_0007d080(puVar15,puVar17,0,0,0x1ff,0x7f);
          uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar14) << 2 | (uint)(iVar14 == 0) << 1;
          ac = uVar1 | iVar14 < 0;
          if (((byte)(uVar1 >> 1) & 1) != 1) {
            g13 = (undefined1 *)((int)&DWORD_000000fc + 3);
            DAT_005b975a = 0xff;
          }
          return;
        case 2:
        case 5:
          break;
        default:
          goto switchD_0007cf14_caseD_6;
        }
      }
    }
    g13 = (undefined1 *)((int)&DWORD_000000fc + 3);
    DAT_005b975a = 0xff;
switchD_0007cf14_caseD_6:
    fp = unaff_pfp;
    return;
  }
  ac = ac & 0xfffffff8 | (uint)(5 < param_1) << 2 | (uint)(param_1 == 5) << 1 | (uint)(param_1 < 5);
  switch(param_1) {
  case 0:
    DAT_005b9978 = g_texture_source_bases_B_candidate[uVar16];
    DAT_005bf870 = &DAT_11000000;
    g13 = (undefined1 *)0x11200000;
    break;
  case 1:
    DAT_005b9978 = g_texture_source_bases_B_candidate[uVar16];
    DAT_005bf870 = &DAT_11000000;
    g13 = (undefined1 *)0x11200000;
    break;
  case 2:
    DAT_005b9978 = g_stage_texture_bank_base[uVar16];
    DAT_005bf870 = &DAT_11000000;
    g13 = (undefined1 *)0x11200000;
    break;
  case 3:
    DAT_005b9978 = g_texture_source_bases_B_candidate[uVar16];
    goto LAB_0007cd54;
  case 4:
    DAT_005b9978 = g_texture_source_bases_B_candidate[uVar16];
    goto LAB_0007cd54;
  case 5:
    DAT_005b9978 = g_stage_texture_bank_base[uVar16];
LAB_0007cd54:
    DAT_005bf870 = (undefined1 *)0x11200000;
    g13 = &DAT_11000000;
    break;
  default:
    goto switchD_0007ccac_caseD_6;
  }
  DAT_005bf874 = g13;
switchD_0007ccac_caseD_6:
  DAT_005b975a = DAT_005b975a + 1;
  fp = unaff_pfp;
  return;
switchD_0007cd90_caseD_1:
  ac = uVar1 & 0xfffffff8 | (uint)(uVar18 != 0) << 2 | (uint)(uVar18 == 0) << 1;
  if (uVar18 == 0) {
    puVar17 = DAT_005bf870 + 0x20000;
    auVar5._8_4_ = 0x7ce68;
    auVar5._0_8_ = uVar2;
    auVar5._12_52_ = in_register_0000000c;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar5;
    iVar14 = FUN_0007d080(puVar15,puVar17,0,0,0x1ff,0x7f);
    uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar14) << 2 | (uint)(iVar14 == 0) << 1;
    ac = uVar1 | iVar14 < 0;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      DAT_005b975a = DAT_005b975a + 1;
    }
    return;
  }
  puVar15 = DAT_005b9978 + 0x20000;
  puVar17 = DAT_005bf870 + 0x20000;
  auVar7._8_4_ = 0x7ceb4;
  auVar7._0_8_ = uVar2;
  auVar7._12_52_ = in_register_0000000c;
  *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar7;
  auVar6._8_56_ = auVar7._8_56_;
  auVar6._4_4_ = 0;
  auVar6._0_4_ = fp;
  iVar14 = FUN_0007d080(puVar15,puVar17,0,0,0x1ff,0x7f);
  unaff_pfp = auVar6._0_4_;
  uVar1 = ac & 0xfffffff8 | (uint)(0 < iVar14) << 2 | (uint)(iVar14 == 0) << 1;
  ac = uVar1 | iVar14 < 0;
  if (((byte)(uVar1 >> 1) & 1) == 1) {
    fp = unaff_pfp;
    return;
  }
  goto switchD_0007ccac_caseD_6;
}

