#include <stdio.h>
#include <string.h>

char input[100];
int pos = 0;

int E();
int Edash();
int T();
int Tdash();
int F();

int E()
{
    if (T())
        return Edash();

    return 0;
}

int Edash()
{
    if (input[pos] == '+')
    {
        pos++;

        if (T())
            return Edash();

        return 0;
    }

    return 1;
}

int T()
{
    if (F())
        return Tdash();

    return 0;
}

int Tdash()
{
    if (input[pos] == '*')
    {
        pos++;

        if (F())
            return Tdash();

        return 0;
    }

    return 1;
}

int F()
{
    if (input[pos] == '(')
    {
        pos++;

        if (E() && input[pos] == ')')
        {
            pos++;
            return 1;
        }

        return 0;
    }

    if (input[pos] == 'i' &&
        input[pos + 1] == 'd')
    {
        pos += 2;
        return 1;
    }

    return 0;
}

int main()
{
    printf("Given Grammar:\n");
    printf("E  -> TE'\n");
    printf("E' -> +TE' | e\n");
    printf("T  -> FT'\n");
    printf("T' -> *FT' | e\n");
    printf("F  -> (E) | id\n");

    printf("\nEnter the input string: ");
    scanf("%s", input);

    if (E() && input[pos] == '\0')
        printf("String is Accepted.\n");
    else
        printf("String is Rejected.\n");

    return 0;
}