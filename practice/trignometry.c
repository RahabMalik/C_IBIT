#include <stdio.h>
#include <math.h>
int main()
{

    float x, Sin, Cos, Tan;
    printf("Enter an angle:");
    scanf("%f", &x);
    Sin = sin(x);
    Cos = cos(x);
    Tan = tan(x);
    printf("Sin=%.2f\n", Sin);
    printf("Cos=%.2f\n", Cos);
    printf("Tan=%.2f\n", Tan);
    return 0;
}