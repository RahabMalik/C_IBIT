#include <stdio.h>
#include<string.h>
int main()
{
    char str[5] = {"Ab","Bc","Cd","Bc","Ab"};
    char i, j, palindrome = 1;
    for (i = 0, j = 4; i <= j; i++, j--)
    {
        if (str[i] != str[j])
        {
            palindrome = 0;
            break;
        }
    }
    if (palindrome == 1)
        printf("it is");
    else
        printf("it is not");
    return 0;
}