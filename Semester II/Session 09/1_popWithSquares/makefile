a.out: client.o server.o
	gcc client.o server.o
client.o: client.c pop.h
	gcc -c client.c
server.o: server.c pop.h
	gcc -c server.c
