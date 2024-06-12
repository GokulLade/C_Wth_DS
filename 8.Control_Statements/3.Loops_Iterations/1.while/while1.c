// Printing 1..n numbers.

#include<stdio.h>
void main()
{
    int i=1,n;

    printf("Enter the number\n");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%4d",i);
        i++;
  }
}