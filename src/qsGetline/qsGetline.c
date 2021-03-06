/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Takes a line of user input, and parses it for a, b, and c values.

**Input**
line 	- Buffer to catch user input.
nline 	- Length of buffer passed from main program.

**Output**
Returns whether an error occurred or not.
-1 	- Unsuccessful
0 	- Successful
2+ 	- Undefined

*****************************************************************/

#include "qsGetline.h"
#include <stdio.h>
#include "../qsLog/qsLog.h"
#include "../qsErrors/qsErrors.h"

int qsGetline(char *line, int nline) {
	int error = 0; //No error

	if (logging) {
		qsLog("qsGetline.c - qsGetline - Entered new function, argument passed in: *line = %s, nline = %d\n", line, nline);
	}
	//Validate input
	if(!line) {
		error = -1; //Unsuccessful
	}
	else if(!nline) {
		error = -1; //Unsuccessful
	}
	else {
		//Prompt user for inputting a, b, and c
		printf("Please enter quadratic coefficients a, b, and c seperated by commas\n");
		printf("a, b, c: ");

		//Catch user input
		//"%[^\n]" reads characters until a \n is found
		if(0 == scanf("%[^\n]", line)){
			error = -1;//Unsuccessful
		}
	}
	return error;

}
