#include<stdio.h>
void main()
{
    int i,j,ni,s;

    printf("Enter the rows and columns\n");
    scanf("%d",&ni);

    for(i=1;i<=ni;i++)
    {
        for(s=1;s<=ni-i;s++)printf(" ");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}