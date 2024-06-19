// Finding step no

#include<stdio.h>
void main()
{
    int n,n1,r;

    printf("Enter the number\n");
    scanf("%d",&n);

    n1=n%10;
    n/=10;
    for(int i=1;i<=n;i++)
    {
        r=n%10;
        if(r-n1==1 || n1-r==1) n1=r;
        else
        {
            printf("Not Step Number\n"); 
            return;
        } 
        n/=10;
    }
    printf("The number is step number");
}