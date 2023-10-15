#include <stdio.h>
int main()
{
    int star, space, size, row, col, type, fill;
    printf("Enter type of triangle:");
    scanf("%d", &type);
    printf("Enter row of triangle:");
    scanf("%d", &size);
    printf("Enter 0 for fill triangle and 1 for empty triangle:");
    scanf("%d", &fill);
    switch (type)
    {
    case 1:
        if (fill == 0)
        {
            for (row = 1; row <= size; row++)
            {
                for (col = 1; col <= row; col++)
                    printf("* ");
                for (col = 1; col <= size - row; col++)
                    printf("  ");
                printf("\n");
            }
        }
        else if (fill == 1)
        {
            for (row = 1; row <= size; row++)
            {
                for (col = 1; col <= row; col++)
                    if (col == 1 || row == size ||row==col)
                        printf("* ");
                    else
                        printf("  ");
                printf("\n");
            }
        }
        else
            printf("Enter fill 0 or 1\n");
        break;
    case 2:
        if (fill == 0)
        {
            for (row = 1; row <= size; row++)
            {
                for (col = 1; col <= size - row; col++)
                    printf("  ");
                for (col = 1; col <= row; col++)
                    printf("* ");
                printf("\n");
            }
        }
        else if (fill == 1)
        {
            for (row = 1; row <= size; row++)
            {
                for (col = 1; col <= size - row; col++)
                    printf("  ");
                for (col = 1; col <= row; col++)
                    if (col == row || row == size || col == 1)
                        printf("* ");
                    else
                        printf("  ");
                printf("\n");
            }
        }
        else
            printf("Enter fill 0 or 1\n");
        break;
    case 3:
        if (fill == 0)
        {
            for (row = 1; row <= size; row++)
            {
                for (col = 1; col <= (size - row) + 1; col++)
                    printf("* ");
                for (col = 1; col <= row - 1; col++)
                    printf("  ");
                printf("\n");
            }
        }
        else if (fill == 1)
        {
            for (row = 1; row <= size; row++)
            {
                for (col = 1; col <= (size - row) + 1; col++)
                    if (col == 1 || row == 1 || col == (size - row) + 1)
                        printf("* ");
                    else
                        printf("  ");
                printf("\n");
            }
        }
        else
            printf("Enter 0 for fill and 1 for empty");
        break;
    case 4:
        if (fill == 0)
        {
            for (row = 1; row <= size; row++)
            {
                for (col = 1; col <= row - 1; col++)
                    printf("  ");
                for (col = 1; col <= (size - row) + 1; col++)
                    printf("* ");
                printf("\n");
            }
        }
        else if (fill == 1)
        {
            for (row = 1; row <= size; row++)
            {
                for (col = 1; col <= row - 1; col++)
                    printf("  ");
                for (col = 1; col <= (size - row) + 1; col++)
                    if (row == 1 || col == (size - row) + 1 || col == 1)
                        printf("* ");
                    else
                        printf("  ");
                printf("\n");
            }
        }
        else
            printf("Enter 0 for fill and 1 for empty");
        break;
    }

    return 0;
}