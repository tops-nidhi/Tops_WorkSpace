#include <stdio.h>
int main()
{
    float i, n, sum = 0;
    printf("Enter the number of terms: ");
    scanf("%f", &n);
    for (i = 1; i <= n; i++)
    {
        printf(" %.0f/%.0f ", i, i + 1);
        if ((int)i % 2 == 1)
        {
            printf("-");
            sum -= i / (i + 1);
        }
        else
        {
            printf("+");
            sum += i / (i + 1);
        }
    }
    printf("\b\b %f", sum);
    return 0;
}