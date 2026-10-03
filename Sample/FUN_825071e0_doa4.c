
void FUN_825071e0(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ushort *puVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  
  lVar7 = -0x7cfdfe52;
  pcVar11 = &COMBO_FLAG_P2_83020284;
  puVar13 = &DefaultHealthSettingCurrentMode_P1;
  iVar14 = 0;
  lVar9 = 0;
  iVar12 = 2;
  do {
    puVar8 = (ushort *)lVar7;
    uVar1 = *puVar8;
    uVar6 = (ulonglong)uVar1;
    iVar5 = (int)lVar9;
    if (uVar6 == 0) {
      uVar1 = puVar8[1];
      if (uVar1 != 0) {
        uVar2 = puVar8[-1];
        uVar3 = *puVar13;
        *(undefined4 *)((int)&DAT_830ee4c4 + iVar5) = 0;
        puVar8[3] = (ushort)*(undefined4 *)((int)&CriticalHitStunBarFlashValue_P1 + iVar5);
        if ((uint)uVar3 < (uint)uVar1 + (uint)uVar2) {
          puVar8[1] = uVar3 - uVar2;
        }
        uVar1 = puVar8[1];
        puVar8[4] = uVar1;
        puVar8[-1] = uVar1 + uVar2;
        if (uVar1 == 0) {
          (&DAT_830ee528)[iVar14] = 0;
        }
        else {
          (&DAT_830ee528)[iVar14] = 0x14;
        }
        puVar8[1] = 0;
      }
    }
    else {
      uVar2 = puVar8[-1];
      puVar8[4] = 0;
      (&DAT_830ee528)[iVar14] = 0;
      if (uVar2 < uVar6) {
        lVar10 = (ulonglong)uVar2 + (ulonglong)*(uint *)((int)&DAT_830ee4c4 + iVar5);
        *(int *)((int)&DAT_830ee4c4 + iVar5) = (int)lVar10;
        puVar8[3] = (short)*(undefined4 *)((int)&CriticalHitStunBarFlashValue_P1 + iVar5) +
                    (short)lVar10;
        iVar5 = FUN_82507aa0();
        if (iVar5 == 0) {
          *(undefined2 *)((int)lVar7 + -2) = 0;
        }
      }
      else {
        if (*pcVar11 == '\x01') {
          *(uint *)((int)&CriticalHitStunBarFlashValue_P1 + iVar5) =
               (uint)uVar1 + *(int *)((int)&CriticalHitStunBarFlashValue_P1 + iVar5);
        }
        else {
          iVar4 = *(int *)((int)&CriticalHitStunBarFlashValue_P1 + iVar5);
          *(undefined4 *)((int)&CriticalHitStunBarFlashValue_P1 + iVar5) = 0;
          *(uint *)((int)&DAT_830ee4c4 + iVar5) =
               (uint)uVar1 + *(int *)((int)&DAT_830ee4c4 + iVar5) + iVar4;
        }
        puVar8[3] = (short)*(undefined4 *)((int)&DAT_830ee4c4 + iVar5) +
                    (short)*(undefined4 *)((int)&CriticalHitStunBarFlashValue_P1 + iVar5);
        iVar5 = FUN_82507aa0();
        if ((iVar5 == 0) && ((&DAT_8301df88)[iVar14] != '\0')) {
          ((undefined2 *)lVar7)[-1] = uVar2 - (short)uVar6;
        }
        iVar5 = (int)lVar9;
        uVar6 = uVar6 + *(uint *)((int)&WatchModeScore_P2 + iVar5);
        *(int *)((int)&WatchModeScore_P2 + iVar5) = (int)uVar6;
        if (999999 < (uVar6 & 0xffffffff)) {
          *(undefined4 *)((int)&WatchModeScore_P2 + iVar5) = 999999;
          *(undefined2 *)lVar7 = 0;
          goto LAB_82507374;
        }
      }
      *(undefined2 *)lVar7 = 0;
    }
LAB_82507374:
    iVar12 = iVar12 + -1;
    iVar14 = iVar14 + 1;
    lVar9 = lVar9 + 4;
    puVar13 = puVar13 + 1;
    pcVar11 = pcVar11 + -0x9c;
    lVar7 = lVar7 + 0x9c;
    if (iVar12 == 0) {
      return;
    }
  } while( true );
}

