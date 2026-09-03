#include <stdio.h>

int main()
{
    char result, operand1, operand2, op;

    printf("Enter result variable: ");
    scanf(" %c", &result);

    printf("Enter first operand: ");
    scanf(" %c", &operand1);

    printf("Enter operator: ");
    scanf(" %c", &op);

    printf("Enter second operand: ");
    scanf(" %c", &operand2);

    printf("\nTarget Code:\n");

    printf("MOV R0, %c\n", operand1);

    if (op == '+')
        printf("ADD R0, %c\n", operand2);
    else if (op == '-')
        printf("SUB R0, %c\n", operand2);
    else if (op == '*')
        printf("MUL R0, %c\n", operand2);
    else if (op == '/')
        printf("DIV R0, %c\n", operand2);

    printf("MOV %c, R0\n", result);

    return 0;
}