/*
    Command Line Quadratic Equation Solver
    TEAM: Noah Jahn, Paul VanderWeele
    JKK Engineering - Kapenga
    LICENSE: GPL 2.0
*/

#define VERSION 0.10

#include <stdio.h>
#include <string.h>
#include "qsHelp/qsHelp.h"
#include "qsLogEnable/qsLogEnable.h"
#include "qsLog/qsLog.h"

int logging = 0; // 0 is off 1 is on

/*
    Controller for the program. This is where the program starts.
*/

int main(int argc, char const *argv[]) {

    int ret = 0; // return value for errors, start with being okay
    double a = 0.0; double b = 0.0; double c = 0.0; // coefficients declared and initialized

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
        printf("ERROR: too many arguments. See ./qsolve help\n");
        ret = -102;
    }

    // if we didn't find an error with number of arguments, we can continue..
    if (ret == 0) {
        if (logging) {
            qsLog("quadratic_solvers.c - argument counts okay");
        }
    } else {
        if (logging) {
            qsLog("quadratic_solvers.c - INVALID ARGUMENTS");
        }
    }

    return ret;
}
