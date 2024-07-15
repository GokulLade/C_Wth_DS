#include<stdio.h>
void main()
{
    int n,i,j,temp=0;

    puts("Enter the size of Array");
    scanf("%d",&n);
    int arr[n];

    puts("Enter the Element for Array");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            printf("The Second Largest Element in the array is : %d ",arr[i+1]);
            break;
        }

    }
}