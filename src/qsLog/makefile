CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

build: qsLog.o

qsLog.o: qsLog.h qsLog.c
	$(CC) $(CCFLAGS) -c qsLog.c

clean:
	rm -rf *.o

uTest:
