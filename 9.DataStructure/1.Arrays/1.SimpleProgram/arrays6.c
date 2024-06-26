// Read n elements into array and find the elements sum and avg.

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
        sum += a[i];
    }
    avg = sum / n;
    printf("Sum=%d ,Avg=%.2f", sum, avg);
}