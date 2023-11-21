// WAP to find circumference of square
#include <stdio.h>
#include <math.h>
int main() {
    int side;
    printf("Enter the length of sides: ");
    scanf("%d", &side);
    double c = 4 * (double)side;
    printf("The Circumference is %.3lf\n", c);
    return 0;
}