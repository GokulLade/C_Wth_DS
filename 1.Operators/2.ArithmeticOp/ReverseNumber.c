/*Write a c program to print a 3 digit no in reverse order
without using loops*/

#include<stdio.h>
void main()
{
    int a=123;

    printf("The Reverse Number is = %d ",(a%10));

    a=a/10;

    printf("%d %d",(a%10),(a/10));
}