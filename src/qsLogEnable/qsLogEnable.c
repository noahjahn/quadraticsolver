/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Enables logging throughout the system.

**Input**

The address of the global logging integer

**Output**

Changes the global logging integer to 1 for logging on.

Returns whether an error occurred or not.
0 	- Successful
-1 	- Unsuccessful
2+ 	- Undefined
*****************************************************************/

#include "qsLogEnable.h"

int qsLogEnable(int * logging) {
	int error = 0; //Successful

    *logging = 1;

    return error;
}
