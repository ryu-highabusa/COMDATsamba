
void FUN_8251c8b8(int param_1,ulonglong param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  char cVar5;
  charids cVar6;
  int iVar7;
  ulonglong uVar8;
  void *item;
  void *item_00;
  void *item_01;
  void *item_02;
  uint uVar10;
  undefined8 uVar9;
  bool bVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  
  if ((param_3 != 0) && ((int)param_2 < 4)) {
    iVar12 = (int)(param_2 + 0x7e4) + (int)((param_2 + 0x7e4 & 0xffffffff) << 2);
    iVar7 = (int)param_2 + (int)((param_2 & 0xffffffff) << 2) + param_1;
    uVar1 = *(undefined1 *)(iVar7 + 0x2771);
    uVar2 = *(undefined1 *)(iVar7 + 0x2772);
    uVar3 = *(undefined1 *)(iVar7 + 0x2770);
    uVar4 = *(undefined1 *)(iVar7 + 0x2773);
    *(undefined1 *)((int)(param_2 + 0x7e8) + (int)((param_2 + 0x7e8 & 0xffffffff) << 2) + param_1) =
         *(undefined1 *)(iVar12 + param_1);
    *(undefined1 *)(iVar7 + 0x2785) = uVar1;
    *(undefined1 *)(iVar7 + 0x2786) = uVar2;
    *(undefined1 *)(iVar7 + 0x2784) = uVar3;
    *(undefined1 *)(iVar7 + 0x2787) = uVar4;
    item = (void *)Function_8251CC40();
    item_00 = (void *)Function_8251CD28();
    item_01 = (void *)Function_8251CB48();
    item_02 = (void *)Function_8251CE10();
    uVar10 = CharacterSelect_ItemToCharacterId((void *)param_3);
    *(char *)(iVar7 + 0x2770) = (char)uVar10;
    uVar10 = CharacterSelect_ItemToCharacterId(item_01);
    *(char *)(iVar7 + 0x2771) = (char)uVar10;
    uVar10 = CharacterSelect_ItemToCharacterId(item);
    *(char *)(iVar7 + 0x2772) = (char)uVar10;
    uVar10 = CharacterSelect_ItemToCharacterId(item_00);
    *(char *)(iVar7 + 0x2773) = (char)uVar10;
    uVar10 = CharacterSelect_ItemToCharacterId(item_02);
    *(char *)(iVar12 + param_1) = (char)uVar10;
    Function_82504FD8();
    uVar10 = 0;
    do {
      cVar5 = *(char *)(iVar7 + 0x2784 + uVar10);
      bVar11 = true;
      lVar14 = 4;
      iVar12 = param_1 + 0x2770;
      do {
        uVar13 = 0;
        do {
          if (cVar5 == *(char *)(iVar12 + uVar13)) {
            bVar11 = false;
            break;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < 5);
        iVar12 = iVar12 + 5;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      if (bVar11) {
        lVar14 = (ulonglong)*(uint *)(param_1 + 0x279c) - (ulonglong)*(uint *)(param_1 + 0x27a0);
        if (0 < lVar14 + 1) {
          uVar8 = lVar14 + 0x40U & 0xffffffc0;
          uVar9 = Function_82504C68((ulonglong)*(uint *)(param_1 + 0x27a4),
                                    *(uint *)(param_1 + 0x27a0) + uVar8);
          *(int *)(param_1 + 0x27a0) = (int)uVar8 + *(int *)(param_1 + 0x27a0);
          *(int *)(param_1 + 0x27a4) = (int)uVar9;
        }
        *(char *)(*(int *)(param_1 + 0x279c) + *(int *)(param_1 + 0x27a4)) = cVar5;
        *(int *)(param_1 + 0x279c) = *(int *)(param_1 + 0x279c) + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 5);
    uVar10 = 0;
    do {
      cVar6 = *(charids *)(iVar7 + 0x2770 + uVar10);
      uVar9 = FUN_82514478(cVar6);
      if ((int)uVar9 == 0x139) {
        bVar11 = false;
      }
      else {
        if ((DAT_83f9fb3c & 1) == 0) {
          DAT_83f9fb3c = DAT_83f9fb3c | 1;
          Function_82881338();
        }
        uVar9 = Function_82502A58(uVar9);
        bVar11 = (char)uVar9 == '\0';
      }
      if ((bVar11) && (bVar11 = CharacterSelect_IsFrontendCharacterAllowed((uint)cVar6), bVar11)) {
        lVar14 = (ulonglong)*(uint *)(param_1 + 0x27ac) - (ulonglong)*(uint *)(param_1 + 0x27b0);
        if (0 < lVar14 + 1) {
          uVar8 = lVar14 + 0x40U & 0xffffffc0;
          uVar9 = Function_82504C68((ulonglong)*(uint *)(param_1 + 0x27b4),
                                    *(uint *)(param_1 + 0x27b0) + uVar8);
          *(int *)(param_1 + 0x27b0) = *(int *)(param_1 + 0x27b0) + (int)uVar8;
          *(int *)(param_1 + 0x27b4) = (int)uVar9;
        }
        *(charids *)(*(int *)(param_1 + 0x27ac) + *(int *)(param_1 + 0x27b4)) = cVar6;
        *(int *)(param_1 + 0x27ac) = *(int *)(param_1 + 0x27ac) + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 5);
  }
  return;
}

