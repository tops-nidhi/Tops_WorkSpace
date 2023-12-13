// WAP to print number in reverse order
#include <stdio.h>
int main()
{
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    rev = num % 10;         // to get the last digit
    printf("\nNumber in reverse order: ");
    while (num >= 10)
    {
        printf("%d", rev);
        rev = num % 10;
        num /= 10;
    }

    return 0;
}