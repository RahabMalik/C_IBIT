#include <stdio.h>
#include <string.h>
int main()
{
    char x[] = "HELLO";
    char y[] = " WORLD";
    strcat(x, y);
    printf("concatenation=%s", x);
    return 0;
}