// Fibonacci series: ex: 5 Fibonacci series 0 1 1 2 3

#include<stdio.h>
void main()
{
    int n,f1=0,f2=1,f3,i;

    printf("Enter the Number\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%4d",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
    }
}

