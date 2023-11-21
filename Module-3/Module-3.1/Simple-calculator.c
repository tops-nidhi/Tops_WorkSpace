// WAP to make a calculator using arithmatic operator
#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Result = %d\n", num1 + num2);
    printf("Result = %d\n", num1 - num2);
    printf("Result = %d\n", num1 * num2);
    printf("Result = %.2f\n", ((float)num1 / num2));
    return 0;
}