// WAP to calculate the person's annual salary
// given his/her hourly rate and working hours per day.
#include <stdio.h>
int main()
{
    float msalary, annual;
    printf("Enter monthly salary: ");
    scanf("%f", &msalary);
    annual = msalary * 12;
    printf("\nTotal Annual Salary = %.2f\n", annual);
    return 0;
}