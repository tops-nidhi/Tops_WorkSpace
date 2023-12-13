// WAP Find out length of string without using inbuilt function
#include<stdio.h>
int length()
{
    char str[100];
    int i,count=0;
    printf("Enter a string: ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    printf("Length of string is: %d", length());
    return 0;
}