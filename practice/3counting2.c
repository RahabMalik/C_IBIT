#include <stdio.h>
int main()
{
    char i, j;
    for (i = 'E'; i >= 'A'; i--)
    {
        for (j = 'A'; j <= i; j++)
            printf("%c", j);
        printf("\n");
    }
    return 0;
}