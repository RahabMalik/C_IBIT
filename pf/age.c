#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter an age:");
    scanf("%d", &x);
    if (x < 0)
        printf("Not Born");
    else if (x >= 0 && x <= 1)
        printf("infant");
    else if (x >= 1 && x < 5)
        printf("Toddler");
    else if (x >= 6 && x <= 12)
    {
        printf("Enter a gender\n 0 for male and 1 for girl:");
        scanf("%d", &y);
        if (y == 0)
            printf("Boy");
        else
            printf("Girls");
    }
    else if (x >= 13 && x <= 19)
    {
        printf("Enter a gender\n 0 for male and 1 for girl:");
        scanf("%d", &y);
        if (y == 0)
            printf("Guy");
        else
            printf("Gal");
    }
    else if (x >= 20 && x < 60)
    {
        printf("Enter a gender\n0 for male and 1 for girl\n");
        scanf("%d", &y);
        if (y == 0)
            printf("Gentlemen");
        else
            printf("Gentlewomen");
    }
    else if (x >= 60 && x <= 70)
    {
        printf("Enter a gender\n0 for male and 1 for girl\n");
        scanf("%d", &y);
        if (y == 0)
            printf("Old man");
        else
            printf("Old women");
    }
    else if (x > 70)
    {
        printf("Enter a gender\n0 for male and 1 for girl\n");
        scanf("%d", &y);
        if (y == 0)
            printf("dead");
        else
            printf("Old women");
    }
    else
        printf("Dead");

    return 0;
}