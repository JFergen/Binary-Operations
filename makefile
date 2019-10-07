OBJS	= clz.o main.o parity.o rotate.o endian.o
SOURCE	= clz.c main.c parity.c rotate.c endian.c
HEADER	= main.h
OUT	= 
CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

clz.o: clz.c
	$(CC) $(FLAGS) clz.c 

main.o: main.c
	$(CC) $(FLAGS) main.c 

parity.o: parity.c
	$(CC) $(FLAGS) parity.c 

rotate.o: rotate.c
	$(CC) $(FLAGS) rotate.c 

endian.o: endian.c
	$(CC) $(FLAGS) endian.c 


clean:
	rm -f $(OBJS) $(OUT)