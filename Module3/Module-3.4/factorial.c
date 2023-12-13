// WAP to find factorial using recursion
#include <stdio.h>

long int fact(long int no)
{
    if (no <= 1)
    {
        return 1;
    }
    return no * fact(no - 1);
}
int main()
{
    long int n;
    printf("Enter number:");
    scanf("%ld", &n);
    printf("Factorial is %ld", fact(n));
}