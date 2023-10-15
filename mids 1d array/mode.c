#include <stdio.h>
int main()
{
    int arr[5] = {3, 3, 3, 4, 5};
    int i, j, count, max_count = 1;
   int  mode = 0;

    for (i = 0; i < 5; i++)
    {
        count = 0;
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            if (count > max_count)
            {
                max_count = count;
                mode = arr[i];
            }
        }
    }
    printf("%d", mode);
    return 0;
}