// WAP to find the circumferance of triangle
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter length of sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    float cir = a + b + c;
    printf("\nCircumference = %.2f\n", cir);
    return 0;
}