// Finding cell position, value and address:

#include<stdio.h>
void main()
{
    int a[2][3]={1,2,3,4,5,6};

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("a[%d][%d] value=%d value=%d \n",i,j,a[i][j],&a[i][j]);
        }
    }
}