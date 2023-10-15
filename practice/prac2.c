#include <stdio.h>
#include <string.h>
int main()
{
    char x[20];
    char y[20];
    printf("Enter 1st string:");
    scanf("%s", &x);
    printf("Enter 2nd string:");
    scanf("%s", &y);
    strcat(x, y);
    printf("Concatenation=%s", x);
    return 0;
}