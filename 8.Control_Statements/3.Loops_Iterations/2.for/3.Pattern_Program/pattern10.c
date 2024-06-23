#include<stdio.h>
void main()
{
    int i,j,ni;

    printf("Enter the number of rows\n");
    scanf("%d",&ni);

    for(i=1;i<=ni;i++)
    {
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)printf("$");
            else printf("*");

        }
        printf("\n");
    }
}