
void Function_8235F460(void)

{
  bool bVar1;
  doa_actstate dVar2;
  short sVar3;
  undefined2 uVar4;
  char cVar6;
  int iVar5;
  longlong lVar7;
  doa_actstate *pdVar8;
  char *pcVar9;
  
  FUN_827c190c();
  pcVar9 = &DAT_82dfc104;
  lVar7 = 0;
  pdVar8 = &ACT_STATE_P1;
  do {
    if ((*pdVar8 != 0x9_Hit_Stun) || (cVar6 = Function_823EF0A0(lVar7), cVar6 == -1)) {
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
    }
    if (pdVar8[0x1d] == 0x0_Neutral) {
      if ((DAT_82ce78a0 == '\x01') && (cVar6 = FUN_823e7e18(lVar7), cVar6 != '\0')) {
LAB_8235f540:
        if (pdVar8[0xf] == 0x0_Neutral) {
LAB_8235f57c:
          *pcVar9 = '\0';
        }
        else if (pdVar8[0xf] == 0x1_Air) {
          if (*pcVar9 != '\x01') {
            Function_82360060(lVar7);
            *pcVar9 = '\x01';
          }
        }
        else if (*pcVar9 != '\x01') goto LAB_8235f57c;
        if ((pdVar8[0xf] == 0x1_Air) || (pdVar8[0xf] == 0x2_Air_Attack)) {
          Function_82363A28(lVar7);
LAB_8235f774:
          bVar1 = pdVar8[0xf] == 0x3_Attack;
          goto LAB_8235f77c;
        }
      }
      else {
        dVar2 = *pdVar8;
        if (dVar2 == 0x1_Air) {
          if (*(undefined2 *)(pdVar8 + -5) != 0x3b) goto LAB_8235f6f4;
          goto LAB_8235f540;
        }
        if (dVar2 == 0x2_Air_Attack) {
LAB_8235f6f4:
          uVar4 = *(undefined2 *)(pdVar8 + -5);
          if ((((ushort)uVar4 < 0xb5) || (0xb8 < (ushort)uVar4)) &&
             (((ushort)uVar4 < 0x36 || (0x3f < (ushort)uVar4)))) goto LAB_8235f784;
          if (pdVar8[0xf] == 0x0_Neutral) {
LAB_8235f754:
            *pcVar9 = '\0';
          }
          else if (pdVar8[0xf] == 0x1_Air) {
            if (*pcVar9 != '\x01') {
              Function_8235FA98(lVar7);
              *pcVar9 = '\x01';
            }
          }
          else if (*pcVar9 != '\x01') goto LAB_8235f754;
          if ((pdVar8[0xf] != 0x1_Air) && (pdVar8[0xf] != 0x2_Air_Attack)) goto LAB_8235f784;
          Function_82363270(lVar7);
          goto LAB_8235f774;
        }
        if (dVar2 == 0x9_Hit_Stun) {
          cVar6 = Function_823EF0A0(lVar7);
          if (cVar6 != -1) {
            if (pdVar8[0x13] == 0x1_Air) {
              Function_82362C50(lVar7);
              if ((pdVar8[0x2f] == 0x4_Throw) || (*(short *)(pcVar9 + 2) != 0)) {
LAB_8235f61c:
                pcVar9[4] = '\0';
                pcVar9[5] = '\0';
              }
              else {
                pcVar9[4] = '\0';
                pcVar9[5] = '\x03';
                iVar5 = FUN_823ff660(lVar7);
                if ((int)(uint)*(ushort *)(pcVar9 + 4) <= iVar5) goto LAB_8235f61c;
                *(ushort *)(pcVar9 + 4) = *(ushort *)(pcVar9 + 4) - (short)iVar5;
              }
              pcVar9[2] = '\0';
              pcVar9[3] = '\0';
            }
            sVar3 = *(short *)(pcVar9 + 4);
            if (sVar3 == 0) {
              Function_823630E8(lVar7);
            }
            else {
              *(short *)(pcVar9 + 4) = sVar3 + -1;
            }
            if (*(short *)(pcVar9 + 2) != -1) {
              *(short *)(pcVar9 + 2) = *(short *)(pcVar9 + 2) + 1;
            }
          }
        }
        else if (dVar2 == 0xE_Down_Attack) {
          if (pdVar8[0xf] == 0x0_Neutral) {
LAB_8235f6a4:
            *pcVar9 = '\0';
          }
          else if (pdVar8[0xf] == 0x1_Air) {
            if (*pcVar9 != '\x02') {
              Function_823617E0(lVar7);
              *pcVar9 = '\x02';
            }
          }
          else if (*pcVar9 != '\x02') goto LAB_8235f6a4;
          if ((pdVar8[0xf] == 0x1_Air) || (pdVar8[0xf] == 0x2_Air_Attack)) {
            Function_823634E8(lVar7);
            bVar1 = pdVar8[0xf] == 0x3_Attack;
            goto LAB_8235f77c;
          }
          if ((pdVar8[-0x36] == (0x10_Throw_Miss|0x1_Air)) &&
             (*(undefined2 *)(pdVar8 + -5) == 0x1e2)) {
            Function_82360AC0(lVar7);
          }
          goto LAB_8235f784;
        }
LAB_8235f780:
        *pcVar9 = '\0';
      }
    }
    else if (pdVar8[0x1d] == 0x1_Air) {
      if (*pcVar9 != '\x03') {
        Function_8235FBC8(lVar7);
        *pcVar9 = '\x03';
      }
      Function_82363A28(lVar7);
      bVar1 = pdVar8[0x1d] == 0x2_Air_Attack;
LAB_8235f77c:
      if (bVar1) goto LAB_8235f780;
    }
LAB_8235f784:
    pdVar8 = pdVar8 + 0x98;
    lVar7 = lVar7 + 1;
    pcVar9 = pcVar9 + 0x240;
    if (-0x7d31b08a < (int)pdVar8) {
      return;
    }
  } while( true );
}

