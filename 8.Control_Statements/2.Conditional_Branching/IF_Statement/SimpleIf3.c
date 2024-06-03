// Print the number 1.. to 10 without using loop

#include<stdio.h>
void main()
{
    int n=1;
    
    num :
    if(n<=10)
    {
        printf("%d\n",n);
        n++;

        goto num;
    }
}