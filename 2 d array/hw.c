#include <stdio.h>

int main()
{
    int students = 4;
    int data[students][2];  // Matrix to store roll number and marks
    int i, j;

    // Input roll numbers and marks for each student
    for (i = 0; i < students; i++)
    {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &data[i][0]);

        printf("Enter marks obtained by student %d: ", i + 1);
        scanf("%d", &data[i][1]);
    }

    // Print roll numbers and marks
    printf("\nRoll Number\tMarks\n");
    for (i = 0; i < students; i++)
    {
        printf("%d\t\t%d\n", data[i][0], data[i][1]);
    }

    return 0;
}
