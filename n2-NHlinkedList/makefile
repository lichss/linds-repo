CC = gcc

TARGET= main
CFLAGS = -Wall -g -c 
OBJS = main.o nhlist.o


$(TARGET):$(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o:%.c
	$(CC) $^ $(CFLAGS)

clean:
	rm *.o *.exe -rf
