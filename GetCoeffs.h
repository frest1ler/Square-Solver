#include "ClearBuf.h"
int GetCoeffs (double *a, double *b, double *c, int *nRoots);

int GetCoeffs (double *a_ptr, double *b_ptr, double *c_ptr, int *nRoots)   // taking coeffs from user
{
     printf("Enter a, b and c with space within: \n" );

     while ((scanf("%lg %lg %lg", a_ptr, b_ptr, c_ptr) != 3)
         || (isfinite(*a_ptr) == 0)
         || (isfinite(*b_ptr) == 0)
         || (isfinite (*c_ptr) == 0))
     {
          Clear_Buffer();
          printf("Invalid input. Enter new coeffs\007 \n");
     }
}
