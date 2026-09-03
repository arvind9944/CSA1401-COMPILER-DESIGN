#include <stdio.h>

int main()
{
    printf("Given Grammar:\n");
    printf("S -> AaA | BbBa\n");
    printf("A -> e\n");
    printf("B -> e\n");

    printf("\nFIRST Sets:\n");

    printf("FIRST(A) = { e }\n");
    printf("FIRST(B) = { e }\n");
    printf("FIRST(S) = { a, b }\n");

    return 0;
}