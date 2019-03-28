CC = gcc
CCFLAGS = -Wall -pedantic
DEP = qsGetline.h
BUILD_OBJS = $(DEP) qsGetline.c
TEST_OBJS = $(DEP) qsGetline.o tqsGetline.c

build: qsGetline.o
	cp -f qsGetline.o ../../build/src/qsGetline.o

qsGetline.o: $(BUILD_OBJS)
	$(CC) $(CCFLAGS) -c qsGetline.c

test: tqsGetline.o
	cp -f tqsGetline.o ../../build/src/tqsGetline.o

tqsGetline.o: $(TEST_OBJS)
	$(CC) $(CCFLAGS) -c tqsGetline.c

clean:
	rm -rf *.o
