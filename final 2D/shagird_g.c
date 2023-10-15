#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include<stdlib.h>

struct screen
{
    int x;
    int y;
    int colour;
};
// Function to set the console cursor position
int gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    return 0;
}
void cordinates(int *x, int *y, int ch)
{
    switch (ch)
    {
    case 72: // Up arrow
        (*y)--;
        break;
    case 75: // Left arrow
        (*x)--;
        break;
    case 80: // Down arrow
        (*y)++;
        break;
    case 77: // Right arrow
        (*x)++;
        break;
    }
}
// Codes for changing consoles colour
void greench()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
}
void redch()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
}
void bluech()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
}
void whitech()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}

void getcolour(int ch)
{

    (ch == 'r') ? redch() : (ch == 'b') ? bluech()
                        : (ch == 'g')   ? greench()
                        : (ch == 32)    ? whitech()
                                        : 0;
}

void saveScreenToFile(struct screen s1[][120], int rows, int cols)
{
    FILE *file = fopen("s1.dat", "wb");

    if (file == NULL)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    fwrite(s1, sizeof(struct screen), rows * cols, file);
    fclose(file); // Close the file
}
void read_file(struct screen s1[][120])
{

    FILE *file = fopen("s1.dat", "rb");
    size_t elements_read = fread(s1, sizeof(struct screen), 120 * 120, file);

    if (elements_read != 120 * 120)
    {
        printf("Error reading data from the file.\n");
        fclose(file);
        return;
    }
    for (int i = 0; i < 120; i++)
    {
        for (int j = 0; j < 120; j++)
        {
            if (s1[i][j].colour == 'g' || s1[i][j].colour == 'b' || s1[i][j].colour == 'r')
            {
                gotoxy(j, i);
                getcolour(s1[i][j].colour);
                printf("*");
            }
        }
    }
}
// Function to update the coordinates based on arrow key input

int main()
{
    struct screen s1[120][120];

    int x = 0;
    int y = 0;
    int flag = 0;

    gotoxy(x, y);
    // Instructions
    printf("Instructions:\n");
    printf("Use the arrow button to move\n");
    printf("Use the Spacebar and  arrow button to print the white stars\n");
    printf("Use the r and  arrow button to print the red stars\n");
    printf("Use the b and  arrow button to print the blue stars\n");
    printf("Use the y and  arrow button to print the yellow stars\n");
    printf("Use the g and  arrow button to print the gree stars\n");
    printf("Use the backspace and arrow key to remove a star\n");
    printf("Use the del key to clear the screen\n");
    printf("\n");
    printf("Now press S start to start drwaing\n");
    printf("Press Q to end program\n");
    int start = getch();
    if (start == 's')
    {
        system("cls");
    }
    else if (start == 'q')
    {
        return 0;
    }
    int ch;
    while (1)
    {
        ch = getch();

        if (ch == 72 || ch == 75 || ch == 77 || ch == 80)
        {
            cordinates(&x, &y, ch);
            gotoxy(x, y);
            ch = getch();
            if (ch == 'g' || ch == 'b' || ch == 'r' || ch == 32)
            {

                getcolour(ch);
                printf("*");
                s1[y][x].colour = ch;
            }
            else
            {
                cordinates(&x, &y, ch);
                gotoxy(x, y);
            }
        }
        else if (ch == 'g' || ch == 'b' || ch == 'r' || ch == 'w')
        {
            getcolour(ch);
            gotoxy(x, y);
            ch = getch();
            cordinates(&x, &y, ch);
            printf("*");
            s1[y][x].colour = ch;
        }

        else if (ch == 8)
        {
            ch = getch();
            cordinates(&x, &y, ch);
            gotoxy(x, y);
            printf(" ");
            s1[y][x].colour = ch;
        }
        else if (ch == 'q')
        {
            saveScreenToFile(s1, 120, 120);
            printf("Ab mein chalaaaa ");
            system("cls");
            sleep(3);
            read_file(s1);
        }
        else if (ch == 'c')
        {
            system("cls");
        }
    }

    return 0;
}
