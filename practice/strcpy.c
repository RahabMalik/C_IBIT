#include <stdio.h>
#include <string.h>
int main()
{
    char x[] = "Rehab";
    char y[] = "Malik";
    strcpy(y, x);
    printf("copy=%s\n", y);
    return 0;
}