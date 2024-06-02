/*  Address operators:-
    1. & - address of the variable
    2. * - pointer [ stores address of another variable ]
*/

#include<stdio.h>
void main()
{
    int a=20,b=30;
    printf("The value of a=%d The Value of b=%d\n",a,b);

    printf("The Address of a=%u The Address of b=%u\n",&a,&b);

    int *p,*q;
    *p=&a;
    *q=&b;
    printf("The Address of a=%u The Address of b=%u\n",p,q);


}