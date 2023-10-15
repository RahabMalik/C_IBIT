#include <stdio.h>
int main()
{
    int x, y, sum, minus, multiply, div;
    printf("Enter 1st number");
    scanf("%d", &x);
    printf("Enter 2nd number");
    scanf("%d", &y);
    sum = x + y;
    minus = x - y;
    multiply = x * y;
    div = x / y;
    printf("sum=%d\n", sum);
    printf("minus=%d\n", minus);
    printf("multiply=%d\n", multiply);
    printf("div=%d\n", div);
    return 0;
}