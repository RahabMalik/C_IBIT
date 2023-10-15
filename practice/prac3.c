#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char x[56];
    printf("Enter a password:");
    scanf("%s", &x);
    char y[56] = "REHAB@2004";
    n = strcmp(x, y);
    if (n == 0)
        printf("correct password");
    else
        printf("Incorrect password");
    return 0;
}