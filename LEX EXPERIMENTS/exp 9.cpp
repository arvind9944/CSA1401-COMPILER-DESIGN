#include <stdio.h>

int main()
{
    char lhs[20], alpha[50], beta[50];

    printf("Enter the Non-Terminal: ");
    scanf("%s", lhs);

    printf("Enter alpha (recursive part): ");
    scanf("%s", alpha);

    printf("Enter beta (non-recursive part): ");
    scanf("%s", beta);

    printf("\nGrammar after eliminating Left Recursion:\n");

    printf("%s -> %s%s'\n", lhs, beta, lhs);
    printf("%s' -> %s%s' | e\n", lhs, alpha, lhs);

    return 0;
}