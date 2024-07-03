// Decimal to binary conversion

#include<stdio.h>
void main()
{
    int a[16]={0},i,j=0,n;

    printf("Enter the Decimal Number\n");
    scanf("%d",&n);

    for(i=0;n!=0;i++,n=n/2) a[i]=n%2;

    printf("Binary Code : ");
    for(i=15;i>=0;i--,j++) 
    {
        if(j%4==0)printf(" ");
        printf("%2d",a[i]);
    }

}