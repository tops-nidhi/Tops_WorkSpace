// WAP to calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the number of natural numbers to be summed: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of the first %d natural numbers is: %d", n,sum);

    return 0;
} 