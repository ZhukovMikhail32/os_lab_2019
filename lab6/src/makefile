CC=gcc

all: client server

client: client.c libutils.so
	$(CC) client.c utils.o -L -lutils -pthread -o client

server: server.c libutils.so
	$(CC) server.c utils.o -L -lutils -pthread -o server

libutils.so: utils.o
	$(CC) -shared utils.o -o libutils.so

utils.o : utils.c
	$(CC) -c -fPIC utils.c -o utils.o

clean :
	rm client server libutils.so utils.o