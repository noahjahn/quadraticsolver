CC = gcc
CCFLAGS = -Wall -pedantic

#after copying all the .c's to the qs folder (main): -o *.c -lm

build:
	mkdir ../build; mkdir ../build/src
	@cd qsErrors; make build; mv -f qsErrors.o ../../build/src/qsErrors.o
	# @cd qsGetline; make build
	@cd qsHelp; make build; mv -f qsHelp.o ../../build/src/qsHelp.o
	@cd qsLog; make build; mv -f qsLog.o ../../build/src/qsLog.o
	@cd qsLogEnable; make build; mv -f qsLogEnable.o ../../build/src/qsLogEnable.o
	# @cd qsPutline; make build
	# @cd qsResults; make build
	# @cd qsSolve; make build
	# @cd qsValidate; make build
	make quadratic_solver

quadratic_solver: quadratic_solver.c qsLog/qsLog.o qsLogEnable/qsLogEnable.o
	$(CC) $(CCFLAGS) -c quadratic_solver.c
	@mv quadratic_solver.o ../build/src/quadratic_solver.o
	$(CC) $(CCFLAGS) -o ../build/qsolve ../build/src/quadratic_solver.o ../build/src/qsErrors.o ../build/src/qsHelp.o ../build/src/qsLog.o ../build/src/qsLogEnable.o

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
