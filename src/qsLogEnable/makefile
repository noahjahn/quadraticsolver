CC = gcc
FLAGS = -Wall -pedantic

build: qsLogEnable.o

qsLog.o: qsLogEnable.h qsLogEnable.c
	$(CC) $(CCFLAGS) -c qsLogEnable.c

clean:
	rm -f qsLogEnable.o

uTest:
