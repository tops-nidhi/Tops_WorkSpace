// WAP to find the minimum number among three number using conditional operator
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
    (a < b) ? ((a < c) ? printf("%d is Mimum number.", a) : printf("%d is Mimum number.", c)) : ((b < c) ? printf("%d is Mimum number.", b) : printf("%d is Mimum number.", c));
    return 0;
}