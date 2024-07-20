// Finding max number using pointer
#include <stdio.h>
void main()
{
    int num1 = 0, num2 = 0, *p, *q;

    puts("Enter Two number to check Max number");
    scanf("%d%d", &num1, &num2);

    p = &num1;
    q = &num2;

    printf((*p > *q)? "First Number is Max " : (*q>*p)? "Second Number is Max" : "Both are equal");
}