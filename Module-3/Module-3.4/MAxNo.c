// Write a program to find out the max number from given array using function
#include <stdio.h>
int max_number(int arr[20], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Maximum Number is %d", max_number(arr, 10));
    return 0;
}