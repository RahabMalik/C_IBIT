#include <stdio.h>
#include <conio.h>
#include <windows.h>

void square_filled(int size, char symbl, int boundary_color, int interior_color, COORD cord)
{ // declaring variables for functions
    int rows, column;
    // outer loop for rows

    for (rows = 1; rows <= size; rows++)
    {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
        // inner loop for column
        for (column = 1; column <= size; column++)
        {
            if (rows == 1 || rows == size || column == 1 || column == size)
            { // printing s on terminal

                printf("\033[0;%d;40m", boundary_color);
                printf("%c", symbl);
                printf("\033[0m");
            }

            else
            {

                printf("\033[0;%d;40m", interior_color);
                printf("%c", symbl);
                printf("\033[0m");
            }
        }
        cord.Y++;
        printf("\n");
    }
}
// square_hollow function is declaring
int square_hollow(int size, char symbl, int boundary_color, int interior_color, COORD cord)
{ // declaring variables for functions
    int rows, column;
    // outer loop for rows

    for (rows = 1; rows <= size; rows++)
    {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cord);
        // inner loop for column
        for (column = 1; column <= size; column++)
        { // printing star on terminal
            if (rows == 1 || rows == size || column == 1 || column == size)
            { // assigning color for boundary

                printf("\033[0;%d;40m", boundary_color);
                printf("%c", symbl);
                printf("\033[0m");
            }
            // printing spaces
            else
            { // assinging color for interior

                printf("\033[0;%d;40m", interior_color);
                printf(" ");
                printf("\033[0m");
            }
        }
        cord.Y++;
        printf("\n");
    }
    return 0;
}
// declaring main function
int main()
{
    int size, boundary_color, interior_color;
    char symbl, em_ho;
    COORD cord;
    cord.X;
    cord.Y;
    // storing size in size variable
    printf("enter size of square");
    scanf("%d", &size);
    printf("enter symbol that you want to print\n");
    // symbl = getch();
    scanf("%c", &symbl);
    scanf("%c", &symbl);
    // color for boundary
    printf("enter colour for boundary\n30 for Black\n31 for Red\n32 for Green\n33 for Yellow\n34 for Blue\n35 for Magenta\n36 for Cyan\n37 for White");
    scanf("%d", &boundary_color);
    // colour for interior
    printf("enter color for interior\n30 for Black\n31 for Red\n32 for Green\n33 for Yellow\n34 for Blue\n35 for Magenta\n36 for Cyan\n37 for White");
    scanf("%d", &interior_color);
    printf("enter X-axis position");
    scanf("%d", &cord.X);
    printf("enter Y-axis position");
    scanf("%d", &cord.Y);
    // for filled or hollow
    printf("enter h for hollow\nf for filled");
    scanf("%c", &em_ho);
    scanf("%c", &em_ho);
    system("cls");
    switch (em_ho)
    {
    case 'h':
    {

        // square_filled function is calling
        square_hollow(size, symbl, boundary_color, interior_color, cord);
        break;
    }
    case 'f':

    {
        // square_hollow function is calling
        square_filled(size, symbl, boundary_color, interior_color, cord);
    }
    }
    getch();
    return 0;
}