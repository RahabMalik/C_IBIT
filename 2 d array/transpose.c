#include <stdio.h>
int main()
{
    int arr[2][2];
    int i, j,sum=0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter elements: ");
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == 0 && j == 1 || i == 1 && j == 0)
            {
                int swap;
                swap = arr[0][1];
                arr[0][1] = arr[1][0];
                arr[1][0] = swap;

                printf(" The transpose is ");
                printf("\n");
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            if (i == 0 && j == 0 || i == 1 && j == 1)
            {
                
                sum = sum + arr[i][j];
            }
        }
    }
    printf(" sum is %d", sum);

    return 0;
}