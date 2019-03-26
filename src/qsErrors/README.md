# Command Line Quadratic Equation Solver

Solve a quadratic equation in standard form (ax^2 + bx + c = 0) by entering values
for a, b, and c. The calculator will give answers for x1 and x2 and indicate whether
there are real roots. This project is done to prepare for the final Senior Project
for Western Michigan Universities Computer Science program. Two students practice
the extreme programming agile methodology.

## This directory: src/qsErrors

The qsErrors function lives in this directory. It is used to write any, whether or not
logging is turned on, errors to the errors.txt file in the build /build directory.
The directory includes the header to include the function in another program file
with same name as the function name.

### Input

The error message that as a char * that should be noted and outputted to the file.
The message can contain format specifiers similar to that of printf.

### Output

This function prints to the errors file when an error occurs. It's strictly used
and only used for errors.

If the function is successful, it returns ```0```, on failure ```-1``` else it's undefined.

### Building the function

Run ```make build``` in this folder.

### Running the function

The object file qsErrors.o should be linked to an executable. Any c file that uses the
function qsErrors() should include qsErrors.h header file ```#include "qsErrors.h"```.

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
