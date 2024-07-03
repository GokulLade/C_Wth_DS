// Read n elements into array and arrange array elements in reverse order
// 3)Without using third variable:

#include <stdio.h>
void main()
{
    int a[100], n, sum = 0, i;
    float avg;

    printf("Enter the array Size\n");
    scanf("%d", &n);

    printf("Enter the array Element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        a[i] = a[i] + a[n - i - 1];
        a[n - i - 1] = a[i] - a[n - i - 1];
        a[i] = a[i] - a[n - i - 1];
    }

    printf("Array Element are :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}