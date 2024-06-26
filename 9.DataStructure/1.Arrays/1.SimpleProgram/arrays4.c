// Printing array Element

#include<stdio.h>
void main()
{
    int a[4]={11,22,33,44},i;

    int size=sizeof(a)/sizeof(int); //finding array size

    for(i=0;i<size;i++) printf("%4d",a[i]);
}
