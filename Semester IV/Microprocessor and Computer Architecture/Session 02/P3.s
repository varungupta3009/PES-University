; Coded by VRG

MOV R0, #35
MOV R1, #28
LOOP:
CMP R0, R1
BEQ END
SUBPLS R0, R0, R1
SUBMIS R1, R1, R0
BNE LOOP
END: SWI 0X011
