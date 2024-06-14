// Reverse no:

#include<stdio.h>
void main()
{
    int n,r;

    printf("Enter the Number\n");
    scanf("%d",&n);

    do{
        r=n%10;

        printf("%d",r);

        n/=10;
    }while(n!=0);
    
}