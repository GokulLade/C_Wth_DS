//Printing below series:if N=10 1 2 3 9 4 5 6 18 7 8 9 27 10

#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        printf("%4d",i);
        if(i%3==0) printf("%4d",i*3);
    }
}