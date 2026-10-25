
void FUN_8251c8b8(int param_1,ulonglong param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar9;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  
  if ((param_3 != 0) && ((int)param_2 < 4)) {
    iVar14 = (int)(param_2 + 0x7e4) + (int)((param_2 + 0x7e4 & 0xffffffff) << 2);
    iVar6 = (int)param_2 + (int)((param_2 & 0xffffffff) << 2) + param_1;
    uVar1 = *(undefined1 *)(iVar6 + 0x2771);
    uVar2 = *(undefined1 *)(iVar6 + 0x2772);
    uVar3 = *(undefined1 *)(iVar6 + 0x2770);
    uVar4 = *(undefined1 *)(iVar6 + 0x2773);
    *(undefined1 *)((int)(param_2 + 0x7e8) + (int)((param_2 + 0x7e8 & 0xffffffff) << 2) + param_1) =
         *(undefined1 *)(iVar14 + param_1);
    *(undefined1 *)(iVar6 + 0x2785) = uVar1;
    *(undefined1 *)(iVar6 + 0x2786) = uVar2;
    *(undefined1 *)(iVar6 + 0x2784) = uVar3;
    *(undefined1 *)(iVar6 + 0x2787) = uVar4;
    iVar10 = Function_8251CC40();
    iVar11 = Function_8251CD28();
    iVar12 = Function_8251CB48();
    iVar13 = Function_8251CE10();
    uVar9 = character_select_demo_limit(param_3);
    *(char *)(iVar6 + 0x2770) = (char)uVar9;
    uVar9 = character_select_demo_limit(iVar12);
    *(char *)(iVar6 + 0x2771) = (char)uVar9;
    uVar9 = character_select_demo_limit(iVar10);
    *(char *)(iVar6 + 0x2772) = (char)uVar9;
    uVar9 = character_select_demo_limit(iVar11);
    *(char *)(iVar6 + 0x2773) = (char)uVar9;
    uVar9 = character_select_demo_limit(iVar13);
    *(char *)(iVar14 + param_1) = (char)uVar9;
    Function_82504FD8();
    uVar16 = 0;
    do {
      cVar5 = *(char *)(iVar6 + 0x2784 + uVar16);
      bVar8 = true;
      lVar17 = 4;
      iVar14 = param_1 + 0x2770;
      do {
        uVar15 = 0;
        do {
          if (cVar5 == *(char *)(iVar14 + uVar15)) {
            bVar8 = false;
            break;
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 < 5);
        iVar14 = iVar14 + 5;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      if (bVar8) {
        lVar17 = (ulonglong)*(uint *)(param_1 + 0x279c) - (ulonglong)*(uint *)(param_1 + 0x27a0);
        if (0 < lVar17 + 1) {
          uVar7 = lVar17 + 0x40U & 0xffffffc0;
          uVar9 = Function_82504C68((ulonglong)*(uint *)(param_1 + 0x27a4),
                                    *(uint *)(param_1 + 0x27a0) + uVar7);
          *(int *)(param_1 + 0x27a0) = (int)uVar7 + *(int *)(param_1 + 0x27a0);
          *(int *)(param_1 + 0x27a4) = (int)uVar9;
        }
        *(char *)(*(int *)(param_1 + 0x279c) + *(int *)(param_1 + 0x27a4)) = cVar5;
        *(int *)(param_1 + 0x279c) = *(int *)(param_1 + 0x279c) + 1;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 5);
    uVar16 = 0;
    do {
      uVar1 = *(undefined1 *)(iVar6 + 0x2770 + uVar16);
      uVar9 = FUN_82514478();
      if ((int)uVar9 == 0x139) {
        bVar8 = false;
      }
      else {
        if ((DAT_83f9fb3c & 1) == 0) {
          DAT_83f9fb3c = DAT_83f9fb3c | 1;
          Function_82881338();
        }
        uVar9 = Function_82502A58(uVar9);
        bVar8 = (char)uVar9 == '\0';
      }
      if ((bVar8) && (uVar9 = FUN_82513508(), (char)uVar9 != '\0')) {
        lVar17 = (ulonglong)*(uint *)(param_1 + 0x27ac) - (ulonglong)*(uint *)(param_1 + 0x27b0);
        if (0 < lVar17 + 1) {
          uVar7 = lVar17 + 0x40U & 0xffffffc0;
          uVar9 = Function_82504C68((ulonglong)*(uint *)(param_1 + 0x27b4),
                                    *(uint *)(param_1 + 0x27b0) + uVar7);
          *(int *)(param_1 + 0x27b0) = *(int *)(param_1 + 0x27b0) + (int)uVar7;
          *(int *)(param_1 + 0x27b4) = (int)uVar9;
        }
        *(undefined1 *)(*(int *)(param_1 + 0x27ac) + *(int *)(param_1 + 0x27b4)) = uVar1;
        *(int *)(param_1 + 0x27ac) = *(int *)(param_1 + 0x27ac) + 1;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 5);
  }
  return;
}

