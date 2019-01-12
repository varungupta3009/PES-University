a.out: client.o server.o
	gcc client.o server.o
client.o: client.c CSE.h
	gcc -c client.c
server.o: server.c CSE.h
	gcc -c server.c
