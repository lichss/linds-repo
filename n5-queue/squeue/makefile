CC = gcc

CFLAGS = -Wall -g -c 
TARGET = main
OBJS = main.o sque.o


$(TARGET):$(OBJS)
	$(CC) $(OBJS)   -o $(TARGET)

%.o:%.c
	$(CC) $^ $(CFLAGS)

clean:
	rm *.o *.exe -f

