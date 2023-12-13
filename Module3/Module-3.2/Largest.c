// WAP to find the largest of three numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);
    printf("\nEnter third number: ");
    scanf("%d", &c);
    if (a > b && a > c)
        printf("\nLargest number is %d.", a);
    else if (b > a && b > c)
        printf("\nLargest number is %d.", b);
    else
        printf("\nLargest number is %d.", c);
    return 0;
}