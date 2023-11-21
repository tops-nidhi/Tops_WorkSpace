// WAP to find the number is negative or positive
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("\nThe entered number %d is positive.", num);
    }
    else if (num == 0)
    {
        printf("\nThe entered number %d is zero.", num);
    }
    else
    {
        printf("\nThe entered number %d is negative.", num);
    }
    return 0;
}