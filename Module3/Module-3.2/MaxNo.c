// WAP to find the max no among three number using conditional operator
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
    (a > b) ? ((a > c) ? printf("%d is Max number.", a) : printf("%d is max number.", c)) : ((b > c) ? printf("%d is Max number.", b) : printf("%d is max number.", c));
    return 0;
}