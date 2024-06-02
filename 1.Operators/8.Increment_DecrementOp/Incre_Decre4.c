#include<stdio.h>
void main()
{
    int a=2,b;
    a=a++ + ++a;

    b=++a * --a + a++ / ++a;


    printf("%d %d",a,b);
}