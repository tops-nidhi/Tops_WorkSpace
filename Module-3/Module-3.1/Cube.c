// WAP to find the area of cube
#include <stdio.h>
#include <math.h>

int main() {
    int s, area;
    printf("Enter the length of a side: ");
    scanf("%d", &s);
    area = 6 * pow(s, 2);
    printf("\nThe area of the cube is %d square units.", area);
    return 0;
}