// WAP to print 2D matrix using function
#include <stdio.h>
// Function to print 2D matrix
void printMatrix( int mat[3][3])
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        printf("%d ", mat[i][j]);
        
        printf("\n");
    }
}
// Driver code
int main()
{
    int mat[3][3] ;
    int i, j;
    // Initializing the 2D matrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    // Call UDF to Printing the 2D matrix
    printMatrix(mat);
    return 0;
}