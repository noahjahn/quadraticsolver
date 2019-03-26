# Command Line Quadratic Equation Solver

Solve a quadratic equation in standard form (ax^2 + bx + c = 0) by entering values
for a, b, and c. The calculator will give answers for x1 and x2 and indicate whether
there are real roots. This project is done to prepare for the final Senior Project
for Western Michigan Universities Computer Science program. Two students practice
the extreme programming agile methodology.

## This directory: src/qsGetline

The qsGetline function lives in this directory. It takes a line of user input and parses it for a, b, and c values. The tqsGetline function also lives in this directory and is used for running tests on the qsGetline function.

### Input

line 	- Buffer to catch user input.
nline 	- Length of buffer passed from main program.

### Output

This function stores the user input in the char * line passed in to the function.

Returns whether an error occurred or not.
0 	- Successful
-1 	- Unsuccessful
2+ 	- Undefined

### Building the function

Run ```make build``` in this folder.

### Running the function

The object file qsGetline.o should be linked to an executable. Any c file that uses the
function qsGetline() should include qsGetline.h header file ```#include "qsGetline.h"```.

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
