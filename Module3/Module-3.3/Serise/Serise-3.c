#include <stdio.h>
int main()
{
    int n, i, j, sum = 0, temp = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)
    {
        printf("(");
        for (j = 1; j <= i; ++j)
        {
            printf("%d+ ", j);
            temp += j;
        }
        printf("%d", temp);
        printf(") + ");
        sum += temp;
        temp = 0;
    }
    printf("\b\b=%d", sum);
    return 0;
}
