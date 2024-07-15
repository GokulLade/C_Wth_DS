#include <stdio.h>
void main()
{
    int n,i,j,sum=0,sum1=0;
    printf("Input element in the first matrix\n");
    scanf("%d",&n);
    
    int arr[n][n];
    printf("Enter the %d Array Element\n",n*n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(sum=0,j=0;j<n;j++)
        {
            sum+=arr[i][j];
            sum1+=arr[i][0];
            printf("%2d",arr[i][j])
            
            
            5
            55; 
        }
        printf(" %2d",sum);
        printf("\n");
    }
    
}