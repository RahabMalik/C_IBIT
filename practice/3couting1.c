#include <stdio.h>
int main()
{
    char j;
    char i;
    for (i = 'A'; i <= 'E'; i++)
    {
        for (j = i; j >= 'A'; j--)
            printf("%c", j);
        printf("\n");
    }
    printf("\n");
    return 0;
}