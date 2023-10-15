#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 2, 3};
    int duplicate = 0, i, j;
    for (i = 0; i < 5; i++)
    {
        
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("duplicate number is %d\n", arr[i]);
            }
        }
    }
    return 0;
}