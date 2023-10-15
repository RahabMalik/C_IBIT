#include <stdio.h>
int main()
{
    int r = 3, c = 3;
    int two_d[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // yahan 2 D declare ki he
    int size = r * c; // 2 D ka size 9 he meri example mn usko aik variable mn store kia he
    int one_d[size]; // jo 2D ka size calculate kia wo 1D ko dia
    int index = 0; //index 0 rkha ta k 1D ko value 0 se mile
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            one_d[index++] = two_d[i][j]; // yahn 2D 1D ko assign kr rhy hain
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", one_d[i]); //print krra rhy 1D
    }
    return 0;
}