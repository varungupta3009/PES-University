a.out: 1C_revCompPal.o 1S_revCompPal.o
gcc: 1C_revCompPal.o 1S_revCompPal.o
1C_revCompPal.o: 1C_revCompPal.c pal.h
gcc -c 1C_revCompPal.c
1S_revCompPal.o: 1S_revCompPal.c pal.h
gcc -c 1S_revCompPal.c
