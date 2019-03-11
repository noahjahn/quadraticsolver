/*
    Command Line Quadratic Equation Solver
    TEAM: Noah Jahn, Paul VanderWeele
    JKK Engineering - Kapenga
    LICENSE: GPL 2.0
*/

#define LOG_PATH "../../build/log.txt" // macro for path of log file

#include <stdio.h>
#include "qsLog.h"

/*
    Prints passed in message to log file located in build directory
*/

int qsLog(char * log) {

    int ret = 0; // return value for errors, start with being okay

    #ifdef LOG_ON // if logging is turned on, well tell the log that we are in the log function
    FILE * fp; // create file pointer
    fp = fopen(LOG_PATH, a+); // a+ opens for append and creates if not exist
    ret = fprintf(fp, "qsLog.c - Entered qsLog function\n"); // print the log to the log file
    fclose(fp); // close the file pointer
    #endif

    FILE * fp; // create file pointer
    fp = fopen(LOG_PATH, a+); // a+ opens for append and creates if not exist
    ret = fprintf(fp, "%s\n", log);// print the log to the log fill
    fclose(fp); // close the file pointer

    return ret;

}
