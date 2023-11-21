// WAP to convert days into months
#include <stdio.h>
int main()
{
    int d, m;
    printf("Enter the number of days: ");
    scanf("%d", &d);
    m = d / 30;
    printf("\n%d day is equal to %d month.", d, m);
    return 0;
}