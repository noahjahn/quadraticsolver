CC = gcc
CCFLAGS = -Wall -pedantic -std=gnu99
DEP = qsSolve.h
BUILD_OBJS = $(DEP) qsSolve.c
TEST_OBJS = $(DEP) qsSolve.o tqsSolve.c

build: qsSolve.o
	cp -f qsSolve.o ../../build/src/qsSolve.o

qsSolve.o: $(BUILD_OBJS)
	$(CC) $(CCFLAGS) -c qsSolve.c

test: tqsSolve.o
	cp -f tqsSolve.o ../../build/src/tqsSolve.o

tqsSolve.o: $(TEST_OBJS)
	$(CC) $(CCFLAGS) -c tqsSolve.c qsSolve.c

clean:
	rm -rf *.o
