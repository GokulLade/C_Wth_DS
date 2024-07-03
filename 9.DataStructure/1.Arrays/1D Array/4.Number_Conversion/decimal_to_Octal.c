// Decimal to Octal conversion

#include<stdio.h>
void main()
{
    int a[16]={0},i,j=0,n;

    printf("Enter the Decimal Number\n");
    scanf("%d",&n);

    for(i=0;n!=0;i++,n=n/8) a[i]=n%8;

    printf("Binary Code : ");
    for(i=15;i>=0;i--,j++) 
    {
        if(j%4==0)printf(" ");
        printf("%2d",a[i]);
    }

}