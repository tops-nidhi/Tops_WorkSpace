// WAP to check whether a triangle can be formed with the given values for the angles.
#include <stdio.h>
int main()
{
    int angle1, angle2, angle3;
    printf("Enter value of first angle: ");
    scanf("%d", &angle1);
    printf("\n");
    printf("Enter value of second angle: ");
    scanf("%d", &angle2);
    printf("\n");
    printf("Enter value of third angle: ");
    scanf("%d", &angle3);
    if (((angle1 + angle2) > 90) && ((angle1 + angle3) > 90) && ((angle2 + angle3) > 90))
    {
        printf("A  triangle can be formed.");
    }
    else
    {
        printf("Invalid triangle cannot be formed.");
    }
    return 0;
}