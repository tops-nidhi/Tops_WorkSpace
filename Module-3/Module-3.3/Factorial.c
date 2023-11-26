// WAP to print factorial of given number
#include <stdio.h>
int main()
{
    int num, i;
    int fact = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 0)
        printf("Factorial of %d is 1", num);
    else
    {
        for (i = 1; i <= num; i++)
        {
            fact *= i;
        }
        printf("\nFactorial of %d is %d", num, i);
    }
    return 0;
}