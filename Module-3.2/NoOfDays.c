// .Write a program in C to read any Month Number in integer and display the number of days for this month.
#include <stdio.h>
int main()
{
    int month, year;
    printf("Enter the month no: ");
    scanf("%d", &month);
    printf("Enter the year: ");
    scanf("%d", &year);
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nNumber of Days = %d\n", 31);
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            printf("\nNumber of Days = %d\n", 29);
        else
            printf("\nNumber of Days = %d\n", 28);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\nNumber of Days = %d\n", 30);
        break;
    default:
        printf("\nInvalid Month");
    }
    return 0;
}