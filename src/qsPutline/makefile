CC = gcc
CCFLAGS = -Wall -pedantic -std=gnu99
DEP = qsPutline.h
BUILD_OBJS = $(DEP) qsPutline.c
TEST_OBJS = $(DEP) qsPutline.o tqsPutline.c

build: qsPutline.o
	cp -f qsPutline.o ../../build/src/qsPutline.o

qsPutline.o: $(BUILD_OBJS)
	$(CC) $(CCFLAGS) -c qsPutline.c

test: tqsPutline.o
	cp -f tqsPutline.o ../../build/src/tqsPutline.o

tqsPutline.o: $(TEST_OBJS)
	$(CC) $(CCFLAGS) -c tqsPutline.c qsPutline.c

clean:
	rm -rf *.o
