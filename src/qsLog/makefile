CC = gcc
CCFLAGS = -Wall -pedantic

build: qsLog.o

qsLog.o: qsLog.h qsLog.c
	$(CC) $(CCFLAGS) -c qsLog.c

clean:
	rm -rf *.o

uTest:
