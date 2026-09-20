
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0003fd50(uint *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  undefined4 unaff_pfp;
  int iVar5;
  undefined1 auVar1 [20];
  undefined1 auVar2 [24];
  undefined4 unaff_retaddr;
  undefined4 unaff_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 uVar6;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined1 in_register_0000002c [20];
  undefined1 auVar3 [64];
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iStackX_0;
  int iStack_4;
  undefined1 auStack_10 [999984];
  undefined1 auVar4 [64];
  
  auVar3._4_4_ = &iStackX_0;
  auVar3._0_4_ = unaff_pfp;
  auVar3._8_4_ = unaff_retaddr;
  auVar3._12_4_ = unaff_r3;
  auVar3._16_4_ = unaff_r4;
  auVar3._20_4_ = unaff_r5;
  auVar3._24_4_ = unaff_r6;
  auVar3._28_4_ = unaff_r7;
  auVar3._32_4_ = unaff_r8;
  auVar3._36_4_ = unaff_r9;
  auVar3._40_4_ = unaff_r10;
  auVar3._44_20_ = in_register_0000002c;
  auVar4._8_56_ = auVar3._8_56_;
  auVar4._4_4_ = auStack_10;
  auVar4._0_4_ = unaff_pfp;
  auVar2._0_20_ = auVar4._0_20_;
  auVar1._0_16_ = auVar4._0_16_;
  if (*(char *)(param_2 + 9) == '\0') {
    if (param_7 == 1) {
      register0x00000004 = (BADSPACEBASE *)(param_6 * 8 + *(int *)(param_3 + 0x68));
    }
    else {
      uVar10 = *(uint *)(param_3 + 0x50) & 0x6000;
      iVar5 = (int)uVar10 >> 0xc;
      g13 = iVar5 + 2;
      g13 = g13 & 6;
      auVar1._16_4_ = iVar5 + param_6 * 8;
      g13 = g13 + param_6 * 8;
      auVar2._0_20_ = auVar1;
      if (*(byte *)(param_2 + 6) != 0xff) {
        uVar8 = *(int *)(param_5 * 0x78 + 0x56a804 + param_4 * 8) -
                *(int *)(param_5 * 0x78 + 0x56a804 + (uint)*(byte *)(param_2 + 6) * 8) & 0xffff;
        if (0x7fff < uVar8) {
          uVar8 = uVar8 | 0xffff0000;
        }
        iVar5 = auVar1._16_4_ * 3;
        auVar2._16_4_ = iVar5;
        auVar2._0_16_ = auVar1._0_16_;
        g13 = g13 * 3;
        if ((int)uVar8 < 0x1556) {
          if (-0x1555 < (int)uVar8) {
            auVar2._16_4_ = iVar5 + 2;
            g13 = g13 + 2;
          }
        }
        else {
          auVar2._16_4_ = iVar5 + 4;
          g13 = g13 + 4;
        }
      }
      iVar5 = *(int *)(param_3 + 100);
      iVar7 = g13 * 4;
      iVar11 = auVar2._16_4_ * 4;
      g13 = *(int *)(iVar5 + iVar11);
      iVar9 = *(uint *)(param_3 + 0x50) - uVar10;
      iStackX_0 = g13 + ((int)(iVar9 * (*(int *)(iVar5 + iVar7) - g13)) >> 0xd);
      g13 = *(int *)(iVar11 + 4 + iVar5);
      iStack_4 = g13 + ((int)(iVar9 * (*(int *)(iVar7 + 4 + iVar5) - g13)) >> 0xd);
    }
    auVar2._20_4_ = *(undefined4 *)(param_2 + 0x34 + param_7 * 4);
  }
  else if (param_7 == 1) {
    if (*(char *)(param_2 + 10) == '\x01') {
      iVar5 = *(int *)(param_3 + 0x70);
      uVar6 = *(undefined4 *)(param_2 + 0x40);
    }
    else {
      iVar5 = *(int *)(param_3 + 0x78);
      uVar6 = *(undefined4 *)(param_2 + 0x48);
    }
    auVar2._20_4_ = uVar6;
    register0x00000004 = (BADSPACEBASE *)(param_6 * 8 + iVar5);
  }
  else {
    uVar10 = *(uint *)(param_3 + 0x50) & 0x6000;
    iVar5 = (int)uVar10 >> 0xc;
    g13 = iVar5 + 2;
    g13 = g13 & 6;
    auVar2._16_4_ = iVar5 + param_6 * 8;
    auVar2._0_16_ = auVar1._0_16_;
    g13 = g13 + param_6 * 8;
    if (*(char *)(param_2 + 10) == '\x01') {
      iVar5 = *(int *)(param_3 + 0x6c);
      uVar6 = *(undefined4 *)(param_2 + 0x3c);
    }
    else {
      iVar5 = *(int *)(param_3 + 0x74);
      uVar6 = *(undefined4 *)(param_2 + 0x44);
    }
    auVar2._20_4_ = uVar6;
    iVar7 = g13 * 4;
    g13 = *(int *)(iVar5 + auVar2._16_4_ * 4);
    iStackX_0 = g13 + ((int)((*(uint *)(param_3 + 0x50) - uVar10) * (*(int *)(iVar5 + iVar7) - g13))
                      >> 0xd);
    g13 = *(int *)(auVar2._16_4_ * 4 + 4 + iVar5);
  }
  iVar5 = auVar2._20_4_;
  uVar10 = *param_1;
  if (iVar5 != 0xffff) {
    uVar10 = uVar10 + iVar5;
  }
  uVar10 = uVar10 & 0xffff;
  if (0x7fff < uVar10) {
    uVar10 = uVar10 | 0xffff0000;
  }
  if (((0 < (int)uVar10) && (uVar8 = *(uint *)register0x00000004, (int)uVar10 < (int)uVar8)) ||
     ((uVar8 = *(uint *)((int)register0x00000004 + 4), (int)uVar8 < (int)uVar10 && ((int)uVar10 < 0)
      ))) {
    uVar10 = uVar8;
  }
  if (iVar5 != -1) {
    uVar10 = uVar10 - iVar5;
  }
  uVar10 = uVar10 & 0xffff;
  uVar8 = ac & 0xfffffff8 | (uint)(uVar10 < 0x7fff) << 2 | (uint)(uVar10 == 0x7fff) << 1;
  ac = uVar8 | 0x7fff < uVar10;
  if (((byte)(uVar8 >> 1) & 1 | uVar10 < 0x7fff) != 1) {
    uVar10 = uVar10 | 0xffff0000;
  }
  *param_1 = uVar10;
  fp = auVar2._0_4_;
  return;
}

