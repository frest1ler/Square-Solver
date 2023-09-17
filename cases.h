#include "enum count_of_roots.h"
int cases (double x1, double x2, int nRoots);

int cases (double x1, double x2, int nRoots)     // TODO: RENAME
{
    switch(nRoots)
    {
        case ZERO_ROOTS:
        {
            printf("No roots.");
        }
        break;

        case ONE_ROOT:
        {
            printf("There is one root x1 = %lg", x1);
        }
        break;

        case TWO_ROOTS:
        {
            printf("There are two roots x1 = %lg, x2 = %lg", x1, x2);
        }
        break;

        case INF_ROOTS:
        {
            printf("There is infinite count of roots.");
        }
        break;
        default:
        {
            printf("not provided by the program");
        }

    }
}
