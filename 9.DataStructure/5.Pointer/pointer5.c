/*Finding pointer size:
Always pointer variable stores address and
address is unsigned int. due to this any type of
pointer it takes 2 / 4 / 8 bytes in 16 / 32 / 64 bit
compilers.*/

#include<stdio.h>
void main()
{
    int *p;
    float *q;
    char *c;

    printf("%d\n",sizeof(p));
    printf("%d\n",sizeof(q));
    printf("%d\n",sizeof(c));
}