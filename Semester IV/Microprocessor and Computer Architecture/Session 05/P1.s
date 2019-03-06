@ Program to check the parity of a given number.
@ Coded by VRG

.DATA
  A:
    .WORD 50
  B:
    .ASCIZ "EVEN PARITY"
  C:
    .ASCIZ "ODD PARITY"


.TEXT
  LDR R0, =A   @ NUMBER A ADDRESS
  LDR R0, [R0] @ NUMBER A VALUE
  MOV R2, #00  @ COUNT OF SEQUENCE
  MOV R3, #01  @ COUNT OF SEQUENCE
  MOV R8, #00  @ COUNT OF SEQUENCE

  LOOP:
    AND R4, R1, R3
    MOV R1, R1, LSR #1
    CMP R4, #1
    ADDEQ R2, R2, #1
    ADD R8, R8, #1
    CMP R8, #32
    BNE LOOP

  AND R6, R2, R3
  CMP R6, #1
  BEQ ODD
  LDR R0, =B
  SWI 0X02
  B END

  ODD:
    LDR R0, =C
    SWI 0X02

  END:
    SWI 0X011
