/*****************************************************************
Command Line Quadratic Equation Solver
TEAM: Noah Jahn, Paul VanderWeele
JKK Engineering - Kapenga
LICENSE: GPL 3.0

Determines what the roots of the quadratic means.

**Input**

**Output**
Returns whether an error occurred or not.
-4 	- argument c out of range
-3 	- argument b out of range
-2 	- argument a out of range
-1 	- Internal error
2	- No real roots
3	- One real root
4	- Two real roots
5+ 	- Undefined
*****************************************************************/

#include <math.h>
#include "qsSolve.h"
#include "../qsLog/qsLog.h"
#include "../qsErrors/qsErrors.h"

int qsSolve(double a, double b, double c, double * x1, double * x2) {
	int error = 0; //Successful

	if (logging) {
		qsLog("qsSolve.c - qsSolve - Entered new function, argument passed in: a = %f, b = %f, c = %f, *x1 = %p, *x2 = %p\n", a, b, c, x1, x2);
	}

	// Validate input
	if (a > (3.4 * pow(10,38)) || a < (-3.4 * pow(10,38))) {
		if (logging) {
			qsLog("qsSolve.c - qsSolve - Argument a is out of range\n");
		}
		qsErrors("qsSolve.c - qsSolve - Argument a is out of range\n");
		error = -2;
	}
	if (b > (3.4 * pow(10,38)) || a < (-3.4 * pow(10,38))) {
		if (logging) {
			qsLog("qsSolve.c - qsSolve - Argument b is out of range\n");
		}
		qsErrors("qsSolve.c - qsSolve - Argument b is out of range\n");
		error = -3;
	}
	if (c > (3.4 * pow(10,38)) || a < (-3.4 * pow(10,38))) {
		if (logging) {
			qsLog("qsSolve.c - qsSolve - Argument c is out of range\n");
		}
		qsErrors("qsSolve.c - qsSolve - Argument c is out of range\n");
		error = -4;
	}

	// reset x1 and x2, they shouldn't have anything stored in them
	*x1 = 0.00;
	*x2 = 0.00;


	double radicand = (b * b) - (4 * a * c);

	if (radicand < 0) { // then we have a complex number. No real roots
		if (logging) {
			qsLog("qsSolve.c - qsSolve - No real roots determined\n");
		}
		error = 2; // do nothing else
	} else if (radicand == 0) { // one real root
		if (logging) {
			qsLog("qsSolve.c - qsSolve - One real root determined\n");
		}
		error = 3; // we need to return that the solution has one real root
		*(x1) = -b / (2 * a);
	} else { // two real roots
		if (logging) {
			qsLog("qsSolve.c - qsSolve - Two real roots determined\n");
		}
		error = 4; // we need to return that the solution has two real roots
		*(x1) = (-b + sqrt(radicand)) / (2 * a);
		*(x2) = (-b - sqrt(radicand)) / (2 * a);
	}

	return error;
}
