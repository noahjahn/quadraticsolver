CC = gcc
CCFLAGS = -Wall -pedantic -std=gnu99
DEP = qsValidate.h
BUILD_OBJS = $(DEP) qsValidate.c
TEST_OBJS = $(BUILD_OBJS) tqsValidate.c

build: qsValidate.o
	cp -f qsValidate.o ../../build/src/qsValidate.o

qsValidate.o: $(BUILD_OBJS)
	$(CC) $(CCFLAGS) -c qsValidate.c

test: tqsValidate.o qsValidate.o
	cp -f tqsValidate.o ../../build/src/tqsValidate.o

tqsValidate.o: $(TEST_OBJS)
	$(CC) $(CCFLAGS) -c tqsValidate.c qsValidate.c

clean:
	rm -rf *.o
