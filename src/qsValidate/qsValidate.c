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
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

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
    int i = 0;
    while (i < 2 && error != -1 && error != 2) {
  		char *_line[nline], *radix[nline]; //buffer to store individual input text.
      char *field;
  		float value; //stores user input values.
  		bool isFloat = false;
      bool isDouble = false;
      bool isZero = false; //booleans to interpret input

/********
ERROR AREA
*/
      //pull off first field, and copy the contents
      field = strsep(&line, ",");
  		strncpy(_line[0], line, nline);
/*********
**********/
  		if(0 == strncmp(_line[0],"0",1)) isZero = true; //Check if the value is zero (in case we have an error).
  		if(NULL != (strncpy(radix[0], strstr(_line[0], "."), nline))) isFloat = true; //Check if the value has a radix
  		if(isFloat && (9 < strlen(radix[0]))) isDouble = true; //Check if there are more than 8 numbers and the radix

  		value = strtof(_line[0], NULL); //Convert our parsed value into a float.

  		if(value == 0 && !isZero) { //If we got 0 and isZero is false
  			error = 2; //Bad input
  		}

      if(isDouble) {
        error = 1; //Loss of significance
      }
      switch (i) {
        case 0: *a = value;
        break;
        case 1: *b = value;
        break;
        case 2: *c = value;
        break;
      }
      i++; //Increment loop
    }
	}
	return error;
}
