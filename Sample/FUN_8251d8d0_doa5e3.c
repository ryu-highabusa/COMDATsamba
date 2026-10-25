
void FUN_8251d8d0(int *param_1,ulonglong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int unaff_r23;
  uint unaff_r24;
  longlong lVar3;
  int unaff_r26;
  int unaff_r28;
  longlong unaff_r29;
  int iVar4;
  int unaff_r30;
  uint uVar5;
  code *in_CTR;
  
  do {
    (*in_CTR)(param_1,param_2);
    do {
      do {
        unaff_r29 = unaff_r29 + -1;
        unaff_r30 = unaff_r30 + 4;
        if (unaff_r29 == 0) {
          Function_821CDDC0(unaff_r28);
          Function_8251BD18();
          uVar2 = (ulonglong)*(uint *)(unaff_r26 + 0x90);
          uVar5 = unaff_r24;
          if (0 < (int)*(uint *)(unaff_r26 + 0x90)) {
            do {
              iVar4 = *(int *)(uVar5 + *(int *)(unaff_r26 + 0x98));
              if ((iVar4 != 0) && (uVar1 = Function_8261FFD0(), *(char *)uVar1 != '\0')) {
                (**(code **)(**(int **)(unaff_r23 + -0x3688) + 0x6c))
                          (*(int **)(unaff_r23 + -0x3688),iVar4);
              }
              uVar2 = uVar2 - 1;
              uVar5 = uVar5 + 4;
            } while (uVar2 != 0);
          }
          Function_821CDDC0(unaff_r26 + 0x8c);
          Function_8251BF58();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82508FA0();
          Function_82504FD8();
          lVar3 = 4;
          iVar4 = unaff_r26;
          do {
            uVar5 = unaff_r24;
            do {
              uVar1 = FUN_82514478(*(charids *)(iVar4 + uVar5 + 0x2784));
              if ((int)uVar1 != 0x139) {
                Function_825B2608(uVar1);
                (&DAT_83e6c420)[(int)uVar1] = (char)unaff_r24;
              }
              uVar1 = FUN_82514478(*(charids *)(iVar4 + 0x2770 + uVar5));
              if ((int)uVar1 != 0x139) {
                Function_825B2608(uVar1);
                (&DAT_83e6c420)[(int)uVar1] = (char)unaff_r24;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < 5);
            lVar3 = lVar3 + -1;
            iVar4 = iVar4 + 5;
          } while (lVar3 != 0);
          Function_825082E0(unaff_r26 + 0x2798);
          Function_825082E0(unaff_r26 + 0x27a8);
          iVar4 = *(int *)(unaff_r26 + 0x78);
          if (iVar4 != 0) {
            uVar1 = Function_8261FFD0();
            if (*(char *)uVar1 != '\0') {
              (**(code **)(**(int **)(unaff_r23 + -0x3688) + 0x6c))
                        (*(int **)(unaff_r23 + -0x3688),iVar4);
            }
            *(uint *)(unaff_r26 + 0x78) = unaff_r24;
          }
          Function_82622330();
          return;
        }
        param_2 = (ulonglong)*(uint *)(unaff_r30 + *(int *)(unaff_r28 + 0xc));
      } while (param_2 == 0);
      Function_825179A0();
      uVar1 = Function_8261FFD0();
    } while (*(char *)uVar1 == '\0');
    param_1 = *(int **)(unaff_r23 + -0x3688);
    in_CTR = *(code **)(*param_1 + 0x6c);
  } while( true );
}

