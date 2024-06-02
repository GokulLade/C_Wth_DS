
//Q1.Write a logic to swap two number without using third variable.

#include<stdio.h>
void main()
{
    int a=20,b=10;

    printf("Before Swapping a=%d b=%d\n",a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("After Swapping a=%d b=%d",a,b);
}