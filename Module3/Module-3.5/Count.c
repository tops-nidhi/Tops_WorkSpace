// Write a program in C to count the total number of alphabets, digits and special characters in a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int alpha = 0, digit = 0, special = 0;
    printf("Enter the string: ");
    scanf("%d", &str);

    if((str>= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
    {
        alpha++;
    }
    else if(str >= '0' && str <= '9'){
        digit++;
    }
    else{
        special++;
    }
    return 0;
}