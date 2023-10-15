#include <stdio.h>
#include <windows.h>
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
int pos(COORD cord)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
    return 0;
}
void square_stars(int num, char sym, int color, int incolor, COORD cord)
{
    int i, j;

    for (i = 1; i <= num; i++)
    {
        pos(cord);
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
        cord.Y++;
        printf("\n");
    }
}
int main()
{
    int num, color, incolor;
    char ch, sym, pos;
    COORD cord;
    printf("Enter size of square :");
    scanf("%d", &num);
    printf("Enter pos of square :");
    scanf(" %c", &pos);
    switch (pos)
    {
    case 'L':
    case 'l':
    {
        cord.X = 1;
        cord.Y = 12;
        break;
    }
    case 'R':
    case 'r':
    {
        cord.X = 95;
        cord.Y = 12;
        break;
    }
    case 'M':
    case 'm':
    {
        cord.X = 40;
        cord.Y = 12;
        break;
    }
    }
    printf("Enter symbol for shape:");
    scanf(" %c", &sym);
    printf("Enter colour for outer fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &color);
    printf("Enter colour for inner fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", &incolor);

    square_stars(num, sym, color, incolor, cord);
    return 0;
}
