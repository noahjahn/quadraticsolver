/*
    Command Line Quadratic Equation Solver
    TEAM: Noah Jahn, Paul VanderWeele
    JKK Engineering - Kapenga
    LICENSE: GPL 2.0
*/

#define VERSION 0.10
#define FILENAME "quadratic_solver"

#include <stdio.h>
#include <string.h>

/*
    Controller for the program. This is where the program starts.
*/

int main(int argc, char const *argv[]) {

    int ret = 0; // return value for errors, start with being okay

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
            // if help is passed in, display help information
            printf("This program helps calculate a quadratic equation in standard\n");
            printf("form (ax^2 + bx + c = 0) with three (3) coefficients passed\n");
            printf("in as arguments: a, b, and c. With your a, b, and c already\n");
            printf("decided, run the program with them as arguments separated by\n");
            printf("a space.\n\nExample (where a = 5, b = 6 and c = 1):\n");
            printf("./qsolve 5 6 1\n");
            printf("\n\nTo enable logging run:\n./qsolve 5 6 1 -log\n");
        } else {
            // if help char * wasn't passed in, tell the user the error
            printf("INVALID ARGUMENTS: see ./qsolve help\n");
            ret -1;
        }
    } else if (argc == 5) {
        // check if logging argument was passed in
        if (strcmp(argv[5], "-log") == 0) {
            qsLogEnable(); // turn on logging
        } else {
            printf("INVALID ARGUMENTS: see ./qsolve help\n");
        }
    } else if (argc < 4) {
        // if less than four arguments were passed in, tell the user the error
        printf("INVALID ARGUMENTS: see ./qsolve help\n");
        ret -1;
    } else if (argc > 4) {
        // if more than four arguments were passed in, tell the user the error
        printf("INVALID ARGUMENTS: see ./qsolve help\n");
        ret -1;
    }

    // if we didn't find an error with number of arguments, we can continue..
    if (ret == 0) {
        #ifdef LOG_ON
            qsLog("%s\n")
    }

    return ret;
}
