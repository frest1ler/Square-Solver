#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "compare_with_zero.h"
#include "GetCoeffs.h"
#include "cases.h"
#include "MainSolution.h"
#include "Test.h"
#define MAX_DOUBLE 1.7e+308

int LinearSolver (const double b, const double c, double *x1, int *nRoots);
int SquareSolver (const double a, const double b, const double c, double *x1, double *x2, int *nRoots);
