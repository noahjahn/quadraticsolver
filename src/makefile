CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

#after copying all the .c's to the qs folder (main): -o *.c -lm

build:
	rm -rf ../build/src
	rm -f ../build/qsolve
	mkdir ../build; mkdir ../build/src
	@cd qsErrors; make build; cp -f qsErrors.o ../../build/src/qsErrors.o
	# @cd qsGetline; make build
	@cd qsHelp; make build; cp -f qsHelp.o ../../build/src/qsHelp.o
	@cd qsLog; make build; cp -f qsLog.o ../../build/src/qsLog.o
	@cd qsLogEnable; make build; cp -f qsLogEnable.o ../../build/src/qsLogEnable.o
	# @cd qsPutline; make build
	# @cd qsResults; make build
	# @cd qsSolve; make build
	# @cd qsValidate; make build
	make qsolve

qsolve: qsolve.c qsLog/qsLog.o qsLogEnable/qsLogEnable.o
	$(CC) $(CCFLAGS) -c qsolve.c
	@cp qsolve.o ../build/src/qsolve.o
	$(CC) $(CCFLAGS) -o ../build/qsolve ../build/src/qsolve.o ../build/src/qsErrors.o ../build/src/qsHelp.o ../build/src/qsLog.o ../build/src/qsLogEnable.o

run:
	../build/qsolve

runLog:
	../build/qsolve -log

runHelp:
	../build/qsolve help

clean:
	rm -rf ../build/src
	rm -f ../build/qsolve
	@cd qsErrors; make clean
	# @cd qsGetline; make clean
	@cd qsHelp; make clean
	@cd qsLog; make clean
	@cd qsLogEnable; make clean
	# @cd qsPutline; make clean
	# @cd qsResults; make clean
	# @cd qsSolve; make clean
	# @cd qsValidate; make clean
	rm -rf *.o

uTest:
	# @cd qsErrors; make uTest
	# @cd qsGetline; make uTest
	# @cd qsHelp; make uTest
	# @cd qsLog; make uTest
	# @cd qsLogEnable; make uTest
	# @cd qsPutline; make uTest
	# @cd qsResults; make uTest
	# @cd qsSolve; make uTest
	# @cd qsValidate; make uTest
