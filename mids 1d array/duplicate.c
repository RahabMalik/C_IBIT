#include <stdio.h>
int main()
{
    int arr[5] = {4, 3, 3, 4, 5};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
            if (arr[i] == arr[j])
            {
                printf("%d\n", arr[i]);
            }
    }
    return 0;
}