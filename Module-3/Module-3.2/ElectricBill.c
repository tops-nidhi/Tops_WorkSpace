// WAP to calculate total electricity bill as per electricity unit charges
#include <stdio.h>
int main()
{
    int unit;
    float amount, total, sur_charge;
    printf("Enter units consumed: ");
    scanf("%d", &unit);
    if (unit <= 50)
    {
        amount = unit * 0.50;
    }
    else if (unit <= 150)
    {
        amount = (unit * 0.75);
    }
    else if (unit <= 250)
    {
        amount = (unit * 1.20);
    }
    else
    {
        amount = (unit * 1.50);
    }
    sur_charge = amount * 20 / 100;
    total = amount + sur_charge;

    printf("Electricity Bill = Rs. %.2f", total);

    return 0;
}