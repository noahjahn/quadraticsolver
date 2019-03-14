# Command Line Quadratic Equation Solver

Solve a quadratic equation in standard form (ax^2 + bx + c = 0) by entering values
for a, b, and c. The calculator will give answers for x1 and x2 and indicate whether
there are real roots. This project is done to prepare for the final Senior Project
for Western Michigan Universities Computer Science program. Two students practice
the extreme programming agile methodology.

## Getting Started

Fork this repository and clone it to your machine. Once the project is downloaded,
These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

Linux operating system, or Linux subsystem for Windows
gcc - GNU project C and C++ compiler
make - GNU make utility to maintain groups of programs

```
apt-get install gcc
apt-get install make
```

### Installing

A step by step series of examples that tell you how to get a development env running

Install gcc compiler, if not already installed

```
apt-get install gcc
```

Install make, if not already installed

```
apt-get install make
```

For and clone this repository to a directory on your computer that you wish

```
git clone "...repo_link..."
```

Open the directory and run ```make build``` to compile the Project

```
cd quadraticsolver
make build
```

Run the executable

```
/build/qsolve
```

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
* All files are compiled with ```-Wall -Pedantic -std=c99```
* Variable and functions are ```lowerCamelCase```

## Built With

* [gcc](https://gcc.gnu.org/) - Compiler
* [make](https://www.gnu.org/software/make/manual/html_node/Introduction.html) - Compile & Test automation
* [man](http://man.cat-v.org/unix-1st/) - Unix manual pages (thanks!)

## Authors

* **Noah Jahn** - noah.a.jahn@wmich.edu - [GitHub](https://github.com/noahjahn)
* **Paul VanderWeele** - paul.m.vanderweele@wmich.edu - [GitHub](https://github.com/faytrow)

## License

This project is licensed under the GPL v3.0 License - see the [LICENSE.md](docs/LICENSE.md) file for details

## Acknowledgments

* This project was made for a grade for Western Michigan Universities CS4900 - Software
Systems Development I course during the Spring 2019 semester.
* The project is meant to server as a practice of extreme programming, a methodology
of agile programming.
* All of our TPS reports made along the way can be found in the docs folder.
* Our given program specifications can be found in [qsolve1.txt](docs/qsolve1.txt) file.
