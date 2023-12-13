#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        printf("%d + ", i);
        i += i;
    }
    printf("\nAdddition is: %d", i);
    return 0;
}