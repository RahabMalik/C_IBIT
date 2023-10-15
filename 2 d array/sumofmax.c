#include <stdio.h>
int main()
{
    int arr[4] = {1, 2, 3, 4};
    int brr[4] = {5, 6, 7, 8};
    int crr[4] = {9, 10, 11, 12};
    int i, j, sum_row1 = 0, sum_row2 = 0, sum_row3 = 0;
    for (i = 0; i < 4; i++)
    {
        sum_row1 = sum_row1 + arr[i];
    }
    printf("Sum = %d", sum_row1);
    printf("\n");
    for (i = 0; i < 4; i++)
    {
        sum_row2 = sum_row2 + brr[i];
    }
    printf("Sum = %d", sum_row2);
    printf("\n");
    for (i = 0; i < 4; i++)
    {
        sum_row3 = sum_row3 + crr[i];
    }
    printf("Sum = %d\n", sum_row3);
    if (sum_row1 > sum_row2)
    {
        if (sum_row1 > sum_row3)
            printf("row 0 is max and sum is %d", sum_row1);
        else
            printf("row2 is max and sum is %d", sum_row3);
    }
    else if (sum_row2 > sum_row3)
    {
            printf("row 1 is max and sum is %d", sum_row2);
    }
    else
        printf("row 2 is max and sum is %d", sum_row3);

    return 0;
}