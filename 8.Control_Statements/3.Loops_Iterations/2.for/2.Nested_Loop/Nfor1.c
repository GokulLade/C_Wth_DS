// Print n table

#include<stdio.h>
#include<direct.h>
void main()
{
    int n,i,t;

    printf("Enter the Number\n");
    scanf("%d",&n);

    for(t=1;t<=n;t++)
    {
        for(i=1;i<=10;i++)
        {
            printf("%4d",(t*i));
        }
        printf("\n");
    }
}