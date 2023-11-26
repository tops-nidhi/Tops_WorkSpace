// WAP of Addition, Subtraction, Multiplication and Division using Switch case and function
#include <stdio.h>
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }
int main()
{
    int num1;
    int num2;
    printf("Enter 2 number: ");
    scanf("%d %d", &num1, &num2);
    int choice;
    printf("\n\t\t-----------------Menu----------------\n\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n\t4.Division\n");
    printf("\nChoose the operation you want to perform:\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Result of addition is %d", add(num1, num2));
        break;
    case 2:
        printf("Result of subtraction is %d", sub(num1, num2));
        break;
    case 3:
        printf("Result of multiplication is %d", mul(num1, num2));
        break;
    case 4:
        if (num2 == 0)
            printf("Divistion isn't posible.");
        else
            printf("Result of division is %d", div(num1, num2));
        break;
    default:
        printf("Invalid choice");
    }
    return 0;
}