/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Testing program for the qsValidate module of the quadratic solver.

**Input**
None

**Output**
Returns whether an error occurred or not.
0   - Successful
-1   - Unsuccessful
2+  - Undefined
*****************************************************************/

#include "qsValidate.h"

int tqsValidate() {
    int error = 0; //Successful
    char *line = "1, 2, 3";
    char nline = 50;
    double *a, *b, *c;
    qsValidate(line, nline, a, b, c);

    return error;
}
