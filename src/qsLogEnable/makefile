CC = gcc
CCFLAGS = -Wall -pedantic -std=c99 -std=gnu99
DEP = qsLogEnable.h
BUILD_OBJS = $(DEP) qsLogEnable.c
TEST_OBJS = $(DEP) qsLogEnable.o tqsLogEnable.c

build: qsLogEnable.o
	cp -f qsLogEnable.o ../../build/src/qsLogEnable.o

qsLogEnable.o: $(BUILD_OBJS)
	$(CC) $(CCFLAGS) -c qsLogEnable.c

test: tqsLogEnable.o
	cp -f tqsLogEnable.o ../../build/src/tqsLogEnable.o

tqsLogEnable.o: $(TEST_OBJS)
	$(CC) $(CCFLAGS) -c tqsLogEnable.c qsLogEnable.c

clean:
	rm -rf *.o
