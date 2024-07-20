/*Write a program in C to find the square of any number using the function.

Test Data :

Input any number for square : 20

Expected Output :


The square of 20 is : 400.00
*/
#include<stdio.h>

float numSqrt(float n)
{
    return n*n;
} 
void main()
{
    float n;
    printf("Enter the Number\n");
    scanf("%f",&n);

    float res =numSqrt(n);

    printf(" The square of %.0f is : %.2f",n,res);
}