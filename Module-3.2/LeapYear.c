// WAP to find the year is leap year or not
#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a year: ");
    scanf("%d", &yr);                                            // Get the year
    if ((((yr % 4 == 0) && (yr % 100 != 0)) || (yr % 400 == 0))) // Checking for Leap Year
        printf("\nThe given year is a leap year.");
    else
        printf("\nThe given year is not a leap year.");
    return 0;
}