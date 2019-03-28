# Command Line Quadratic Equation Solver

Solve a quadratic equation in standard form (ax^2 + bx + c = 0) by entering values
for a, b, and c. The calculator will give answers for x1 and x2 and indicate whether
there are real roots. This project is done to prepare for the final Senior Project
for Western Michigan Universities Computer Science program. Two students practice
the extreme programming agile methodology.

## This directory: src

Contains all the functions of the program divided in to their own folder.

### Building the program

Each directory contains a makefile that will build function in that directory.
Running ```make build``` in the root of the project repository will build each written
function by calling ```make build``` in the src directory, which runs ```make build```
in each sub-directory, which builds functions.

### Running the program

Each directory contains a makefile that will build function in that directory.
Running ```make run``` in the root of the project repository will run the linked object
files from each built function. The object and executable live in the /build directory

## Running the tests

Each directory contains a makefile that will run testing on the function in that directory.
Running ```make test``` in the root of the project repository will run each written
test by calling running ```make test``` in the src directory, which runs ```make test```
in each sub-directory, which runs the test functions.

## Coding Standards

* Compiled with c99 standard
* Test driven development - tests should be written and added to each function's test
file
* If a new function is written, tests should also be written for it and added to
makefiles for quick automated testing
* All files are compiled with ```-Wall -Pedantic -std=c99``` CFLAGS
* Variable and functions are ```lowerCamelCase```

## Authors

* **Noah Jahn** - noah.a.jahn@wmich.edu - [GitHub](https://github.com/noahjahn)
* **Paul VanderWeele** - paul.m.vanderweele@wmich.edu - [GitHub](https://github.com/faytrow)

## License

This project is licensed under the GPL v3.0 License - see the [LICENSE.md](docs/LICENSE.md) file for details
