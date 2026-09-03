#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter an expression:\n");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '+')
            printf("+ is Addition Operator\n");

        else if (str[i] == '-')
            printf("- is Subtraction Operator\n");

        else if (str[i] == '*')
            printf("* is Multiplication Operator\n");

        else if (str[i] == '/')
            printf("/ is Division Operator\n");
    }

    return 0;
}