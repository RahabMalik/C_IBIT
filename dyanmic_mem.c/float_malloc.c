#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *p;
    p = (float *)malloc(5 * sizeof(float));
    p[0] = 100.2;
    p[1] = 140.2;
    p[2] = 178.0;
    p[3] = 238.2;
    p[4] = 567.2;
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", p[i]);
    }
    return 0;
}