#include <stdio.h>
#include <windows.h>
int colour(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    return 0;
}
void printNumberZero(int num,char sym,int color)
{
    for (int row = 1; row <= num; row++)
    {
        for (int col = 1; col <= num; col++)
        {
            if ((row == 1 && col >= 2 && col <= num - 1) ||
                (row == num && col >= 2 && col < num) ||
                (col == 1 && row >= 2 && row <= num - 1) || col == num && row >= 2 && row <= num-1)
            {
                colour(color);
                printf("%c",sym);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int num, color;
    char ch, sym;
    printf("Enter size of zero :");
    scanf("%d", &num);
    printf("Enter symbol for shape:");
    scanf(" %c", &sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &color);
    printNumberZero(num, sym, color);
    return 0;
}
