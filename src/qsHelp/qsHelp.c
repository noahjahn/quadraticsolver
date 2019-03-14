/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 2.0

Provides program assistance to the user.

**Input**

**Output** 
Returns whether an error occurred or not.
0 	- Successful
1 	- Unsuccessful
2+ 	- Undefined
*****************************************************************/

#define VERSION 0.10

#include <stdio.h>
#include "qsHelp.h"

int qsHelp() {
	int error = 0; //Successful
    printf("This program helps calculate a quadratic equation in standard\n");
    printf("form (ax^2 + bx + c = 0). The program asks for your input for the\n");
    printf("three (3) coefficients. With your a, b, and c already\n");
    printf("decided, run the program and when prompted enter in values for\n");
    printf("a, b, and c.\n\nExample (where a = 5, b = 6 and c = 1):\n");
    printf("./qsolve\n");

    printf("Command Line Quadratic Equation Solver\n");
    printf("VERSION: %.2f\n", VERSION);
    printf("TEAM: Noah Jahn, Paul VanderWeele\n");
    printf("JKK Engineering - Kapenga\n");
    printf("LICENSE: GPL 2.0\n");
    printf("For help on how to use the program, see ./qsolve help\n\n");

    printf("Please enter a value for a:\n5.0\n");
    printf("Please enter a value for b:\n6.0\n");
    printf("Please enter a value for c:\n1.0\n");

    printf("Results x = -(1/5), -1");

    printf("\n\nTo enable logging run with the -log flag:\n./qsolve -log\n");

    return error;
}
