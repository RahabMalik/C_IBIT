#include <stdio.h>
int main()
{
    int sum[6];
    int i, add = 0;
    for (i = 0; i < 6; i++)
    {
        printf("Enter elements of an arrray: ");
        scanf("%d", &sum[i]);
    }
    for (i = 0; i < 6; i++)
    {
        add = add + sum[i];
    }
    printf("%d", add);
    return 0;
}