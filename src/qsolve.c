/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 2.0

Main controller for the quadratic solver.
*****************************************************************/

#define VERSION 0.40

#include <stdio.h>
#include <string.h>
#include "qsErrors/qsErrors.h"
#include "qsHelp/qsHelp.h"
#include "qsLogEnable/qsLogEnable.h"
#include "qsLog/qsLog.h"

int logging = 0; // 0 is off 1 is on

/*
    This is where the program starts.
*/

int main(int argc, char const *argv[]) {

    //Declare system variables
    int BUFFERSIZE = (sizeof(char)*10); //Size of the buffer we are using to catch user input
    int ret = 0; // return value for errors, start with being okay
    double a; double b; double c; // coefficients declared and initialized
    char *buffer; //the buffer to catch the user's input.

    //Allocate memory for the buffer, and return error if malloc fails.
    if(NULL == (line = malloc(BUFFERSIZE))) {
        ; //ADD error handling for failed malloc
    }

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
                ret = -300;
            }
        // check if argument passed in was -log
        } else if (strcmp(argv[1], "-log") == 0) { // check if logging argument was passed in
            if (qsLogEnable(&logging) != 0) { // turn on logging
                printf("ERROR: unable to enable logging\n");
                ret = -301;
            }
        }
    } else if (argc > 2) {
        // if help char * wasn't passed in, tell the user the error
        // printf("ERROR: too many arguments. See ./qsolve help\n");
        qsErrors("too many arguments. See ./qsolve help");
        ret = -102;
    }

    // if we didn't find an error with number of arguments, we can continue..
    if (ret == 0) {
        if (logging) {
            qsLog("quadratic_solvers.c - argument counts okay %s", "test");
        }
    } else {
        if (logging) {
            qsLog("quadratic_solvers.c - INVALID ARGUMENTS");
        }
    }

    //Prompt the user for input
    //Catch and return the user's input
    if(0 != qsGetLine(buffer, BUFFERSIZE)) {
        ;//ADD error handling for failed user input read.
    }

    //Validate the input
    //Parse out and assign a, b, and c
    if(0 != qsValidate()) {
        ;//ADD error handling for failed validation.
    } 


    return ret;
}
