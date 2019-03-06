; Program to perform convolution of two sequences, without the MLA instruction.
; Coded by VRG

.TEXT

LDR R0, =A ; SERIES A ADDRESS
LDR R1, =B ; SERIES B ADDRESS
MOV R2, #05; COUNT OF SEQUENCE

LOOP:
LDR R3, [R0], #4
LDR R4, [R1], #4
MUL R4, R3, R4
ADD R5, R4, R5
SUBS R2, R2, #1
BNE LOOP

SWI 0X011


.DATA
A: .WORD 06, 05, 04, 03, 02
B: .WORD 10, 20, 30, 40, 50
