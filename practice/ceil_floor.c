#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, z;
    printf("Enter a number:");
    scanf("%f", &x);
    y = ceil(x);
    z = floor(x);
    printf("ceil=%.2f\n", y);
    printf("floor=%.2f", z);
    return 0;
}