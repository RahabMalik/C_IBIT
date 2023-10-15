#include <stdio.h>
#include <windows.h>
void postion(char pos)
{
    switch (pos)
    {
    case 'L':
    case 'l':
    {
        printf(" ");
        break;
    }
    case 'R':
    case 'r':
    {
        printf("                                                                        ");
        break;
    }
    case 'M':
    case 'm':
    {
        printf("                           ");
        break;
    }
    }
}
int colour(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    return 0;
}
int colours(int incolor)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), incolor);
    return 0;
}
void square_stars(int num, char sym, char pos, int color, int incolor)
{
    int i, j;
    for (i = 1; i <= num; i++)
    {
        postion(pos);
        for (j = 1; j <= num; j++)
        {
            if (i == 1 || i == num || j == 1 || j == num)
            {
                colour(color);
                printf("%c ", sym);
            }
            else
            {
                colours(incolor);
                printf("%c ", sym);
            }
        }
        printf("\n");
    }
}
int main()
{
    int num, color, incolor;
    char ch, sym, pos;
    printf("Enter position on terminal\nM for middle\nL for left \nR for right\n");
    scanf(" %c", &pos);
    printf("Enter size of square :");
    scanf("%d", &num);
    printf("Enter symbol for shape:");
    scanf(" %c", &sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &color);
    printf("Enter colour for inner fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &incolor);
    square_stars(num, sym, pos, color, incolor);
    return 0;
}
