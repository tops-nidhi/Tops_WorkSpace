// WAP to get 5 employee name and salary and find average salary
#include <stdio.h>
int main()
{
    int i;
    float avg, sum = 0;
    char name[10][20];
    printf("Enter the names of employees:\n");
    printf("\nAnd enter their respective salaries: \n");
    for (i = 0; i < 5; ++i)
    {
        scanf("%s", &name[i]);
        scanf("%f", &sum);
        sum += sum;
    }
    avg = sum / 5;
    printf("\nAverage Salary is %f\n", avg);
    return 0;
}