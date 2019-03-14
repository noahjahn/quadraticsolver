/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 2.0

Validate and parse input from user.

**Input**
line - Buffer containing the input from the user.
nline - Length of the Buffer.
a - Coefficient of the quadratic term.
b - Coefficient of the linear term.
c - Coefficient of the constant term.

**Output** 
Returns whether an error occurred or not.
0 	- Successful
1 	- Unsuccessful
2+ 	- Undefined
*****************************************************************/

#include "qsValidate.h"

int qsValidate(char *line, int nline,
    double *a, double *b, double *c) {
	int error = 1; //Successful

	return error;
}