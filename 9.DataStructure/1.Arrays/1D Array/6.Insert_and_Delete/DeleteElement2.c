// Deleting the element:

#include <stdio.h>
void main()
{
    int a[100], i, j, n, elm, f = 0;

    // Size of Array
    printf("Enter the Array Size\n");
    scanf("%d", &n);

    // Array Element
    printf("Enter the Array Element\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Delete element
    printf("Enter the Element you want to delete");
    scanf("%d", &elm);

    // Deleting Element
    for (i = 0; i < n; i++)
    {
        if (a[i] == elm)
        {
            for (n--, f = 1, j = i; j < n; j++)
                a[j] = a[j + 1];

            i--;
        }
    }

    if (f == 0)
        printf("%d Not found", elm);
    else
    {
        for (i = 0; i < n; i++)
            printf("%4d", a[i]);
    }
}