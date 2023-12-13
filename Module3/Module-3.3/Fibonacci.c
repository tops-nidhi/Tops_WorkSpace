// WAP to print Fibonacci series up to given numbers
#include <stdio.h>
int main()
{
    int n, num1 = 0, num2 = 1;
    printf("Enter the number of terms for Fibonacci Series: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer");
    }
    else
    {
        printf("Fibonacci Series: %d ", num1);

        printf("%d ", num2);
        for (int i = 2; i < n; i++)
        {
            int sum = num1 + num2;
            printf("%d ", sum);
            num1 = num2;
            num2 = sum;
        }
    }
    return 0;
}