#include <stdio.h>

int main()
{
    printf("Given Grammar:\n");
    printf("S -> AaA | BbBa\n");
    printf("A -> e\n");
    printf("B -> e\n");

    printf("\nFOLLOW Sets:\n");

    printf("FOLLOW(S) = { $ }\n");
    printf("FOLLOW(A) = { a, $ }\n");
    printf("FOLLOW(B) = { b }\n");

    return 0;
}