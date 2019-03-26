/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Validate and parse input from user.

**Input**
line - Buffer containing the input from the user.
nline - Length of the Buffer.
a - Coefficient of the quadratic term.
b - Coefficient of the linear term.
c - Coefficient of the constant term.

**Output**
Returns whether an error occurred or not.
-1 	- Unsuccessful
0 	- Successful
1 	- Successful with loss of significance
2	- Bad Input
*****************************************************************/

#include "qsValidate.h"

int qsValidate(char *line, int nline,
    double *a, double *b, double *c) {
	int error = 0; //Successful

	//Validate input
	if(!line) {
		error = -1; //Unsuccessful
	}
	else if(!nline) {
		error = -1; //Unsuccessful
	}
	//If input is valid
	else {
		char *_line[nline], *radix[nline]; //buffer to store individual input text.
		float _a, _b, _c; //stores user input values.
		bool isFloat = false, isDouble = false, isZero = false; //booleans to interpret input

		_line = strsep(line, ',');

		if(0 = strcmp(_line,"0")) isZero = true; //Check if the value is zero (in case we have an error).
		if(NULL != (radix = strstr(_line, "."))) isFloat = true; //Check if the value has a radix
		if(isFloat && (9 < strlen(radix))) isDouble = true; //Check if there are more than 8 numbers and the radix

		_a = strtof(_line); //Convert our parsed value into a float.

		if(_a == 0 && !isZero) { //If we got 0 and isZero is false
			error = 2; //Bad input
		}




	}
	return error;
}
