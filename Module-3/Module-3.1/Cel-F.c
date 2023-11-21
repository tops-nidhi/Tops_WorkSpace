// WAP to convert temperature Fahrenheit to Celsius
#include <stdio.h>
int main()
{
    float f, c;
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * 5 / 9;
    printf("\nTemperature in Celsius is %0.2f\n", c);
    return 0;
}