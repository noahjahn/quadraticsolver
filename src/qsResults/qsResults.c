/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Determines what the roots of the quadratic means.

**Input**



**Output**
Returns whether an error occurred or not.
-1 	- Unsuccessful
0 	- Successful
1		- Bad Input with Help
2+ 	- Undefined
*****************************************************************/

#include "qsResults.h"

int qsResults(char *line, int nline, double *x1, double *x2, int validate, int solve) {
	if (logging) {
		qsLog("qsResults.c - qsResults - Entered new function, argument passed in: *line = %s, nline = %d, *x1 = %f, *x2 = %f, validate = %d, solve = %d\n", line, nline, x1, x2, validate, solve);
	}
	int error = 0; //Successful
	char buffer[nline]; //Buffer to hold strings to concat.
	char *buffer_ptr = &buffer[nline]; //Pointer to buffer.
	line[0] = '\0';
	if(validate == 2){
		if(NULL == sprintf(line, "Bad input. Please try again."));
		error = 1;
	}
	else {
		switch (solve) {
			case 2: sprintf(buffer_ptr, "No real roots.\n");
			break;
			case 3: sprintf(buffer_ptr, "Double real root.\n");
			break;
			case 4: sprintf(buffer_ptr, "Two real roots.\n");
			break;
		}


		if(NULL != x2) {
			if(NULL == sprintf(line, "x = {%d,%d"))
		}

	}
	return error;
}
