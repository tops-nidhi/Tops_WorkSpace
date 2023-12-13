// WAP to accept two integers and check whether they are equal or not
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("\nEnter second integer: ");
    scanf("%d", &b);
    if (a == b)
    printf("\nThe given numbers are equal.");
    else
    printf("\nThe given numbers are not equal.");
    return 0;
}