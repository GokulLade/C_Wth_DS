#include<stdio.h>
void main()
{
    int arr[100],i,c=0,j,n;

    printf("Enter The Size Array Element\n");
    scanf("%d",&n);

    printf("Enter The Array Element\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    printf("Output : ");
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=arr[i];j>0;j--)
        {
            if(arr[i]%j==0) c++;
        }

        if(c==2) printf("%d ",arr[i]);
    }

}