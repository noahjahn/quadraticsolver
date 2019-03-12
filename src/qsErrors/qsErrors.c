/*
    Command Line Quadratic Equation Solver
    TEAM: Noah Jahn, Paul VanderWeele
    JKK Engineering - Kapenga
    LICENSE: GPL 2.0
*/

/*
    Prints passed in message to error file located in build directory
*/

#include "qsErrors.h"
#include "../qsLog/qsLog.h"

int qsErrors(char * log) {

    if (logging) {
        qsLog("qsErrors.c - qsErrors - argument passed in %s\n", log);
    }

    return 0;
}
