#include<stdio.h>
void main()
{
    int r,c,nr,a;

    printf("Enter the number of rows\n");
    scanf("%d",&nr);

    for(r=1;r<=nr;r++)
    {
        for(a=r,c=1;c<=nr;c++) printf("%d",a++);

        printf("\n");
    }
}