/*write a c program to print all the unique elements in the given array.

Intput: arr[]={2,3,3,5,3,4,1,7,7,2}
Output:  5,4,1*/

#include<stdio.h>
void main()
{
    int n,i,j,c=0;

    puts("Enter Array Size");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the Array %d Element",n);
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    //Finding the Maximum number
    int max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i]) max=arr[i];
    }
    max+=1;

    //Finding unique
    for(i=0;i<n;i++)
    {
        
        for(c=0,j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                arr[j]=max;
            } 
        }
        if(c==0 && arr[i]!=max) printf("%d ",arr[i]);
    }
}