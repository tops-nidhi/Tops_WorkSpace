// WAP to check no is armstrong or not
#include <stdio.h>
#include <math.h>
int main()
{
    int n, r, sum = 0, temp, len = 0, x;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        len++;
        temp = temp / 10;
    }

    temp = n;
    while (temp > 0)
    {
        x = temp % 10;
        sum = sum + pow(x, len);
        temp = temp / 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number", n);
    else
        printf("%d is not an Armstrong number", n);
    return 0;
}