// Finding Armstrong no or not?
#include<stdio.h>
#include<math.h>
void main()
{
    int n,c=0,sum=0,r;
    printf("Enter the number\n");
    scanf("%d",&n);

    int m=n;

    while(m!=0)
    {
        c++;
        m/=10;
    }
    m=n;

    while(m!=0)
    {
        r=n%10;
        sum+=pow(r,c);
        n/=10;
    }
    (n==sum)? printf("Armstrong Number"):printf("Not Armstrong number");
}