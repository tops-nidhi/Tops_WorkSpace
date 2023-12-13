// Write a program you have to make a summation of first and last Digit
#include <stdio.h>
int main()
{
    int n, sum = 0;
    int first_num, last_num;
    printf("Enter a number: ");
    scanf("%d", &n);
    last_num  = n % 10;
    while (n >= 10){
       n /= 10;
    } 
    first_num = n;
    sum = first_num + last_num;
    printf("Sum of first and last digit is: %d", sum);
    return 0;
}