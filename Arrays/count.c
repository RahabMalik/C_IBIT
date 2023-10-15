#include <stdio.h>
int main()
{
    int num, i, count=0;
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 0; i <= 7; i++)
    {
        if (num < arr[i])
            count = count + 1;
    }
    printf ("%d",count);
    return 0;
}