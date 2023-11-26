// WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered numbers are even or odd:\n");
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d is even\n",arr[i]);
        }
        else
        {
            printf("%d is odd\n",arr[i]);
        }
    }
    return 0;
}