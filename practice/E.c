#include <stdio.h>
int main()
{
    int i, j, size = 7;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j < size; j++)
        {
            if (i== 1 || j == 1 ||  i==size/2+1)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }
}