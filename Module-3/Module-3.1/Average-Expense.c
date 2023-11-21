// WAP to find the average of expense
#include <stdio.h>
int main()
{
    int i, n = 5;
    float sum = 0.0, avg;
    for (i = 1; i <= n; ++i)
    {
        printf("\nEnter monthly expense %d: ", i);
        scanf("%f", &sum);
    }
    avg = sum / n;
    printf("\nAverage Expense is Rs%.2f\n", avg);
    return 0;
}