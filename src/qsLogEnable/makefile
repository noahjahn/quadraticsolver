CC = gcc
CCFLAGS = -Wall -pedantic

build: qsLogEnable.o

qsLogEnable.o: qsLogEnable.h qsLogEnable.c
	$(CC) $(CCFLAGS) -c qsLogEnable.c

clean:
	rm -rf *.o

uTest:
