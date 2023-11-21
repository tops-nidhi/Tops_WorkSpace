// WAP to find the area of rectangle
#include <stdio.h>
int main() {
    int length, breadth;
    printf("Enter the length and breadth of a rectangle:\n");
    scanf("%d %d", &length, &breadth);
    int area = length * breadth;
    printf("The area of the rectangle is %d\n", area);
    return 0;
}