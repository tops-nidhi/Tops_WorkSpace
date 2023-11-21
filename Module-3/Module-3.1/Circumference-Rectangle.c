// WAP to find the circumference of rectangle
#include<stdio.h>
int main() {
    float l, b;
    printf("Enter length of rectangle : ");
    scanf("%f", &l);
    printf("\nEnter breadth of rectangle : ");
    scanf("%f", &b);
    float c = 2 * (l + b);
    printf("\nCircumference of Rectangle is %0.2f", c);
    return 0;
}