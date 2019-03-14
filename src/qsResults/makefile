CC = gcc
CCFLAGS = -Wall -pedantic
DEP = qsResults.h
BUILD_OBJS = $(DEP) qsResults.c
TEST_OBJS = qsResults.o tqsResults.c

build: qsResults.o
	cp -f qsResults.o ../../build/src/qsResults.o

qsResults.o: $(BUILD_OBJS)
	$(CC) $(CCFLAGS) -c qsResults.c

test: tqsResults.o
	cp -f tqsResults.o ../../build/src/tqsResults.o

tqsResults.o: $(TEST_OBJS)
	$(CC) $(CCFLAGS) -c tqsResults.c

clean:
	rm -rf *.o