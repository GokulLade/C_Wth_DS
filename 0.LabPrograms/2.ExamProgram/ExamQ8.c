/*Write a program in C to find out the duplicate element in a given array.
Testcase:
--------  
The given array is: 
arr[]={2,3,3,5,3,4,1,7,2} 
The duplicate numbers are : 2,3
*/
#include<stdio.h>
void main()
{
    int n,i,j,c=0;

    puts("Enter the Array Size");
    scanf("%d",&n);

    int arr[n];

    puts("Enter the Array Element");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    //Finding the Maximum number
    int max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i]) max=arr[i];
    }
    max+=1;

    //Finding the duplicate numbers
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
        if(c!=0 && arr[i]!=max) printf("%d ",arr[i]);
    }
}