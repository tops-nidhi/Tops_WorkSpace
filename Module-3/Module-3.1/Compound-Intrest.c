// WAP to calculate compound intrest
// Author: Satyam Kumar Verma
#include <stdio.h>
int main()
{
    float p, r, t;
    printf("Enter the principal amount\n");
    scanf("%f", &p);
    printf("Enter the rate of interest\n");
    scanf("%f", &r);
    printf("Enter the time in years\n");
    scanf("%f", &t);
    float ci = ((float)(pow(1 + ((float)r / 100), t)) * p) - p;
    printf("\nThe compound interest is %f", ci);
    return 0;
}