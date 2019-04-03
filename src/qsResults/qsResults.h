/*************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Header file for qsResults module.

qsResults()		- Determines the type of user feedback.
tqsResults() 	- Tests qsResults and reports a failure.
**************************************************************/

int qsResults(char *line, int nline, double *x1, double *x2, int validate, int solve);
int tqsResults();
