; Address Constants (from your provided Ghidra data):
; s_TOMONOBU at 0x0c214eac ("TOMONOBU")
; s_LOVE at 0x0c214eb5 ("LOVE?")
; s_MIRAI at 0x0c214ebe ("MIRAI") - Survival Mode
; s_KATUNORI at 0x0c214ec7 ("KATUNORI")
; s_ALLCLEAR at 0x0c214ed0 ("ALLCLEAR")

; Assume r6 = Pointer to user-entered password
; r4 = Internal pointer used to reference stored passwords
; r14 = Mismatch counter (incremented on mismatch)
; r5 = Input character index

; Password checking function begins:
LAB_Password_Check_Start:
0c0ecdd2 mov.b   @r6, r2                 ; Load entered character into r2
0c0ecdd4 mov.b   @r4, r3                 ; Load expected character ("TOMONOBU") into r3
0c0ecdd6 cmp/eq  r2, r3                  ; Compare entered char to expected char
0c0ecdd8 bt/s    LAB_Match_TOMONOBU_Char
0c0ecdda add     #0x1, r14               ; Increment mismatch counter if not matched
0c0ecddc mov     r7, r1                  ; Reset success flag to zero on mismatch

LAB_Match_TOMONOBU_Char:
0c0ecdde add     #0x1, r4                ; Increment pointer in expected string
0c0ecde0 add     #0x1, r6                ; Increment pointer in user input string

; Second character check
0c0ecde2 mov.b   @r4, r2
0c0ecde4 mov.b   @r6, r3
0c0ecde6 cmp/eq  r3, r2
0c0ecde8 bt/s    LAB_Match_Second_Char
0c0ecdea add     #0x1, r14
0c0ecdec mov     r7, r1

LAB_Match_Second_Char:
0c0ecdee add     #0x1, r4
0c0ecdf0 add     #0x1, r6

; Third character check
0c0ecdf2 mov.b   @r4, r3
0c0ecdf4 mov.b   @r6, r2
0c0ecdf6 cmp/eq  r2, r3
0c0ecdf8 bt/s    LAB_Match_Third_Char
0c0ecdfa add     #0x1, r14
0c0ecdfc mov     r7, r1

LAB_Match_Third_Char:
0c0ecdfe add     #0x1, r4
0c0ece00 add     #0x1, r6

; Fourth character check
0c0ece02 mov.b   @r4, r2
0c0ece04 mov.b   @r6, r3
0c0ece06 cmp/eq  r3, r2
0c0ece08 bt/s    LAB_Match_Fourth_Char
0c0ece0a add     #0x1, r14
0c0ece0c mov     r7, r1

LAB_Match_Fourth_Char:
0c0ece0e cmp/ge  r0, r14                 ; Check mismatch threshold
0c0ece10 add     #0x1, r6
0c0ece12 bf/s    LAB_Password_Check_Start ; Loop if threshold not exceeded
0c0ece14 add     #0x1, r4

; Post-comparison evaluation:
0c0ece16 mov     #0x9, r0                ; Max mismatch allowed is likely small (0-8 range)
0c0ece18 cmp/ge  r0, r14                 ; Did we exceed allowed mismatches?
0c0ece1a bt      LAB_Password_Check_Failed

; Continue checking remaining characters similarly...
; (for brevity, let's jump ahead to the result-checking logic)

; After completing all checks:
LAB_Password_Check_Complete:
0c0ece30 mov     r1, r0                  ; Move success flag to r0
0c0ece32 nop
0c0ece34 cmp/eq  #0x1, r0                ; Check if fully matched password
0c0ece36 bf      LAB_Password_Check_Failed

; Password matched successfully:
LAB_Password_Match_Success:
0c0ece38 extu.b  r5, r14                 ; Store result indicator
0c0ece3a mov.l   PTR_FlagUnlockAddr, r4  ; PTR to unlock flags (e.g., 0c2563f4)
0c0ece3c mov     r14, r12
0c0ece3e tst     r14, r14
0c0ece40 add     #0x1, r12
0c0ece42 bf/s    LAB_SetUnlockFlag_Alt
0c0ece44 mov     #0x1, r5

; Set unlock flag at corresponding address
LAB_SetUnlockFlag:
0c0ece46 mov.b   @(0x3,r4), r0           ; Check existing unlock state
0c0ece48 tst     r0, r0
0c0ece4a bf      LAB_UnlockFlagExit
0c0ece4c mov     r5, r0
0c0ece4e nop
0c0ece50 bra     LAB_UnlockFlagSet
0c0ece52 mov.b   r0, @(0x3,r4)

; Alternate unlock flag checks for different modes:
LAB_SetUnlockFlag_Alt:
; Similar logic repeated for different memory flags:
; DAT_0c2563f6 and DAT_0c2563f8 represent additional unlock flags
; (Tag mode, Survival mode, other features)

LAB_UnlockFlagExit:
0c0ece74 bra     LAB_Password_Check_Failed
0c0ece76 mov     r7, r12                 ; Reset r12 on failure

LAB_UnlockFlagSet:
0c0ece78 mov     r5, r0                  ; Store unlock success
0c0ece7a nop
0c0ece7c mov.b   r0,@(0x4,r4)

LAB_Password_Check_Failed:
; Password did not match, or unlocking not possible
0c0ece7e mov     r12, r0                 ; Final result
0c0ece80 nop
0c0ece82 mov.l   @r15+, r12              ; Restore registers
0c0ece84 rts                             ; Return from function
0c0ece86 mov.l   @r15+, r14

; Pointers to string constants
PTR_s_TOMONOBU_0c0ece88: addr 0c214eac ("TOMONOBU")
PTR_DAT_UnlockFlagAddr: addr 0c2563f4 (unlock flags)
