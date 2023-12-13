//  WAP to find reverse of string using recursion
#include <stdio.h>
void reverse(){
    char c;
    scanf("%c", &c);
    if (c != '\n')
    {
        reverse();
        printf("%c", c);
    }
};
int main()
{
    printf("Enter sentence:");
    reverse();
    return 0;
}