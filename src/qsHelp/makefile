CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

build: qsHelp.o

qsHelp.o: qsHelp.h qsHelp.c
	$(CC) $(CCFLAGS) -c qsHelp.c

clean:
	rm -rf *.o

uTest:
