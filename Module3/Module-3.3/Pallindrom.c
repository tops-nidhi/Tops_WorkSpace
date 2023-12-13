// WAP to take a 3 numbers from user using while loop and check each numbers palindrome or not.
#include <stdio.h>
int main()
{
    int i = 0, rev = 0, temp;
    int num;
    while (i < 3)
    {
        printf("\nEnter number: ");
        scanf("%d", &num);
        i++;
        temp = num;
        while (temp != 0)
        {
            rev = rev * 10 + (temp % 10);
            temp /= 10;
        }
        if (num == rev)
            printf("%d is a palindrome.", num);
        else
            printf("%d is not a palindrome.", num);
    }
    return 0;
}