// WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement
#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    printf("Enter two numbers and operation: ");
    scanf("%d %c %d", &num1, &op, &num2);
    if (op == '+')
        printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
    else if (op == '-')
        printf("\n%d - %d = %d\n", num1, num2, num1 - num2);
    else if (op == '*')
        printf("\n%d * %d = %d\n", num1, num2, num1 * num2);
    else if (op == '/')
    {
        if (num2 != 0)
            printf("\n%d / %d = %.2lf\n", num1, num2, ((float)num1) / ((float)num2));
        else
            printf("\nError! Division by zero is not posible.\n");
    }
    else if (op == '%')
    {
        if (num2 != 0)
            printf("\n%d %% %d = %d\n", num1, num2, num1 % num2);
        else
            printf("\nError! Modulus division by zero is not possible.\n");
    }
    return 0;
}