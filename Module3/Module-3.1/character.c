// WAP to find the charecter value using ascii charecter
#include<stdio.h>
int main()
{
    int c;
    printf("Enter a ASCII value: ");
    scanf("%d",&c);
    char val = (char)c;
    printf("\nThe charecter of ASCII value %c is %d.",c,val);
    return 0;
}