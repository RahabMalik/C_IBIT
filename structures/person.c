#include <stdio.h>
#include <string.h>
int main()
{
    struct Person
    {
        char name[50];
        int salary;
        int age;
    } A, B;
    strcpy(A.name, "alif");
    A.salary = 200000;
    A.age = 21;
    strcpy(B.name, "Rehab");
    B.salary = 100000;
    B.age = 19;
    printf("%s\n", A.name);
    //printf("%d\n", B.salary);
    printf("%d\n", B.age);

    return 0;
}