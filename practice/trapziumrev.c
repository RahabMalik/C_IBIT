    #include<stdio.h>
int main ()
{
    int row,col,size=5;
    for(row=1;row<=size;row++)
    {
        for(col=size;col>=(row-1);col--)
        { 
           
                printf("* ");
           
        }
        printf("\n");
    }
    return 0;
}