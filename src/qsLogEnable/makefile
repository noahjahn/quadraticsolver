CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

build: qsLogEnable.o

qsLogEnable.o: qsLogEnable.h qsLogEnable.c
	$(CC) $(CCFLAGS) -c qsLogEnable.c

clean:
	rm -rf *.o

uTest:
