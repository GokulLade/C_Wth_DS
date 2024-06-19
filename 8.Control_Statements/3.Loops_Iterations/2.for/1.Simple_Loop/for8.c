//Perfect no:ex: i) 6 factors sum is 1+2+3=6 ii) 28 factors sum is 1+2+4+7+14=28

#include<stdio.h>
void main()
{
    int n,i,sum=0;

    printf("Enter the number\n");
    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(n%i==0) sum+=i;
    }
    (n==sum)?printf("Perfect Number"):printf("Not perfect Number");
    

}