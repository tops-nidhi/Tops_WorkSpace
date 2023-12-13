// Write a program to find out the max from given number
#include <stdio.h>
int main() {
    int no;
    int max, i;
    printf("Enter a number: ");
    scanf("%d", &no);
    max = no % 10;
    while (no != 0) {
    no = no / 10;
        i = no % 10;
        if (i > max)
        max = i;
        }
        printf("Max number is %d", max);
    return 0;
}