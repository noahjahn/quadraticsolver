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
#include "../qsLog/qsLog.h"
#include "../qsErrors/qsErrors.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int qsResults(char *line, int nline, double *x1, double *x2, int validate, int solve) {
	if (logging) {
		qsLog("qsResults.c - qsResults - Entered new function, argument passed in: *line = %s, nline = %d, *x1 = %f, *x2 = %f, validate = %d, solve = %d\n", line, nline, x1, x2, validate, solve);
	}
	int error = 0; //Successful
	char buffer[nline]; //Buffer to hold strings to concat.
	char *buffer_ptr = &buffer[nline]; //Pointer to buffer.
	line[0] = '\0'; //Clear our buffer to the user.

	//If the input was bad, don't do anything else, and set error accordingly.
	if(validate == 2){
		if(NULL == sprintf(line, "Bad input. Please try again."));
		error = 1;
	}
	//Otherwise build return messege for user.
	else {
		//Determine a possible loss of signifance.
		if(validate == 1){
			sprintf(buffer_ptr, "***Possible loss of significance!\n");
			if(NULL == strcat(line, &buffer_ptr[0])) error = -1; //Add comment to output
			buffer_ptr[0] = '\0'; //Clear buffer afterwards.
		}

		switch (solve) {
			case 2: sprintf(buffer_ptr, "No real roots.\n");
			break;
			case 3: sprintf(buffer_ptr, "Double real root. x = {%.8f}\n", *x1);
			break;
			case 4: sprintf(buffer_ptr, "Two real roots. x = {%.8f, %.8f}\n", *x1, *x2);
			break;
			default: sprintf(buffer_ptr, "Bad input. Please try Again\n");
			error = 1;
			break;
		}

		if(NULL == strcat(line, &buffer_ptr[0])) error = -1;

	}
	return error;
}
