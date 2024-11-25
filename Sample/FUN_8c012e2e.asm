                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined __stdcall FUN_8c012e2e(void)
                               assume r12 = 0x8c0e6ca0
             undefined         r0:1           <RETURN>
                             FUN_8c012e2e                                    XREF[22]:    FUN_8c016c44:8c016eb4(c), 
                                                                                          8c016f04(*), 8c0237f8(*), 
                                                                                          8c0324f4(*), 8c0328cc(*), 
                                                                                          8c0de1a4(*), 8c0de5a4(*), 
                                                                                          8c0de784(*), 8c0de94c(*), 
                                                                                          8c0deb0c(*), 8c0dede4(*), 
                                                                                          FUN_8c0dee3e:8c0deee4(c), 
                                                                                          8c0def5c(*), 
                                                                                          FUN_8c0def60:8c0defbc(c), 
                                                                                          8c0df05c(*), 
                                                                                          FUN_8c0df0a8:8c0df104(c), 
                                                                                          8c0df1ac(*), 8c0df600(*), 
                                                                                          FUN_8c0df0a8:8c0e293a(c), 
                                                                                          8c0e2a24(*), [more]
        8c012e2e 0b 00           rts
             assume r12 = <UNKNOWN>
        8c012e30 09 00           _nop
        8c012e32 0b 00           rts
        8c012e34 09 00           _nop
        8c012e36 50 63           mov.b      @r5,r3
        8c012e38 38 23           tst        r3,r3
        8c012e3a 08 89           bt         LAB_8c012e4e
                             LAB_8c012e3c                                    XREF[1]:     8c012e4c(j)  
        8c012e3c 54 62           mov.b      @r5+,r2
        8c012e3e 44 63           mov.b      @r4+,r3
        8c012e40 20 33           cmp/eq     r2,r3
        8c012e42 01 89           bt         LAB_8c012e48
        8c012e44 0b 00           rts
        8c012e46 00 e0           _mov       #0x0,r0
                             LAB_8c012e48                                    XREF[1]:     8c012e42(j)  
        8c012e48 50 62           mov.b      @r5,r2
        8c012e4a 28 22           tst        r2,r2
        8c012e4c f6 8b           bf         LAB_8c012e3c
                             LAB_8c012e4e                                    XREF[1]:     8c012e3a(j)  
        8c012e4e 01 e0           mov        #0x1,r0
        8c012e50 0b 00           rts
        8c012e52 09 00           _nop
                             LAB_8c012e54                                    XREF[1]:     8c0127dc(*)  
        8c012e54 53 60           mov        r5,r0
        8c012e56 09 00           nop
        8c012e58 e9 88           cmp/eq     #-0x17,r0
        8c012e5a 03 89           bt         LAB_8c012e64
        8c012e5c 53 60           mov        r5,r0
        8c012e5e 09 00           nop
        8c012e60 df 88           cmp/eq     #-0x21,r0
        8c012e62 02 8b           bf         LAB_8c012e6a
                             LAB_8c012e64                                    XREF[1]:     8c012e5a(j)  
        8c012e64 22 d2           mov.l      PTR_DAT_8c012ef0,r2                              = 8c1d0930
        8c012e66 01 e3           mov        #0x1,r3
        8c012e68 32 22           mov.l      r3,@r2=>DAT_8c1d0930
                             LAB_8c012e6a                                    XREF[1]:     8c012e62(j)  
        8c012e6a 0b 00           rts
        8c012e6c 09 00           _nop
        8c012e6e 00              ??         00h
        8c012e6f 00              ??         00h
                             PTR_FUN_8c012e70                                XREF[1]:     8c012cfc(R)  
        8c012e70 40 ed 0f 8c     addr       FUN_8c0fed40
                             PTR_ULONG_8c012e74                              XREF[1]:     8c012cfa(R)  
        8c012e74 fc 52 13 8c     addr       ULONG_8c1352fc                                   = 9000Bh
                             PTR_FUN_8c012e78                                XREF[1]:     8c012d14(R)  
        8c012e78 40 ee 0f 8c     addr       FUN_8c0fee40
                             PTR_ULONG_8c012e7c                              XREF[1]:     8c012d10(R)  
        8c012e7c 00 53 13 8c     addr       ULONG_8c135300                                   = 9000Bh
                             PTR_FUN_8c012e80                                XREF[1]:     8c012d2a(R)  
        8c012e80 20 ed 0f 8c     addr       FUN_8c0fed20
                             PTR_ULONG_8c012e84                              XREF[1]:     8c012d26(R)  
        8c012e84 04 53 13 8c     addr       ULONG_8c135304                                   = 9000Bh
                             PTR_FUN_8c012e88                                XREF[1]:     8c012d40(R)  
        8c012e88 60 ee 0f 8c     addr       FUN_8c0fee60
                             PTR_ULONG_8c012e8c                              XREF[1]:     8c012d3c(R)  
        8c012e8c 08 53 13 8c     addr       ULONG_8c135308                                   = 9000Bh
                             PTR_FUN_8c012e90                                XREF[1]:     8c012d56(R)  
        8c012e90 00 dc 0e 8c     addr       FUN_8c0edc00
                             PTR_ULONG_8c012e94                              XREF[1]:     8c012d52(R)  
        8c012e94 0c 53 13 8c     addr       ULONG_8c13530c                                   = 9000Bh
                             PTR_FUN_8c012e98                                XREF[1]:     8c012d6c(R)  
        8c012e98 60 dc 0e 8c     addr       FUN_8c0edc60
                             PTR_ULONG_8c012e9c                              XREF[1]:     8c012d68(R)  
        8c012e9c 10 53 13 8c     addr       ULONG_8c135310                                   = 9000Bh
                             PTR_FUN_8c012ea0                                XREF[1]:     8c012d82(R)  
        8c012ea0 b0 f4 0e 8c     addr       FUN_8c0ef4b0
                             PTR_ULONG_8c012ea4                              XREF[1]:     8c012d7e(R)  
        8c012ea4 14 53 13 8c     addr       ULONG_8c135314                                   = 9000Bh
                             PTR_FUN_8c012ea8                                XREF[1]:     8c012d98(R)  
        8c012ea8 2c d0 0e 8c     addr       FUN_8c0ed02c
                             PTR_ULONG_8c012eac                              XREF[1]:     8c012d94(R)  
        8c012eac 18 53 13 8c     addr       ULONG_8c135318                                   = 9000Bh
                             PTR_FUN_8c012eb0                                XREF[1]:     8c012dae(R)  
        8c012eb0 c0 10 0f 8c     addr       FUN_8c0f10c0
                             PTR_ULONG_8c012eb4                              XREF[1]:     8c012daa(R)  
        8c012eb4 1c 53 13 8c     addr       ULONG_8c13531c                                   = 9000Bh
                             PTR_LAB_8c012eb8                                XREF[1]:     8c012dc4(R)  
        8c012eb8 e0 10 0f 8c     addr       LAB_8c0f10e0
                             PTR_ULONG_8c012ebc                              XREF[1]:     8c012dc0(R)  
        8c012ebc 20 53 13 8c     addr       ULONG_8c135320                                   = 9000Bh
                             PTR_FUN_8c012ec0                                XREF[1]:     8c012dda(R)  
        8c012ec0 d0 89 0e 8c     addr       FUN_8c0e89d0
                             PTR_DAT_8c012ec4                                XREF[1]:     8c012dd6(R)  
        8c012ec4 f8 52 13 8c     addr       DAT_8c1352f8                                     = 000Bh
                             PTR_DAT_8c012ec8                                XREF[1]:     FUN_8c012df0:8c012df2(R)  
        8c012ec8 24 c5 1a 8c     addr       DAT_8c1ac524
                             PTR_DAT_8c012ecc                                XREF[1]:     FUN_8c012df0:8c012dfa(R)  
        8c012ecc 28 c5 1a 8c     addr       DAT_8c1ac528
                             PTR_FUN_8c012ed0                                XREF[1]:     FUN_8c012df0:8c012e02(R)  
        8c012ed0 00 58 0e 8c     addr       FUN_8c0e5800
                             PTR_DAT_8c012ed4                                XREF[1]:     FUN_8c012df0:8c012e0a(R)  
        8c012ed4 48 ad 1f 8c     addr       DAT_8c1fad48
                             PTR__kmSetFogTable_8c012ed8                     XREF[1]:     FUN_8c012df0:8c012e08(R)  
        8c012ed8 70 8e 0e 8c     addr       _kmSetFogTable
                             PTR_DAT_8c012edc                                XREF[1]:     FUN_8c012df0:8c012e12(R)  
        8c012edc 4c af 1f 8c     addr       DAT_8c1faf4c
                             PTR_FUN_8c012ee0                                XREF[1]:     FUN_8c012df0:8c012e10(R)  
        8c012ee0 80 8e 0e 8c     addr       FUN_8c0e8e80
                             PTR_DAT_8c012ee4                                XREF[1]:     FUN_8c012df0:8c012e18(R)  
        8c012ee4 50 af 1f 8c     addr       DAT_8c1faf50
                             PTR_FUN_8c012ee8                                XREF[1]:     FUN_8c012df0:8c012e1a(R)  
        8c012ee8 20 8e 0e 8c     addr       FUN_8c0e8e20
                             PTR_FUN_8c012eec                                XREF[1]:     thunk_FUN_8c014204:8c012e28(R)  
        8c012eec 04 42 01 8c     addr       FUN_8c014204
                             PTR_DAT_8c012ef0                                XREF[1]:     8c012e64(R)  
        8c012ef0 30 09 1d 8c     addr       DAT_8c1d0930
