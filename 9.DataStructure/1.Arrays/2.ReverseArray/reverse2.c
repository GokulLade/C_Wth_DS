// Read n elements into array and arrange array elements in reverse order
// 2)Permanent:

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

    int temp;
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    printf("Array Element are :");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}