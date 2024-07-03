// Deleting the element:

#include <stdio.h>
void main()
{
    int a[100], i, j, n, k;

    // Size of Array
    printf("Enter the Array Size\n");
    scanf("%d", &n);

    // Array Element
    printf("Enter the Array Element\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Deleting Element
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (n--, k = j; k < n; k++)
                    a[k] = a[k + 1];
                j--;
            }
        }
    }
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);
}