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
1  	  - Bad Input
2     - Double real root
3     - Two real roots
4     - No Real roots
5     - Internal ERROR
6     - Loss of Significance
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
#include "stdbool.h"

int logging = 0; // 0 is off 1 is on

//This is where the program starts.

int main(int argc, char const *argv[]) {

    //Error management
    int error = 0; //Successful

    /***************************************************************************
    Print startup text and licsensing info.
    ***************************************************************************/
    printf("Command Line Quadratic Equation Solver\n");
    printf("VERSION: %.2f\n", VERSION);
    printf("TEAM: Noah Jahn, Paul VanderWeele\n");
    printf("JKK Engineering - Kapenga\n");
    printf("LICENSE: GPL 2.0\n");
    printf("For help on how to use the program, see ./qsolve help\n\n");

    /***************************************************************************
        Logging and Error control.
    ***************************************************************************/
    // check if arguments were supplied for a, b, and c
    if (argc == 2) {
        //** qsHelp() **//
        // check if argument passed in was help
        if (strncmp(argv[1], "help", 4) == 0) {
            if (qsHelp() != 0) {
                printf("ERROR: unable to print help\n");
                error = -300;
                //handle error
            }
        //** qsLogEnable() **//
        // check if argument passed in was -log
      } else if (strncmp(argv[1], "-log", 4) == 0) { // check if logging argument was passed in
            if (qsLogEnable(&logging) != 0) { // turn on logging
                printf("ERROR: unable to enable logging\n");
                error = -301;
                //handle error
            }
        }
    } else if (argc > 2) {
        //** qsErrors() **//
        // if help char * wasn't passed in, tell the user the error
        // printf("ERROR: too many arguments. See ./qsolve help\n");
        qsErrors("qsolve - main - too many arguments");
        error = -102;
        //handle error
    }

    //** qsLog() **//
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

    /***************************************************************************
        System Variables
    ***************************************************************************/
    int BUFFERSIZE = (sizeof(char)*50); //Size of the buffer we are using to catch user input
    double *a; double *b; double *c; // coefficients declared and initialized
    char *buffer; //the buffer to catch the user's input.
    bool hasSigLoss;
    int results;

    //Allocate memory for the buffer, and return error if malloc fails.
    if(NULL == (buffer = malloc(BUFFERSIZE))) {
        error = -1; //Unsuccessful
        //add logging for memory allocation failure
        exit(EXIT_FAILURE);
    }

    /***************************************************************************
        Get input from user and validate.
    ***************************************************************************/
      //** qsGetLine() **//
      //Ask the user for input, and read a line.
      if(-1 == (error = qsGetline(buffer, BUFFERSIZE))) {
        //add logging for failed getLine call
      	exit(EXIT_FAILURE); //exit as unsuccessful
      }

      //** qsValidate **//
      //Validate the input from the user.
      if(-1 == (error = qsValidate(buffer, BUFFERSIZE, a, b, c))) {
        //add logging for failed validate call
      	exit(EXIT_FAILURE); //exit as unsuccessful
      }


    /***************************************************************************
        Perform quadratic operation.
    ***************************************************************************/
    //** qsSolve **//
    error = qsSolve(a, b, c, x1, x2)));

    /***************************************************************************
        Determine results.
    ***************************************************************************/
    error = qsResults(results));
    /***************************************************************************
        Output results to user.
    ***************************************************************************/


    //Close resources
    free(buffer);

    //Exit Program
    return error;
}
