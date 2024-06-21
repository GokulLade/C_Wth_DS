#include <stdio.h>
void main()
{
    int r, c, nr;

    printf("Enter the number of rows\n");
    scanf("%d", &nr);

    for (r = 1; r <= nr; r++)
    {
        for (c = 1; c <= nr; c++)
        {
            if (c == r)
                printf(" 1");
            else if (c < r)
                printf(" 2");
            else
                printf(" 0");
        }
        printf("\n");
    }
}