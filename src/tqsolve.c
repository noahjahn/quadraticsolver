/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Testing module for the quadratic solver.

**Input**
argc - Number of inputs:
    1) no help
    2) help or logging
    Other) Error
arcv[] - Input string.
    [0] name of program
    [1] "help" or "-log"
    [2+] NULL, otherwise input error

**Output**
Returns whether an error occurred or not.
0   - Successful
-1   - Unsuccessful
2+  - Undefined
*****************************************************************/

#include <stdio.h>
#include <string.h>
#include "qsErrors/qsErrors.h"
#include "qsHelp/qsHelp.h"
#include "qsLogEnable/qsLogEnable.h"
#include "qsLog/qsLog.h"
#include "qsValidate/qsValidate.h"
#include "qsGetline/qsGetline.h"
#include "qsPutline/qsPutline.h"
#include "qsResults/qsResults.h"
#include "qsSolve/qsSolve.h"

int main(int argc, char const *argv[]) {
    int error = 0; //Successful

    if(0 != tqsValidate()) { 	//Test qsValidate module.
    	printf("qsValidate Failed");//Add Error handling.
    }
    if(0 != tqsSolve()) { 		//Test qsSolve module.
    	printf("qsSolve Failed");//Add Error handling.
    }
    if(0 != tqsResults()) { 	//Test qsResults module.
    	printf("qsResults Failed");//Add Error handling.
    }
    if(0 != tqsPutline()) { 	//Test qsPutline module.
    	printf("qsPutline Failed");//Add Error handling.
    }
    if(0 != tqsLogEnable()) { 	//Test qsLogEnable module.
    	printf("qsLogEnable Failed");//Add Error handling.
    }
    if(0 != tqsLog()) { 		//Test qsLog module.
    	printf("qsLog Failed");//Add Error handling.
    }
    if(0 != tqsHelp()) { 		//Test qsHelp module.
    	printf("qsHelp Failed");//Add Error handling.
    }
    if(0 != tqsGetline()) { 	//Test qsGetline module.
    	printf("qsGetline Failed");//Add Error handling.
    }
    if(0 != tqsErrors()) { 		//Test qsErrors module.
    	printf("qsErrors Failed");//Add Error handling.
    }

    return error;
}
