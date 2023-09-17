int MainSolution(const double a, const double b, const double c, double *x1, double *x2, int *nRoots);
int LinearSolver (const double b, const double c, double *x1, double *x2, int *nRoots);
int SquareSolver (const double a, const double b, const double c, double *x1, double *x2, int *nRoots);

int  MainSolution (const double a, const double b, const double c, double *x1, double *x2, int *nRoots)
{
    if (compare_with_zero (a) == 0)
        {
            LinearSolver (b, c, x1, x2, nRoots);
        }
        else
        {
            SquareSolver (a, b, c, x1, x2, nRoots);
        }
}


int LinearSolver (const double b, const double c, double *x1, double *x2, int *nRoots)   // solving LinearSolver (a = 0, b != 0, c = 0)
{
     if (compare_with_zero (b) == 0)
     {
        if (compare_with_zero (c) == 0)
        {
            *nRoots = INF_ROOTS;
        }
        else
        {
            *nRoots = ZERO_ROOTS;
        }
     }
     else
     {
        *x1 = -c / b;
        *x2 = -c / b;
        *nRoots = ONE_ROOT;
     }
}

int SquareSolver (const double a, const double b, const double c, double *x1, double *x2, int *nRoots)
{
    double D = b*b - 4*a*c;

    if (compare_with_zero (D) == -1)
        *nRoots = ZERO_ROOTS;

    double sqrt_D = sqrt (D);

    if (compare_with_zero (D) == 0)
    {
        *x1 = *x2 = -b / (2*a);
        *nRoots = ONE_ROOT;
    }
    if (compare_with_zero (D) == 1)
    {
        *x1 = (-b + sqrt_D) / (2*a);
        *x2 = (-b - sqrt_D) / (2*a);
        *nRoots = TWO_ROOTS;
    }
    return 0;
}
