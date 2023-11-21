// WAP to solve below eequation
//  I need to give 5 apples to each student. How many apples are required?
#include <stdio.h>
int main()
{
    int n, apples;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    apples = n * 5;
    printf("You require %d apples.", apples);
    return 0;
}