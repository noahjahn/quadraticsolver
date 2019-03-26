# Command Line Quadratic Equation Solver

Solve a quadratic equation in standard form (ax^2 + bx + c = 0) by entering values
for a, b, and c. The calculator will give answers for x1 and x2 and indicate whether
there are real roots. This project is done to prepare for the final Senior Project
for Western Michigan Universities Computer Science program. Two students practice
the extreme programming agile methodology.

## This directory: src/qsLog

The qsLog function lives in this directory. It is used to print the passed in message to log file located in the build directory. The function
can also accept a few different format specifiers

%s - char *
%d - int
%c - char
%f - double

### Input

msg - The message that should be output to the log.
... - Variables for above four format specifiers.

### Output

Appends the message to the log file specified by the LOG_PATH definition.

Returns whether an error occurred or not.
0 	- Successful
-1 	- Unsuccessful
2+ 	- Undefined

### Building the function

Run ```make build``` in this folder.

### Running the function

The object file qsLog.o should be linked to an executable. Any c file that uses the
function qsLog() should include qsLog.h header file ```#include "qsLog.h"```.

### Testing the function

Run ```make test``` in this folder.

## Coding Standards

* Compiled with c99 standard
* Test driven development - tests should be written and added to each function's test
file
* Compiled with ```-Wall -Pedantic -std=c99``` CFLAGS
* Variable and functions are ```lowerCamelCase```

## Authors

* **Noah Jahn** - noah.a.jahn@wmich.edu - [GitHub](https://github.com/noahjahn)
* **Paul VanderWeele** - paul.m.vanderweele@wmich.edu - [GitHub](https://github.com/faytrow)

## License

This project is licensed under the GPL v3.0 License - see the [LICENSE.md](docs/LICENSE.md) file for details
