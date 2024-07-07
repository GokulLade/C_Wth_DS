// Transpose of n*n matrix:

#include <stdio.h>
void main()
{
    int i, j, nr, nc;

    printf("Enter no of rows \n");
    scanf("%d", &nr);
    printf("Enter no of columns \n");
    scanf("%d", &nc);

    int a[nr][nc];

    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < nc; i++)
    {
        for (j = 0; j < nr; j++)
        {
            printf("%4d", a[j][i]);
        }
        printf("\n");
    }
}