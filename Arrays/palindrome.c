#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int i, j, palindrome = 1;
    for (i = 0, j = 4; i <= j; i++, j--)
    {
        if (arr[i] != arr[j])
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