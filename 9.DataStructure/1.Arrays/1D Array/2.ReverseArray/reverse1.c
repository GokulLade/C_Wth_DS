// Read n elements into array and arrange array elements in reverse order
// 1)Temporarily:

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

    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}