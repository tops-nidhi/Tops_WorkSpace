// WAP to swap two number
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("\nEnter the second number: ");
    scanf("%d", &b);
    // With using third variable
    int temp = a;
    a = b;
    b = temp;
    printf("\nThe swapped numbers are %d and %d.", a, b);
    // Withoout using third variable
    /*
        a = a + b;
        b = a - b;
        a = a - b;
        printf("\nThe swapped numbers are %d and %d.", a, b);
    */

    return 0;
}