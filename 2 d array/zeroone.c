#include <stdio.h>
int main()
{
    int arr[3][4] = {1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};
    int i, j;
    int count, count2, count3, index = 0;
    for (i = 0; i < 1; i++)
    {
        count = 0;
        for (j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count++;
            }
        }
    }
    printf("Row 1 is %d\n", count);
    for (i = 1; i < 2; i++)
    {
        count2 = 0;
        ;
        for (j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count2++;
            }
        }
    }
    printf(" ROW Two is %d\n", count2);
    for (i = 2; i < 3; i++)
    {
        count3 = 0;
        ;
        for (j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count3++;
            }
        }
    }
    printf(" ROW Three is %d\n", count3);
    if (count > count2)
    {
        if (count > 3)
            printf("row 1 is greater");
        else
            printf("row 3 is greater");
    }
    else if (count2 > count3)
        printf("row 2 is greater");
    else
        printf("row 3 is greater");

    return 0;
}