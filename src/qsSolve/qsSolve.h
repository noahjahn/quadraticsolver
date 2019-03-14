/*************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 2.0

Header file for qsSolve module.

qsSolve() 	- Calculates quadratic roots from coefficients.
tqsSolve()	- Tests qsSolve and reports a failure.
**************************************************************/

int qsSolve(double a, double b, double c, double *x1, double *x2);
int tqsSolve();