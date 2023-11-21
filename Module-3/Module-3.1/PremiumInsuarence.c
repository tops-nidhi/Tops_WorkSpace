//  WAP to calculate person’s insurance premium based on salary
#include <stdio.h>
int main()
{
    int salary;
    printf("Enter your annual salary in rupees : ");
    scanf("%d", &salary);
    if (salary <= 5000)
    {
        printf("Insurance Premium = %d\n", salary * .3);
    }
    else if (salary > 5000 && salary <= 8000)
    {
        printf("Insurance Premium = %d\n", salary * .4);
    }
    else
    {
        printf("Insurance Premium = %d\n", salary * .6);
    }
}