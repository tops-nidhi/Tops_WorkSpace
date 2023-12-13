// WAP to find the are and circumference of circle
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    float r, area, circum;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = PI * pow(r, 2);
    circum = 2 * PI * r;
    printf("\nArea is %f\nCircumference is %f", area, circum);
    return 0;
}