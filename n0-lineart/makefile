CC = gcc
CFLAG += -c -g -Wall

main:main.o sqlist.o
	$(CC) main.o sqlist.o -g -o main

%.o:%.c
	$(CC) $^ $(CFLAG)

clean:
	rm *.o main -rf
