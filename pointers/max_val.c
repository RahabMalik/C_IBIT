#include <stdio.h>
void cal(int a, int b, int *max)
{
    if (b < a)
    {
        *max = a;
    }
    else
    {
        *max = b;
    }
}
int main()
{
    int a, b, max = 0;
    printf("Enter two num");
    scanf("%d %d", &a, &b);
    cal(a, b, &max);
    printf("max=%d", max);
    return 0;
}