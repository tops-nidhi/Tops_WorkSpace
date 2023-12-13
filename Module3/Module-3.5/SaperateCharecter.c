// WAP to separate individual characters from a string.
#include <stdio.h>
int main()
{
    int i = 0;
    char str[50];
    printf("Enter the string: ");
    scanf("%s", &str);
    printf("\nIndividual charecter from the string are: ");
    while (str[i] != '\0')
    {
        printf("%c, ", str[i]);
        i++;
    }

    return 0;
}