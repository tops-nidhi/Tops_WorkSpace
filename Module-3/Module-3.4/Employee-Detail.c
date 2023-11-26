// Write a program of structure of 5 employees that provides the following information-print and display: 
 #include <stdio.h>

struct employee
{
    int no, age;
    char name[50], address[150];
}em[5];

int main() {
    int i;

    for (i = 0; i < 5; i++)
	{
        printf("Enter Employee no.: ");
        scanf("%d", &em[i].no);
        printf("Enter Employee name: ");
        scanf("%s", &em[i].name);
        printf("Enter Employee Address: ");
        scanf("%s", &em[i].address);
        printf("Enter Employee age: ");
        scanf("%d", &em[i].age);
    }

    for (i = 0; i < 5; i++)
	{
        printf("Employee no.: %d\tEmployee Name: %s\tEmployee Address: %s\tEmployee Age: %d\n", em[i].no, em[i].name, em[i].address, em[i].age);
    }

    return 0;
}