// Write a program in C to combine two strings manually
#include <stdio.h>

int concate(char str1[], char str2[])
{
    int i, j;
    j = strlen(str1);
    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[j] = str2[i];
        j++;
    }
    str1[j] = '\0';
    return 0;
}
int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    
    concate(str1, str2);
    printf("The combined string is: %s", str1);
    return 0;
}