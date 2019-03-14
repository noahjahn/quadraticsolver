CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

#Dependant files required to compile the main controller.
DEP_OBJS = qsolve.o qsErrors/qsErrors.o qsGetline/qsGetline.o qsHelp/qsHelp.o qsLog/qsLog.o qsLogEnable/qsLogEnable.o \
qsPutline/qsPutline.o qsResults/qsResults.o qsSolve/qsSolve.o qsValidate/qsValidate.o

#ADDITIONAL dependant files required if we are testing the program.
DEP_OBJS_TEST = tqsolve.o qsErrors/tqsErrors.o qsGetline/tqsGetline.o qsHelp/tqsHelp.o qsLog/tqsLog.o qsLogEnable/tqsLogEnable.o \
qsPutline/tqsPutline.o qsResults/tqsResults.o qsSolve/tqsSolve.o qsValidate/tqsValidate.o

#Files required to link the program after the build is created.
BUILD_OBJS =  ../build/src/qsolve.o ../build/src/qsErrors.o ../build/src/qsHelp.o ../build/src/qsLog.o \
../build/src/qsLogEnable.o ../build/src/qsValidate.o ../build/src/qsGetline.o ../build/src/qsPutline.o ../build/src/qsResults.o

#ADDITIONAL files required to link the program if we are testing.
BUILD_OBJS_TEST = ../build/tqsolve ../build/src/tqsolve.o ../build/src/tqsErrors.o ../build/src/tqsHelp.o ../build/src/tqsLog.o \
../build/src/tqsLogEnable.o ../build/src/tqsValidate.o ../build/src/tqsGetline.o ../build/src/tqsPutline.o ../build/src/tqsResults.o

#after copying all the .c's to the qs folder (main): -o *.c -lm

build:
	rm -rf ../build/src
	rm -f ../build/qsolve
	mkdir ../build; mkdir ../build/src
	@cd qsErrors; 		make build
	@cd qsGetline; 		make build
	@cd qsHelp; 		make build
	@cd qsLog; 			make build
	@cd qsLogEnable; 	make build
	@cd qsPutline; 		make build
	@cd qsResults; 		make build
	@cd qsSolve; 		make build
	@cd qsValidate; 	make build
	make qsolve

qsolve: $(DEP_OBJS)
	$(CC) $(CCFLAGS) -c qsolve.c 						#Compile the main controller
	cp qsolve.o ../build/src/qsolve.o 					#Copy the main controller to the build
	$(CC) $(CCFLAGS) -o ../build/qsolve $(BUILD_OBJS)	#Link the built program.

run:
	../build/qsolve

runLog:
	../build/qsolve -log

runHelp:
	../build/qsolve help

clean:
	rm -rf ../build
	@cd qsErrors; 		make clean
	@cd qsGetline; 		make clean
	@cd qsHelp; 		make clean
	@cd qsLog; 			make clean
	@cd qsLogEnable; 	make clean
	@cd qsPutline; 		make clean
	@cd qsResults; 		make clean
	@cd qsSolve; 		make clean
	@cd qsValidate; 	make clean

#Must be run AFTER build
#Example: 
#~$ make clean build test
#or
#~$ make clean build -log
#~$ make test
test:
	@cd qsErrors;		make test;
	@cd qsGetline; 		make test;
	@cd qsHelp; 		make test;
	@cd qsLog; 			make test;
	@cd qsLogEnable; 	make test;
	@cd qsPutline; 		make test;
	@cd qsResults; 		make test;
	@cd qsSolve; 		make test;
	@cd qsValidate; 	make test;
	make tqsolve


tqsolve: $(DEP_OBJS_TEST)
	$(CC) $(CCFLAGS) -c tqsolve.c 								#Compile the test module.
	cp tqsolve.o ../build/src/tqsolve.o 						#Copy the test module to the build.
	$(CC) $(CCFLAGS) -o ../build/tqsolve $(BUILD_OBJS_TEST) 	#Link the built test module.
