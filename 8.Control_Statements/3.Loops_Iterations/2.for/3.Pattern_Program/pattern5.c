#include<stdio.h>
void main()
{
    int i,j,ni,nj,c=1;

    printf("Enter the rows and columns\n");
    scanf("%d%d",&ni,&nj);

    for(i=1;i<=ni;i++)
    {
        for(j=1;j<=nj;j++)
        {
            printf("%d ",c++);
        }
        printf("\n");
    }
}