// WAP to input the week number and print week day
#include<stdio.h>
int main() {
    int n, i;
    printf("Enter a week number: ");
    scanf("%d", &n);
    switch (n) {
        case 1 : printf("\nMonday"); break;
        case 2 : printf("\nTuesday"); break;
        case 3 : printf("\nWednesday"); break;
        case 4 : printf("\nThursday"); break;
        case 5 : printf("\nFriday"); break;
        case 6 : printf("\nSaturday"); break;
        case 7 : printf("\nSunday"); break;
        default : printf("\nInvalid Week Number.");
        }
        return 0;
}