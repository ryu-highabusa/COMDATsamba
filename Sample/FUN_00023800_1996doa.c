
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0x00000000 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void Battle_FinalizePlayerFrame_candidate(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_pfp;
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  uint uVar8;
  undefined1 in_register_00000014 [44];
  undefined1 auVar4 [64];
  int iVar7;
  undefined1 auVar6 [64];
  byte bVar9;
  short sVar10;
  undefined1 auStackX_0 [1000000];
  undefined1 auVar5 [64];
  
  auVar6._4_4_ = auStackX_0;
  auVar6._0_4_ = unaff_pfp;
  auVar6._8_4_ = unaff_retaddr;
  auVar6._12_4_ = unaff_r3;
  auVar6._16_4_ = unaff_r4;
  auVar6._20_4_ = 0;
  auVar6._28_36_ = in_register_00000014._8_36_;
  auVar6._24_4_ = &g_player1;
  do {
    uVar8 = auVar6._20_4_;
    auVar4._20_44_ = auVar6._20_44_;
    auVar4._0_16_ = auVar6._0_16_;
    auVar4._16_4_ = &g_player1 + uVar8;
    ac = ac & 0xfffffff8 | (uint)((&g_player1)[uVar8].damage_number != '\0') << 2 |
         (uint)((&g_player1)[uVar8].damage_number == '\0') << 1;
    uVar1 = ac;
    if (((byte)(ac >> 1) & 1) == 1) goto LAB_00023a24;
    (&DAT_00557f80)[uVar8] = (&g_player1)[uVar8].damage_number;
    uVar2 = auVar6._4_4_ + 0x3fU & 0xffffffc0;
    auVar5._12_52_ = auVar4._12_52_;
    auVar5._0_8_ = auVar6._0_8_;
    auVar5._8_4_ = 0x23840;
    *(undefined1 (*) [64])(fp & 0xffffffc0) = auVar5;
    auVar4._8_56_ = auVar5._8_56_;
    auVar4._4_4_ = uVar2 + 0x40;
    auVar4._0_4_ = fp;
    bVar9 = FUN_000252e0(uVar8);
    uVar3 = ac;
    (&g_player1)[uVar8].damage_number = g14;
    if ((&g_player1)[uVar8].action_state == 0xA_THROWCAUGHT) {
      if ((&DAT_00557f20)[uVar8] == '\x02') {
        (&DAT_00557f20)[uVar8] = 3;
        goto switchD_00023894_caseD_1;
      }
    }
    else if ((&g_player1)[uVar8].action_state == 0x9_HITSTUN) {
      switch((&g_player1)[uVar8].beat_state) {
      case '\x02':
      case '\x06':
switchD_00023894_caseD_2:
        break;
      default:
        if ((((&DAT_00557f20)[uVar8] != '\0') && ((&DAT_00557f20)[uVar8] != '\x01')) &&
           ((&DAT_00557f20)[uVar8] == '\x02')) goto switchD_00023894_caseD_1;
        break;
      case '\b':
      case '\t':
        if ((&DAT_00557f22)[uVar8] != '\0') {
          if ((&DAT_00557f22)[uVar8] != '\x01') goto switchD_00023894_caseD_2;
          if ((((&DAT_00557f20)[uVar8] == '\0') || ((&DAT_00557f20)[uVar8] == '\x01')) ||
             ((&DAT_00557f20)[uVar8] != '\x02')) break;
        }
      case '\x01':
      case '\x05':
switchD_00023894_caseD_1:
      }
    }
    iVar7 = auVar4._16_4_;
    sVar10 = (short)(int)(float10)SUB104((float10)(int)((unkuint10)(float10)bVar9 >> 0x20) *
                                         (float10)SUB104((float10)bVar9,0),0);
    *(short *)(iVar7 + 0x22) = sVar10 + *(short *)(iVar7 + 0x22);
    if ((byte)(&DAT_00557f80)[auVar4._20_4_] < 2) {
      sVar10 = *(short *)(iVar7 + 0x22);
    }
    else {
      sVar10 = sVar10 + *(short *)(iVar7 + 0x24);
    }
    *(short *)(iVar7 + 0x24) = sVar10;
    uVar1 = ac & 0xfffffff8 | (uint)(*(short *)(iVar7 + 0x20) == 0) << 1;
    fp = uVar2;
    if (((byte)(uVar1 >> 1) & 1) != 1) {
      ac = ac & 0xfffffff8 | (uint)(*(byte *)(iVar7 + 0x2d) < 9);
      if (((byte)ac & 1 | 9 < *(byte *)(iVar7 + 0x2d)) == 1) {
        ac = uVar3 & 0xfffffff8 | (uint)(*(byte *)(iVar7 + 0x2d) < 10);
        if (((byte)ac & 1 | 10 < *(byte *)(iVar7 + 0x2d)) == 1) {
          ac = uVar3 & 0xfffffff8 | (uint)(*(byte *)(iVar7 + 0x2d) < 0xb);
          if (((byte)ac & 1 | 0xb < *(byte *)(iVar7 + 0x2d)) == 1) {
            BYTE_0055560f = 3;
            uVar1 = ac;
            goto LAB_00023a24;
          }
          BYTE_0055560f = 2;
        }
        else {
          BYTE_0055560f = 1;
        }
      }
      else {
        BYTE_0055560f = g14;
      }
      BYTE_00555610 = *(byte *)(auVar4._24_4_ + 0x2a + (auVar4._20_4_ ^ 1) * 0x58);
      uVar1 = ac;
    }
LAB_00023a24:
    ac = uVar1;
    auVar6._24_40_ = auVar4._24_40_;
    auVar6._0_20_ = auVar4._0_20_;
    auVar6._20_4_ = auVar4._20_4_ + 1;
    uVar1 = ac & 0xfffffff8 | (uint)(1 < auVar6._20_4_) << 2 | (uint)(auVar6._20_4_ == 1) << 1;
    ac = uVar1 | auVar6._20_4_ < 1;
    if (((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) != 1) {
      fp = auVar4._0_4_;
      return;
    }
  } while( true );
}

