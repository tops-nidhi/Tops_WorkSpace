// Write a program in C to count the total number of vowels or consonants in a string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    int vowel = 0, consonant = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            if (str[i] == 'A' || 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowel++;
            }
            else
            {
                consonant++;
            }
        }
    }
    return 0;
}