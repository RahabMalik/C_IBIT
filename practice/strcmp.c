#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char x[] = "Rehab";
    char y[] = "reha";
    n = strcmp(x, y);
    if (n == 0)
        printf("Srings are equal\n");
    else if (n < 0)
        printf("String 1 is less than string 2\n");
    else
        printf("String 1 is greater than string two\n");
    return 0;
}