/*Program 4 ( Point 15 )

Write a c program to print sum of prime elements of array and print the sum.

input:2,3,4,5,7,8,9,10,11

output:sum is =28*/

#include<stdio.h>
void main()
{
    int n,i,j,sum=0,c=0;

    printf("Enter the size of Array\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d Element for Array \n",n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
        for(c=0,j=arr[i];j>0;j--)
        {
            if(arr[i]%j==0) c++;
        }
        if(c==2)sum+=arr[i];
    }
    printf("Sum is =%d ",sum);
}
