#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i, j, count;
    for (i = 0; i < 5; i++)
    {
        count = 0;
        for (j = 1; j < 5; j++)
        {
            if (arr[i] % j == 0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
        for (i = 0; i < 5; i++)
        {
            if (count == 2)
                printf("%d is prime\n ", arr[i]);
            else
                printf("%d is not\n", arr[i]);
        }
    
}