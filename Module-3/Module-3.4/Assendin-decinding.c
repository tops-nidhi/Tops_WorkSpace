// WAP to sort array in ascending or descending order as per user’s choice

#include <stdio.h>
int assesnding(int array[10])
{
    int temp;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        printf("Value of the array[%d]: %d\n", i, array[i]);
    }
}

int descending(int array[10])
{
    int temp;
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            if (array[i] < array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main()
{
    int array[10];
    int i, choice;
    printf("Enter the elements of array: ");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("In which manner you want to arrenge the number: \n\t\t\t1.Assending\n\t\t\t2.Desending");
    scanf("%d", &choice);
    if (choice == 1)
    {
        assesnding(array);
    }
    else if (choice == 2)
    {
        descending(array);
    }
    else
    {
        printf("Invalid choice");
    }
    return 0;
}