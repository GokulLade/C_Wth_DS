// Finding array cell no, address and value:

#include<stdio.h>
void main()
{
    int a[4]={11,22,33,44},i;

    for(i=0;i<4;i++)
    {
        printf("a[%d] cells address is %u , Value is %d\n",i,&a[i],a[i]);
    }
}