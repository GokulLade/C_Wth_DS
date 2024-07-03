// Skipping the element:

#include <stdio.h>
void main()
{
    int a[100], i, j, n, elm;

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

    // printing array Element
    for (i = 0; i < n; i++)
    {
        if (a[i] != elm)
            printf("%4d", a[i]);
    }
}