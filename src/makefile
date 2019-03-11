CC = gcc
FLAGS = -Wall -pedantic

#after copying all the .c's to the qs folder (main): -o *.c -lm

quadratic_solver: quadratic_solver.c qsLog/qsLog.o qsLogEnable/qsLogEnable.o
	$(CC) $(CCFLAGS) -c quadratic_solver.c;
	$(CC) $(CCFLAGS) -o ../build/qsolve quadratic_solver.o qsLog/qsLog.o qsLogEnable/qsLogEnable.o

build:
	mkdir ../build/src
	# @cd qsErrors; make build
	# @cd qsGetline; make build
	# @cd qsHelp; make build
	@cd qsLog; make build; mv -f qsLog.o ../../build/src/qsLog.o;
	@cd qsLogEnable; make build; mv -f qsLogEnable.o ../../build/src/qsLog.o;
	# @cd qsPutline; make build
	# @cd qsResults; make build
	# @cd qsSolve; make build
	# @cd qsValidate; make build

clean:
	rm -rf ../build/src
	rm -rf *.o
	# @cd qsErrors; make clean
	# @cd qsGetline; make clean
	# @cd qsHelp; make clean
	@cd qsLog; make clean;
	@cd qsLogEnable; make clean;
	# @cd qsPutline; make clean
	# @cd qsResults; make clean
	# @cd qsSolve; make clean
	# @cd qsValidate; make clean

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
