
CC = gcc
CFLAGS = -g -Wall -c
OBJS = main.o llist.o
TARGET = main

$(TARGET):$(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o:%.c
	$(CC) $^ $(CFLAGS)

clean:
	rm *.o *.exe -f
