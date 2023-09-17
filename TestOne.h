int TestOne (double a, double b, double c, double x2Ref, double x1Ref, int nRootsRef);

int TestOne (double a, double b, double c, double x2Ref, double x1Ref, int nRootsRef)
{
    double x1 = 0, x2 = 0;
    int nRoots = 0;

    MainSolution(a, b, c, &x1, &x2, &nRoots);

    if ( compare_with_zero(x1 - x1Ref) == 0
       && compare_with_zero(x2 - x2Ref) == 0
       && nRoots == nRootsRef)
    {
        printf("\nTest ok");
    }
    else
    {
        printf ("\nFAILED: x1=%lg , x2=%lg, nRoots=%d , expected: x1Ref=%lg , x2Ref=%lg, nRootsRef=%d\007\n",
        x1, x2, nRoots, x1Ref, x2Ref, nRootsRef);
    }
}
