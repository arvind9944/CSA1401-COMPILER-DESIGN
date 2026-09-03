#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];

    printf("Enter a line:\n");
    fgets(str, sizeof(str), stdin);

    if (strstr(str, "//") != NULL)
    {
        printf("It is a Single Line Comment.\n");
    }
    else if (strstr(str, "/*") != NULL &&
             strstr(str, "*/") != NULL)
    {
        printf("It is a Multi Line Comment.\n");
    }
    else
    {
        printf("It is Not a Comment.\n");
    }

    return 0;
}