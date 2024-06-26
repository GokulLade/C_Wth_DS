// Linear search:

#include <stdio.h>
void main()
{
    int a[100], n, sum = 0, i,elm,c=1;
    float avg;

    printf("Enter the array Size\n");
    scanf("%d", &n);

    printf("Enter the array Element\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the  Element to search\n");
    scanf("%d",&elm);

    for (i = 0; i<n; i++)
    {
        if(a[i]==elm) printf("%d Element found at %d location \n",a[i],i,c=0);
    }
    if(c==1)printf("Element Not found\n");
}