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
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include "../qsLog/qsLog.h"
#include "../qsErrors/qsErrors.h"

int qsValidate(char *line, int nline,
    double *a, double *b, double *c) {
  if (logging) {
    qsLog("qsValidate.c - qsValidate - Entered new function, argument passed in: *line = %s, nline = %c, *a = %f, *b= %f, *c = %f\n", line, nline, a, b, c);
  }
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
      char *str_a, *str_b, *str_c; //local coefficient string fields.
      float val_a, val_b, val_c; //local coefficient value fields
      double doub_a, doub_b, doub_c;
      bool loss_of_sig = false; //Flag for detecting loss of significance.
      bool a_zero = false, b_zero = false, c_zero = false; //booleans to interpret input

      //pull off first field, and copy the contents
      if(NULL == (str_a = strsep(&line, ","))) return -1;
      if(NULL == (str_b = strsep(&line, ","))) return -1;
      if(NULL == (str_c = line)) return -1;

      //Check if the value is zero (in case we have an error).
  		if(0 == strncmp(&str_a[0],"0",1)) a_zero = true;
      if(0 == strncmp(&str_b[0],"0",1)) b_zero = true;
      if(0 == strncmp(&str_c[0],"0",1)) c_zero = true;

      //If a value has a radix, check for loss of significance.
      //Check if there are more than 8 numbers after the radix
      while(i <= 2) {
        char *field, *radix; //variable to store which coefficient we are checking.
        char buffer[nline]; //Stack buffer to hold the radix string.
        radix = &buffer[0]; //Set radix to point at buffer.
        //Determine which coefficient we are checking.
        switch (i) {
          case 0: field = str_a;
          break;
          case 1: field = str_b;
          break;
          case 2: field = str_c;
          break;
        }
        //If the string has a radix, check it's length, and set the flag or not.
        if(NULL != (radix = strstr(&field[0], "."))) {
          if(9 < strlen(&radix[0])) {
            loss_of_sig = true;
            radix[9] = '\0';
          }
        }
        i++;
      } //End while()

      //Convert our parsed values into a floats.
  		val_a = strtof(&str_a[0], NULL);
  		val_b = strtof(&str_b[0], NULL);
  		val_c = strtof(&str_c[0], NULL);

      //If one of the coefficients was beyond float precision
      //Change return to indicate loss of signifance
      if(loss_of_sig) {
        error = 1; //Loss of significance
      }
      //If one of the values had bad input
      //Ignore loss of significance
      //Return bad input
  		if(val_a == 0 && !a_zero) { //If we get a return of 0, but 'a' is not 0.
  			error = 2; //Bad input
  		}
      if(val_b == 0 && !b_zero) { //If we get a return of 0, but 'b' is not 0.
  			error = 2; //Bad input
  		}
      if(val_c == 0 && !c_zero) { //If we get a return of 0, but 'c' is not 0.
  			error = 2; //Bad input
  		}

      //If we have successful input, assign values to our parameter variables.
      if(error == 0 || error == 1) {
        doub_a = val_a;
        doub_b = val_b;
        doub_c = val_c;
        *a = doub_a;
        *b = doub_b;
        *c = doub_c;
      }

	}
	return error;
}
