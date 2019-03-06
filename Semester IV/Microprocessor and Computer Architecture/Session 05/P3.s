; Program to stream text across an LED screen.
; Coded by VRG

.DATA
  STR:
    .ASCIZ "VARUN R. GUPTA"
  NUM:
    .WORD 100


.TEXT
.GLOBAL _START

  _START:
    MOV R0, #39; POSITION X
    MOV R1, #07; POSITION Y
    MOV R7, #00; DELAY INCREMENTER
    LDR R2, =STR; STRING ADDRESS
    LDR R8, =NUM; DELAY ADDRESS
    LDR R8, [R8]; DELAY VALUE

  LOOP:
    SWI 0X204
    BL SUM
    CMP R0, #0
    SUBNE R0, R0, #1
    SWIEQ 0X011
    B LOOP

  SUM:
    CMP R7, R8
    ADDNE R7, R7, #1
    BNE SUM
    SWI 0X206
    MOV R7, #0
    MOV PC, LR

  SWI 0X011
