#include <stdio.h>
#include <string.h>
int main()
{
    int ch2, ch3;
    char ch1[20];
    printf("Enter student name");
    scanf("%s", &ch1);
    printf("Enter age:");
    scanf("%d", &ch2);
    printf("Enter num:");
    scanf("%d", &ch3);
    FILE *file;
    file = fopen("rehab", "w");
    if (file == NULL)
    {
        printf("Unable to open the file.\n");
    }

    fprintf(file, "%s %d %d", ch1, ch2, ch3);

    fclose(file);
    return 0;
}
