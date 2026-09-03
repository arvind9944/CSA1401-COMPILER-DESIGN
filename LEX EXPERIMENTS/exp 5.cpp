#include <stdio.h>

int main()
{
    char ch;
    int spaces = 0, newlines = 0;

    printf("Enter text and press # to stop:\n");

    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            spaces++;

        if (ch == '\n')
            newlines++;
    }

    printf("\nNumber of Whitespaces = %d\n", spaces);
    printf("Number of New Lines = %d\n", newlines);

    return 0;
}