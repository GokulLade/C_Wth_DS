// Direct initialization of array elements:

#include<stdio.h>
void main()
{
    int a[3][3]={{2,4,6},{8,10,12},{14,16,18}};
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
}