#include <stdio.h>
#include <conio.h>
#include <windows.h>
int gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    return 0;
}
int setColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    return 0;
}
int main()
{
    int color;
    char sym;
    printf("Enter color\n0 for black\n1 for blue\n2for green\n3 for cyan \n4 for red \n5 for magenta\n6 for yellow\n7 for white:");
    scanf("%d", &color);
    printf("Enter symbol:");
    scanf(" %c", &sym);
    int x = 0, y = 0;
    gotoxy(x, y);
    while (1)
    {
        if (_kbhit())
        {
            char character = _getch();

            if (character == 0 || character == 0xE0)
            {
                character = _getch();

                switch (character)
                {
                case 72: // Up arrow
                    if (y > 0)
                    {
                        gotoxy(x, --y);
                    }
                    break;
                case 80: // Down arrow
                    if (y < 24)
                    {
                        gotoxy(x, ++y);
                    }
                    break;
                case 75: // Left arrow
                    if (x > 0)
                    {
                        gotoxy(--x, y);
                    }
                    break;
                case 77: // Right arrow
                    if (x < 79)
                    {
                        gotoxy(++x, y);
                    }
                    break;
                }
            }
            else if (character == ' ' || character == 0 || character == 0xE0)
            {

                setColor(color);
                printf("%c", sym);
                gotoxy(x, y);
            }
            else if (character == 8 || character == 0 || character == 0xE0)
            {
                {
                    setColor(color);
                    printf(" ");
                    gotoxy(x, y);
                }
            }
        }
    }
    return 0;
}
