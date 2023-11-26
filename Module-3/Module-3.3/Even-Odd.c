// WAP to take 10 numbers from the user and find out below condition
/*
    a. How many Even numbers are there
    b. How many odd numbers are there
    c. Sum of even numbers
    d. Sum of odd numbers
*/
#include <stdio.h>
// #include <ctype.h>
int main()
{
    int i, num[10];
    printf("Enter 10 numbers:\n");
    for (i = 0; i < 2; ++i)
    {
        scanf("%d", &num[i]);
    }
    int sum_even = 0, sum_odd = 0;
    int count_even = 0, count_odd = 0;

    char choice;
    do
    {
        printf("\n\t\t---------------------Menu----------------------\n");
        printf("\n1. Even Numbers Counts: \n2. Odd Numbers Counts: \n3. Sum of Even Numbers: \n4. Sum of Odd Numbers: \n");
        printf("\nWhat you want to calculate: ");
        int ch;
        scanf("%d", &ch);
        for (i = 0; i < 10; i++)
        {
            if (num[i] % 2 == 0)
            {
                count_even++;
                sum_even += num[i];
            }
            else
            {
                count_odd++;
                sum_odd += num[i];
            }
        }
        switch (ch)
        {
        case 1:
            printf("Even Numbers Counts: %d\n", count_even);
            break;
        case 2:
            printf("Odd Numbers Counts: %d\n", count_odd);
            break;
        case 3:
            printf("Sum of Even Numbers: %d\n", sum_even);
            break;
        case 4:
            printf("Sum of Odd Numbers: %d\n", sum_odd);
            break;
        default:
            printf("This choice isn't available.....");
            break;
        }
        printf("\nDo you want to continue? Y/N : ");
        scanf(" %c", &choice);
    // } while ((tolower(choice)) == 'y');
    } while (choice == 'y' || choice == 'Y');
    return 0;
}