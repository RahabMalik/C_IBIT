#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 2, 3};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                break;
            }
        }

        if (j == 5)
        {
            printf("unique element is : %d", arr[i]);
        }
    }
}