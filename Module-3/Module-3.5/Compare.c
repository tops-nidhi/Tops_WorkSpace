// WAP to Compare two string without using built in function
#include <stdio.h>

int main()
{
    char str1[50], str2[50];
    int i;

    printf("Enter the first string: ");
    scanf("%s", &str1);
    printf("Enter the second string: ");
    scanf("%s", &str2);
    
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            printf("The strings are not equal.\n");
        }
        else{
            printf("The strings are equal.\n");
        }
        i++;
    }
    
    return 0;
}