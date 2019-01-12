a.out: 1C_concMany.o 1S_concMany.o
gcc: 1C_concMany.o 1S_concMany.o
1C_concMany.o: 1C_concMany.c con.h
gcc -c 1C_concMany.c
1S_concMany.o: 1S_concMany.c con.h
gcc -c 1S_concMany.c
