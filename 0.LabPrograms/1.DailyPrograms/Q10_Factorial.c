// Finding Factorial Number
#include<stdio.h>
void main()
{
    int n,f=1,i;
    puts("Enter number to Check the Factorial");
    scanf("%d",&n);

    for(i=n;i>0;i--) f*=i;

    printf("%d ",f);
}