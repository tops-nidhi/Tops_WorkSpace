// WAP to Find the Character Is Vowel or Not
// C program using switch case statement.
#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':   
        case 'U':
        printf("\n%c is vowel.", c);
        break;
    default:
        printf("\n%c is consonents.", c);
        break;
    }
    return 0;
}