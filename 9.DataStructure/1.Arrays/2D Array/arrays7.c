/*Finding trace of n*n matrix:
Trace means sum of principle diagonal elements.*/

#include <stdio.h>
void main()
{
    int nr, nc, i, j, sum = 0;

    printf("Enter the no of rows\n");
    scanf("%d", &nr);

    printf("Enter the number of columns\n");
    scanf("%d", &nc);

    int arr[nr][nc];

    printf("Enter the Array Element\n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
            scanf("%d", &arr[i][j]);
    }
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            if (i == j)
                sum += arr[i][j];
        }
    }

    printf("Sum=%d ", sum);
}