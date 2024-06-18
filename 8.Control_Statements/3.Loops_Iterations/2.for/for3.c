// Harmonic series: n=5 ==> 1+1/1+1/2+1/3+1/4+1/5= 3.28

#include<stdio.h>
void main()
{
    int n,i;
    float s=1;

    printf("Enter the number\n");
    scanf("%d",&n);

    printf("1+");
    for(i=1;i<n;i++)
    {
        printf("%d+1/",i,s+=1.0/i);
    }
    if(i==n)printf("%d",i,s+=1.0/i);

    printf(" = %.2f",s);
}