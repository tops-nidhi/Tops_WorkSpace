//WAP to read temperature in centigrade and display a suitable message according to the temperature state
#include <stdio.h>
int main()
{
    int temp;
    printf("Enter Temperature : ");
    scanf("%d", &temp);
    if (temp < 0)
        printf("Freezing Weather");
    else if (temp <= 10)
        printf("Very Cold Weather");
    else if (temp <= 20)
        printf("Cold Weather");
    else if (temp <= 30)
        printf("Normal In Temp");
    else if (temp <= 40)
        printf("Its Hot");
    else
        printf("Its Very Hot");
    return 0;
}