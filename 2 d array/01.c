#include <stdio.h>
int main()
{
    int arr[3][4] = {1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1};
    int i, j;
    int count, maxcount = 0, index = 0;
    for (i = 0; i < 3; i++)
    {
        count = 0;
        for (j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
            if (maxcount < count)
            {
                maxcount = count;
                index = i;
            }
        }
    }
    printf("%d row is greater", index + 1);
    return 0;
}
