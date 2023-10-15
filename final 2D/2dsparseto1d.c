#include <stdio.h>
int main()
{
    int r = 3, c = 3,count;
    int two_d[3][3] = {{1, 0, 0}, {0, 0, 0}, {0, 0, 9}}; // yahan 2 D declare ki he
    for (int i = 0; i < r; i++)
    {
        count == 0;
        for (int j = 0; j < c; j++)
        {
            if (two_d[i][j] != 0)
            {
                count++; // yahan hum dekh rhy hain k kitne non zera hain ......jitne non zero hon gy utna
                //hi size 1d ka hoga 
            }
        }
    }
    int one_d[count];  
    int index = 0;    // index 0 rkha ta k 1D ko value 0 se mile
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (two_d[i][j] != 0)
            {
                one_d[index++] = two_d[i][j]; // yahn 2D 1D ko assign kr rhy hain
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        printf("%d ", one_d[i]); // print krra rhy 1D
    }
    return 0;
}