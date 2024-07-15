/*Write a c program for the following pattern


   1 2 3 4 5

   0 3 4 5 6

   0 0 5 6 7

   0 0 0 7 8

   0 0 0 0 9
*/

#include<stdio.h>
void main()
{
    int i,j,a=1;

    for(i=1;i<=5;i++)
    {
        a=i;
        for(j=1;j<=5;j++,a++)
        {
            if(j<i) printf("0 ");
            else printf("%d ",a);
        }
        printf("\n");
    }
}