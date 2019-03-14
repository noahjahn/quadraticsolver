/*************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Header file for qsLog module.

qsLog() 	- Handles logging for the entire system.
tqsLog() 	- Tests qsLog and reports a failure.
**************************************************************/

extern int logging;

int qsLog(char * log, ...);
int tqsLog();
