// Finding factorial using pointer:
#include<stdio.h>
void main()
{
    int num=0,*p;
    long f=1;

    puts("Enter the Number");
    scanf("%d",&num);

    p=&num;

    while(*p>0)
    {
        f=f* *p;
        --*p; //(p*)--
    }

    printf("Factorial is:  %ld",f);
}