#include "TestOne.h"
int Test (double a, double b, double c);

int Test ( double a, double b, double c)
{
    int nok = 0;
    a = 1;
    b = -5;
    c = 6;
    nok = TestOne(1, -5, 6, 2, 3, TWO_ROOTS);
    a = 1;
    b = 2;
    c = 1;
    nok = TestOne(1, 2, 1, -1, -1, ONE_ROOT);
    a = 0;
    b = 0;
    c = 0;
    nok = TestOne(0, 0, 0, 0, 0, INF_ROOTS);
    a = 0;
    b = 1;
    c = -7;
    nok = TestOne(0, 1, -7, 7, 7, ONE_ROOT);
    a = 1;
    b = 1;
    c = 10;
    nok = TestOne(1, 1, 10, 0, 0, ZERO_ROOTS);
}
