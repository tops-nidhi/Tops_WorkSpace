// WAP to calculate and print the electricity bill
#include <stdio.h>
int main()
{
    int id;
    char name[40];
    float units, charge = 0.0;
    printf("Enter Customer Id: ");
    scanf("%d", &id);
    printf("\nEnter Name: ");
    scanf("%s", name);
    printf("\nEnter Units Consumed: ");
    scanf("%f", &units);

    // Calculate unit charges
    if (units <= 350)
        charge += (units * 1.20);
    else if ((units > 350) && (units < 600))
        charge += (units * 1.50);
    else if ((units >= 600) && (units < 800))
        charge += (units * 1.80);
    else if (units >= 800)
        charge += units * 2.00;

    // Calculate surcharge
    if (charge > 800)
        charge += (charge * 0.18);
    else if (charge < 256)
        charge = 256;

    // Display bill
    printf("\n\tDear Customer %s \t\tBill No.:%d\nUnits Consumed:%f\nCharge for Units:%f\nTotal Amount To Be Paid:%f\n", name, id, units, charge);
    return 0;
}