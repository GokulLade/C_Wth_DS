#include<stdio.h>
void main()
{
    int i,j,ni;

    printf("Enter the rows\n");
    scanf("%d",&ni);

    for(i=1;i<=ni;i++)
    {
        for(j=1;j<=ni-i+1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}