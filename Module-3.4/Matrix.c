// WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include <stdio.h>

// Function to perform addition of two matrices
void add(int a[3][3], int b[3][3])
{
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of two matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}
// Function to perform subtraction of two matrices
void subtract(int a[3][3], int b[3][3])
{
    int diff[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            diff[i][j] = a[i][j] + b[i][j];
        }
    }
}
// Function to perform multiplication of two matrices
void multiply(int a[3][3], int b[3][3])
{
    int multiply[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            int sum = 0;
            for (int j = 0; j < 3; j++)
            {
                sum += a[i][j] * b[j][k];
            }
            multiply[i][k] = sum;
        }
    }

    printf("Multiplication of two matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", multiply[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[3][3], b[3][3];
    printf("Enter elements of matrix a:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of matrix b:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    add(a, b);
    subtract(a, b);
    multiply(a, b);
    return 0;
}