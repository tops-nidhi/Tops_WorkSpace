// Write a C program to calculate profit and loss on a transaction
#include <stdio.h>
int main()
{
    int cost, price;
    float profit_loss;
    printf("Enter the cost of item: ");
    scanf("%d", &cost);
    printf("\nEnter the selling price of item: ");
    scanf("%d", &price);
    if (price > cost)
    {
        profit_loss = price - cost;
        printf("\nProfit is %0.2f\n", profit_loss);
    }
    else if (price < cost)
    {
        profit_loss = cost - price;
        printf("\nLoss is %0.2f\n", profit_loss);
    }
    else
    {
        printf("\nNo Profit or Loss");
    }
    return 0;
}