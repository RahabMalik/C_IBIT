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
        printf("%d\n", p[i]);
    }
    free(p);
    p = (int *)calloc(2, sizeof(int));
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", p[i]);
    }
    return 0;
}