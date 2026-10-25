
undefined8 Function_82513EC8(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x11003e;
  uVar1 = character_select_demo_limit(param_1);
  switch((uint)uVar1 & 0xff) {
  case 0:
    return 0x110025;
  case 1:
    return 0x110026;
  case 4:
    return 0x110028;
  case 5:
    return 0x110029;
  case 10:
    return 0x11002d;
  case 0xb:
    return 0x11002e;
  case 0xc:
    return 0x11002f;
  case 0xd:
    return 0x110030;
  case 0x14:
    return 0x110034;
  case 0x15:
    return 0x110035;
  case 0x18:
    return 0x110036;
  case 0x1f:
    uVar2 = 0x110039;
  }
  return uVar2;
}

