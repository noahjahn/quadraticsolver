CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

build: qsErrors.o

qsErrors.o: qsErrors.h qsErrors.c
	$(CC) $(CCFLAGS) -c qsErrors.c

clean:
	rm -rf *.o

uTest:
