#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    
}
int main()
{
    int a, b;
    printf("Enter two num");
    scanf("%d\n %d", &a, &b);
    swap(&a, &b);
    printf("%d\n", a);
    printf("%d", b);
    return 0;
}