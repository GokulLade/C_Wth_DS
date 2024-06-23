#include<stdio.h>
void main()
{
    int i,j,ni,nj;

    printf("Enter the rows and columns\n");
    scanf("%d%d",&ni,&nj);

    for(i=1;i<=ni;i++)
    {
        for(j=1;j<=nj;j++)
        {
            printf("%2c ",(64+j));
        }
        printf("\n");
    }
}