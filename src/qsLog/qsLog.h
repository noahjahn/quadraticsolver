/*
    Command Line Quadratic Equation Solver
    TEAM: Noah Jahn, Paul VanderWeele
    JKK Engineering - Kapenga
    LICENSE: GPL 2.0
*/

extern int logging;

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

int qsLog(char * log, ...);
