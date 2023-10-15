#include <stdio.h>
int main()
{
    int i, j, mode = 0, count, maxcount = 1;
    int arr[5] = {3, 2, 2, 2, 3};
    for (i = 0; i < 5; i++)
    {
        count = 1;
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            if (count > maxcount)
            {
                mode = arr[i];
            }
        }
    }
    printf("mode is %d", mode);
    return 0;
}