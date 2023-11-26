#include <stdio.h>
int main()
{
    int n, i, x = 1, y = 2;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The series is: ");
    printf("%d %d ", x, y);
    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        printf("%d ", x *= 3);
        else
        printf("%d ", y *= 3);
    }
    return 0;
}