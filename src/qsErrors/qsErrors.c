/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Prints passed in message to error file located in build directory erros.txt.
This function will also handle telling the user the error

**Input**
msg - error message to print out to the file.
... - format specifiers if sent in with the msg.

**Output**
Returns whether an error occurred or not.
0 	- Successful
-1 	- Unsuccessful
2+ 	- Undefined

*****************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include "qsErrors.h"
#include "../qsLog/qsLog.h"

#define LOG_PATH "../build/errors.txt"

int qsErrors(char * msg, ...) {
	int ret = 0; //Successful

    if (logging) {
        qsLog("qsErrors.c - qsErrors - Entered new function, argument passed in: %s\n", msg);
    }

    FILE * fp; // create file pointer
    fp = fopen(LOG_PATH, "a+"); // a+ opens for append and creates if not exist

    // print current date and time to log file
    time_t t = time(NULL);
    struct tm time = *localtime(&t);
    fprintf(fp, "%d-%d-%d %d:%d:%d - ERROR: ", (time.tm_year + 1900), (time.tm_mon + 1), time.tm_mday, time.tm_hour, time.tm_min, time.tm_sec);

    char * logmsg;
    va_list ap; // varying arguments list
    int d; double f;
    char c, *s;

    if (logging) {
        sprintf(logmsg, "ERROR: ");
    }

    va_start(ap, msg);
    while (*msg) {
        if (*msg == '%') {
            *msg++;
            switch (*msg) {
                case 's': // string
                    s = va_arg(ap, char *);
                    fprintf(fp, "%s", s);
                    if (logging) {
                        sprintf(logmsg, "%s", s);
                    }
                    break;
                case 'd': // int
                    d = va_arg(ap, int);
                    fprintf(fp, "%d", d);
                    if (logging) {
                        sprintf(logmsg, "%d", d);
                    }
                    break;
                case 'c': // char
                    c = (char) va_arg(ap, int);
                    fprintf(fp, "%c", c);
                    if (logging) {
                        sprintf(logmsg, "%c", c);
                    }
                    break;
                case 'f': // double
                    f = va_arg(ap, double);
                    fprintf(fp, "%f", f);
                    if (logging) {
                        sprintf(logmsg, "%f", f);
                    }
                    break;
            }
        } else {
            fprintf(fp, "%c", *msg);
            if (logging) {
                sprintf(logmsg, "%c", *msg);
            }
        }
        *msg++;
    }
    fprintf(fp, "\n");

    fclose(fp); // close the file pointer

	return ret;
}
