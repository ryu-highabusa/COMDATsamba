                             **************************************************************
                             *                          FUNCTION                          *
                             **************************************************************
                             undefined UnlockGameModes_MainMenu?_82519de8()
             undefined         r3:1           <RETURN>
             undefined4        Stack[-0x80]:4 local_80                                XREF[1]:     82519de8(W)  
                             UnlockGameModes_MainMenu?_82519de8
        82519de8 94 21 ff 80     stwu       r1,local_80(r1)                                    Allocate stack space
        82519dec 3c a0 82 f5     lis        r5,-0x7d0b                                         Load immediate shifted (upper half of address)
        82519df0 7c 7b 1b 78     or         r27,r3,r3                                          Copy r3 to r27
        82519df4 81 65 6b 14     lwz        r11,offset DWORD_82f56b14(r5)                      Load word from address
        82519df8 2f 0b 00 00     cmpwi      cr6,r11,0x0                                        Compare r11 with 0
        82519dfc 3d 60 82 c2     lis        r11,0xFFFF82C2                                     Load upper half of address
        82519e00 39 2b 33 f8     addi       r9,r11,0x33f8                                      Add lower half to form full address
        82519e04 3d 60 83 0f     lis        r11,0xFFFF830F                                     Load another upper address
        82519e08 3b eb fd 28     subi       r31,r11,0x2d8                                      Subtract lower half to form full address
        82519e0c 41 9a 00 70     beq        cr6,LAB_82519e7c_GameModeMenuDraw??                Branch if r11 == 0 (skip loop)
        82519e10 3d 60 82 1b     lis        r11,0xFFFF821B                                     Load yet another address
        82519e14 39 40 00 00     li         r10,0x0                                            Initialize r10 to 0
        82519e18 39 0b 51 a0     addi       r8,r11,0x51a0                                      Form address for game modes array
                             LAB_82519e1c                                    XREF[1]:     82519e70(j)  
        82519e1c 7c ca 40 ae     lbzx       r6,r10,r8=>BYTE_821b51a0                           Load byte indexed by r10 from array
                             GameMode_Number_of_Iterations
        82519e20 38 e0 00 07     li         r7,0x7                                             Set r7 to 7 (number of iterations)
        82519e24 39 69 00 05     addi       r11,r9,0x5                                         Prepare address offset
                             LAB_82519e28                                    XREF[1]:     82519e64(j)  
        82519e28 88 8b ff ff     lbz        r4,-0x1(r11)=>ModeSelect00_StoryMode1              Load byte from (r11 - 1)
        82519e2c 7f 06 20 40     cmplw      cr6,r6,r4                                          Compare loaded values
        82519e30 40 9a 00 10     bne        cr6,LAB_82519e40                                   If not equal, skip next block
        82519e34 38 68 00 01     addi       r3,r8,0x1                                          r3 = r8 + 1 (TAG_MODE?)
        82519e38 7c 8a 18 ae     lbzx       r4,r10,r3=>BYTE_821b51a1                           Load byte from r8+1 indexed by r10
        82519e3c 98 8b 00 00     stb        r4,0x0(r11)=>ModeSelect00_StoryMode2               Store byte to r11
                             LAB_82519e40                                    XREF[1]:     82519e30(j)  
        82519e40 88 6b 00 1b     lbz        r3,0x1b(r11)=>ModeSelect01_TimeAttackMode1         Load byte at r11+0x1b
        82519e44 7f 06 18 40     cmplw      cr6,r6,r3                                          Compare loaded value
        82519e48 40 9a 00 10     bne        cr6,LAB_82519e58                                   If not equal, skip next block
        82519e4c 38 88 00 01     addi       r4,r8,0x1                                          r4 = r8 + 1 (TAG_MODE?)
        82519e50 7c 6a 20 ae     lbzx       r3,r10,r4=>BYTE_821b51a1                           Load byte from r8+1 indexed by r10
        82519e54 98 6b 00 1c     stb        r3,0x1c(r11)=>ModeSelect01_TimeAttackMode2         Store byte to r11+0x1c
                             LAB_82519e58                                    XREF[1]:     82519e48(j)  
        82519e58 38 e7 ff ff     subi       r7,r7,0x1                                          Decrement counter r7
        82519e5c 39 6b 00 38     addi       r11,r11,0x38                                       Move to next game mode address
        82519e60 2b 07 00 00     cmplwi     cr6,r7,0x0                                         Check if counter reached 0
        82519e64 40 9a ff c4     bne        cr6,LAB_82519e28                                   Loop if not done
        82519e68 39 4a 00 02     addi       r10,r10,0x2                                        Increment outer loop index
        82519e6c 2b 0a 00 08     cmplwi     cr6,r10,0x8                                        Check if index reached limit (8)
        82519e70 41 98 ff ac     blt        cr6,LAB_82519e1c                                   Repeat outer loop if not done
        82519e74 39 60 00 00     li         r11,0x0                                            Reset r11 to 0
        82519e78 91 7f 00 0c     stw        r11,0xc(r31)=>DAT_830efd34                         Store 0 to memory location
