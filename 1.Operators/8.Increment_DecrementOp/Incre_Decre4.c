#include<stdio.h>
void main()
{
    int a=2;
    a=a++ + ++a;
    printf("%d\n",a);

    int b=++a * --a + a++ / ++a; 


    printf("%d \n %d",a,b);
}