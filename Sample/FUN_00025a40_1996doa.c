
void FUN_00025a40(uint param_1,uint param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 unaff_pfp;
  int iVar4;
  
  uVar3 = ac;
  DAT_005555fc = (undefined2)g14;
  DAT_005555fe = (undefined2)g14;
  DAT_00555600 = (undefined2)g14;
  DAT_00555602 = (undefined2)g14;
  DAT_00555604 = g14;
  bVar2 = g_character_act_record_tables[param_2 & 0xff][(param_1 & 0xff) * 8 + 3];
  uVar1 = ac & 0xfffffff8 | (uint)(1 < (byte)(bVar2 - 2)) << 2 | (uint)((byte)(bVar2 - 2) == 1) << 1
  ;
  ac = uVar1 | bVar2 == 2;
  if ((((byte)ac & 1 | (byte)(uVar1 >> 1) & 1) == 1) ||
     (ac = uVar3 & 0xfffffff8 | (uint)(5 < bVar2) << 2 | (uint)(bVar2 == 5) << 1 | (uint)(bVar2 < 5)
     , ((byte)ac & 1 | 5 < bVar2) != 1)) {
    iVar4 = (param_2 & 0xff) * 0xc00 + (param_1 & 0xff) * 0xc;
    DAT_005555fc = *(undefined2 *)(&g_action_motion_metadata + iVar4);
    DAT_005555fe = *(undefined2 *)(&DAT_00557f92 + iVar4);
    DAT_00555600 = *(undefined2 *)(&DAT_00557f94 + iVar4);
    DAT_00555602 = *(undefined2 *)(&DAT_00557f96 + iVar4);
    DAT_00555604 = *(undefined4 *)(&DAT_00557f98 + iVar4);
  }
  fp = unaff_pfp;
  return;
}

