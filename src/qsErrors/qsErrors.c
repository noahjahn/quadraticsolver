/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 2.0

Prints passed in message to error file located in build directory.

**Input**
log - 

**Output** 
Returns whether an error occurred or not.
0 	- Successful
1 	- Unsuccessful
2+ 	- Undefined

*****************************************************************/

#include "qsErrors.h"
#include "../qsLog/qsLog.h"

int qsErrors(char * log) {
	int error = 0; //Successful

    if (logging) {
        qsLog("qsErrors.c - qsErrors - argument passed in %s\n", log);
    }

    return error;
}
