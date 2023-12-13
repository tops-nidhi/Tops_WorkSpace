// WAP to accept the height of a person in centimeters and categorize the person according to their height.
#include <stdio.h>
int main()
{
    int h;
    printf("Enter your height: ");
    scanf("%d", &h);
    if (h <= 50)
        printf("You are Short.\n");
    else if (h > 50 && h <= 60)
        printf("Your height is Average.\n");
    else if (h > 60 && h <= 70)
        printf("Your height is Medium.\n");
    else if (h > 70 && h <= 80)
        printf("Your height is Tall.\n");
    else
        printf("You are Very Tall.\n");
    return 0;
}