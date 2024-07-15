// Finding Armstrong Number
#include<stdio.h>
void main()
{
    int n,i,r=0,c=0,sum=0;

    puts("Enter the Number");
    scanf("%d",&n);

    int temp=n;

    //Finding digit
    while(temp)
    {
        c++;
        r=temp%10;
        temp/=10;
    }
    temp=n;
    while(n)
    {
       r=n%10;
       int p=1;
       for(i=0;i<c;i++) p*=r;
       sum+=p;
       n/=10;
    }
    printf(temp==sum?"Armstrong Number":"Not Armstrong Number");
}