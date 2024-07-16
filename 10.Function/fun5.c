/*Write a program in C to swap two numbers using a function.

Test Data :

Input 1st number : 2

Input 2nd number : 4

Expected Output :


Before swapping: n1 = 2, n2 = 4                          

After swapping: n1 = 4, n2 = 2 */

#include<stdio.h>

void swap(int n1,int n2)
{
    printf("Before Swapping: n1= %d, n2= %d\n",n1,n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("After Swapping: n1= %d, n2= %d\n",n1,n2);

}
void main()
{
    int n1=0,n2=0;

    printf("Enter the Number to Swap : \n");
    scanf("%d%d",&n1,&n2);

    swap(n1,n2);
}