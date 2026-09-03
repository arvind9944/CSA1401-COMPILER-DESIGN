#include <stdio.h>

int main()
{
    char op1, op2, op3, op4;
    char oper1, oper2, oper3;

    printf("Enter expression in the form a+b*c-d: ");
    scanf("%c%c%c%c%c%c%c",
          &op1, &oper1, &op2,
          &oper2, &op3,
          &oper3, &op4);

    printf("\nThree Address Code:\n");

    printf("t1 = %c %c %c\n", op2, oper2, op3);
    printf("t2 = %c %c t1\n", op1, oper1);
    printf("t3 = t2 %c %c\n", oper3, op4);

    return 0;
}