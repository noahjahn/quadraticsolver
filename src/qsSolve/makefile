CC = gcc
CCFLAGS = -Wall -pedantic
DEP = qsSolve.h
BUILD_OBJS = $(DEP) qsSolve.c
TEST_OBJS = qsSolve.o tqsSolve.c

build: qsSolve.o
	cp -f qsSolve.o ../../build/src/qsSolve.o

qsSolve.o: $(BUILD_OBJS)
	$(CC) $(CCFLAGS) -c qsSolve.c

test: tqsSolve.o
	cp -f tqsSolve.o ../../build/src/tqsSolve.o

tqsSolve.o: $(TEST_OBJS)
	$(CC) $(CCFLAGS) -c tqsSolve.c

clean:
	rm -rf *.o