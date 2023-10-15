#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, z, a;
    printf("Enter a number: ");
    scanf("%lf", &x);
    y = log(x);
    z = exp(x);
    a = sqrt(x);
    printf("Log=%lf\n", y);
    printf("Exp=%lf\n", z);
    printf("Sqrt=%lf\n", a);
    return 0;
}