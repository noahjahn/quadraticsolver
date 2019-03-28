/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Main controller for the quadratic solver.

**Input**
argc - Number of inputs:
    1) no help
    2) help or logging
    Other) Error
arcv[] - Input string.
    [0] name of program
    [1] "help" or "-log"
    [2+] NULL, otherwise input error

**Output**
Returns whether an error occurred or not.
-301 	-
-300 	-
-302 	-
-1   	- Unsuccessful
0   	- Successful
1+  	- Undefined
*****************************************************************/

#define VERSION 0.40

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "qsErrors/qsErrors.h"
#include "qsHelp/qsHelp.h"
#include "qsLogEnable/qsLogEnable.h"
#include "qsLog/qsLog.h"
#include "qsValidate/qsValidate.h"
#include "qsGetline/qsGetline.h"
#include "qsPutline/qsPutline.h"
#include "qsResults/qsResults.h"
#include "qsSolve/qsSolve.h"

int logging = 0; // 0 is off 1 is on

//This is where the program starts.

int main(int argc, char const *argv[]) {

    //Declare system variables
    int error = 0; //Successful
    int BUFFERSIZE = (sizeof(char)*50); //Size of the buffer we are using to catch user input
    double *a; double *b; double *c; // coefficients declared and initialized
    char *buffer; //the buffer to catch the user's input.

    //Print startup text
    printf("Command Line Quadratic Equation Solver\n");
    printf("VERSION: %.2f\n", VERSION);
    printf("TEAM: Noah Jahn, Paul VanderWeele\n");
    printf("JKK Engineering - Kapenga\n");
    printf("LICENSE: GPL 2.0\n");
    printf("For help on how to use the program, see ./qsolve help\n\n");


    // check if arguments were supplied for a, b, and c
    if (argc == 2) {
        // check if argument passed in was help
        if (strcmp(argv[1], "help") == 0) {
            if (qsHelp() != 0) {
                printf("ERROR: unable to print help\n");
                error = -300;
            }
        // check if argument passed in was -log
        } else if (strcmp(argv[1], "-log") == 0) { // check if logging argument was passed in
            if (qsLogEnable(&logging) != 0) { // turn on logging
                printf("ERROR: unable to enable logging\n");
                error = -301;
            }
        }
    } else if (argc > 2) {
        // if help char * wasn't passed in, tell the user the error
        // printf("ERROR: too many arguments. See ./qsolve help\n");
        qsErrors("qsolve - main - too many arguments");
        error = -102;
    }

    // if we didn't find an error with number of arguments, we can continue..
    if (error == 0) {
        if (logging) {
            qsLog("qsolve.c - main - argument counts okay %s", "test");
        }
    } else {
        if (logging) {
            qsLog("quadratic_solvers.c - INVALID ARGUMENTS");
        }
    }

    //Allocate memory for the buffer, and return error if malloc fails.
    if(NULL == (buffer = malloc(BUFFERSIZE))) {
        error = -1; //Unsuccessful
    }

    //Ask the user for input, and read a line.
    if(0 != (error = qsGetline(buffer, BUFFERSIZE))) {
    	printf("Failed to scan user input");
    	exit(EXIT_FAILURE); //exit as unsuccessful
    }

    if(0 != (error = qsValidate(buffer, BUFFERSIZE, a, b, c))) {
    	printf("Failed to validate user input");
    	exit(EXIT_FAILURE); //exit as unsuccessful
    }

    printf("**TEST** The coefficients you entered are: %s\n", buffer);
    //Close resources
    free(buffer);

    //Exit Program
    return error;
}
