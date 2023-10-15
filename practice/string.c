#include<stdio.h>
#include<string.h>
int main ()
{ 
    char str1[20] = "Hello, ";
    char str2[] = "world!";
    char str3[20];

    // String length
    printf("Length of str1: %zu\n", strlen(str1));

    // String copy
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // String concatenation
    strcat(str3, str2);
    printf("Concatenated string: %s\n", str3);

    // String comparison
    int result = strcmp(str1, str2);
    if (result < 0) {
        printf("str1 is less than str2\n");
    } else if (result > 0) {
        printf("str1 is greater than str2\n");
    } else {
        printf("str1 is equal to str2\n");
    }

    // String searching
    char *substr = strstr(str3, "world");
    if (substr != NULL) {
        printf("Substring found: %s\n", substr);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}


