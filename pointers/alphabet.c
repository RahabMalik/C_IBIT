#include <stdio.h>

void cal(char *alp)
{
    while (*alp)
    {
        printf("%c ", *alp);
        alp++; // Move to the next character
    }
}

int main()
{
    char Alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cal(Alp);
    return 0;
}
