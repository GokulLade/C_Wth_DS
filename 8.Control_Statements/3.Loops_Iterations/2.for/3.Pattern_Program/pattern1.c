
#include <stdio.h>
void main()
{
    int nr, nc, r, c; // nr==>Number of rows r==>rows nc==>Number of columns c==>columns

    printf("Enter the number of rows and columns\n");
    scanf("%d%d", &nr, &nc);

    for (r = 1; r <= nr; r++)
    {
        for (c = 1; c <= nc; c++)
        {
            printf("* ");
        }
        printf("\n");
    }
}