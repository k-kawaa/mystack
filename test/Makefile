CC = gcc
PROGRAM = test
INCDIR = -I../

OBJS = test.o ../Device/Device.o

all: app

app: $(OBJS)
	$(CC) $(OBJS) -o $(PROGRAM)

test.o: test.c
	$(CC) $(INCDIR) -c test.c -o test.o

../Device/Device.o: ../Device/Device.c
	$(CC) $(INCDIR) -c ../Device/Device.c -o ../Device/Device.o
