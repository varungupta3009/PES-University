; Program to count the number of characters in a string.
; Coded by VRG

.TEXT

LDR R0, =A ; SERIES ADDRESS
MOV R1, #-1; COUNT OF CHARACTERS

LOOP:
ADD R1, R1, #1
LDRB R2, [R0], #1
CMP R2, #00
BNE LOOP

SWI 0X011


.DATA
A: .ASCIZ "Varun R. Gupta"
