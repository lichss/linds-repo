CC = gcc

CFLAGS = -Wall -g -c 
TARGET = main
OBJS = main1.o linked.o


$(TARGET):$(OBJS)
	$(CC) $(OBJS)   -o $(TARGET)

%.o:%.c
	$(CC) $^ $(CFLAGS)

clean:
	rm *.o *.exe -f

