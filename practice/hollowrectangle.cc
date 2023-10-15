#include <stdio.h>
int main()
{
    int row, col, num, numb;
    printf("Enter number of rows:");
    scanf("%d", &num);
    printf("Enter number of columns:");
    scanf("%d", &numb);
    for (row = 1; row <= num; row++)
    {
      for (col = 1; col <= numb; col++)
        {
            if (row == 1 || row == num || col == numb || col == 1)

                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}