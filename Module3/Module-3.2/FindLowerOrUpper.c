// WAP to Check entered charecter is Uppercase or Lowercase or Digit or Special Character
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    // Check charecter is upper case or lower case
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch >= 'A' && ch <= 'Z')
            printf("\n%c is an uppercase letter.", ch);
        else
            printf("\n%c is a lowercase letter.", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("\n%c is a digit.", ch);
    }
    else
    {
        printf("\n%c is a special character.", ch);
    }
    return 0;
}