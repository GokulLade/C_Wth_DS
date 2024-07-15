#include <stdio.h>
void main()
{
    int n = 15;
    int i = 0, a = 1, j = 0, c = 1;

    for (i = 1; i <= 5; i++)
    {
        for (j = i; j <= i; j++)
        {
            printf("%d ", j + i - 1);
        }
        printf("\n");
    }
}