#include <stdio.h>
int main()
{
    int row, col, num;
    printf("Enter number of rows:");
    scanf("%d", &num);
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= row; col++)
             {
                 if(col==1||col==num||col==row)
                 {
                     printf("* ");
                  }
                 else
                 printf("  ");
             } 
            printf("\n");
        //for (col = 1; col <= (num - row); col++)
          //  printf("  ");
    }
    for (row = 1; row <= num; row++)
    {
        for (col = 1; col <= (num - row)+1; col++)
            printf("* ");
        for (col = 1; col <= (row - 1); col++)
            printf("  ");
        printf("\n");
    }
    return 0;
}
