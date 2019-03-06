; Program to sort a given sequence using bubble sort.
; Coded by VRG

.TEXT
     LDR   R1, =N   ; ADDRESS OF 'N'
     LDR   R1, [R1] ; NUMBER OF ELEMENTS

OUTERLOOP:
     MOV R10, #0    ;
     SUB R1, R1, #1 ; DECREMENT LOOP
     LDR R0, =A     ; ADDRESS OF 'A'
     MOV R4, #1     ;

     INNERLOOP:
            LDR R5, [R0]
            LDR R7, [R0, #4]
            CMP R5, R7

            MOVGT R8, R7 ;
            MOVGT R7, R5 ; SWAPS R5 AND R7
            MOVGT R5, R8 ;
            STRGT R5, [R0]
            STRGT R7, [R0, #4]
            MOVGT R10, #1
            ADD   R0, R0, #4

            CMP R4, R1
            ADD R4, R4, #1
            BLT INNERLOOP

     CMP R10, #1   ; AS LONG AS AT LEAST ONE SWAP TAKES PLACE
     BEQ OUTERLOOP ; BRANCH TO OUTERLOOP

.DATA

     A: .word 9, -8, -7, 6, -5, 4, -3, 2, -1, 0, 127, -128
     N: .word 12
