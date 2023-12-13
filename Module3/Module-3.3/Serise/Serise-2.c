#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, temp = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        printf("%d * %d = %d\t+ ", i, i, i * i);
        temp += pow(i, 2);
    }
    return 0;
}