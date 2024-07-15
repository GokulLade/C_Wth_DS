/*Write a logic for the following pattern in c?

    0

    1 0

    0 1 0

    1 0 1 0

    0 1 0 1 0
*/
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",(i+j)%2);
        }
        printf("\n");
    }
}