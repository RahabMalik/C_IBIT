#include <stdio.h>
void square(int *p)
{
    *p = (*p) * (*p);
    printf("Sqr is %d", *p);
}
int main()
{
    int num;
    printf("Enter a num");
    scanf("%d", &num);
    square(&num);
    printf("\nNum is %d", num);
    return 0;
}