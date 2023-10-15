#include <stdio.h>

void cal(int *alp)
{
    for(int i=4;i>=0;i--)
    {
        printf("%d",alp[i]);
    }
}

int main()
{
    int Alp[5] = {1,2,3,4,5};
    cal(Alp);
    return 0;
}
