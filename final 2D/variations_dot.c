#include <stdio.h>
int main()
{
    int size = 3;
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};
    // 1 2 3         //11 12 13       //00 01 02   //1*11+4*12+7*13
    // 4 5 6         //14 15 16       //10 11 12
    // 7 8 10        //17 18 19       //20 21 22
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
         {
            sum = sum + arr1[i][0] * arr2[0][i];
        }
    }
    printf("%d ", sum);

    // first column with first row
    return 0;
}
