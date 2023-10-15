#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 1, 3, 2, 5};
    int i, j, dup = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            if (arr[i] == arr[j])
            {
                dup = dup + 1;
                printf("%d and %d are duplicated\n", arr[i], arr[j]);
            }
        }
    }
    printf("%d terms are duplicated ", dup);
    return 0;
}