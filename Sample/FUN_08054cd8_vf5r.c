
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08054cd8(int param_1,allocator **param_2)

{
  allocator *paVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  allocator **ppaVar7;
  basic_string *pbVar8;
  basic_string *pbVar9;
  char *pcVar10;
  int iVar11;
  int local_5c [7];
  basic_string *local_40 [5];
  basic_string *local_2c;
  basic_string *local_28;
  basic_string *local_24;
  
  local_2c = (basic_string *)0x0;
  local_28 = (basic_string *)0x0;
  local_24 = (basic_string *)0x0;
  iVar11 = 0;
                    /* try { // try from 08054d16 to 08054d1a has its CatchHandler @ 08054d85 */
  FUN_0805560c(local_40,(int)&local_2c,(basic_string *)0x0,0);
  ppaVar7 = param_2;
  for (iVar6 = param_1 * 4 + -4 >> 2; ppaVar7 = ppaVar7 + 1, 0 < iVar6; iVar6 = iVar6 + -1) {
                    /* try { // try from 08054d4c to 08054d50 has its CatchHandler @ 08054d85 */
    std::basic_string<>::basic_string((char *)local_5c,*ppaVar7);
    if (local_28 == local_24) {
                    /* try { // try from 08054e63 to 08054e67 has its CatchHandler @ 08054e6d */
      FUN_080556de(&local_2c,local_28);
    }
    else {
      if (local_28 != (basic_string *)0x0) {
                    /* try { // try from 08054e45 to 08054e49 has its CatchHandler @ 08054e6d */
        std::basic_string<>::basic_string(local_28);
      }
      local_28 = local_28 + 1;
    }
    paVar1 = (allocator *)(local_5c[0] + -0xc);
                    /* try { // try from 08054f24 to 08054f28 has its CatchHandler @ 08054f45 */
    if ((paVar1 != (allocator *)&std::basic_string<>::_Rep::_S_empty_rep_storage) &&
       (iVar4 = __gnu_cxx::__exchange_and_add((int *)(local_5c[0] + -4),-1), iVar4 < 1)) {
      std::basic_string<>::_Rep::_M_destroy(paVar1);
    }
  }
  bVar3 = false;
  pbVar9 = local_2c;
  while (pbVar9 != local_28) {
    uVar5 = 0xffffffff;
    pcVar10 = "-";
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    iVar11 = ~uVar5 - 1;
                    /* try { // try from 08054e29 to 08054e2d has its CatchHandler @ 08054d85 */
    iVar6 = std::basic_string<>::find((char *)pbVar9,0x87995f7,0);
    if (iVar6 == 0) {
                    /* try { // try from 08054ecd to 08054efe has its CatchHandler @ 08054d85 */
      iVar6 = std::basic_string<>::compare((char *)pbVar9);
      if (iVar6 == 0) {
        pbVar9 = pbVar9 + 1;
        bVar3 = true;
      }
      else {
        iVar6 = std::basic_string<>::compare((char *)pbVar9);
        if (iVar6 == 0) {
          pbVar9 = pbVar9 + 1;
          DAT_089a7180 = 1;
        }
        else {
                    /* try { // try from 08054f96 to 08054fae has its CatchHandler @ 08054d85 */
          iVar6 = std::basic_string<>::compare((char *)pbVar9);
          if (iVar6 == 0) {
            FUN_080c658c(1);
            pbVar9 = pbVar9 + 1;
          }
          else {
            iVar6 = std::basic_string<>::compare((char *)pbVar9);
            if (iVar6 == 0) {
              if (pbVar9 + 1 == local_28) break;
              DAT_089a7188 = FUN_08088cac(pbVar9 + 1,10);
              pbVar9 = pbVar9 + 2;
            }
            else {
              iVar6 = std::basic_string<>::compare((char *)pbVar9);
              if (iVar6 == 0) {
                if (pbVar9 + 1 == local_28) break;
                DAT_089a718c = FUN_08088cac(pbVar9 + 1,10);
                pbVar9 = pbVar9 + 2;
              }
              else {
                iVar6 = std::basic_string<>::compare((char *)pbVar9);
                if ((iVar6 == 0) ||
                   (iVar6 = std::basic_string<>::compare((char *)pbVar9), iVar6 == 0)) {
                  pbVar8 = pbVar9 + 1;
                  if (pbVar8 == local_28) break;
                  iVar6 = std::basic_string<>::compare((char *)pbVar8);
                  if (iVar6 == 0) {
                    pbVar9 = pbVar9 + 2;
                    _DAT_089a7190 = 1;
                  }
                  else {
                    iVar6 = std::basic_string<>::compare((char *)pbVar8);
                    if (iVar6 == 0) {
                      pbVar9 = pbVar9 + 2;
                      _DAT_089a7190 = 2;
                    }
                    else {
                      iVar6 = std::basic_string<>::compare((char *)pbVar8);
                      pbVar9 = pbVar9 + 2;
                      _DAT_089a7190 = -(uint)(iVar6 == 0) & 3;
                    }
                  }
                }
                else {
                  iVar6 = std::basic_string<>::compare((char *)pbVar9);
                  if (iVar6 == 0) {
                    pbVar9 = pbVar9 + 1;
                    DAT_089a7194 = 1;
                  }
                  else {
                    iVar6 = std::basic_string<>::compare((char *)pbVar9);
                    if (iVar6 == 0) {
                      pbVar9 = pbVar9 + 1;
                      DAT_089a7195 = 1;
                    }
                    else {
                      iVar6 = std::basic_string<>::compare((char *)pbVar9);
                      if (iVar6 == 0) {
LAB_08055309:
                        pbVar9 = pbVar9 + 1;
                        DAT_089a719c = 1;
                      }
                      else {
                        iVar6 = std::basic_string<>::compare((char *)pbVar9);
                        if (iVar6 == 0) {
                          pbVar9 = pbVar9 + 1;
                          DAT_089a7198 = 1;
                        }
                        else {
                          iVar6 = std::basic_string<>::compare((char *)pbVar9);
                          if (iVar6 == 0) {
                            pbVar9 = pbVar9 + 1;
                            DAT_089a7198 = 3;
                          }
                          else {
                            iVar6 = std::basic_string<>::compare((char *)pbVar9);
                            if (iVar6 == 0) {
                              pbVar9 = pbVar9 + 1;
                              DAT_089a7198 = 6;
                            }
                            else {
                              iVar6 = std::basic_string<>::compare((char *)pbVar9);
                              if (iVar6 == 0) {
                                pbVar9 = pbVar9 + 1;
                                DAT_089a7198 = 9;
                                DAT_089a71a0 = 1;
                              }
                              else {
                                iVar6 = std::basic_string<>::compare((char *)pbVar9);
                                if (iVar6 == 0) {
                                  pbVar9 = pbVar9 + 1;
                                  DAT_089a7198 = 9;
                                }
                                else {
                                  iVar6 = std::basic_string<>::compare((char *)pbVar9);
                                  if (iVar6 != 0) {
                                    iVar6 = std::basic_string<>::compare((char *)pbVar9);
                                    if (iVar6 != 0) goto LAB_08054e36;
                                    pbVar9 = pbVar9 + 1;
                                    if (pbVar9 != local_28) {
                                      DAT_089a71a4 = '\x01';
                                      _DAT_089a71b4 = 0;
                                      std::basic_string<>::assign(&DAT_089a71b0);
                                      DAT_089a71a8 = 1;
                                      goto LAB_08055309;
                                    }
                                    break;
                                  }
                                  if (pbVar9 + 1 == local_28) break;
                                  DAT_089a71a4 = '\x01';
                                  _DAT_089a71b4 = 0;
                                  std::basic_string<>::assign(&DAT_089a71b0);
                                  pbVar9 = pbVar9 + 2;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
LAB_08054e36:
      pbVar9 = pbVar9 + 1;
    }
  }
  pbVar9 = local_28;
  if ((DAT_089a719c != 0) || (DAT_089a71a4 != '\0')) {
    DAT_089a71a0 = 0;
  }
  pbVar8 = local_2c;
  if (!bVar3) {
    while (pbVar8 != pbVar9) {
      paVar1 = (allocator *)(*pbVar8 - 0xc);
                    /* try { // try from 08054fc5 to 08054fc9 has its CatchHandler @ 08054eb1 */
      if ((paVar1 == (allocator *)&std::basic_string<>::_Rep::_S_empty_rep_storage) ||
         (iVar11 = __gnu_cxx::__exchange_and_add((int *)(*pbVar8 - 4),-1), 0 < iVar11)) {
        pbVar8 = pbVar8 + 1;
      }
      else {
        std::basic_string<>::_Rep::_M_destroy(paVar1);
        pbVar8 = pbVar8 + 1;
      }
    }
    if (local_2c != (basic_string *)0x0) {
      operator_delete(local_2c);
    }
    return;
  }
                    /* try { // try from 08055013 to 08055476 has its CatchHandler @ 08054d85 */
  fprintf(stderr,"Usage: %s [option]...\n",*param_2,iVar11);
  fprintf(stderr,"\t--help     Disp Usage\n");
  fprintf(stderr,"\t-debug     Debug Mode(use gdb)\n");
  fprintf(stderr,"\t-t         Test Mode Start\n");
  fprintf(stderr,"\t-m <no>    Mode No\n");
  fprintf(stderr,"\t-s <no>    Sub Mode No\n");
  fprintf(stderr,"\t-sm <server|tv|terminal|satellite>    Sub Mode No\n");
  fprintf(stderr,"\t-ss <base> Screen Shot\n");
  fprintf(stderr,"\t-ss4x <base> Screen Shot (4x screen size)\n");
  fprintf(stderr,"\t-ve <0|1>  Use Vsync Emulation\n");
  fprintf(stderr,"\t-fs        Full Screen Mode\n");
  fprintf(stderr,"\t-aa        Enable Anti-Alias\n");
  fprintf(stderr,"\t-vga       VGA(640x480) Mode\n");
  fprintf(stderr,"\t-xga       XGA(1024x768) Mode\n");
  fprintf(stderr,"\t-wxga      WXGA(1280x768) Mode\n");
  fprintf(stderr,"\t-wxga_dbd  WXGA(1280x768) dot by dot Mode\n");
  fprintf(stderr,"\t-wxga2     WXGA(1360x768) Mode\n");
                    /* WARNING: Subroutine does not return */
  exit(0);
}

