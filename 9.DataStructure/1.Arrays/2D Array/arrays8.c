/*Read elements into n*n matrix and find the no of even /
odd / zero elements row wise:*/
#include<stdio.h>
void main()
{
    int nr, nc, i, j, sum = 0,e,o,z;

    printf("Enter the no of rows\n");
    scanf("%d", &nr);

    printf("Enter the number of columns\n");
    scanf("%d", &nc);

    int arr[nr][nc];

    printf("Enter the Array Element\n");
    for (i = 0; i < nr; i++)
    {
        for (j = 0; j < nc; j++)
            scanf("%d", &arr[i][j]);
    }
    for(i=0;i<nr;i++)
    {
        e=o=z=0;
        for(j=0;j<nc;j++)
        {
            if(arr[i][j]==0)z++;
            else if(arr[i][j]%2==0)e++;
            else if(arr[i][j]!=0)o++;
        }
        printf("Row-%d ",i+1);
        printf("\nEven=%d\nOdd=%d\nZero=%d\n\n",e,o,z);
    }
}