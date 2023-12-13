// Write a program in C to print individual characters of a string in reverse order
#include <stdio.h>
int main()
{
    int i;
    char str[50];
    printf("Enter the string: ");
    scanf("%s", &str);
    int len = strlen(str);
    printf("\nIndividual charecter from the string are: ");
    i = len -1;
    while (i > 0)
    {
        printf("%c, ", str[i]);
        i--;
    }
    return 0;
}