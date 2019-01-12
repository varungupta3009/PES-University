a.out: client.o server.o
	gcc client.o server.o
client.o: client.c sort.h
	gcc -c client.c
server.o: server.c sort.h
	gcc -c server.c
