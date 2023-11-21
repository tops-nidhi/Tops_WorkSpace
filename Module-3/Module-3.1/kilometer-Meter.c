// WAP to convert kilometers into meters
#include <stdio.h>
int main() {
    float km, m;
    printf("Enter distance in kilometers: ");
    scanf("%f", &km);
    m = km * 1000;
    printf("\nDistance in meters is %f\n", m);
    return 0;
}