// WAP to create the marksheet
#include <stdio.h>

int main()
{
    char nm[20];
    printf("Enter the your name: ");
    scanf(" %s", &nm);
    int c, java, js;
    float total_marks = 0;
    printf("\nEnter marks in C:");
    scanf("%d", &c);
    total_marks += c;
    printf("\nEnter marks in Java:");
    scanf("%d", &java);
    total_marks += java;
    printf("\nEnter marks in JavaScript:");
    scanf("%d", &js);
    total_marks += js;
    if (java >= 35 || c >= 35 || js >= 35)
    {
        if (total_marks >= 95)
        {
            printf("\n%s has obtained an A grade.", nm);
        }
        else if (total_marks >= 85 && total_marks < 95)
        {
            printf("\n%s has obtained a B grade.", nm);
        }
        else if (total_marks >= 75 && total_marks < 85)
        {
            printf("\n%s has obtained a C grade.", nm);
        }
        else if (total_marks >= 65 && total_marks < 75)
        {
            printf("\n%s has obtained a D grade.", nm);
        }
        else
        {
            printf("\n%s has obtained an F grade.", nm);
        }
    }
    else
    {
        printf("\nYou are fail\n Beter Luck Next time.");
    }
    return 0;
}