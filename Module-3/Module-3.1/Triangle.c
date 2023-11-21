// WAP to find the area of triangle
#include<stdio.h>
int main()
{
    int base, height;
    printf("Enter the length of base and height of triangle: ");
    scanf("%d %d", &base, &height);
    float area = 0.5 * base * height;
    printf("\nThe Area of Triangle is %.2f\n", area);

    return 0;
}