#include <stdio.h>
#include <windows.h>
#include <math.h>

struct two
{
    int size;
    char symbol;
    int color;
};

int colour(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    return 0;
}


void printNumberTwo(struct two object)
{

   int size = object.size;
   int color= object.color;
   int symbol= object.symbol;

    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col <= size; col++)
        {
            if (row == 1 || row == (size / 2)  || row == size || (col == size && row <= ceil(size / 2)) || (col == 1 && row > size / 2))
                {
                colour(color);
                printf("%c ", symbol);
            }
            else
                printf("  ");
        }
        printf("\n");
    }
}

void display(struct two object)

{
     
     printf("\nsize =%d",object.size);
     printf("\ncolor =%d",object.color);
     printf("\nsymbol =%c\n",object.symbol);

}


int main()
{
  
    struct two object;

    printf("Enter size of digit :");
    scanf("%d", & object.size);
    printf("Enter symbol for digit:");
    scanf(" %c", & object.symbol);
    printf("Enter colour for fill:\n0 for black,1 for blue,2 for green, 3 for cyan, 4 for red , 5 for magenta ,6 for yellow, 7 for white");
    scanf("%d", & object.color);
    display(object);
    printNumberTwo(object);
    
    return 0;
}