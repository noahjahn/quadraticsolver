# Command Line Quadratic Equation Solver

Solve a quadratic equation in standard form (ax^2 + bx + c = 0) by entering values
for a, b, and c. The calculator will give answers for x1 and x2 and indicate whether
there are real roots. This project is done to prepare for the final Senior Project
for Western Michigan Universities Computer Science program. Two students practice
the extreme programming agile methodology.

## This directory: src/qsValidate

The qsValidate function lives in this directory. It is used to validate and parse input from the user

### Input

line - Buffer containing the input from the user.
nline - Length of the Buffer.
a - Coefficient of the quadratic term.
b - Coefficient of the linear term.
c - Coefficient of the constant term.

### Output

The input parameters as proper IEEE 32-bit single precision floating point values.

Returns whether an error occurred or not.
-1 	- Unsuccessful
0 	- Successful
1 	- Successful with loss of significance
2	- Bad Input

### Building the function

Run ```make build``` in this folder.

### Running the function

The object file qsValidate.o should be linked to an executable. Any c file that uses the
function qsValidate() should include qsValidate.h header file ```#include "qsValidate.h"```.

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
