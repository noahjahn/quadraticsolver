CC = gcc
CCFLAGS = -Wall -pedantic -std=c99

build:
	@cd src; make build

run:
	./build/qsolve

runLog:
	./build/qsolve -log

runHelp:
	./build/qsolve help

clean:
	@cd src; make clean

test:
	@cd src; make test
