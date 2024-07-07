// Finding array address:

#include<stdio.h>
void main()
{
    int a[2][2]={{1,2},{3,4}};

    printf("a Address is %u\n",&a);
    printf("a[0] Address is %u\n",&a[0]);
    printf("a[1] Address is %u\n",&a[1]);

}