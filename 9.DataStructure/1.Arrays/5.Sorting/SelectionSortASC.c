// Sorting: Arranging data in a order

#include <stdio.h>
void main()
{
    int a[100], i, j, n, temp;

start:
    printf("Enter the array Size\n");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Please Enter Number Between 1 to 100\n");
        goto start;
    }

    printf("Enter the Array Element\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Array Elements Are : ");
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);

    printf("\nAscending Order sorting Array Element are : ");
    for (i = 0; i <= n - 2; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
        printf("%4d", a[i]);
}