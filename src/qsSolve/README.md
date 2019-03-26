# Command Line Quadratic Equation Solver

Solve a quadratic equation in standard form (ax^2 + bx + c = 0) by entering values
for a, b, and c. The calculator will give answers for x1 and x2 and indicate whether
there are real roots. This project is done to prepare for the final Senior Project
for Western Michigan Universities Computer Science program. Two students practice
the extreme programming agile methodology.

## This directory: src/qsSolve

The qsSolve function lives in this directory. It is used to determine what the roots of the quadratic equation means.

### Input

Doubles a, b, and c, in IEEE 32-bit single-precision range and the address of x1, and x2.

### Output

Calculates the quadratic equation based on the numbers passed in as arguments.

Returns whether an error occurred or not.
-4 	- argument c out of range
-3 	- argument b out of range
-2 	- argument a out of range
-1 	- Internal error
2	- No real roots
3	- One real root
4	- Two real roots
5+ 	- Undefined

### Building the function

Run ```make build``` in this folder.

### Running the function

The object file qsSolve.o should be linked to an executable. Any c file that uses the
function qsSolve() should include qsSolve.h header file ```#include "qsSolve.h"```.

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
