// Printing 1..n no’s in reverse order

#include<stdio.h>
void main()
{
    int i=1,n;

    printf("Enter the value of n\n");
    scanf("%d",&n);

    while(n>=i)
    {
        printf("%4d",n);
        n--;
    }
}