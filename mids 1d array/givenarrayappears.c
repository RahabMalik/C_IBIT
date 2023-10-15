#include <stdio.h>
int main()
{
    int arr[5] = {2, 3, 3, 3, 5};
    int i, j, num = 2, count = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == 8)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}