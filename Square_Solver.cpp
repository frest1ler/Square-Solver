#include "main_menu.h"    // adding packages

int main ()   // main body
{
    printf("Welcome to SquareSolver.\002\n");
    int quest = 1;
    while (quest == 1)
    {
        quest = 0;
        double a = NAN;
        double b = NAN;
        double c = NAN;
        double x1 = NAN;
        double x2 = NAN;
        int nRoots = 0;

        GetCoeffs (&a, &b, &c, &nRoots);

        MainSolution(a, b, c, &x1, &x2, &nRoots);

        cases (x1, x2, nRoots);

        Test(a, b, c);

        printf("\ndo you want to continue? If yes, then enter 1, otherwise enter 0\n"); // Do you want repeat [y/n]
        scanf("%d",&quest);
    }
    printf("Bye\003");
    return 0;
}

//int a = 5;
//int *ptr = NULL; // * - объявление указателя
//ptr = &a;        // & - получения указателя
//*ptr == a == 5; // true  // * - получение значения указателя



