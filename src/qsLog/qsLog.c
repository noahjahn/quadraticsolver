/*
    Command Line Quadratic Equation Solver
    TEAM: Noah Jahn, Paul VanderWeele
    JKK Engineering - Kapenga
    LICENSE: GPL 2.0
*/

#include <stdio.h>
#include <stdarg.h>
#include "qsLog.h"

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
    fp = fopen("../build/log.txt", "a+"); // a+ opens for append and creates if not exist

    va_list ap; // varying arguments list
    int d; double f;
    char c, *s;

    va_start(ap, msg);
    fprintf(fp, "%c", *msg); // first print
    while (*msg) {
        if (*msg++ == '%') {
            switch (*msg++) {
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
    }
    fprintf(fp, "\n");

    fclose(fp); // close the file pointer

    return ret;

}
