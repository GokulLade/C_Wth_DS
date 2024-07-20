/*Write a program in C to check whether a number is a prime number or not by using the function.

Test Data :

Input a positive number : 5

Expected Output :

The number 5 is a prime number.
*/

#include<stdio.h>

int checkPrime(int n)
{
    int i,c;
    for(c=0,i=n;i>0;i--)
    {
        if(n%i==0)c++;
    }
    if(c==2) return 1;
    else return 0;
}
void main()
{
    int n;
    puts("Enter the Number");
    scanf("%d",&n);

    if(checkPrime(n)) printf("The number %d is a prime number\n",n);
    else printf("The %d is not a Prime Number\n",n);
}