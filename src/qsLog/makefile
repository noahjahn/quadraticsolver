CC = gcc
CCFLAGS = -Wall -pedantic -std=c99
DEP = qsLog.h
BUILD_OBJS = $(DEP) qsLog.c
TEST_OBJS = $(DEP) qsLog.o tqsLog.c

build: qsLog.o
	cp -f qsLog.o ../../build/src/qsLog.o

qsLog.o: $(BUILD_OBJS)
	$(CC) $(CCFLAGS) -c qsLog.c

test: tqsLog.o
	cp -f tqsLog.o ../../build/src/tqsLog.o

tqsLog.o: $(TEST_OBJS)
	$(CC) $(CCFLAGS) -c tqsLog.c

clean:
	rm -rf *.o
