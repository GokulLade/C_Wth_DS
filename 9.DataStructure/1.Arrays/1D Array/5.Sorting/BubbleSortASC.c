#include <stdio.h>
void main()
{
    int a[100], i, j, n, temp = 0;

    // Size of Array Element
    printf("Enter the Array Size\n");
    scanf("%d", &n);

    // Array Element
    printf("Enter the Array Element\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // sorting
    for (i = 0; i <= n - 2; i++)
    {
        for (j = 0; j <= n - i - 2; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // printing array Element
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);
}