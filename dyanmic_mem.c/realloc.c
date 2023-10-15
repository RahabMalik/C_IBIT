#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p;
    p = (int *)calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("number %d is %d\n", i + 1, p[i]);
    }
    p = realloc(p, 3);
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("number %d is %d\n", i + 1, p[i]);
    }
    return 0;
}