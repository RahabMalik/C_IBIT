#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    int i, j;
    int found = 0;

    for (int n = 1; n <= 10; n++)
    {
        found = 0;
        for (i = 0; i < 9; i++)
        {
            if (arr[i] == n)
            {
                found = 1;
                break;
            }
            else
            {
                found = 0;
            }
        }

        if (found == 0)
        {
            printf("%d", n);
        }
    }
    return 0;
}