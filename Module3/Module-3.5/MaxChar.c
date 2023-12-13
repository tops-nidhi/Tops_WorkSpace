// Write a program in C to find the maximum number of characters in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, max;
    printf("Enter a string: ");
    gets(str);
    max = strlen(str);
    printf("The maximum number of characters in the string is %d", max);
    return 0;
}