
void FUN_8252d1f0(void)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  undefined4 *puVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  ulong *puVar8;
  ulong *puVar9;
  char *pcVar10;
  ulong *puVar11;
  char *pcVar12;
  undefined **ppuVar13;
  longlong lVar14;
  undefined4 local_30;
  undefined4 local_2c [11];
  
  local_30 = 0;
  DAT_833f07ec = DAT_833f07ec + 1;
  if (DAT_83300784 == 0) {
    DAT_83300784 = 1;
  }
  iVar6 = Function_8252DDF0(0xffffffff82187b08,local_2c,&local_30,0);
  if (iVar6 < 0) {
    DAT_833f07ec = DAT_833f07ec + -1;
    if (DAT_833f07ec < 0) {
      DAT_83300784 = 0;
      DAT_833f07ec = 0;
      return;
    }
    if (DAT_833f07ec != 0) {
      return;
    }
    DAT_83300784 = 0;
    return;
  }
  DAT_833f07ec = DAT_833f07ec + -1;
  if (DAT_833f07ec < 0) {
    DAT_833f07ec = 0;
  }
  else if (DAT_833f07ec != 0) goto LAB_8252d2e0;
  DAT_83300784 = 0;
LAB_8252d2e0:
  DAT_83194048 = local_2c[0];
  DAT_8319404c = local_30;
  uVar5 = Function_8277D9D0(0x11000,0xffffffffffffffff,0x10,4);
  DAT_830f7db8 = (undefined4)uVar5;
  iVar6 = Function_82758D98(uVar5,0x11000);
  if (-1 < iVar6) {
    uVar5 = Function_8277D9D0(0x280,0xffffffffffffffff,0x10,4);
    DAT_830f7db0 = (undefined4)uVar5;
    iVar7 = Function_82761730(uVar5,0x280);
    iVar6 = DAT_83194044;
    puVar4 = DAT_83192a40;
    if (-1 < iVar7) {
      *(float *)(DAT_83194044 + 8) = 1.0;
      if (puVar4 == (undefined4 *)0x0) {
        DAT_83192a40 = &DAT_830f7e20;
        DAT_830f7e20 = &DAT_82188210;
      }
      puVar11 = &ULONG_82187b4c;
      if (DAT_83192a44 == (undefined4 *)0x0) {
        DAT_83192a44 = &DAT_830f7e24;
        DAT_830f7e24 = &DWORD_82187bb0;
      }
      Function_82952EB0(*(undefined4 *)(iVar6 + 0x134),0,0);
      DAT_830f7db4 = 0;
      Function_82952EB0(*(undefined4 *)(DAT_83194044 + 0x114),0,0);
      Function_8252EAD0();
      puVar8 = &DAT_830f7df0;
      *(float *)(DAT_83194044 + 0xc) = 0.4;
      DAT_830f7dbc = 0.5;
      lVar14 = 0xc;
      puVar9 = puVar11;
      do {
        uVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        *puVar8 = uVar3;
        puVar8 = puVar8 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      puVar9 = &DAT_830f7dc0;
      lVar14 = 0xc;
      do {
        uVar3 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar9 = uVar3;
        puVar9 = puVar9 + 1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      ppuVar13 = &PTR_s_D__Sound_bgm_stream_xwb_82f4b9b4;
      do {
        pcVar12 = *ppuVar13;
        pcVar10 = "";
        do {
          cVar1 = *pcVar12;
          cVar2 = *pcVar10;
          if (cVar1 == '\0') break;
          pcVar12 = pcVar12 + 1;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) {
          Function_82761858();
        }
        ppuVar13 = ppuVar13 + 3;
      } while ((int)ppuVar13 < -0x7d0b4520);
    }
  }
  return;
}

