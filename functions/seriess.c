#include <stdio.h>
void even(int num)
{
    printf("%d is even.\n", num);
}
void odd(int num)

{
    printf("%d is odd.\n", num);
}
void check()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
        even(num);
    else
        odd(num);
    check();
}
int main()
{
    printf("Enter series of number:\n");
    check();
    return 0;
}
