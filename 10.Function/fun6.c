/*Write a program in C to add n natural numbers using a function.

Test Data :

Input n value : 10

Expected Output :

The sum of 10 natural numbers is 55*/

#include<stdio.h>

int nSum(int n)
{
    int sum=n*(n+1)/2;
    return sum;
}
void main()
{
    int n;
    printf("Enter the Value\n");
    scanf("%d",&n);

    int sn=nSum(n);

    printf("The sum of %d natural number is %d ",n,sn);
}