#include <stdio.h>
#include <stdlib.h>
#define boyut 10
#include <locale.h>
int A_harfi()
{
    int a=boyut;
    system ("color 3");
    // A harfi
    for(int i=1; i<=boyut; i++)
    {
        for (int k=1; k<2*boyut; k++)
        {
            if (k==a || k==boyut+i-1)
            {
                printf("*");
            }
            else if (k>=a && k<=boyut+i-1&& i==boyut/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        a--;
    }
    printf("\n\n");
    return 0;
}
int R_harfi()
{// R harfi
    int x=1;
    system ("color 3");
    for (int i=1; i<=boyut; i++)
    {
        for(int k=1; k<=boyut/2+1; k++)
        {
            if(k==1 || i==1 || i==boyut/2+1 || (i<=boyut/2 &&  k==boyut/2+1 ) || k==x)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        if(i>boyut/2)
        {
            x++;
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
int B_harfi()
{
    system ("color 3");
    //B harfi
    for (int i=1; i<=boyut; i++)
    {
        for(int k=1; k<=boyut; k++)
        {
            if(k==1 || ((i==1 || i==boyut|| i ==boyut/2+1)&& k<=boyut-1))
            {
                printf("*");
            }
            else if(i!=1 &&i!=boyut &&k==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
int I_harfi()
{
    system ("color 3");
    //I harfi
    for(int  i=1; i<=boyut; i++)
    {
        for(int k=1; k<=boyut; k++)
        {
            if(i==1|| i==boyut|| k==boyut/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
int K_harfi()
{
    int c=boyut/2+1;
    system ("color 3");
    //K harfi
    for(int i=1; i<=boyut; i++)
    {
        for(int k=1; k<=boyut/2+1; k++)
        {
            if(k==1||k==c)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        if(i<=boyut/2)
        {
            c--;
        }
        else
        {
            c++;
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
int L_harfi()
{
    system ("color 3");
    //L harfi
    for(int i=1; i<=boyut; i++)
    {
        for(int k=1; k<=boyut; k++)
        {
            if(k==1 || i==boyut)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
int T_harfi()
{
    system ("color 3");
    // T harfi
    for(int i=1; i<=boyut; i++)
    {
        for ( int k=1; k<=boyut; k++)
        {
            if(i==1||k==boyut/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n");
    return 0;
}
int sevgikalbi()
{
    system ("color 3");
    for( int i=boyut/2; i<=boyut; i+=2)
    {
        for(int k=1; k<boyut-i; k+=2)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("*");
        }
        for(int k=1; k<=boyut-i; k++)
        {
            printf(" ");
        }
        for(int k=1; k<=i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=boyut; i>=1; i--)
    {
        for(int k=i; k<boyut; k++)
        {
            printf(" ");
        }
        for(int k=1; k<=(i*2)-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    R_harfi();
    A_harfi();
    B_harfi();
    I_harfi();
    A_harfi();
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    sevgikalbi();
    printf("\n\n\n\n\n\n\n\n\n\n\n\n");
    K_harfi();
    I_harfi();
    R_harfi();
    A_harfi();
    T_harfi();
    L_harfi();
    I_harfi();
    setlocale(LC_ALL,"TURKISH");
    printf("Not: Void ile yapmayý denedim ama bir türlü olmadý yapamadým hocam.\n ");
    return 0;
}
