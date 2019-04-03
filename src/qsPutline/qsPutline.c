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
2+ 	- Undefined
*****************************************************************/

#include "qsPutline.h"
#include <stdio.h>

int qsPutline(char *line, int nline, int internal_error) {
	if (logging) {
    qsLog("qsPutline.c - qsPutline - Entered new function, argument passed in: *line = %s, nline = %d\n", line, nline);
  }
	int error = 0; //Successful

	if(internal_error == true) {
		printf("Internal Error. Quitting program.");
	}
	else {
		printf("%s", line);
	}



	return error;
}
