#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    printf("Enter a value for x(0<x<1)");
    scanf("%lf", &x);
    printf("The sine of %.2f is %.6f\n", x, sin(x));
    return 0;
}
