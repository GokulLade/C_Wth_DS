/*Even or Odd


Write a program in C to check if a given number is even or odd using the function.

Test Data :

Input any number : 5

Expected Output :

The entered number is odd. 
*/

#include<stdio.h>

int checkEv(int n)
{
    if(n%2) return 0;
    else return 1;
}
void main()
{
    int n;
    printf("Enter the Number\n");
    scanf("%d",&n);

    if(checkEv(n)) puts(" The Entered Number is Even ");
    else puts(" The Entered Number is Odd ");
}