#include <stdio.h>
int main()
{
    int row, col, num, numb;
    printf("Enter number of rows:");
    scanf("%d", &num);
  /*  printf("Enter number of columns:");
    scanf("%d", &numb);*/
    for (row = 1; row <= num; row++)
    {
        printf("* ");
        for (col = 1; col < num+2; col++)
            printf("* ");
        printf("\n");
    }
    return 0;
}