; Program to display 0 to F and then F to 0 on an 8-segment display.
; Coded by VRG

.DATA
  .EQU A, 0X80
  .EQU B, 0X40
  .EQU C, 0X20
  .EQU P, 0X10
  .EQU D, 0X08
  .EQU E, 0X04
  .EQU F, 0X02
  .EQU G, 0X01

  SEQ:
    .WORD A|B|C|D|E|G|P
    .WORD B|C|P
    .WORD A|B|F|E|D|P
    .WORD A|B|F|C|D|P
    .WORD G|F|B|C|P
    .WORD A|G|F|C|D|P
    .WORD A|G|E|D|C|F|P
    .WORD A|B|C|P
    .WORD A|B|C|D|E|F|G|P
    .WORD A|B|C|D|F|G|P
    .WORD A|B|C|E|F|G
    .WORD A|B|C|D|E|F|G
    .WORD A|G|E|D
    .WORD A|B|C|D|E|G
    .WORD A|G|F|E|D
    .WORD A|G|F|E

  TIMEDELAY:
    .WORD 5000

.TEXT
  LDR R1, =SEQ
  MOV R3, #16

  LOOPF:
    LDR R0, [R1], #4
    SWI 0X200
    LDR R2, =TIMEDELAY
    LDR R2, [R2]
    BL DELAY
    SUBS R3, R3, #1
    BNE LOOPF
    MOVEQ R3, #16
    BEQ LOOPR

  LOOPR:
    SUB R1, R1, #4
    LDR R0, [R1]
    SWI 0X200
    LDR R2, =TIMEDELAY
    LDR R2, [R2]
    BL DELAY
    SUBS R3, R3, #1
    BNE LOOPR
    SWI 0X011

  DELAY:
    SUBS R2, R2, #1
    BNE DELAY
    MOVEQ PC, LR
