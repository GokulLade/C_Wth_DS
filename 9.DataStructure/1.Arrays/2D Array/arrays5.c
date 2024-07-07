// Direct initialization of array elements:

#include<stdio.h>
void main()
{
    int i,j,nr,nc;

    printf("Enter no of rows \n"); scanf("%d",&nr);
    printf("Enter no of columns \n"); scanf("%d",&nc);

    int a[nr][nc];

    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}