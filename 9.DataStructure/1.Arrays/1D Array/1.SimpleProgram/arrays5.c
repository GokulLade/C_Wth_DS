// Reading and printing of array elements:

#include<stdio.h>
void main()
{
    int a[100],n,i;

    printf("Enter the array size\n");
    scanf("%d",&n);

    if(n<1 || n>100) printf("Enter number only 1 to 100\n");

    else
    {
        printf("Enter the array Element\n");
        for(i=0;i<n;i++) scanf("%d",&a[i]);

        printf("Array Element are : ");
        for(i=0;i<n;i++) printf("%4d",a[i]);

    }
}