// Finding the no of even, odd, zero digits in given no.

#include<stdio.h>
void main()
{
    int n,e=0,o=0,z=0,r;

    printf("Enter the number\n");
    scanf("%d",&n);

    do{
        r=n%10;

        if(r==0) z++;
        if(r%2==0) e++;
        if(r%2!=0) o++;

        n/=10;
    }while(n!=0);

    printf("Even No = %d\n Odd Number = %d \n Zero = %d",e,o,z);
}