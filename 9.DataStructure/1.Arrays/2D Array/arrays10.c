/*Matrix multiplication:*/
#include <stdio.h>
void main()
{
    int r, c, nr, nc, k, s = 0;

    printf("Enter the number of rows and columns\n");
    scanf("%d%d", &nr, &nc);

    int arr1[nr][nc];
    int arr2[nr][nc];

    printf("Enter the %d Element for first Array", nr * nc);
    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
            scanf("%d", &arr1[r][c]);
    }

    printf("Enter the %d Element for second Array", nr * nc);
    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
            scanf("%d", &arr2[r][c]);
    }

    puts("Result elements are ");
    for (r = 0; r < nr; r++)
    {
        for (c = 0; c < nc; c++)
        {
            for (s = k = 0; k < nc; k++)
                s += arr1[r][k] * arr2[k][c];

            printf("%4d", s);
        }
        printf("\n");
    }
}