#include <stdio.h>
#include <windows.h>
int colour(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    return 0;
}
void square_hollow(int num, char sym, int color)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= num; j++)
        {
            if (i == 1 || i == num || j == 1 || j == num)
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            
                printf("  ");
        }
        printf("\n");
    }
}
int main()
{
    int num, color;
    char ch, sym;
    printf("Enter size of square :");
    scanf("%d", &num);
    printf("Enter symbol for shape:");
    scanf(" %c", &sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &color);
    square_hollow(num, sym, color);
    return 0;
}
