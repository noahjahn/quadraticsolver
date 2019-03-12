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

    if (logging) {
        printf("LOGGING!\n");
    }

    int ret = 0; // return value for errors, start with being okay

    FILE * fp; // create file pointer
    fp = fopen("../build/log.txt", "a+"); // a+ opens for append and creates if not exist
    ret = fprintf(fp, "%s\n", log);// print the log to the log fill
    fclose(fp); // close the file pointer

    return ret;

}
