// Write a program in C to extract a substring from a given string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    int start, end;
    int i;
    printf("Enter a string: ");
    gets(str);
    printf("Enter the starting position of substring: ");
    scanf("%d", &start);
    printf("Enter the ending position of substring: ");
    scanf("%d", &end);
    printf("\nSub string is: ");
    for (i = start - 1; i < end; i++)
    {
        printf("\n%c", str[i]);
    }
    return 0;
}
