// WAP to count the string length without using builtin function
#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d is the length of the string.", count);
    return 0;
}