// WAP to find the area of squre
#include <stdio.h>
int main() {
    int side;
    printf("Enter the length of a side: ");
    scanf("%d", &side);
    int area = side * side;
    printf("The area is %d\n", area);
    return 0;
}