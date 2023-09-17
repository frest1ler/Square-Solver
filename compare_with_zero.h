#define EPSILON 1e-9
static int compare_with_zero (double x);

int compare_with_zero (double x)    // comparing coeffs with zero
{
    if (fabs(x) < EPSILON) return 0;
    else if (x < -EPSILON) return -1;
    else return 1;
}
