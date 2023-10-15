#include <stdio.h>
int main()
{
    int x, y = 1, c;
    printf("Enter number of rows:\n");
    scanf("%d", &x);
    printf("\n");
    while (y <= x)
    {
        c=1;
        while (c <= y)
        {
            printf("%c", (c + 64));
            c = c + 1;
        }
        printf("\n");
        y = y + 1;
    }
    return 0;
}