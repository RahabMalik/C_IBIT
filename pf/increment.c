#include <stdio.h>
int main()
{
    int x = 1;
    while (x <= 100000)
    {
        printf("%d\n", x);
        ++x;
    }
    return 0;
}