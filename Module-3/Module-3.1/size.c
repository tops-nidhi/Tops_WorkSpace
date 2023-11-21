// WAP to get the two numbers from the users and find out its sum check it size
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter first number:");
    scanf("%d", &num1);
    printf("\n Enter second number:");
    scanf("%d", &num2);
    int sum = num1 + num2;
    if (sum < 0)
    {
        printf("\n Sum is small.");
    }
    else if (sum <= 99)
    {
        printf("\n Sum is a medium.");
    }
    else if (sum >= 1000)
    {
        printf("\n Sum is too large.");
    }
    else
    {
        printf("\n Sum is large.");
    }
    return 0;
}