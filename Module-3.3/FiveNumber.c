// WAP to print Five number as per user's choice
#include <stdio.h>
int main()
{
    int num[5];
    int i;

    // To get the number from the users
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    // To print entered numbers
    printf("Entered 5 numbers are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d /n", num[i]);
    }
    return 0;
}