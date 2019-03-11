/*
    Command Line Quadratic Equation Solver
    TEAM: Noah Jahn, Paul VanderWeele
    JKK Engineering - Kapenga
    LICENSE: GPL 2.0
*/

#include "qsLog.h"

/*
    Enable logging through out the program with a simple macro
*/

int qsLogEnable() {
    #ifndef LOG_ON
    #define LOG_ON 1
    #endif
}
