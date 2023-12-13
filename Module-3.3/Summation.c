// Write a program make a summation of given number
#include <stdio.h>
int main()
{
    int num, sum = 0;
    int temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp= num;
    for (int i=1; i<=num; i++) {
        sum += (temp %10);
        temp /= 10;
    }
        printf("Summation of %d is %d", num, sum);
        return 0;
}