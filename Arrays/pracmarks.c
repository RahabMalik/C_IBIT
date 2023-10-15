#include <stdio.h>
int main()
{
    int marks[5] = {23, 67, 89, 90, 13};
    int i;
    for (i = 0; i < 5; i++)
    {
        if (marks[i] < 35)
            printf("%d\n", i);
    }
    return 0;
}