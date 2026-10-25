                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                               undefined __cdecl FUN_08054cd8(int param_1, allocator * 
             undefined         <UNASSIGNED>   <RETURN>
             int               Stack[0x4]:4   param_1                                 XREF[1]:     08054d1e(R)  
             allocator * *     Stack[0x8]:4   param_2                                 XREF[2]:     08054d1b(R), 
                                                                                                   08054ff9(R)  
             undefined1        Stack[-0x10]:1 local_10                                XREF[1]:     08054ff1(*)  
             undefined4        Stack[-0x24]:4 local_24                                XREF[2]:     08054cf8(W), 
                                                                                                   08054d54(R)  
             undefined4        Stack[-0x28]:4 local_28                                XREF[10]:    08054cf1(W), 
                                                                                                   08054d51(R), 
                                                                                                   08054d68(W), 
                                                                                                   08054df3(R), 
                                                                                                   08054e4a(R), 
                                                                                                   0805519d(R), 
                                                                                                   080551dd(R)  
             undefined4        Stack[-0x2c]:4 local_2c                                XREF[6]:     08054ce0(*), 
                                                                                                   08054cea(W), 
                                                                                                   08054df0(R), 
                                                                                                   08054e55(*), 
                                                                                                   08054f71(R), 
                                                                                                   08054fe2(R)  
             undefined1        Stack[-0x40]:1 local_40                                XREF[1]:     08054cdd(*)  
             undefined4        Stack[-0x5c]:4 local_5c                                XREF[4]:     08054d3c(*), 
                                                                                                   08054d6b(R), 
                                                                                                   08054e3b(*), 
                                                                                                   08054e52(*)  
             undefined1        Stack[-0x6c]:1 local_6c                                XREF[1]:     08054d39(*)  
             undefined1        Stack[-0x7c]:1 local_7c                                XREF[2]:     08054f31(*), 
                                                                                                   08054fce(*)  
             undefined1        Stack[-0x7d]:1 local_7d                                XREF[3]:     08054dec(W), 
                                                                                                   08054ed9(W), 
                                                                                                   08054f67(R)  
             undefined4        Stack[-0x90]:4 local_90                                XREF[1]:     08054cff(W)  
             undefined4        Stack[-0x94]:4 local_94                                XREF[2]:     08054d07(W), 
                                                                                                   08054e25(W)  
             undefined4        Stack[-0x98]:4 local_98                                XREF[5]:     08054d0f(W), 
                                                                                                   08054d3f(W), 
                                                                                                   08054e0d(W), 
                                                                                                   08054e5c(W), 
                                                                                                   0805500f(W)  
             undefined4        Stack[-0x9c]:4 local_9c                                XREF[50]:    08054d13(*), 
                                                                                                   08054d48(W), 
                                                                                                   08054e15(W), 
                                                                                                   08054e41(W), 
                                                                                                   08054e58(W), 
                                                                                                   08054ec2(W), 
                                                                                                   08054eef(W)  
             undefined4        Stack[-0xa0]:4 local_a0                                XREF[52]:    08054d45(*), 
                                                                                                   08054e1f(*), 
                                                                                                   08054e3e(*), 
                                                                                                   08054e60(*), 
                                                                                                   08054eca(*), 
                                                                                                   08054ef7(*), 
                                                                                                   08054f21(*)  
                                             FUN_08054cd8                                    XREF[5]:     FUN_08055486:080554d6(c), 
                                                                                                          08899234, 088b3a9c(*), 
                                                                                                          08926c7d(*), 08926ca0(*)  
        08054cd8 55              PUSH                      EBP
        08054cd9 89 e5           MOV                       EBP,ESP
        08054cdb 57              PUSH                      EDI
        08054cdc 56              PUSH                      ESI
        08054cdd 8d 45 c4        LEA                       EAX=>local_40,[EBP + -0x3c]
        08054ce0 8d 55 d8        LEA                       EDX=>local_2c,[EBP + -0x28]
        08054ce3 53              PUSH                      EBX
        08054ce4 81 ec 8c        SUB                       ESP,0x8c
                 00 00 00
        08054cea c7 45 d8        MOV                       dword ptr [EBP + local_2c],0x0
                 00 00 00 00
        08054cf1 c7 45 dc        MOV                       dword ptr [EBP + local_28],0x0
                 00 00 00 00
        08054cf8 c7 45 e0        MOV                       dword ptr [EBP + local_24],0x0
                 00 00 00 00
        08054cff c7 44 24        MOV                       dword ptr [ESP + local_90],0x0
                 0c 00 00 
                 00 00
        08054d07 c7 44 24        MOV                       dword ptr [ESP + local_94],0x0
                 08 00 00 
                 00 00
        08054d0f 89 54 24 04     MOV                       dword ptr [ESP + local_98],EDX
        08054d13 89 04 24        MOV                       dword ptr [ESP]=>local_9c,EAX
                             try { // try from 08054d16 to 08054d1a has its CatchHandler @
                                             LAB_08054d16                                    XREF[1]:     08926c70(*)  
        08054d16 e8 f1 08        CALL                      FUN_0805560c                                             basic_string * * FUN_0805560c(basic_string * * param_1, int
                 00 00
                             } // end try from 08054d16 to 08054d1a
        08054d1b 8b 5d 0c        MOV                       EBX,dword ptr [EBP + param_2]
        08054d1e 8b 4d 08        MOV                       ECX,dword ptr [EBP + param_1]
        08054d21 83 ec 04        SUB                       ESP,0x4
        08054d24 8d 73 04        LEA                       ESI,[EBX + 0x4]
        08054d27 8d 1c 8d        LEA                       EBX,[ECX*0x4 + 0xfffffffc]
                 fc ff ff ff
        08054d2e c1 fb 02        SAR                       EBX,0x2
                                             LAB_08054d31                                    XREF[1]:     08054d83(j)  
        08054d31 85 db           TEST                      EBX,EBX
        08054d33 0f 8e b3        JLE                       LAB_08054dec
                 00 00 00
        08054d39 8d 55 98        LEA                       EDX=>local_6c,[EBP + -0x68]
        08054d3c 8d 7d a8        LEA                       EDI=>local_5c,[EBP + -0x58]
        08054d3f 89 54 24 08     MOV                       dword ptr [ESP + local_98],EDX
        08054d43 8b 06           MOV                       EAX,dword ptr [ESI]
        08054d45 89 3c 24        MOV                       dword ptr [ESP]=>local_a0,EDI
        08054d48 89 44 24 04     MOV                       dword ptr [ESP + local_9c],EAX
                             try { // try from 08054d4c to 08054d50 has its CatchHandler @
                                             LAB_08054d4c                                    XREF[1]:     08926c75(*)  
        08054d4c e8 b7 e4        CALL                      <EXTERNAL>::std::basic_string<>::basic_string            undefined basic_string(char * param_1, allocator * param_2)
                 ff ff
                             } // end try from 08054d4c to 08054d50
        08054d51 8b 45 dc        MOV                       EAX,dword ptr [EBP + local_28]
        08054d54 3b 45 e0        CMP                       EAX,dword ptr [EBP + local_24]
        08054d57 0f 84 f5        JZ                        LAB_08054e52
                 00 00 00
        08054d5d 85 c0           TEST                      EAX,EAX
        08054d5f 0f 85 d6        JNZ                       LAB_08054e3b
                 00 00 00
                                             LAB_08054d65                                    XREF[1]:     08054e4d(j)  
        08054d65 83 c0 04        ADD                       EAX,0x4
        08054d68 89 45 dc        MOV                       dword ptr [EBP + local_28],EAX
                                             LAB_08054d6b                                    XREF[1]:     08054e68(j)  
        08054d6b 8b 45 a8        MOV                       EAX,dword ptr [EBP + local_5c]
        08054d6e 8d 78 f4        LEA                       EDI,[EAX + -0xc]
        08054d71 81 ff 68        CMP                       EDI,std::basic_string<>::_Rep::_S_empty_rep_storage
                 6d 9a 08
        08054d77 0f 85 99        JNZ                       LAB_08054f16
                 01 00 00
                                             LAB_08054d7d                                    XREF[2]:     08054f2b(j), 08054f40(j)  
        08054d7d 83 c6 04        ADD                       ESI,0x4
        08054d80 83 eb 01        SUB                       EBX,0x1
        08054d83 eb ac           JMP                       LAB_08054d31
                             catch() { ... } // from try @ 08054d16 with catch @ 08054d85
                             catch() { ... } // from try @ 08054d4c with catch @ 08054d85
                             catch() { ... } // from try @ 08054e29 with catch @ 08054d85
                             catch() { ... } // from try @ 08054ecd with catch @ 08054d85
                             catch() { ... } // from try @ 08054f96 with catch @ 08054d85
                             catch() { ... } // from try @ 08055013 with catch @ 08054d85
                                             LAB_08054d85                                    XREF[7]:     08054f45(j), 08055181(j), 
                                                                                                          08926c72(*), 08926c77(*), 
                                                                                                          08926c88(*), 08926ca5(*), 
                                                                                                          08926cb1(*), [more]
        08054d85 89 45 80        MOV                       dword ptr [EBP + -0x80],EAX
                                             LAB_08054d88                                    XREF[3]:     08054e7f(j), 08054e9a(j), 
                                                                                                          08054eac(j)  
        08054d88 8b 75 dc        MOV                       ESI,dword ptr [EBP + -0x24]
        08054d8b 8b 7d d8        MOV                       EDI,dword ptr [EBP + -0x28]
        08054d8e 39 f7           CMP                       EDI,ESI
        08054d90 74 15           JZ                        LAB_08054da7
                                             LAB_08054d92                                    XREF[1]:     08054da5(j)  
        08054d92 8b 07           MOV                       EAX,dword ptr [EDI]
        08054d94 b9 68 6d        MOV                       ECX,std::basic_string<>::_Rep::_S_empty_rep_storage
                 9a 08
        08054d99 8d 58 f4        LEA                       EBX,[EAX + -0xc]
        08054d9c 39 d9           CMP                       ECX,EBX
        08054d9e 75 21           JNZ                       LAB_08054dc1
                                             LAB_08054da0                                    XREF[1]:     08054dd6(j)  
        08054da0 83 c7 04        ADD                       EDI,0x4
                                             LAB_08054da3                                    XREF[1]:     08054dea(j)  
        08054da3 39 f7           CMP                       EDI,ESI
        08054da5 75 eb           JNZ                       LAB_08054d92
                                             LAB_08054da7                                    XREF[1]:     08054d90(j)  
        08054da7 8b 45 d8        MOV                       EAX,dword ptr [EBP + -0x28]
        08054daa 85 c0           TEST                      EAX,EAX
        08054dac 74 08           JZ                        LAB_08054db6
        08054dae 89 04 24        MOV                       dword ptr [ESP],EAX
        08054db1 e8 d2 f2        CALL                      <EXTERNAL>::operator.delete                              void operator.delete(void * param_1)
                 ff ff
                                             LAB_08054db6                                    XREF[1]:     08054dac(j)  
        08054db6 8b 7d 80        MOV                       EDI,dword ptr [EBP + -0x80]
        08054db9 89 3c 24        MOV                       dword ptr [ESP],EDI
                                             LAB_08054dbc                                    XREF[1]:     08926c7a(*)  
        08054dbc e8 27 ef        CALL                      <EXTERNAL>::_Unwind_Resume                               undefined _Unwind_Resume()
                 ff ff
                             -- Flow Override: CALL_RETURN (CALL_TERMINATOR)
                                             LAB_08054dc1                                    XREF[1]:     08054d9e(j)  
        08054dc1 83 e8 04        SUB                       EAX,0x4
        08054dc4 c7 44 24        MOV                       dword ptr [ESP + 0x4],0xffffffff
                 04 ff ff 
                 ff ff
        08054dcc 89 04 24        MOV                       dword ptr [ESP],EAX
                             try { // try from 08054dcf to 08054dd3 has its CatchHandler @
                                             LAB_08054dcf                                    XREF[1]:     08926c7f(*)  
        08054dcf e8 74 ee        CALL                      <EXTERNAL>::__gnu_cxx::__exchange_and_add                undefined __exchange_and_add(int * param_1, int param_2)
                 ff ff
                             } // end try from 08054dcf to 08054dd3
        08054dd4 85 c0           TEST                      EAX,EAX
        08054dd6 7f c8           JG                        LAB_08054da0
        08054dd8 8d 45 88        LEA                       EAX,[EBP + -0x78]
        08054ddb 89 1c 24        MOV                       dword ptr [ESP],EBX
        08054dde 83 c7 04        ADD                       EDI,0x4
        08054de1 89 44 24 04     MOV                       dword ptr [ESP + 0x4],EAX
        08054de5 e8 5e e0        CALL                      <EXTERNAL>::std::basic_string<>::_Rep::_M_destroy        undefined _M_destroy(allocator * param_1)
                 ff ff
        08054dea eb b7           JMP                       LAB_08054da3
                                             LAB_08054dec                                    XREF[1]:     08054d33(j)  
        08054dec c6 45 87 00     MOV                       byte ptr [EBP + local_7d],0x0
        08054df0 8b 75 d8        MOV                       ESI,dword ptr [EBP + local_2c]
                                             LAB_08054df3                                    XREF[7]:     08054e39(j), 08054edd(j), 
                                                                                                          08054f11(j), 08054fb2(j), 
                                                                                                          080551c1(j), 08055201(j), 
                                                                                                          0805524a(j), [more]
        08054df3 8b 5d dc        MOV                       EBX,dword ptr [EBP + local_28]
        08054df6 39 de           CMP                       ESI,EBX
        08054df8 0f 84 4c        JZ                        LAB_08054f4a
                 01 00 00
        08054dfe fc              CLD
        08054dff b9 ff ff        MOV                       ECX,0xffffffff
                 ff ff
        08054e04 31 c0           XOR                       EAX,EAX
        08054e06 bf f7 95        MOV                       EDI,DAT_087995f7                                         = 2Dh
                 79 08
        08054e0b f2 ae           SCASB.REPNE               ES:EDI=>DAT_087995f7                                     = 2Dh
        08054e0d c7 44 24        MOV                       dword ptr [ESP + local_98],0x0
                 08 00 00 
                 00 00
        08054e15 c7 44 24        MOV                       dword ptr [ESP + local_9c],DAT_087995f7                  = 2Dh
                 04 f7 95 
                 79 08
        08054e1d f7 d1           NOT                       ECX
        08054e1f 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08054e22 83 e9 01        SUB                       ECX,0x1
        08054e25 89 4c 24 0c     MOV                       dword ptr [ESP + local_94],ECX
                             try { // try from 08054e29 to 08054e2d has its CatchHandler @
                                             LAB_08054e29                                    XREF[1]:     08926c85(*)  
        08054e29 e8 4a da        CALL                      <EXTERNAL>::std::basic_string<>::find                    undefined find(char * param_1, uint param_2, uint param_3)
                 ff ff
                             } // end try from 08054e29 to 08054e2d
        08054e2e 85 c0           TEST                      EAX,EAX
        08054e30 0f 84 8c        JZ                        LAB_08054ec2
                 00 00 00
                                             LAB_08054e36                                    XREF[1]:     08055441(j)  
        08054e36 83 c6 04        ADD                       ESI,0x4
        08054e39 eb b8           JMP                       LAB_08054df3
                                             LAB_08054e3b                                    XREF[1]:     08054d5f(j)  
        08054e3b 8d 4d a8        LEA                       ECX=>local_5c,[EBP + -0x58]
        08054e3e 89 04 24        MOV                       dword ptr [ESP]=>local_a0,EAX
        08054e41 89 4c 24 04     MOV                       dword ptr [ESP + local_9c],ECX
                             try { // try from 08054e45 to 08054e49 has its CatchHandler @
                                             LAB_08054e45                                    XREF[1]:     08926c8b(*)  
        08054e45 e8 0e e2        CALL                      <EXTERNAL>::std::basic_string<>::basic_string            undefined basic_string(basic_string * param_1)
                 ff ff
                             } // end try from 08054e45 to 08054e49
        08054e4a 8b 45 dc        MOV                       EAX,dword ptr [EBP + local_28]
        08054e4d e9 13 ff        JMP                       LAB_08054d65
                 ff ff
                                             LAB_08054e52                                    XREF[1]:     08054d57(j)  
        08054e52 8d 55 a8        LEA                       EDX=>local_5c,[EBP + -0x58]
        08054e55 8d 7d d8        LEA                       EDI=>local_2c,[EBP + -0x28]
        08054e58 89 44 24 04     MOV                       dword ptr [ESP + local_9c],EAX
        08054e5c 89 54 24 08     MOV                       dword ptr [ESP + local_98],EDX
        08054e60 89 3c 24        MOV                       dword ptr [ESP]=>local_a0,EDI
                             try { // try from 08054e63 to 08054e67 has its CatchHandler @
                                             LAB_08054e63                                    XREF[1]:     08926c91(*)  
        08054e63 e8 76 08        CALL                      FUN_080556de                                             undefined FUN_080556de(basic_string * * param_1, basic_stri
                 00 00
                             } // end try from 08054e63 to 08054e67
        08054e68 e9 fe fe        JMP                       LAB_08054d6b
                 ff ff
                             catch() { ... } // from try @ 08054e45 with catch @ 08054e6d
                             catch() { ... } // from try @ 08054e63 with catch @ 08054e6d
                                             LAB_08054e6d                                    XREF[2]:     08926c8e(*), 08926c94(*)  
        08054e6d 89 45 80        MOV                       dword ptr [EBP + -0x80],EAX
        08054e70 8b 45 a8        MOV                       EAX,dword ptr [EBP + -0x58]
        08054e73 8d 75 88        LEA                       ESI,[EBP + -0x78]
        08054e76 8d 58 f4        LEA                       EBX,[EAX + -0xc]
        08054e79 81 fb 68        CMP                       EBX,std::basic_string<>::_Rep::_S_empty_rep_storage
                 6d 9a 08
        08054e7f 0f 84 03        JZ                        LAB_08054d88
                 ff ff ff
        08054e85 83 e8 04        SUB                       EAX,0x4
        08054e88 c7 44 24        MOV                       dword ptr [ESP + 0x4],0xffffffff
                 04 ff ff 
                 ff ff
        08054e90 89 04 24        MOV                       dword ptr [ESP],EAX
                             try { // try from 08054e93 to 08054e97 has its CatchHandler @
                                             LAB_08054e93                                    XREF[1]:     08926c97(*)  
        08054e93 e8 b0 ed        CALL                      <EXTERNAL>::__gnu_cxx::__exchange_and_add                undefined __exchange_and_add(int * param_1, int param_2)
                 ff ff
                             } // end try from 08054e93 to 08054e97
        08054e98 85 c0           TEST                      EAX,EAX
        08054e9a 0f 8f e8        JG                        LAB_08054d88
                 fe ff ff
        08054ea0 89 74 24 04     MOV                       dword ptr [ESP + 0x4],ESI
        08054ea4 89 1c 24        MOV                       dword ptr [ESP],EBX
        08054ea7 e8 9c df        CALL                      <EXTERNAL>::std::basic_string<>::_Rep::_M_destroy        undefined _M_destroy(allocator * param_1)
                 ff ff
        08054eac e9 d7 fe        JMP                       LAB_08054d88
                 ff ff
                             catch() { ... } // from try @ 08054dcf with catch @ 08054eb1
                             catch() { ... } // from try @ 08054fc5 with catch @ 08054eb1
                                             LAB_08054eb1                                    XREF[2]:     08926c82(*), 08926cb7(*)  
        08054eb1 89 c3           MOV                       EBX,EAX
        08054eb3 8b 45 d8        MOV                       EAX,dword ptr [EBP + -0x28]
        08054eb6 85 c0           TEST                      EAX,EAX
        08054eb8 75 28           JNZ                       LAB_08054ee2
        08054eba 89 1c 24        MOV                       dword ptr [ESP],EBX
                                             LAB_08054ebd                                    XREF[2]:     08054eed(j), 08926c9d(*)  
        08054ebd e8 26 ee        CALL                      <EXTERNAL>::_Unwind_Resume                               undefined _Unwind_Resume()
                 ff ff
                             -- Flow Override: CALL_RETURN (CALL_TERMINATOR)
                                             LAB_08054ec2                                    XREF[1]:     08054e30(j)  
        08054ec2 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_--help_08762ee8             = "--help"
                 04 e8 2e 
                 76 08
        08054eca 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
                             try { // try from 08054ecd to 08054efe has its CatchHandler @
                                             LAB_08054ecd                                    XREF[1]:     08926ca2(*)  
        08054ecd e8 86 d6        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        08054ed2 85 c0           TEST                      EAX,EAX
        08054ed4 75 19           JNZ                       LAB_08054eef
        08054ed6 83 c6 04        ADD                       ESI,0x4
        08054ed9 c6 45 87 01     MOV                       byte ptr [EBP + local_7d],0x1
        08054edd e9 11 ff        JMP                       LAB_08054df3
                 ff ff
                                             LAB_08054ee2                                    XREF[1]:     08054eb8(j)  
        08054ee2 89 04 24        MOV                       dword ptr [ESP],EAX
        08054ee5 e8 9e f1        CALL                      <EXTERNAL>::operator.delete                              void operator.delete(void * param_1)
                 ff ff
        08054eea 89 1c 24        MOV                       dword ptr [ESP],EBX
        08054eed eb ce           JMP                       LAB_08054ebd
                                             LAB_08054eef                                    XREF[1]:     08054ed4(j)  
        08054eef c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-debug_08762eef             = "-debug"
                 04 ef 2e 
                 76 08
        08054ef7 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08054efa e8 59 d6        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
                             } // end try from 08054ecd to 08054efe
        08054eff 85 c0           TEST                      EAX,EAX
        08054f01 0f 85 84        JNZ                       LAB_08054f8b
                 00 00 00
        08054f07 83 c6 04        ADD                       ESI,0x4
        08054f0a c6 05 80        MOV                       byte ptr [DAT_089a7180],0x1
                 71 9a 08 01
        08054f11 e9 dd fe        JMP                       LAB_08054df3
                 ff ff
                                             LAB_08054f16                                    XREF[1]:     08054d77(j)  
        08054f16 83 e8 04        SUB                       EAX,0x4
        08054f19 c7 44 24        MOV                       dword ptr [ESP + local_9c],0xffffffff
                 04 ff ff 
                 ff ff
        08054f21 89 04 24        MOV                       dword ptr [ESP]=>local_a0,EAX
                             try { // try from 08054f24 to 08054f28 has its CatchHandler @
                                             LAB_08054f24                                    XREF[1]:     08926ca8(*)  
        08054f24 e8 1f ed        CALL                      <EXTERNAL>::__gnu_cxx::__exchange_and_add                undefined __exchange_and_add(int * param_1, int param_2)
                 ff ff
                             } // end try from 08054f24 to 08054f28
        08054f29 85 c0           TEST                      EAX,EAX
        08054f2b 0f 8f 4c        JG                        LAB_08054d7d
                 fe ff ff
        08054f31 8d 45 88        LEA                       EAX=>local_7c,[EBP + -0x78]
        08054f34 89 3c 24        MOV                       dword ptr [ESP]=>local_a0,EDI
        08054f37 89 44 24 04     MOV                       dword ptr [ESP + local_9c],EAX
        08054f3b e8 08 df        CALL                      <EXTERNAL>::std::basic_string<>::_Rep::_M_destroy        undefined _M_destroy(allocator * param_1)
                 ff ff
        08054f40 e9 38 fe        JMP                       LAB_08054d7d
                 ff ff
                             catch() { ... } // from try @ 08054f24 with catch @ 08054f45
                                             LAB_08054f45                                    XREF[1]:     08926cab(*)  
        08054f45 e9 3b fe        JMP                       LAB_08054d85
                 ff ff
                                             LAB_08054f4a                                    XREF[6]:     08054df8(j), 080551a2(j), 
                                                                                                          080551e2(j), 08055222(j), 
                                                                                                          080553ff(j), 0805544f(j)  
        08054f4a 8b 35 9c        MOV                       ESI,dword ptr [DAT_089a719c]
                 71 9a 08
        08054f50 85 f6           TEST                      ESI,ESI
        08054f52 75 09           JNZ                       LAB_08054f5d
        08054f54 80 3d a4        CMP                       byte ptr [DAT_089a71a4],0x0
                 71 9a 08 00
        08054f5b 74 0a           JZ                        LAB_08054f67
                                             LAB_08054f5d                                    XREF[1]:     08054f52(j)  
        08054f5d c7 05 a0        MOV                       dword ptr [DAT_089a71a0],0x0
                 71 9a 08 
                 00 00 00 00
                                             LAB_08054f67                                    XREF[1]:     08054f5b(j)  
        08054f67 80 7d 87 00     CMP                       byte ptr [EBP + local_7d],0x0
        08054f6b 0f 85 88        JNZ                       LAB_08054ff9
                 00 00 00
        08054f71 8b 75 d8        MOV                       ESI,dword ptr [EBP + local_2c]
                                             LAB_08054f74                                    XREF[2]:     08054f89(j), 08054fe0(j)  
        08054f74 39 de           CMP                       ESI,EBX
        08054f76 74 6a           JZ                        LAB_08054fe2
        08054f78 8b 06           MOV                       EAX,dword ptr [ESI]
        08054f7a ba 68 6d        MOV                       EDX,std::basic_string<>::_Rep::_S_empty_rep_storage
                 9a 08
        08054f7f 8d 78 f4        LEA                       EDI,[EAX + -0xc]
        08054f82 39 fa           CMP                       EDX,EDI
        08054f84 75 31           JNZ                       LAB_08054fb7
                                             LAB_08054f86                                    XREF[1]:     08054fcc(j)  
        08054f86 83 c6 04        ADD                       ESI,0x4
        08054f89 eb e9           JMP                       LAB_08054f74
                                             LAB_08054f8b                                    XREF[1]:     08054f01(j)  
        08054f8b c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-t_08762ef6                 = "-t"
                 04 f6 2e 
                 76 08
        08054f93 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
                             try { // try from 08054f96 to 08054fae has its CatchHandler @
                                             LAB_08054f96                                    XREF[1]:     08926cae(*)  
        08054f96 e8 bd d5        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        08054f9b 85 c0           TEST                      EAX,EAX
        08054f9d 0f 85 e3        JNZ                       LAB_08055186
                 01 00 00
        08054fa3 c7 04 24        MOV                       dword ptr [ESP]=>local_a0,0x1
                 01 00 00 00
        08054faa e8 dd 15        CALL                      FUN_080c658c                                             undefined FUN_080c658c(undefined4 param_1)
                 07 00
                             } // end try from 08054f96 to 08054fae
        08054faf 83 c6 04        ADD                       ESI,0x4
        08054fb2 e9 3c fe        JMP                       LAB_08054df3
                 ff ff
                                             LAB_08054fb7                                    XREF[1]:     08054f84(j)  
        08054fb7 83 e8 04        SUB                       EAX,0x4
        08054fba c7 44 24        MOV                       dword ptr [ESP + local_9c],0xffffffff
                 04 ff ff 
                 ff ff
        08054fc2 89 04 24        MOV                       dword ptr [ESP]=>local_a0,EAX
                             try { // try from 08054fc5 to 08054fc9 has its CatchHandler @
                                             LAB_08054fc5                                    XREF[1]:     08926cb4(*)  
        08054fc5 e8 7e ec        CALL                      <EXTERNAL>::__gnu_cxx::__exchange_and_add                undefined __exchange_and_add(int * param_1, int param_2)
                 ff ff
                             } // end try from 08054fc5 to 08054fc9
        08054fca 85 c0           TEST                      EAX,EAX
        08054fcc 7f b8           JG                        LAB_08054f86
        08054fce 8d 4d 88        LEA                       ECX=>local_7c,[EBP + -0x78]
        08054fd1 89 3c 24        MOV                       dword ptr [ESP]=>local_a0,EDI
        08054fd4 83 c6 04        ADD                       ESI,0x4
        08054fd7 89 4c 24 04     MOV                       dword ptr [ESP + local_9c],ECX
        08054fdb e8 68 de        CALL                      <EXTERNAL>::std::basic_string<>::_Rep::_M_destroy        undefined _M_destroy(allocator * param_1)
                 ff ff
        08054fe0 eb 92           JMP                       LAB_08054f74
                                             LAB_08054fe2                                    XREF[1]:     08054f76(j)  
        08054fe2 8b 45 d8        MOV                       EAX,dword ptr [EBP + local_2c]
        08054fe5 85 c0           TEST                      EAX,EAX
        08054fe7 74 08           JZ                        LAB_08054ff1
        08054fe9 89 04 24        MOV                       dword ptr [ESP]=>local_a0,EAX
        08054fec e8 97 f0        CALL                      <EXTERNAL>::operator.delete                              void operator.delete(void * param_1)
                 ff ff
                                             LAB_08054ff1                                    XREF[1]:     08054fe7(j)  
        08054ff1 8d 65 f4        LEA                       ESP=>local_10,[EBP + -0xc]
        08054ff4 5b              POP                       EBX
        08054ff5 5e              POP                       ESI
        08054ff6 5f              POP                       EDI
        08054ff7 5d              POP                       EBP
        08054ff8 c3              RET
                                             LAB_08054ff9                                    XREF[1]:     08054f6b(j)  
        08054ff9 8b 7d 0c        MOV                       EDI,dword ptr [EBP + param_2]
        08054ffc 8b 15 20        MOV                       EDX,dword ptr [stderr]
                 6f 9a 08
        08055002 8b 0f           MOV                       ECX,dword ptr [EDI]
        08055004 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_Usage:_%s_[option]..._0876  = "Usage: %s [option]...\n"
                 04 f9 2e 
                 76 08
        0805500c 89 14 24        MOV                       dword ptr [ESP]=>local_a0,EDX
        0805500f 89 4c 24 08     MOV                       dword ptr [ESP + local_98],ECX
                             try { // try from 08055013 to 08055476 has its CatchHandler @
                                             LAB_08055013                                    XREF[1]:     08926cba(*)  
        08055013 e8 f0 d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        08055018 a1 20 6f        MOV                       EAX,[stderr]
                 9a 08
        0805501d c7 44 24        MOV                       dword ptr [ESP + local_9c],s_--help_Disp_Usage_08762f10  = "\t--help     Disp Usage\n"
                 04 10 2f 
                 76 08
        08055025 89 04 24        MOV                       dword ptr [ESP]=>local_a0,EAX
        08055028 e8 db d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        0805502d 8b 1d 20        MOV                       EBX,dword ptr [stderr]
                 6f 9a 08
        08055033 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-debug_Debug_Mode(use_gdb)  = "\t-debug     Debug Mode(use gdb)\n"
                 04 04 30 
                 76 08
        0805503b 89 1c 24        MOV                       dword ptr [ESP]=>local_a0,EBX
        0805503e e8 c5 d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        08055043 8b 35 20        MOV                       ESI,dword ptr [stderr]
                 6f 9a 08
        08055049 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-t_Test_Mode_Start_08762f28 = "\t-t         Test Mode Start\n"
                 04 28 2f 
                 76 08
        08055051 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08055054 e8 af d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        08055059 8b 15 20        MOV                       EDX,dword ptr [stderr]
                 6f 9a 08
        0805505f c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-m_<no>_Mode_No_08762f45    = "\t-m <no>    Mode No\n"
                 04 45 2f 
                 76 08
        08055067 89 14 24        MOV                       dword ptr [ESP]=>local_a0,EDX
        0805506a e8 99 d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        0805506f 8b 0d 20        MOV                       ECX,dword ptr [stderr]
                 6f 9a 08
        08055075 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-s_<no>_Sub_Mode_No_08762f5a = "\t-s <no>    Sub Mode No\n"
                 04 5a 2f 
                 76 08
        0805507d 89 0c 24        MOV                       dword ptr [ESP]=>local_a0,ECX
        08055080 e8 83 d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        08055085 8b 3d 20        MOV                       EDI,dword ptr [stderr]
                 6f 9a 08
        0805508b c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-sm_<server|tv|terminal|sa  = "\t-sm <server|tv|terminal|satellite>    Sub Mode No\n"
                 04 28 30 
                 76 08
        08055093 89 3c 24        MOV                       dword ptr [ESP]=>local_a0,EDI
        08055096 e8 6d d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        0805509b a1 20 6f        MOV                       EAX,[stderr]
                 9a 08
        080550a0 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-ss_<base>_Screen_Shot_087  = "\t-ss <base> Screen Shot\n"
                 04 73 2f 
                 76 08
        080550a8 89 04 24        MOV                       dword ptr [ESP]=>local_a0,EAX
        080550ab e8 58 d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        080550b0 8b 1d 20        MOV                       EBX,dword ptr [stderr]
                 6f 9a 08
        080550b6 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-ss4x_<base>_Screen_Shot_(  = "\t-ss4x <base> Screen Shot (4x screen size)\n"
                 04 5c 30 
                 76 08
        080550be 89 1c 24        MOV                       dword ptr [ESP]=>local_a0,EBX
        080550c1 e8 42 d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        080550c6 8b 35 20        MOV                       ESI,dword ptr [stderr]
                 6f 9a 08
        080550cc c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-ve_<0|1>_Use_Vsync_Emulat  = "\t-ve <0|1>  Use Vsync Emulation\n"
                 04 88 30 
                 76 08
        080550d4 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        080550d7 e8 2c d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        080550dc 8b 15 20        MOV                       EDX,dword ptr [stderr]
                 6f 9a 08
        080550e2 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-fs_Full_Screen_Mode_08762  = "\t-fs        Full Screen Mode\n"
                 04 8c 2f 
                 76 08
        080550ea 89 14 24        MOV                       dword ptr [ESP]=>local_a0,EDX
        080550ed e8 16 d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        080550f2 8b 0d 20        MOV                       ECX,dword ptr [stderr]
                 6f 9a 08
        080550f8 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-aa_Enable_Anti-Alias_0876  = "\t-aa        Enable Anti-Alias\n"
                 04 ac 30 
                 76 08
        08055100 89 0c 24        MOV                       dword ptr [ESP]=>local_a0,ECX
        08055103 e8 00 d1        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        08055108 8b 3d 20        MOV                       EDI,dword ptr [stderr]
                 6f 9a 08
        0805510e c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-vga_VGA(640x480)_Mode_087  = "\t-vga       VGA(640x480) Mode\n"
                 04 cc 30 
                 76 08
        08055116 89 3c 24        MOV                       dword ptr [ESP]=>local_a0,EDI
        08055119 e8 ea d0        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        0805511e a1 20 6f        MOV                       EAX,[stderr]
                 9a 08
        08055123 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-xga_XGA(1024x768)_Mode_08  = "\t-xga       XGA(1024x768) Mode\n"
                 04 ec 30 
                 76 08
        0805512b 89 04 24        MOV                       dword ptr [ESP]=>local_a0,EAX
        0805512e e8 d5 d0        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        08055133 8b 1d 20        MOV                       EBX,dword ptr [stderr]
                 6f 9a 08
        08055139 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-wxga_WXGA(1280x768)_Mode_  = "\t-wxga      WXGA(1280x768) Mode\n"
                 04 0c 31 
                 76 08
        08055141 89 1c 24        MOV                       dword ptr [ESP]=>local_a0,EBX
        08055144 e8 bf d0        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        08055149 8b 35 20        MOV                       ESI,dword ptr [stderr]
                 6f 9a 08
        0805514f c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-wxga_dbd_WXGA(1280x768)_d  = "\t-wxga_dbd  WXGA(1280x768) dot by dot Mode\n"
                 04 30 31 
                 76 08
        08055157 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        0805515a e8 a9 d0        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        0805515f 8b 15 20        MOV                       EDX,dword ptr [stderr]
                 6f 9a 08
        08055165 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-wxga2_WXGA(1360x768)_Mode  = "\t-wxga2     WXGA(1360x768) Mode\n"
                 04 5c 31 
                 76 08
        0805516d 89 14 24        MOV                       dword ptr [ESP]=>local_a0,EDX
        08055170 e8 93 d0        CALL                      <EXTERNAL>::fprintf                                      int fprintf(FILE * __stream, char * __format, ...)
                 ff ff
        08055175 c7 04 24        MOV                       dword ptr [ESP]=>local_a0,0x0
                 00 00 00 00
        0805517c e8 b7 e7        CALL                      <EXTERNAL>::exit                                         void exit(int __status)
                 ff ff
                             -- Flow Override: CALL_RETURN (CALL_TERMINATOR)
                             catch() { ... } // from try @ 08054e93 with catch @ 08055181
                                             LAB_08055181                                    XREF[1]:     08926c9a(*)  
        08055181 e9 ff fb        JMP                       LAB_08054d85
                 ff ff
                                             LAB_08055186                                    XREF[1]:     08054f9d(j)  
        08055186 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-m_08762faa                 = "-m"
                 04 aa 2f 
                 76 08
        0805518e 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08055191 e8 c2 d3        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        08055196 85 c0           TEST                      EAX,EAX
        08055198 75 2c           JNZ                       LAB_080551c6
        0805519a 83 c6 04        ADD                       ESI,0x4
        0805519d 8b 5d dc        MOV                       EBX,dword ptr [EBP + local_28]
        080551a0 39 de           CMP                       ESI,EBX
        080551a2 2e 0f 84        JZ                        LAB_08054f4a, bn
                 a1 fd ff ff
        080551a9 c7 44 24        MOV                       dword ptr [ESP + local_9c],0xa
                 04 0a 00 
                 00 00
        080551b1 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        080551b4 e8 f3 3a        CALL                      FUN_08088cac                                             undefined FUN_08088cac(undefined4 * param_1, undefined4 par
                 03 00
        080551b9 83 c6 04        ADD                       ESI,0x4
        080551bc a3 88 71        MOV                       [DAT_089a7188],EAX
                 9a 08
        080551c1 e9 2d fc        JMP                       LAB_08054df3
                 ff ff
                                             LAB_080551c6                                    XREF[1]:     08055198(j)  
        080551c6 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-s_08762fad                 = "-s"
                 04 ad 2f 
                 76 08
        080551ce 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        080551d1 e8 82 d3        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        080551d6 85 c0           TEST                      EAX,EAX
        080551d8 75 2c           JNZ                       LAB_08055206
        080551da 83 c6 04        ADD                       ESI,0x4
        080551dd 8b 5d dc        MOV                       EBX,dword ptr [EBP + local_28]
        080551e0 39 de           CMP                       ESI,EBX
        080551e2 2e 0f 84        JZ                        LAB_08054f4a, bn
                 61 fd ff ff
        080551e9 c7 44 24        MOV                       dword ptr [ESP + local_9c],0xa
                 04 0a 00 
                 00 00
        080551f1 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        080551f4 e8 b3 3a        CALL                      FUN_08088cac                                             undefined FUN_08088cac(undefined4 * param_1, undefined4 par
                 03 00
        080551f9 83 c6 04        ADD                       ESI,0x4
        080551fc a3 8c 71        MOV                       [DAT_089a718c],EAX
                 9a 08
        08055201 e9 ed fb        JMP                       LAB_08054df3
                 ff ff
                                             LAB_08055206                                    XREF[1]:     080551d8(j)  
        08055206 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-sm_08762fb0                = "-sm"
                 04 b0 2f 
                 76 08
        0805520e 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08055211 e8 42 d3        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        08055216 85 c0           TEST                      EAX,EAX
        08055218 75 35           JNZ                       LAB_0805524f
                                             LAB_0805521a                                    XREF[1]:     08055261(j)  
        0805521a 83 c6 04        ADD                       ESI,0x4
        0805521d 8b 5d dc        MOV                       EBX,dword ptr [EBP + local_28]
        08055220 39 de           CMP                       ESI,EBX
        08055222 2e 0f 84        JZ                        LAB_08054f4a, bn
                 21 fd ff ff
        08055229 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_server_0887f2de+7           = "server"
                 04 e5 f2 
                 87 08
        08055231 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08055234 e8 1f d3        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        08055239 85 c0           TEST                      EAX,EAX
        0805523b 75 49           JNZ                       LAB_08055286
        0805523d 83 c6 04        ADD                       ESI,0x4
        08055240 c7 05 90        MOV                       dword ptr [DAT_089a7190],0x1
                 71 9a 08 
                 01 00 00 00
        0805524a e9 a4 fb        JMP                       LAB_08054df3
                 ff ff
                                             LAB_0805524f                                    XREF[1]:     08055218(j)  
        0805524f c7 44 24        MOV                       dword ptr [ESP + local_9c],s_--start-up-mode_08762fb4    = "--start-up-mode"
                 04 b4 2f 
                 76 08
        08055257 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        0805525a e8 f9 d2        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        0805525f 85 c0           TEST                      EAX,EAX
        08055261 74 b7           JZ                        LAB_0805521a
        08055263 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-ve_08762fc4                = "-ve"
                 04 c4 2f 
                 76 08
        0805526b 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        0805526e e8 e5 d2        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        08055273 85 c0           TEST                      EAX,EAX
        08055275 75 35           JNZ                       LAB_080552ac
        08055277 83 c6 04        ADD                       ESI,0x4
        0805527a c6 05 94        MOV                       byte ptr [DAT_089a7194],0x1
                 71 9a 08 01
        08055281 e9 6d fb        JMP                       LAB_08054df3
                 ff ff
                                             LAB_08055286                                    XREF[1]:     0805523b(j)  
        08055286 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_tv_08819c0f+0x11            = "tv"
                 04 20 9c 
                 81 08
        0805528e 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08055291 e8 c2 d2        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        08055296 85 c0           TEST                      EAX,EAX
        08055298 75 35           JNZ                       LAB_080552cf
        0805529a 83 c6 04        ADD                       ESI,0x4
        0805529d c7 05 90        MOV                       dword ptr [DAT_089a7190],0x2
                 71 9a 08 
                 02 00 00 00
        080552a7 e9 47 fb        JMP                       LAB_08054df3
                 ff ff
                                             LAB_080552ac                                    XREF[1]:     08055275(j)  
        080552ac c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-fs_08762fc8                = "-fs"
                 04 c8 2f 
                 76 08
        080552b4 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        080552b7 e8 9c d2        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        080552bc 85 c0           TEST                      EAX,EAX
        080552be 75 35           JNZ                       LAB_080552f5
        080552c0 83 c6 04        ADD                       ESI,0x4
        080552c3 c6 05 95        MOV                       byte ptr [DAT_089a7195],0x1
                 71 9a 08 01
        080552ca e9 24 fb        JMP                       LAB_08054df3
                 ff ff
                                             LAB_080552cf                                    XREF[1]:     08055298(j)  
        080552cf c7 44 24        MOV                       dword ptr [ESP + local_9c],s_terminal_08762fcc           = "terminal"
                 04 cc 2f 
                 76 08
        080552d7 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        080552da e8 79 d2        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        080552df 83 f8 01        CMP                       EAX,0x1
        080552e2 19 db           SBB                       EBX,EBX
        080552e4 83 c6 04        ADD                       ESI,0x4
        080552e7 83 e3 03        AND                       EBX,0x3
        080552ea 89 1d 90        MOV                       dword ptr [DAT_089a7190],EBX
                 71 9a 08
        080552f0 e9 fe fa        JMP                       LAB_08054df3
                 ff ff
                                             LAB_080552f5                                    XREF[1]:     080552be(j)  
        080552f5 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-aa_08762fd5                = "-aa"
                 04 d5 2f 
                 76 08
        080552fd 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08055300 e8 53 d2        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        08055305 85 c0           TEST                      EAX,EAX
        08055307 75 12           JNZ                       LAB_0805531b
                                             LAB_08055309                                    XREF[1]:     08055481(j)  
        08055309 83 c6 04        ADD                       ESI,0x4
        0805530c c7 05 9c        MOV                       dword ptr [DAT_089a719c],0x1
                 71 9a 08 
                 01 00 00 00
        08055316 e9 d8 fa        JMP                       LAB_08054df3
                 ff ff
                                             LAB_0805531b                                    XREF[1]:     08055307(j)  
        0805531b c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-vga_08762fd9               = "-vga"
                 04 d9 2f 
                 76 08
        08055323 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08055326 e8 2d d2        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        0805532b 85 c0           TEST                      EAX,EAX
        0805532d 75 12           JNZ                       LAB_08055341
        0805532f 83 c6 04        ADD                       ESI,0x4
        08055332 c7 05 98        MOV                       dword ptr [DAT_089a7198],0x1
                 71 9a 08 
                 01 00 00 00
        0805533c e9 b2 fa        JMP                       LAB_08054df3
                 ff ff
                                             LAB_08055341                                    XREF[1]:     0805532d(j)  
        08055341 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-xga_08762fde               = "-xga"
                 04 de 2f 
                 76 08
        08055349 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        0805534c e8 07 d2        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        08055351 85 c0           TEST                      EAX,EAX
        08055353 75 12           JNZ                       LAB_08055367
        08055355 83 c6 04        ADD                       ESI,0x4
        08055358 c7 05 98        MOV                       dword ptr [DAT_089a7198],0x3
                 71 9a 08 
                 03 00 00 00
        08055362 e9 8c fa        JMP                       LAB_08054df3
                 ff ff
                                             LAB_08055367                                    XREF[1]:     08055353(j)  
        08055367 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-uxga_08762fe3              = "-uxga"
                 04 e3 2f 
                 76 08
        0805536f 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08055372 e8 e1 d1        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        08055377 85 c0           TEST                      EAX,EAX
        08055379 75 12           JNZ                       LAB_0805538d
        0805537b 83 c6 04        ADD                       ESI,0x4
        0805537e c7 05 98        MOV                       dword ptr [DAT_089a7198],0x6
                 71 9a 08 
                 06 00 00 00
        08055388 e9 66 fa        JMP                       LAB_08054df3
                 ff ff
                                             LAB_0805538d                                    XREF[1]:     08055379(j)  
        0805538d c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-wxga_08762fe9              = "-wxga"
                 04 e9 2f 
                 76 08
        08055395 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        08055398 e8 bb d1        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        0805539d 85 c0           TEST                      EAX,EAX
        0805539f 75 1c           JNZ                       LAB_080553bd
        080553a1 83 c6 04        ADD                       ESI,0x4
        080553a4 c7 05 98        MOV                       dword ptr [DAT_089a7198],0x9
                 71 9a 08 
                 09 00 00 00
        080553ae c7 05 a0        MOV                       dword ptr [DAT_089a71a0],0x1
                 71 9a 08 
                 01 00 00 00
        080553b8 e9 36 fa        JMP                       LAB_08054df3
                 ff ff
                                             LAB_080553bd                                    XREF[1]:     0805539f(j)  
        080553bd c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-wxga_dbd_08762fef          = "-wxga_dbd"
                 04 ef 2f 
                 76 08
        080553c5 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        080553c8 e8 8b d1        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        080553cd 85 c0           TEST                      EAX,EAX
        080553cf 75 12           JNZ                       LAB_080553e3
        080553d1 83 c6 04        ADD                       ESI,0x4
        080553d4 c7 05 98        MOV                       dword ptr [DAT_089a7198],0x9
                 71 9a 08 
                 09 00 00 00
        080553de e9 10 fa        JMP                       LAB_08054df3
                 ff ff
                                             LAB_080553e3                                    XREF[1]:     080553cf(j)  
        080553e3 c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-ss_08762ff9                = "-ss"
                 04 f9 2f 
                 76 08
        080553eb 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        080553ee e8 65 d1        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        080553f3 85 c0           TEST                      EAX,EAX
        080553f5 75 38           JNZ                       LAB_0805542f
        080553f7 83 c6 04        ADD                       ESI,0x4
        080553fa 8b 5d dc        MOV                       EBX,dword ptr [EBP + local_28]
        080553fd 39 de           CMP                       ESI,EBX
        080553ff 2e 0f 84        JZ                        LAB_08054f4a, bn
                 44 fb ff ff
        08055406 c6 05 a4        MOV                       byte ptr [DAT_089a71a4],0x1
                 71 9a 08 01
        0805540d c7 05 b4        MOV                       dword ptr [DAT_089a71b4],0x0
                 71 9a 08 
                 00 00 00 00
        08055417 89 74 24 04     MOV                       dword ptr [ESP + local_9c],ESI
        0805541b c7 04 24        MOV                       dword ptr [ESP]=>local_a0,DAT_089a71b0
                 b0 71 9a 08
        08055422 e8 a1 e5        CALL                      <EXTERNAL>::std::basic_string<>::assign                  undefined assign(basic_string * param_1)
                 ff ff
        08055427 83 c6 04        ADD                       ESI,0x4
        0805542a e9 c4 f9        JMP                       LAB_08054df3
                 ff ff
                                             LAB_0805542f                                    XREF[1]:     080553f5(j)  
        0805542f c7 44 24        MOV                       dword ptr [ESP + local_9c],s_-ss4x_08762ffd              = "-ss4x"
                 04 fd 2f 
                 76 08
        08055437 89 34 24        MOV                       dword ptr [ESP]=>local_a0,ESI
        0805543a e8 19 d1        CALL                      <EXTERNAL>::std::basic_string<>::compare                 undefined compare(char * param_1)
                 ff ff
        0805543f 85 c0           TEST                      EAX,EAX
        08055441 0f 85 ef        JNZ                       LAB_08054e36
                 f9 ff ff
        08055447 83 c6 04        ADD                       ESI,0x4
        0805544a 8b 5d dc        MOV                       EBX,dword ptr [EBP + local_28]
        0805544d 39 de           CMP                       ESI,EBX
        0805544f 2e 0f 84        JZ                        LAB_08054f4a, bn
                 f4 fa ff ff
        08055456 c6 05 a4        MOV                       byte ptr [DAT_089a71a4],0x1
                 71 9a 08 01
        0805545d c7 05 b4        MOV                       dword ptr [DAT_089a71b4],0x0
                 71 9a 08 
                 00 00 00 00
        08055467 89 74 24 04     MOV                       dword ptr [ESP + local_9c],ESI
        0805546b c7 04 24        MOV                       dword ptr [ESP]=>local_a0,DAT_089a71b0
                 b0 71 9a 08
        08055472 e8 51 e5        CALL                      <EXTERNAL>::std::basic_string<>::assign                  undefined assign(basic_string * param_1)
                 ff ff
                             } // end try from 08055013 to 08055476
        08055477 c7 05 a8        MOV                       dword ptr [DAT_089a71a8],0x1
                 71 9a 08 
                 01 00 00 00
        08055481 e9 83 fe        JMP                       LAB_08055309
                 ff ff
