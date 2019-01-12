a.out: client.o server.o
	gcc client.o server.o
client.o: client.c list.h
	gcc -c client.c
server.o: server.c list.h
	gcc -c server.c
