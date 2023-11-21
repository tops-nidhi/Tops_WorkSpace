// WAP to calculate swap 2 numbers with using of multiplication and division
#include <stdio.h>
int main()
{
    int a = 5;
    int b = 3;
    printf("Before swapping:\n");
    printf("a = %d\nb = %d", a, b);
    /* Swap the values */
    a = a * b;
    b = a / b;
    a = a / b;
    printf("\nAfter swapping:\n");
    printf("a = %d\nb = %d", a, b);
    return 0;
}