// WAP to find the charecter value using ascii charecter
// Author : Abhishek Sharma
#include<stdio.h>
int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    int val = (int)c;
    printf("\nThe ASCII value of %c is %d.",c,val);
    return 0;
}