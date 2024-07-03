#include <stdio.h>
void main()
{
    int a[100], i, j, n, elm, pos;

    // Size of Array
    printf("Enter the Array Size\n");
    scanf("%d", &n);

    // Array Element
    printf("Enter the Array Element\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Element and position to Insert
    printf("Enter the Element and Position to Insert Array Element\n");
    scanf("%d%d", &elm, &pos);

    // Inserting array Element
    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[i] = elm;

    // printing array Element
    for (i = 0; i <=n; i++)
        printf("%4d", a[i]);
}