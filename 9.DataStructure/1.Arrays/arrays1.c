// Finding array size

#include<stdio.h>
void main()
{
    int a[4]={10,20,30,40};

    printf("%d bytes\n",sizeof(a));
    printf("%d cells\n",sizeof(a)/sizeof(int));
    printf("%d cells\n",sizeof(a)/sizeof(a[0]));
}