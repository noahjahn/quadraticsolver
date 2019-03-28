CC = gcc
CCFLAGS = -Wall -pedantic -std=c99
DEP = qsHelp.h
BUILD_OBJS = $(DEP) qsHelp.c
TEST_OBJS = $(DEP) qsHelp.o tqsHelp.c

build: qsHelp.o
	cp -f qsHelp.o ../../build/src/qsHelp.o

qsHelp.o: $(BUILD_OBJS)
	$(CC) $(CCFLAGS) -c qsHelp.c

test: tqsHelp.o
	cp -f tqsHelp.o ../../build/src/tqsHelp.o

tqsHelp.o: $(TEST_OBJS)
	$(CC) $(CCFLAGS) -c tqsHelp.c qsHelp.c

clean:
	rm -rf *.o
