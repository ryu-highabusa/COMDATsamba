
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00063990(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 unaff_pfp;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar5;
  iVar3 = *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = iVar3;
  fVar2 = (float10)'\0';
  fVar1 = (float10)iVar3;
  ac = ac & 0xfffffff8;
  if (!NAN(fVar1) && !NAN(fVar2)) {
    ac = ac | (uint)(fVar1 < fVar2) << 2;
    ac = ac | (uint)(fVar1 == fVar2) << 1;
    ac = ac | fVar2 < fVar1;
  }
  if (((byte)ac & 1) != 1) {
    uVar4 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar4 ^ 0x80000000;
    fVar2 = (float10)0x3fb47ae147ae147b;
    fVar1 = (float10)(longlong)
                     (CONCAT44((int)((unkuint10)((float10)iVar3 + (float10)iVar5) >> 0x20),uVar4) ^
                     0x80000000);
    ac = ac & 0xfffffff8;
    if (!NAN(fVar1) && !NAN(fVar2)) {
      ac = ac | (uint)(fVar1 < fVar2) << 2;
      ac = ac | (uint)(fVar1 == fVar2) << 1;
      ac = ac | fVar2 < fVar1;
    }
    if (((byte)(ac >> 1) & 1 | (byte)(ac >> 2) & 1) != 1) {
      *(undefined4 *)(param_1 + 0x20) = 0x3da3d70a;
    }
    *(undefined4 *)(param_1 + 0x14) = g14;
  }
  fp = unaff_pfp;
  return;
}

