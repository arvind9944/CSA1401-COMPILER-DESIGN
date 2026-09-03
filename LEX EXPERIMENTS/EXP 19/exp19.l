%{
#include <stdio.h>

int characters = 0;
int words = 0;
int lines = 0;
%}

%%
[ \t]+              ;
\n                  { lines++; }
"//".*              ;
"/*"([^*]|\*+[^*/])*"*/"   ;

[A-Za-z0-9_]+       { words++; characters += yyleng; }

.                   { characters += yyleng; }
%%

int main()
{
    FILE *fp;

    fp = fopen("sample.c", "r");

    if (fp == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    yyin = fp;

    yylex();

    printf("\nNumber of Characters = %d\n", characters);
    printf("Number of Words = %d\n", words);
    printf("Number of Lines = %d\n", lines);

    fclose(fp);

    return 0;
}