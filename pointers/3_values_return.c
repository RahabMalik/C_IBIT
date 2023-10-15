#include <stdio.h>
void cal(int *sum, int *pro, int *avg, int a, int b)
{
    printf("%d\n", *sum);
    printf("%d\n", *pro); // check for initial value
    printf("%d\n", *avg);
    *sum = a + b;
    *pro = a * b;
    *avg = (a + b) / 2;
}
int main()
{
    int a, b, sum=0, pro=0, avg=0;
    printf("Enter two num");
    scanf("%d\n %d", &a, &b);
    cal(&sum, &pro, &avg, a, b);
    printf("%d\n", sum);
    printf("%d\n", pro);
    printf("%d\n", avg);
    return 0;
}