// Printing below series: 1-2+3-4+5=3

#include<stdio.h>
void main()
{
    int n,i;
    float s=0;

    printf("Enter the number\n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(i%2==0)printf("%d+",i,s-=i);
        else printf("%d-",i,s+=i);
    }
    if(i==n)printf("%d",i,s+=i);

    printf(" = %.2f",s);
}