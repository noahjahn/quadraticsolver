/*************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Header file for qsValidate module.

qsValidate() 	- Validates the user input of coefficients.
tqsValidate() 	- Tests qsValidate and reports a failure.
**************************************************************/

int qsValidate(char *line, int nline, double *a, double *b, double *c);
int tqsValidate();
