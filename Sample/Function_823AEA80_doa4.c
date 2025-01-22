
void Function_823AEA80(ulong param_1,ulong param_2)

{
  if (DAT_83579960 == param_1) {
    FLOAT_82c58b5c = 1.0;
  }
  else {
    FLOAT_82c58b5c = (float)((double)DAT_83579960 / (double)(longlong)(int)param_1);
  }
  _280d_82c58b44 = param_1;
  _20d_82c58b48 = param_2;
  _280d_82c58b4c = param_1;
  _20d_82c58b50 = param_2;
  if (DAT_83579964 == param_2) {
    FLOAT_82c58b60 = 1.0;
    FUN_823ae9c0();
    return;
  }
  FLOAT_82c58b60 = (float)((double)DAT_83579964 / (double)(longlong)(int)param_2);
  FUN_823ae9c0();
  return;
}

