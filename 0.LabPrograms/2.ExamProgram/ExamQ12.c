/*Program 3 ( Point 10 )

Write a program in C to find sum of rows and columns of a Matrix.

Input the size of the square matrix : 2
Input elements in the first matrix :
element - [0],[0] : 5
element - [0],[1] : 6
element - [1],[0] : 7
element - [1],[1] : 8
Expected Output :
The First matrix is :
The matrix is :
5 6
7 8
The sum or rows and columns of the matrix is :
5 6 11
7 8 15
12 14
*/
#include <stdio.h>
void main()
{
    int n, i, j;

    puts("Enter the Array Size");
    scanf("%d", &n);

    int arr[n][n];

    printf("Enter the %d Element for Array\n", n * n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }

    // copy the Array Element in to another array Element
    // And Sum of rows and Columns
    int res[n + 1][n + 1];

    for (i = 0; i < n; i++)
    {
        int rsum = 0;
        int csum = 0;
        for (j = 0; j < n; j++)
        {
            res[i][j] = arr[i][j];
            rsum += arr[i][j];
            csum += arr[j][i];
        }
        res[i][j] = rsum;
        res[j][i] = csum;
    }

    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i!=n || j!=n) printf("%4d ",res[i][j]);
        }
        printf("\n");
    }
}