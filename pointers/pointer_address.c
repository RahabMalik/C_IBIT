#include <stdio.h>
int main()
{
    int x = 5;
    int *p = &x;
    int a = *p;
    printf("%p\n", &x);
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%d\n", a);
    printf("%d\n", *(&x));
    return 0;
}