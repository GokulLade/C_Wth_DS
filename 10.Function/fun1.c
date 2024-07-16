/*Write a C program to find the biggest number between three number using the function.

Test Data :

Input three positive number : 13 31 19

Expected Output :

The biggest number is 31.
*/

#include <stdio.h>

int bigNum(int n1, int n2, int n3)
{
    if(n1>n2 && n1>n3) return n1;
    else if(n2>n1 && n2>n3) return n2;
    else return n3;
}
void main()
{
    int n1, n2, n3;
    printf("Input three positive number : \n");
    scanf("%d%d%d", &n1, &n2, &n3);

    int big=bigNum(n1, n2, n3);

    printf("The biggest number is %d.\n",big);
}