CC = gcc
CCFLAGS = -Wall -pedantic -std=c99
DEP = qsErrors.h
BUILD_OBJS = $(DEP) qsErrors.c
TEST_OBJS = $(DEP) qsErrors.o tqsErrors.c

build: qsErrors.o
	cp -f qsErrors.o ../../build/src/qsErrors.o

qsErrors.o: $(BUILD_OBJS)
	$(CC) $(CCFLAGS) -c qsErrors.c

test: tqsErrors.o
	cp -f tqsErrors.o ../../build/src/tqsErrors.o

tqsErrors.o: $(TEST_OBJS)
	$(CC) $(CCFLAGS) -c tqsErrors.c

clean:
	rm -rf *.o
