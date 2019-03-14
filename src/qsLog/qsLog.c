/*
    Command Line Quadratic Equation Solver
    TEAM: Noah Jahn, Paul VanderWeele
    JKK Engineering - Kapenga
    LICENSE: GPL 2.0
*/

#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include "qsLog.h"

#define LOG_PATH "../build/log.txt"

/*
    Prints passed in message to log file located in build directory. The function
    can also except a few different format specifiers

    %s - char *
    %d - int
    %c - char
    %f - double

    Input:
        qsLog(char * msg, ...);
        msg - the message that should be output to the log
        ... variables for above four format specifiers

    Output:
        0   - if successful
        -1  - on error

    Example:
        char * parameter = "test";
        qsLog("This is my log message. Parameter: %s", parameter);
*/

int qsLog(char * msg, ...) {

    int ret = 0; // start with being okay

    FILE * fp; // create file pointer
    fp = fopen(LOG_PATH, "a+"); // a+ opens for append and creates if not exist

    time_t t = time(NULL);
    struct tm time = *localtime(&t);

    // log that we are in the log function
    fprintf(fp, "%d-%d-%d %d:%d:%d - qsLog.c - qsLog - Parameters: %s\n", (time.tm_year + 1900), (time.tm_mon + 1), time.tm_mday, time.tm_hour, time.tm_min, time.tm_sec, msg);

    // print current date and time to log file
    fprintf(fp, "%d-%d-%d %d:%d:%d - ", (time.tm_year + 1900), (time.tm_mon + 1), time.tm_mday, time.tm_hour, time.tm_min, time.tm_sec);

    va_list ap; // varying arguments list
    int d; double f;
    char c, *s;

    va_start(ap, msg);
    while (*msg) {
        if (*msg == '%') {
            *msg++;
            switch (*msg) {
                case 's': // string
                    s = va_arg(ap, char *);
                    fprintf(fp, "%s", s);
                    break;
                case 'd': // int
                    d = va_arg(ap, int);
                    fprintf(fp, "%d", d);
                    break;
                case 'c': // char
                    c = (char) va_arg(ap, int);
                    fprintf(fp, "%c", c);
                    break;
                case 'f': // double
                    f = va_arg(ap, double);
                    fprintf(fp, "%f", f);
                    break;
            }
        } else {
            fprintf(fp, "%c", *msg);
        }
        *msg++;
    }
    fprintf(fp, "\n");

    fclose(fp); // close the file pointer

    return ret;

}
