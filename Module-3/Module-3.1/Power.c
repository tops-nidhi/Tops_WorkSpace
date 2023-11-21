// WAP to C Program to Read Integer and Print First Three Powers
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("Enter an integer number : ");
    scanf("%d", &num);
    printf("\nFirst power of %d is %d.", num, pow(num, 1));
    printf("\nSecond power of %d is %d.", num, pow(num, 2));
    printf("\nThird power of %d is %d.", num, pow(num, 3));
    return 0;
}