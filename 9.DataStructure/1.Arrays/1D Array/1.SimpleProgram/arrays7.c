// Finding max, min array elements or unsorted array:

// Finding nth occurrence of array element:

#include <stdio.h>
void main()
{
    int a[100], n, sum = 0, i,max,min;
    float avg;

    printf("Enter the array Size\n");
    scanf("%d", &n);

    printf("Enter the array Element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max=min=a[0];

    for(i=0;i<n;i++)
    {
        if(max<a[i])max=a[i];
        if(min>a[i])min=a[i];
    }
    printf("Max=%d ,Min=%d",max,min);
}