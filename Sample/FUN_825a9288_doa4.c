
void FUN_825a9288(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    DAT_8314e710 = (uint)ACT_CODE_P1_830201ba_;
    DAT_8314e714 = (uint)ACT_CODE_P2_83020256_;
    if ((CHAR_NUM_P1_83020189 == char_spartan458) || (CHAR_NUM_P2_83020225 == char_spartan458)) {
      *(undefined4 *)(param_1 + 0xd4) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xd4) = 0;
    }
    uVar6 = 0;
    sVar5 = 0x11;
    piVar8 = &DAT_83438300;
    do {
      (**(code **)(*piVar8 + 0x48))(piVar8);
      iVar7 = (int)uVar6;
      piVar8[0xb5] = iVar7;
      piVar8[0xb7] = 0;
      iVar3 = FUN_825a5c48(0);
      iVar1 = *(int *)(iVar3 + 0xa0);
      piVar8[0xb6] = 0;
      piVar8[0x18] = iVar3;
      piVar8[0x17] = iVar1;
      (**(code **)*piVar8)((double)*(float *)(iVar3 + 0xa4),piVar8);
      (**(code **)(*piVar8 + 0x40))(piVar8,0);
      (**(code **)(*piVar8 + 0x5c))(piVar8);
      (**(code **)(*piVar8 + 0x60))(piVar8);
      uVar2 = (&DWORD_82bcf130)[(iVar7 >> 2) + (uint)(iVar7 < 0 && (uVar6 & 3) != 0)];
      piVar8[0xb8] = (uint)(uVar2 == 0x158);
      if (uVar6 == ((longlong)(iVar7 >> 2) + (ulonglong)(iVar7 < 0 && (uVar6 & 3) != 0) & 0x3fffffff
                   ) << 2) {
        lVar4 = ((ulonglong)uVar2 & 0x3fffffff) * 4;
        if (iVar7 + 4 < 0x12) {
          iVar1 = (int)(((ulonglong)uVar2 + lVar4 & 0xffffffff) << 3);
          *(int **)((int)&DWORD_82e802c8 + iVar1) = piVar8 + -4;
          *(undefined2 *)((int)&DWORD_82e802cc + iVar1) = 4;
        }
        else {
          iVar1 = (int)(((ulonglong)uVar2 + lVar4 & 0xffffffff) << 3);
          *(int **)((int)&DWORD_82e802c8 + iVar1) = piVar8 + -4;
          *(short *)((int)&DWORD_82e802cc + iVar1) = sVar5;
        }
      }
      piVar8 = piVar8 + 0xe4;
      uVar6 = uVar6 + 1;
      sVar5 = sVar5 + -1;
    } while ((int)piVar8 < -0x7cbc4070);
    iVar1 = *(int *)(param_1 + 0x24);
    (&DWORD_82e84cc4)[iVar1 * 0x1e] = 0;
    (&DWORD_82e84cc0)[iVar1 * 0x1e] = 0;
    (**(code **)((&PTR_PTR_82e84c90)[*(int *)(param_1 + 0x24) * 0x1e] + 0x34))
              (&PTR_PTR_82e84c90 + *(int *)(param_1 + 0x24) * 0x1e,
               (&DWORD_82e84cc4)[*(int *)(param_1 + 0x24) * 0x1e]);
    iVar1 = *(int *)(param_1 + 0x24);
    (&DWORD_82e84db4)[iVar1 * 0x1e] = 0;
    (&DWORD_82e84db0)[iVar1 * 0x1e] = 0;
    (**(code **)((&PTR_PTR_82e84d80)[*(int *)(param_1 + 0x24) * 0x1e] + 0x34))
              (&PTR_PTR_82e84d80 + *(int *)(param_1 + 0x24) * 0x1e,
               (&DWORD_82e84db4)[*(int *)(param_1 + 0x24) * 0x1e]);
    iVar1 = *(int *)(param_1 + 0x24);
    (&DWORD_82e84ea4)[iVar1 * 0x1e] = 0;
    (&DWORD_82e84ea0)[iVar1 * 0x1e] = 0;
    (**(code **)((&PTR_PTR_82e84e70)[*(int *)(param_1 + 0x24) * 0x1e] + 0x34))
              (&PTR_PTR_82e84e70 + *(int *)(param_1 + 0x24) * 0x1e,
               (&DWORD_82e84ea4)[*(int *)(param_1 + 0x24) * 0x1e]);
    iVar1 = *(int *)(param_1 + 0x24);
    (&DWORD_82e84f94)[iVar1 * 0x1e] = 0;
    (&DWORD_82e84f90)[iVar1 * 0x1e] = 0;
    (**(code **)((&PTR_PTR_82e84f60)[*(int *)(param_1 + 0x24) * 0x1e] + 0x34))
              (&PTR_PTR_82e84f60 + *(int *)(param_1 + 0x24) * 0x1e,
               (&DWORD_82e84f94)[*(int *)(param_1 + 0x24) * 0x1e]);
    iVar1 = *(int *)(param_1 + 0x24);
    (&DWORD_82e85084)[iVar1 * 0x1e] = 0;
    (&DWORD_82e85080)[iVar1 * 0x1e] = 0;
    (**(code **)((&PTR_PTR_82e85050)[*(int *)(param_1 + 0x24) * 0x1e] + 0x34))
              (&PTR_PTR_82e85050 + *(int *)(param_1 + 0x24) * 0x1e,
               (&DWORD_82e85084)[*(int *)(param_1 + 0x24) * 0x1e]);
    iVar1 = *(int *)(param_1 + 0x24);
    (&DWORD_82e85174)[iVar1 * 0x1e] = 0;
    (&DWORD_82e85170)[iVar1 * 0x1e] = 0;
    (**(code **)((&PTR_PTR_82e85140)[*(int *)(param_1 + 0x24) * 0x1e] + 0x34))
              (&PTR_PTR_82e85140 + *(int *)(param_1 + 0x24) * 0x1e,
               (&DWORD_82e85174)[*(int *)(param_1 + 0x24) * 0x1e]);
    iVar1 = *(int *)(param_1 + 0x24);
    (&DWORD_82e85264)[iVar1 * 0x1e] = 0;
    (&DWORD_82e85260)[iVar1 * 0x1e] = 0;
    (**(code **)((&PTR_PTR_82e85230)[*(int *)(param_1 + 0x24) * 0x1e] + 0x34))
              (&PTR_PTR_82e85230 + *(int *)(param_1 + 0x24) * 0x1e,
               (&DWORD_82e85264)[*(int *)(param_1 + 0x24) * 0x1e]);
    (**(code **)((&PTR_PTR_82e85320)[*(int *)(param_1 + 0x24) * 0x1e] + 0x34))
              (&PTR_PTR_82e85320 + *(int *)(param_1 + 0x24) * 0x1e,
               (&DWORD_82e85354)[*(int *)(param_1 + 0x24) * 0x1e]);
    iVar1 = *(int *)(param_1 + 0x24);
    (&DWORD_82e85354)[iVar1 * 0x1e] = 0;
    (&DWORD_82e85350)[iVar1 * 0x1e] = 0;
  }
  return;
}

