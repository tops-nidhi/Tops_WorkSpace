// WAP to find out user's remaining salary after deducting 10% insurance and 10% loan installment
#include <stdio.h>
int main()
{
    int salary, insurance, loan_installment;
    printf("Enter your salary: ");
    scanf("%d", &salary);
    insurance = (salary * 10) / 100;
    loan_installment = (salary * 10) / 100;
    salary -= insurance + loan_installment;
    printf("\nYour remaining salary is %d\n", salary);
    return 0;
}