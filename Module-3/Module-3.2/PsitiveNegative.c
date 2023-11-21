// WAP to check whether a number is negative, positive or zero.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a digit: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("The number %d is positive.\n", num);
    }
    else if (num < 0)
    {
        printf("The number %d is negative.\n", num);
    }
    else
    {
        printf("The number %d is zero.\n", num);
    }
    return 0;
}